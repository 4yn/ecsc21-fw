#include "include/driver_framebuffer.h"
const uint8_t freesansmono9pt7bBitmaps[] = {
  0x00, 0xA8, 0x30, 0x66, 0x00, 0x46, 0x6A, 0xEA, 0x20, 0x07, 0x94, 0x39,
  0x60, 0xCA, 0x5E, 0x77, 0xC8, 0x4C, 0xE0, 0xE0, 0xAA, 0xA8, 0x95, 0x58,
  0x0D, 0x60, 0x04, 0x64, 0x00, 0x60, 0x70, 0xC0, 0x12, 0x24, 0x44, 0x88,
  0xE9, 0x99, 0x9E, 0x4C, 0x44, 0x46, 0xE1, 0x24, 0x8F, 0xE1, 0x21, 0x1E,
  0x66, 0xAA, 0x60, 0xE8, 0xE1, 0x1E, 0x78, 0xAD, 0x97, 0x71, 0x22, 0x20,
  0xE9, 0xAD, 0x9E, 0xE9, 0x97, 0x16, 0xC3, 0x40, 0x28, 0x16, 0x86, 0x00,
  0xF7, 0x86, 0x16, 0x00, 0x69, 0x10, 0x06, 0xE9, 0xFD, 0xB8, 0x60, 0x60,
  0xC5, 0x14, 0xA8, 0x00, 0xF2, 0x52, 0xF4, 0xBC, 0x69, 0x88, 0x8F, 0xF4,
  0x61, 0x18, 0xF8, 0xFA, 0x14, 0xE4, 0x3C, 0xFA, 0x14, 0xE4, 0x20, 0x64,
  0x21, 0x69, 0x78, 0x94, 0xA5, 0xE9, 0x48, 0xF4, 0x44, 0x46, 0x78, 0x84,
  0x29, 0x70, 0xE9, 0x46, 0x14, 0x51, 0x20, 0xC8, 0x88, 0x8F, 0xC7, 0x2D,
  0xAE, 0x88, 0x00, 0xCF, 0x2A, 0xAA, 0x98, 0x20, 0x69, 0x99, 0x9F, 0xF2,
  0x52, 0xE4, 0x20, 0x69, 0x99, 0x99, 0x60, 0xF1, 0x24, 0x9C, 0x49, 0x00,
  0x79, 0x87, 0x1F, 0xF4, 0x44, 0x46, 0xCE, 0x28, 0xA2, 0x89, 0xC0, 0xCE,
  0x24, 0x94, 0x30, 0x80, 0xCE, 0x2B, 0xAE, 0xD9, 0x20, 0x49, 0x43, 0x0C,
  0x52, 0x20, 0x99, 0x64, 0x46, 0xFA, 0x24, 0x8F, 0xFC, 0x88, 0x84, 0x42,
  0x21, 0x7E, 0x6A, 0xFC, 0x80, 0x77, 0x9F, 0x04, 0x3F, 0x14, 0xBC, 0xF8,
  0x8F, 0x00, 0xBD, 0x29, 0x70, 0xF9, 0xEF, 0x74, 0x64, 0x46, 0xF4, 0xA5,
  0xE1, 0x30, 0x41, 0x07, 0x92, 0x49, 0x20, 0x00, 0x44, 0x46, 0x00, 0x71,
  0x11, 0x16, 0x88, 0xAC, 0xA9, 0x44, 0x44, 0x46, 0xFA, 0xAA, 0x80, 0xF9,
  0x99, 0xF9, 0x9F, 0x7C, 0x53, 0x78, 0x70, 0xE4, 0xA5, 0xE1, 0x1C, 0x3C,
  0x86, 0xF4, 0x3F, 0x42, 0x18, 0x84, 0x3C, 0x4A, 0x52, 0xF0, 0x49, 0x45,
  0x0C, 0x02, 0xA7, 0x92, 0x96, 0x69, 0x8B, 0x64, 0x4C, 0xE2, 0x4F, 0xAA,
  0xA0, 0xFC, 0xA9, 0xA8, 0xF0 };

