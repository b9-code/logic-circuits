/* This is an implimetaion of a half adder in C
 *
 */


/*
    Copyright (C) 2016  b9-code

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include<stdio.h>

#define and &&
#define or ||
#define not !
#define xor ^

// instead of this, you can simply use
// #include "template.c"
// if you are using the template, and both are in the same location

int main(void)
{
   int x,y; // These are the inputs
   int sum,carry; // These are the optputs of the adder

   // In this program, I would lke to print the truth table of the half adder.
   // You can simulate the input of the adder by using the scanf(); statement
      printf("  X     Y   |   sum   carry \n\n");
      for(x=0;x<=1;x++)
      {
      for(y=0;y<=1;y++)
      {
         sum = x xor y; // or a^b; will do
         carry = x and y;
         printf(" %d    %d  |   %d    %d \n\n",x,y,sum,carry);
         //printf("-----------------------\n");
      }
      }
   return 0;
}
