/*
TEA5767 I2C FM Radio Library

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

The latest version of this library can always be found at
http://arduiniana.org.

Simon Monk 2013
*/

#include <Wire.h>

#ifndef TEA5767Radio_h
#define TEA5767Radio_h


class TEA5767Radio
{
private:
	int _address;

public:
  TEA5767Radio();
  TEA5767Radio(int address);
  void setFrequency(float frequency);
  void setFrequency();
};


#endif