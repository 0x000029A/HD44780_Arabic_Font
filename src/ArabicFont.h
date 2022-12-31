#ifndef ARABICFONT_H
#define ARABICFONT_H

/*
أ => a, A
ب => b, B
ت => t, t
ت => c, C
ج => g, G
ح => j, J
خ => i, I
د => d, D
ذ => y, Y
ر => r, R
ز => z, Z
س => s, S
ش => x, X
ص => p, P
ض => 0, 00
ط => 1, 11
ظ => u, U
ع => o, O
غ => v, V
ف => f, F
ق => q, Q
ئ => 2, 22
ك => k, KK
ل => l, L
م => m, M
ن => n, N
ه => h, H
و => w, W
ي => e, E
*/

int arFontMapping[55][2] {
{97, 0}, {65, 1},
{98, 2}, {66, 3},
{116, 4}, {84, 5},
{99, 6}, {67, 7},
{103, 8}, {71, 9},
{106, 10}, {74, 11},
{105, 12}, {73, 13},
{100, 14}, {68, 15},
{121, 16}, {89, 17},
{114, 18}, {82, 19},
{122, 20}, {90, 21},
{115, 22}, {83, 23},
{120, 24}, {88, 25},
{112, 26}, {80, 27},
{48, 28},
{49, 29},
{117, 30}, {85, 31},
{111, 32}, {79, 33},
{118, 34}, {86, 35},
{102, 36}, {77, 37},
{113, 38}, {81, 39},
{107, 40}, {75, 41},
{108, 42}, {76, 43},
{109, 44}, {77, 45},
{110, 46}, {78, 47},
{104, 48}, {72, 49},
{119, 50}, {87, 51},
{101, 52}, {69, 53},
{50, 54}
};

