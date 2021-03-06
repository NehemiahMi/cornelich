/*
Copyright 2015-2016 Joanna Hulboj <j@hulboj.org>
Copyright 2016 Milosz Hulboj <m@hulboj.org>

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "buffer_view.h"

#include <iostream>

namespace cornelich
{
namespace util
{

std::ostream & operator<<(std::ostream & os, const buffer_view & b)
{
    os << "Buffer {"
          "ptr=" << b.data() << ", "
       << "index=" << b.index() << ", "
       << "position=" << b.position() << ", "
       << "limit=" << b.limit() << '}';
    return os;
}

}
}
