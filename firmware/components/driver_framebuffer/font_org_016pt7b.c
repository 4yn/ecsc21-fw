#include "include/driver_framebuffer.h"
const uint8_t org_016pt7bBitmaps[] = {
  0x00, 0xD0, 0xA0, 0x6F, 0xF6, 0xFF, 0xCB, 0xF0, 0x88, 0x88, 0x80, 0xEF,
  0xAD, 0x80, 0x69, 0x96, 0x54, 0xE8, 0xC0, 0xE0, 0x80, 0x01, 0x91, 0x00,
  0xF9, 0x9F, 0xF0, 0xFF, 0x8F, 0xFF, 0x1F, 0x9F, 0x11, 0xFF, 0x1F, 0xFF,
  0x9F, 0xF1, 0x11, 0xFF, 0x9F, 0xFF, 0x1F, 0xA0, 0xE0, 0x2A, 0x20, 0xFC,
  0x8D, 0x40, 0xF3, 0x02, 0xFD, 0xE1, 0xF0, 0xFF, 0x99, 0xEF, 0x9E, 0xF8,
  0x8F, 0xE9, 0x9E, 0xFF, 0x8F, 0xFF, 0x88, 0xFB, 0x9F, 0x9F, 0x99, 0xF2,
  0x2F, 0x72, 0xAF, 0x9A, 0xCA, 0x88, 0x8F, 0xFD, 0x6B, 0x50, 0xF9, 0x99,
  0xF9, 0x9F, 0xFF, 0x88, 0xF9, 0xBF, 0xFF, 0xAA, 0xFF, 0x1F, 0xF2, 0x22,
  0x99, 0x9F, 0x8C, 0x54, 0x40, 0xAD, 0x6B, 0xF0, 0x8B, 0x95, 0x10, 0x8A,
  0x88, 0x40, 0xFF, 0x8F, 0xEB, 0x82, 0x08, 0x20, 0xD7, 0x40, 0xF0, 0x80,
  0xFF, 0x80, 0x9E, 0xF0, 0xF3, 0x80, 0x3E, 0xF0, 0xFF, 0x80, 0x7D, 0x20,
  0xF7, 0x90, 0x9E, 0xD0, 0xE0, 0x57, 0x8F, 0x99, 0xF0, 0xFD, 0x62, 0xF6,
  0x80, 0xF7, 0x80, 0xF7, 0xC0, 0xF9, 0xF2, 0xF2, 0x00, 0x67, 0x80, 0x2F,
  0x22, 0xB7, 0x80, 0xB5, 0x80, 0x8D, 0x7E, 0xAA, 0x80, 0xB7, 0x90, 0xF3,
  0x80, 0x39, 0x10, 0xF0, 0x8D, 0x40, 0xF8 };

