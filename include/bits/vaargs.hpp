/*
    <bits/vaargs.hpp> - common variadic argument operations
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

#if !defined(__chirk_froth__bits_vaargs_hpp) // bits/vaargs.hpp include guard
#define __chirk_froth__bits_vaargs_hpp

template<typename... Ts>
class n_vaargs_class;

template<>
class n_vaargs_class<> {
public:
	static constexpr int num = 0;
};

template<typename T, typename... Ts>
class n_vaargs_class {
	static constexpr int num = n_vaargs_class<Ts...>::num;
};


#endif // bits/vaargs.hpp include guard
