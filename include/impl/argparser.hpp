/*
    <impl/argparser.hpp> -*- C++ -*-
    Copyright (C) 2023  Chirk Project

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined(__chirk_froth__impl_argparser_hpp) // impl/argparser.hpp include guard
#define __chirk_froth__impl_argparser_hpp


#include <iostream>


namespace __froth_1367 {
    class arg;
    class argparser;
};


class __froth_1367::arg {
    using cls = __froth_1367::arg;
};


class __froth_1367::argparser {
    using cls = __froth_1367::argparser;
    using arg = __froth_1367::arg;
public:
    template<typename... Argtypes>
    argparser(Argtypes... args);
};

template<Argtypes...=__froth_1367::arg>
__froth_1367::argparser::argparser(Argtypes... args) {
    std::cout << sizeof...(args);
}

#endif // impl/argparser.hpp include guard