const GFXglyph org_016pt7bGlyphs[] = {
  {     0,   1,   1,   5,    0,    0 },   // 0x20 ' '
  {     1,   1,   4,   2,    0,   -3 },   // 0x21 '!'
  {     2,   3,   1,   3,    0,   -3 },   // 0x22 '"'
  {     3,   4,   4,   5,    0,   -3 },   // 0x23 '#'
  {     5,   5,   4,   5,    0,   -3 },   // 0x24 '$'
  {     8,   5,   4,   5,    0,   -3 },   // 0x25 '%'
  {    11,   4,   4,   5,    0,   -3 },   // 0x26 '&'
  {    13,   1,   1,   2,    0,   -3 },   // 0x27 '''
  {    14,   2,   4,   3,    0,   -3 },   // 0x28 '('
  {    15,   2,   4,   3,    0,   -3 },   // 0x29 ')'
  {    16,   3,   2,   3,    0,   -2 },   // 0x2A '*'
  {    17,   3,   2,   3,    0,   -2 },   // 0x2B '+'
  {    18,   1,   2,   2,    0,    0 },   // 0x2C ','
  {    19,   3,   1,   4,    0,   -2 },   // 0x2D '-'
  {    20,   1,   1,   2,    0,    0 },   // 0x2E '.'
  {    21,   5,   4,   5,    0,   -3 },   // 0x2F '/'
  {    24,   4,   4,   5,    0,   -3 },   // 0x30 '0'
  {    26,   1,   4,   2,    0,   -3 },   // 0x31 '1'
  {    27,   4,   4,   5,    0,   -3 },   // 0x32 '2'
  {    29,   4,   4,   5,    0,   -3 },   // 0x33 '3'
  {    31,   4,   4,   5,    0,   -3 },   // 0x34 '4'
  {    33,   4,   4,   5,    0,   -3 },   // 0x35 '5'
  {    35,   4,   4,   5,    0,   -3 },   // 0x36 '6'
  {    37,   4,   4,   5,    0,   -3 },   // 0x37 '7'
  {    39,   4,   4,   5,    0,   -3 },   // 0x38 '8'
  {    41,   4,   4,   5,    0,   -3 },   // 0x39 '9'
  {    43,   1,   3,   2,    0,   -2 },   // 0x3A ':'
  {    44,   1,   3,   2,    0,   -2 },   // 0x3B ';'
  {    45,   3,   4,   3,    0,   -3 },   // 0x3C '<'
  {    47,   3,   2,   4,    0,   -2 },   // 0x3D '='
  {    48,   3,   4,   3,    0,   -3 },   // 0x3E '>'
  {    50,   4,   4,   5,    0,   -3 },   // 0x3F '?'
  {    52,   5,   4,   5,    0,   -3 },   // 0x40 '@'
  {    55,   4,   4,   5,    0,   -3 },   // 0x41 'A'
  {    57,   4,   4,   5,    0,   -3 },   // 0x42 'B'
  {    59,   4,   4,   5,    0,   -3 },   // 0x43 'C'
  {    61,   4,   4,   5,    0,   -3 },   // 0x44 'D'
  {    63,   4,   4,   5,    0,   -3 },   // 0x45 'E'
  {    65,   4,   4,   5,    0,   -3 },   // 0x46 'F'
  {    67,   4,   4,   5,    0,   -3 },   // 0x47 'G'
  {    69,   4,   4,   5,    0,   -3 },   // 0x48 'H'
  {    71,   4,   4,   5,    0,   -3 },   // 0x49 'I'
  {    73,   4,   4,   5,    0,   -3 },   // 0x4A 'J'
  {    75,   4,   4,   5,    0,   -3 },   // 0x4B 'K'
  {    77,   4,   4,   5,    0,   -3 },   // 0x4C 'L'
  {    79,   5,   4,   5,    0,   -3 },   // 0x4D 'M'
  {    82,   4,   4,   5,    0,   -3 },   // 0x4E 'N'
  {    84,   4,   4,   5,    0,   -3 },   // 0x4F 'O'
  {    86,   4,   4,   5,    0,   -3 },   // 0x50 'P'
  {    88,   4,   4,   5,    0,   -3 },   // 0x51 'Q'
  {    90,   4,   4,   5,    0,   -3 },   // 0x52 'R'
  {    92,   4,   4,   5,    0,   -3 },   // 0x53 'S'
  {    94,   4,   4,   5,    0,   -3 },   // 0x54 'T'
  {    96,   4,   4,   5,    0,   -3 },   // 0x55 'U'
  {    98,   5,   4,   5,    0,   -3 },   // 0x56 'V'
  {   101,   5,   4,   5,    0,   -3 },   // 0x57 'W'
  {   104,   5,   4,   5,    0,   -3 },   // 0x58 'X'
  {   107,   5,   4,   5,    0,   -3 },   // 0x59 'Y'
  {   110,   4,   4,   5,    0,   -3 },   // 0x5A 'Z'
  {   112,   2,   4,   3,    0,   -3 },   // 0x5B '['
  {   113,   5,   4,   5,    0,   -3 },   // 0x5C '\'
  {   116,   2,   4,   3,    0,   -3 },   // 0x5D ']'
  {   117,   3,   1,   3,    0,   -3 },   // 0x5E '^'
  {   118,   4,   1,   5,    0,    1 },   // 0x5F '_'
  {   119,   1,   1,   2,    0,   -3 },   // 0x60 '`'
  {   120,   3,   3,   4,    0,   -2 },   // 0x61 'a'
  {   122,   3,   4,   4,    0,   -3 },   // 0x62 'b'
  {   124,   3,   3,   4,    0,   -2 },   // 0x63 'c'
  {   126,   3,   4,   4,    0,   -3 },   // 0x64 'd'
  {   128,   3,   3,   4,    0,   -2 },   // 0x65 'e'
  {   130,   3,   4,   3,    0,   -3 },   // 0x66 'f'
  {   132,   3,   4,   4,    0,   -2 },   // 0x67 'g'
  {   134,   3,   4,   4,    0,   -3 },   // 0x68 'h'
  {   136,   1,   3,   2,    0,   -2 },   // 0x69 'i'
  {   137,   2,   4,   3,    0,   -2 },   // 0x6A 'j'
  {   138,   4,   4,   4,    0,   -3 },   // 0x6B 'k'
  {   140,   1,   4,   2,    0,   -3 },   // 0x6C 'l'
  {   141,   5,   3,   5,    0,   -2 },   // 0x6D 'm'
  {   143,   3,   3,   4,    0,   -2 },   // 0x6E 'n'
  {   145,   3,   3,   4,    0,   -2 },   // 0x6F 'o'
  {   147,   3,   4,   4,    0,   -2 },   // 0x70 'p'
  {   149,   4,   4,   4,    0,   -2 },   // 0x71 'q'
  {   151,   3,   3,   4,    0,   -2 },   // 0x72 'r'
  {   153,   3,   3,   4,    0,   -2 },   // 0x73 's'
  {   155,   4,   4,   5,    0,   -3 },   // 0x74 't'
  {   157,   3,   3,   4,    0,   -2 },   // 0x75 'u'
  {   159,   3,   3,   4,    0,   -2 },   // 0x76 'v'
  {   161,   5,   3,   5,    0,   -2 },   // 0x77 'w'
  {   163,   3,   3,   4,    0,   -2 },   // 0x78 'x'
  {   165,   3,   4,   4,    0,   -2 },   // 0x79 'y'
  {   167,   3,   3,   4,    0,   -2 },   // 0x7A 'z'
  {   169,   3,   4,   3,    0,   -3 },   // 0x7B '{'
  {   171,   1,   4,   2,    0,   -3 },   // 0x7C '|'
  {   172,   3,   4,   3,    0,   -3 },   // 0x7D '}'
  {   174,   4,   2,   5,    0,   -2 } }; // 0x7E '~'

const GFXfont org_016pt7b = {
  (uint8_t  *)org_016pt7bBitmaps,
  (GFXglyph *)org_016pt7bGlyphs,
  0x20, 0x7E, 6 };//B

// Approx. 847 bytes
