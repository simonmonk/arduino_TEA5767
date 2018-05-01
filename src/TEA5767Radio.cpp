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

#include <Arduino.h>
#include <TEA5767Radio.h>

TEA5767Radio::TEA5767Radio(int address)
{
  _address = address;
}

TEA5767Radio::TEA5767Radio()
{
  _address = 0x60;
}


void TEA5767Radio::setFrequency(float frequency)
{
  	unsigned int frequencyB = 4 * (frequency * 1000000 + 225000) / 32768; 
	byte frequencyH = frequencyB >> 8;
	byte frequencyL = frequencyB & 0XFF;
	Wire.beginTransmission(_address); 
	Wire.write(frequencyH);
	Wire.write(frequencyL);
	Wire.write(0xB0);
	Wire.write(0x10);
	Wire.write(0x00);
	Wire.endTransmission();
	delay(100);  
}