uint8_t arFont[55][8]{
  { //alef p1 0
    B00000,
    B00000,
    B00000,
    B00100,
    B00100,
    B00100,
    B00100,
    B00100 },

  { //alef p2 1
    B00000,
    B01000,
    B01000,
    B01000,
    B01111,
    B00000,
    B00000,
    B00000 },

  { // baa p1 2 
    B00000,
    B00000,
    B00000,
    B00010,
    B11110,
    B00000,
    B01000,
    B00000 },

  { // baa p2 3
    B00000,
    B00000,
    B00000,
    B10100,
    B11111,
    B00000,
    B01000,
    B00000 },

  { // taa p1 4
    B00000,
    B00000,
    B01101,
    B00001,
    B11111,
    B00000,
    B00000,
    B00000 },

  { //taa p2 5
    B00000,
    B01100,
    B00000,
    B10100,
    B11111,
    B00000,
    B00000,
    B00000 },

  { //thaa p1 6
    B00000,
    B00100,
    B01100,
    B00001,
    B11111,
    B00000,
    B00000,
    B00000 },

  { //thaa p2 7
    B00100,
    B01100,
    B00000,
    B10100,
    B11111,
    B00000,
    B00000,
    B00000 },

  { //jiim p1 8
    B00000,
    B00000,
    B00111,
    B00001,
    B11111,
    B00000,
    B00010,
    B00000 },

  { // jiim p2 9 
    B00000,
    B11100,
    B00100,
    B00100,
    B11111,
    B10100,
    B10000,
    B11100 },

  { //haa p1 10
    B00000,
    B00000,
    B00111,
    B00001,
    B11111,
    B00000,
    B00000,
    B00000 },

  { //haa p2 11
    B00000,
    B11100,
    B00100,
    B00100,
    B11111,
    B10000,
    B10000,
    B11100 },

  { // khaa p1 12
    B00010,
    B00000,
    B00111,
    B00001,
    B11111,
    B00000,
    B00000,
    B00000 },

  { //khaa p2 13
    B01000,
    B00000,
    B11100,
    B00100,
    B11111,
    B10000,
    B10000,
    B11100 },

  { // daal p1 14
    B00000,
    B00000,
    B00110,
    B00010,
    B01110,
    B00000,
    B00000,
    B00000 },

  { //daal p2 15
    B00000,
    B00000,
    B01100,
    B00100,
    B11111,
    B00000,
    B00000,
    B00000 },

  { //thal p1 16
    B00100,
    B00000,
    B00110,
    B00010,
    B01110,
    B00000,
    B00000,
    B00000 },

  { //thal p2 17
    B00100,
    B00000,
    B01100,
    B00100,
    B11111,
    B00000,
    B00000,
    B00000 },

  { //raa p1 18
    B00000,
    B00000,
    B00000,
    B00000,
    B00010,
    B00100,
    B01000,
    B10000 },

  { // raa p2 19
    B00000,
    B00000,
    B00000,
    B00000,
    B00010,
    B00100,
    B01000,
    B10000 },

  { //zaay p1 20
    B00000,
    B00000,
    B00010,
    B00000,
    B00010,
    B00100,
    B01000,
    B10000 },

  { // zaay p2 21
    B00000,
    B00000,
    B00010,
    B00000,
    B00011,
    B00100,
    B01000,
    B10000 },

  { //siin p1 23
    B00000,
    B00000,
    B00000,
    B01010,
    B11110,
    B00000,
    B00000,
    B00000 },

  { // siin p2 24
    B00000,
    B00000,
    B00000,
    B01010,
    B01111,
    B11000,
    B00000,
    B00000 },

  { //shin p1 25
    B00100,
    B01110,
    B00000,
    B01010,
    B11110,
    B00000,
    B00000,
    B00000 },

  { //shin p2 26
    B00100,
    B01110,
    B00000,
    B01010,
    B01111,
    B11000,
    B00000,
    B00000 },

  { // saad p1 27
    B00000,
    B00000,
    B01110,
    B01010,
    B11110,
    B01000,
    B01000,
    B00000 },

  { //saad p2 28
    B00000,
    B00000,
    B00111,
    B00101,
    B10111,
    B10100,
    B01000,
    B00000 },

  { // daad 29
    B00010,
    B00000,
    B00111,
    B00101,
    B11111,
    B00100,
    B00100,
    B00000 },

  { //taa 30
    B00100,
    B00100,
    B01110,
    B01010,
    B11110,
    B01000,
    B01000,
    B00000 },

  { //thaa p1 31
    B01010,
    B01000,
    B01110,
    B10010,
    B11111,
    B00000,
    B00000,
    B00000 },

  { // zaa 32
    B00101,
    B00100,
    B00110,
    B01001,
    B01111,
    B00000,
    B00000,
    B00000 },

  { //ayn p1 33
    B00000,
    B00000,
    B00110,
    B00100,
    B11110,
    B00000,
    B00000,
    B00000 },

  { // ayn p2 34
    B00000,
    B00000,
    B01100,
    B01000,
    B01111,
    B01000,
    B01100,
    B00000 },

  { // ghayn p1 35
    B00010,
    B00000,
    B00110,
    B00100,
    B11110,
    B00000,
    B00000,
    B00000 },

  { // ghayn p2 36
    B00100,
    B00000,
    B01100,
    B01000,
    B01111,
    B01000,
    B01100,
    B00000 },

  { //faa p1 37
    B00100,
    B00000,
    B01110,
    B01010,
    B11110,
    B00000,
    B00000,
    B00000 },

  { //faa p2 38
    B00100,
    B00000,
    B01110,
    B01010,
    B11111,
    B00000,
    B00000,
    B00000 },

  { //qaaf p1 39
    B00110,
    B00000,
    B01110,
    B01010,
    B11110,
    B00000,
    B00000,
    B00000 },

  { // qaaf p2 40
    B00110,
    B00000,
    B01110,
    B01010,
    B11111,
    B00000,
    B00000,
    B00000 },

  { // kaaf p1 41
    B00000,
    B01110,
    B01000,
    B00100,
    B11110,
    B00000,
    B00000,
    B00000 },

  { // kaaf p2 42
    B01100,
    B11010,
    B00010,
    B01010,
    B01111,
    B00000,
    B00000,
    B00000 },

  { // laam p1 43
    B00000,
    B00010,
    B00010,
    B00010,
    B01110,
    B00000,
    B00000,
    B00000 },

  { //laam p2 44
    B00000,
    B00010,
    B00010,
    B01010,
    B01111,
    B00000,
    B00000,
    B00000 },

  { // miim p1 45
    B00000,
    B00000,
    B01110,
    B01010,
    B11110,
    B00000,
    B00000,
    B00000 },

  { // miim p2 46
    B00000,
    B00000,
    B01110,
    B01010,
    B01111,
    B01000,
    B01000,
    B00000 },

  { // nuun p1 47
    B00000,
    B00000,
    B01000,
    B00010,
    B11110,
    B00000,
    B00000,
    B00000 },

  { // nuun p2 48
    B00000,
    B00000,
    B01000,
    B00000,
    B10111,
    B10100,
    B01000,
    B00000 },

  { // haa p1 49
    B00000,
    B00000,
    B01110,
    B01110,
    B11110,
    B00000,
    B00000,
    B00000 },

  { // haa p2 50
    B00000,
    B00000,
    B01110,
    B01010,
    B01111,
    B00000,
    B00000,
    B00000 },

  { //waaw p1 51
    B00000,
    B00000,
    B00000,
    B00110,
    B00110,
    B00100,
    B01000,
    B10000 },

  { // waaw p2 52
    B00000,
    B00000,
    B00000,
    B00110,
    B00111,
    B00100,
    B01000,
    B10000 },

  { // yaa p1 53
    B00000,
    B00000,
    B00000,
    B00010,
    B11110,
    B00000,
    B01100,
    B00000 },

  { // yaa p2 54
    B00000,
    B00000,
    B00000,
    B00000,
    B01011,
    B01110,
    B00000,
    B01100 },

  { // hamza 55
    B00000,
    B00110,
    B01100,
    B00010,
    B11110,
    B00000,
    B00000,
    B00000 }
};

#endif
