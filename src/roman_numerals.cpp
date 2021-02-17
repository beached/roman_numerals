// The MIT License (MIT)
//
// Copyright (c) 2014-2015 Darrell Wright
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files( the "Software" ), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <daw/daw_string.h>

#include <iostream>

auto to_roman( size_t number ) {
	return daw::String( number, 'I' )
		.search_replace( "IIIII", "V" )
		.search_replace( "IIII", "IV" )
		.search_replace( "VV", "X" )
		.search_replace( "VIV", "X" )
		.search_replace( "XXXXX", "L" )
		.search_replace( "XXXX", "XL" )
		.search_replace( "LL", "C" )
		.search_replace( "LXL", "LC" )
		.search_replace( "CCCCC", "D" )
		.search_replace( "CCCC", "CD" )
		.search_replace( "DD", "M" )
		.search_replace( "DCD", "CM" );
}

int main( int, char** ) {
	std::cout << "Roman numeral for 42: " << to_roman( 42 ) << "\n";
	std::cout << "Roman numeral for 3016: " << to_roman( 3016 ) << "\n";
	std::cout << "Roman numeral for 12342343: " << to_roman( 123423 ) << "\n";
	std::cout << "Roman numeral for 215: " << to_roman( 215 ) << "\n";
	return EXIT_SUCCESS;
}

