#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char col = 0; col < 12; col++) {
    unsigned short rowBits = font_8x12[c][col];

    for (char row = 0; row < 8; row++) {
      // unsigned short rowBits = font_8x12[c][col];
      unsigned short colMask = 1 << (9-row); 
      putchar( (rowBits & colMask) ? 'I' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}