const GFXglyph freesansmono9pt7bGlyphs[] = {
  {     0,   1,   1,   6,    0,    0 },   // 0x20 ' '
  {     1,   2,   6,   6,    2,   -5 },   // 0x21 '!'
  {     3,   4,   3,   6,    1,   -5 },   // 0x22 '"'
  {     5,   4,   7,   6,    1,   -5 },   // 0x23 '#'
  {     9,   4,   8,   6,    1,   -6 },   // 0x24 '$'
  {    13,   4,   6,   6,    1,   -5 },   // 0x25 '%'
  {    16,   4,   5,   6,    1,   -4 },   // 0x26 '&'
  {    19,   2,   3,   6,    2,   -5 },   // 0x27 '''
  {    20,   2,   7,   6,    3,   -5 },   // 0x28 '('
  {    22,   2,   7,   6,    1,   -5 },   // 0x29 ')'
  {    24,   4,   4,   6,    1,   -5 },   // 0x2A '*'
  {    26,   4,   5,   6,    1,   -4 },   // 0x2B '+'
  {    29,   2,   2,   6,    1,    0 },   // 0x2C ','
  {    30,   4,   1,   6,    1,   -2 },   // 0x2D '-'
  {    31,   2,   1,   6,    2,    0 },   // 0x2E '.'
  {    32,   4,   8,   6,    1,   -6 },   // 0x2F '/'
  {    36,   4,   6,   6,    1,   -5 },   // 0x30 '0'
  {    39,   4,   6,   6,    1,   -5 },   // 0x31 '1'
  {    42,   4,   6,   6,    1,   -5 },   // 0x32 '2'
  {    45,   4,   6,   6,    1,   -5 },   // 0x33 '3'
  {    48,   4,   6,   6,    1,   -5 },   // 0x34 '4'
  {    51,   4,   6,   6,    1,   -5 },   // 0x35 '5'
  {    54,   4,   6,   6,    1,   -5 },   // 0x36 '6'
  {    57,   4,   6,   6,    1,   -5 },   // 0x37 '7'
  {    60,   4,   6,   6,    1,   -5 },   // 0x38 '8'
  {    63,   4,   6,   6,    1,   -5 },   // 0x39 '9'
  {    66,   2,   4,   6,    2,   -3 },   // 0x3A ':'
  {    67,   3,   5,   6,    1,   -3 },   // 0x3B ';'
  {    69,   4,   5,   6,    1,   -4 },   // 0x3C '<'
  {    72,   4,   2,   6,    1,   -3 },   // 0x3D '='
  {    73,   4,   5,   6,    1,   -4 },   // 0x3E '>'
  {    76,   4,   6,   6,    1,   -5 },   // 0x3F '?'
  {    79,   4,   7,   6,    1,   -5 },   // 0x40 '@'
  {    83,   6,   6,   6,    0,   -5 },   // 0x41 'A'
  {    88,   5,   6,   6,    0,   -5 },   // 0x42 'B'
  {    92,   4,   6,   6,    1,   -5 },   // 0x43 'C'
  {    95,   5,   6,   6,    0,   -5 },   // 0x44 'D'
  {    99,   5,   6,   6,    0,   -5 },   // 0x45 'E'
  {   103,   5,   6,   6,    0,   -5 },   // 0x46 'F'
  {   107,   5,   6,   6,    1,   -5 },   // 0x47 'G'
  {   111,   5,   6,   6,    1,   -5 },   // 0x48 'H'
  {   115,   4,   6,   6,    1,   -5 },   // 0x49 'I'
  {   118,   5,   6,   6,    1,   -5 },   // 0x4A 'J'
  {   122,   6,   6,   6,    0,   -5 },   // 0x4B 'K'
  {   127,   4,   6,   6,    1,   -5 },   // 0x4C 'L'
  {   130,   6,   6,   6,    0,   -5 },   // 0x4D 'M'
  {   135,   6,   6,   6,    0,   -5 },   // 0x4E 'N'
  {   140,   4,   6,   6,    1,   -5 },   // 0x4F 'O'
  {   143,   5,   6,   6,    0,   -5 },   // 0x50 'P'
  {   147,   4,   7,   6,    1,   -5 },   // 0x51 'Q'
  {   151,   6,   6,   6,    0,   -5 },   // 0x52 'R'
  {   156,   4,   6,   6,    1,   -5 },   // 0x53 'S'
  {   159,   4,   6,   6,    1,   -5 },   // 0x54 'T'
  {   162,   6,   6,   6,    0,   -5 },   // 0x55 'U'
  {   167,   6,   6,   6,    0,   -5 },   // 0x56 'V'
  {   172,   6,   6,   6,    0,   -5 },   // 0x57 'W'
  {   177,   6,   6,   6,    0,   -5 },   // 0x58 'X'
  {   182,   4,   6,   6,    1,   -5 },   // 0x59 'Y'
  {   185,   4,   6,   6,    1,   -5 },   // 0x5A 'Z'
  {   188,   1,   7,   6,    3,   -5 },   // 0x5B '['
  {   189,   4,   8,   6,    1,   -6 },   // 0x5C '\'
  {   193,   1,   7,   6,    2,   -5 },   // 0x5D ']'
  {   194,   4,   2,   6,    1,   -5 },   // 0x5E '^'
  {   195,   6,   1,   6,    0,    1 },   // 0x5F '_'
  {   196,   1,   1,   6,    2,   -5 },   // 0x60 '`'
  {   197,   4,   4,   6,    1,   -3 },   // 0x61 'a'
  {   199,   5,   6,   6,    0,   -5 },   // 0x62 'b'
  {   203,   4,   4,   6,    1,   -3 },   // 0x63 'c'
  {   205,   5,   6,   6,    1,   -5 },   // 0x64 'd'
  {   209,   4,   4,   6,    1,   -3 },   // 0x65 'e'
  {   211,   4,   6,   6,    1,   -5 },   // 0x66 'f'
  {   214,   5,   6,   6,    1,   -3 },   // 0x67 'g'
  {   218,   6,   6,   6,    0,   -5 },   // 0x68 'h'
  {   223,   4,   6,   6,    1,   -5 },   // 0x69 'i'
  {   226,   4,   8,   6,    1,   -5 },   // 0x6A 'j'
  {   230,   4,   6,   6,    1,   -5 },   // 0x6B 'k'
  {   233,   4,   6,   6,    1,   -5 },   // 0x6C 'l'
  {   236,   6,   4,   6,    0,   -3 },   // 0x6D 'm'
  {   239,   4,   4,   6,    1,   -3 },   // 0x6E 'n'
  {   241,   4,   4,   6,    1,   -3 },   // 0x6F 'o'
  {   243,   5,   6,   6,    0,   -3 },   // 0x70 'p'
  {   247,   5,   6,   6,    1,   -3 },   // 0x71 'q'
  {   251,   4,   4,   6,    1,   -3 },   // 0x72 'r'
  {   253,   4,   4,   6,    1,   -3 },   // 0x73 's'
  {   255,   5,   6,   6,    0,   -5 },   // 0x74 't'
  {   259,   5,   4,   6,    0,   -3 },   // 0x75 'u'
  {   262,   6,   4,   6,    0,   -3 },   // 0x76 'v'
  {   265,   6,   4,   6,    0,   -3 },   // 0x77 'w'
  {   268,   4,   4,   6,    1,   -3 },   // 0x78 'x'
  {   270,   4,   6,   6,    1,   -3 },   // 0x79 'y'
  {   273,   4,   4,   6,    1,   -3 },   // 0x7A 'z'
  {   275,   2,   7,   6,    2,   -5 },   // 0x7B '{'
  {   277,   1,   7,   6,    3,   -5 },   // 0x7C '|'
  {   278,   2,   7,   6,    2,   -5 },   // 0x7D '}'
  {   280,   4,   1,   6,    1,   -2 } }; // 0x7E '~'

const GFXfont freesansmono9pt7b = {
  (uint8_t  *)freesansmono9pt7bBitmaps,
  (GFXglyph *)freesansmono9pt7bGlyphs,
  0x20, 0x7E, 9 };//B

// Approx. 953 bytes
