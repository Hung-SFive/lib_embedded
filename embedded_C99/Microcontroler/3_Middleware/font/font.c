#include <font.h>

static const unsigned char Text_map[] = {
  0x00, 0x00, 0x00, 
  0xBF, // !
  0x07, 0x00, 0x07, // "
  0x20, 0xE4, 0x3C, 0xE7, 0x3C, 0x27, 0x04, // #
  0x18, 0x24, 0xFF, 0x24, 0xC4, // $
  0x01, 0x01, 0x07, 0x01, 0x00, 
  0x06, 0x09, 0x09, 0xC6, 0x30, 0x0C, 0x63, 0x90, 0x90, 0x60, // %
  0x76, 0x89, 0x89, 0x96, 0x60, 0x58, 0x80, // &
  0x07, // '
  0xF8, 0x06, 0x01, // (
  0x00, 0x03, 0x04, 
  0x01, 0x06, 0xF8, // )
  0x04, 0x03, 0x00, 
  0x0A, 0x04, 0x1F, 0x04, 0x0A, // *
  0x08, 0x08, 0x08, 0x7F, 0x08, 0x08, 0x08, // +
  0x08, 0x07, // ,
  0x01, 0x01, 0x01, // -
  0x03, // .
  0x00, 0xC0, 0x30, 0x0C, 0x03, // /
  0x03, 0x00, 0x00, 0x00, 0x00, 
  0x7E, 0x81, 0x81, 0x81, 0x7E, // 0
  0x82, 0x82, 0xFF, 0x80, 0x80, // 1
  0xC2, 0xA1, 0x91, 0x89, 0x86, // 2
  0x42, 0x81, 0x89, 0x89, 0x76, // 3
  0x30, 0x28, 0x24, 0x22, 0xFF, 0x20, // 4
  0x4F, 0x89, 0x89, 0x89, 0x71, // 5
  0x7C, 0x8A, 0x89, 0x89, 0x70, // 6
  0x01, 0xC1, 0x31, 0x0D, 0x03, // 7
  0x76, 0x89, 0x89, 0x89, 0x76, // 8
  0x0E, 0x91, 0x91, 0x51, 0x3E, // 9
  0x33, // :
  0x80, 0x73, // ;
  0x04, 0x04, 0x0A, 0x0A, 0x11, 0x11, // <
  0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, // =
  0x11, 0x11, 0x0A, 0x0A, 0x04, 0x04, // >
  0x01, 0xB1, 0x09, 0x06, // ?
  0x7C, 0x82, 0x39, 0x45, 0x45, 0x3D, 0x41, 0x3E, // @
  0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
  0xE0, 0x3C, 0x23, 0x23, 0x3C, 0xE0, // A
  0xFF, 0x89, 0x89, 0x89, 0x8E, 0x70, // B
  0x3C, 0x42, 0x81, 0x81, 0x81, 0x81, 0x42, // C
  0xFF, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3C, // D
  0xFF, 0x89, 0x89, 0x89, 0x89, // E
  0xFF, 0x09, 0x09, 0x09, 0x01, // F
  0x3C, 0x42, 0x81, 0x81, 0x91, 0x91, 0x72, // G
  0xFF, 0x08, 0x08, 0x08, 0x08, 0xFF, // H
  0x81, 0xFF, 0x81, // I
  0x80, 0x81, 0x81, 0x7F, // J
  0xFF, 0x10, 0x18, 0x24, 0x42, 0x81, // K
  0xFF, 0x80, 0x80, 0x80, 0x80, // L
  0xFF, 0x03, 0x0C, 0x30, 0x0C, 0x03, 0xFF, // M
  0xFF, 0x03, 0x0C, 0x30, 0xC0, 0xFF, // N
  0x3C, 0x42, 0x81, 0x81, 0x81, 0x42, 0x3C, // O
  0xFF, 0x11, 0x11, 0x11, 0x0E, // P
  0x3C, 0x42, 0x81, 0x81, 0x81, 0x42, 0x3C, // Q
  0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 
  0xFF, 0x11, 0x11, 0x31, 0x4E, 0x80, // R
  0x46, 0x89, 0x89, 0x91, 0x91, 0x62, // S
  0x01, 0x01, 0x01, 0xFF, 0x01, 0x01, 0x01, // T
  0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, // U
  0x07, 0x38, 0xC0, 0xC0, 0x38, 0x07, // V
  0x03, 0x3C, 0xC0, 0x3C, 0x03, 0x3C, 0xC0, 0x3C, 0x03, // W
  0xC3, 0x24, 0x18, 0x18, 0x24, 0xC3, // X
  0x01, 0x02, 0x04, 0xF8, 0x04, 0x02, 0x01, // Y
  0xC1, 0xA1, 0x91, 0x89, 0x85, 0x83, // Z
  0xFF, 0x01, 0x01, // [
  0x07, 0x04, 0x04, 
  0x01, 0xB1, 0x09, 0x06, // ?
  0x01, 0x01, 0xFF, // ]
  0x04, 0x04, 0x07, 
  0x08, 0x04, 0x02, 0x01, 0x02, 0x04, 0x08, // ^
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // _
  0x01, 0x02, // `
  0x18, 0x25, 0x25, 0x25, 0x3E, // a
  0xFF, 0x08, 0x08, 0x08, 0xF0, // b
  0x01, 0x01, 0x01, 0x01, 0x00, 
  0x1E, 0x21, 0x21, 0x21, 0x12, // c
  0xF0, 0x08, 0x08, 0x08, 0xFF, // d
  0x00, 0x01, 0x01, 0x01, 0x01, 
  0x1E, 0x25, 0x25, 0x25, 0x16, // e
  0x08, 0xFE, 0x09, 0x09, // f
  0x00, 0x01, 0x00, 0x00, 
  0x1E, 0xA1, 0xA1, 0xA1, 0x7F, // g
  0xFF, 0x08, 0x08, 0x08, 0xF0, // h
  0x01, 0x00, 0x00, 0x00, 0x01, 
  0xF9, // i
  0x01, 
  0x00, 0x08, 0xF9, // j
  0x04, 0x04, 0x03, 
  0xFF, 0x40, 0x60, 0x90, 0x08, // k
  0x01, 0x00, 0x00, 0x00, 0x01, 
  0xFF, // l
  0x01, 
  0x3F, 0x01, 0x01, 0x01, 0x3E, 0x01, 0x01, 0x01, 0x3E, // m
  0x3F, 0x01, 0x01, 0x01, 0x3E, // n
  0x1E, 0x21, 0x21, 0x21, 0x1E, // o
  0xFF, 0x21, 0x21, 0x21, 0x1E, // p
  0x1E, 0x21, 0x21, 0x21, 0xFF, // q
  0x3F, 0x02, 0x01, 0x01, // r
  0x26, 0x25, 0x29, 0x19, // s
  0x04, 0x7F, 0x84, 0x84, // t
  0x1F, 0x20, 0x20, 0x20, 0x3F, // u
  0x03, 0x0C, 0x30, 0x0C, 0x03, // v
  0x0F, 0x30, 0x0C, 0x03, 0x0C, 0x30, 0x0F, // w
  0x21, 0x12, 0x0C, 0x12, 0x21, // x
  0x01, 0x8E, 0x70, 0x0E, 0x01, // y
  0x31, 0x29, 0x25, 0x23, // z
  0x20, 0x20, 0xDE, 0x01, 0x01, // {
  0x00, 0x00, 0x03, 0x04, 0x04, 
  0xFF, // |
  0x07, 
  0x01, 0x01, 0xDE, 0x20, 0x20, // }
  0x04, 0x04, 0x03, 0x00, 0x00, 
  0x06, 0x01, 0x01, 0x02, 0x04, 0x04, 0x03, // ~
};
static const unsigned char Number_map[] = {
  0x01, 0x01, // .
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFE, 0xFF, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFE, // 0
  0x1F, 0x3F, 0x20, 0x20, 0x20, 0x20, 0x3F, 0x1F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, // 1
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 
  0x80, 0xC1, 0x41, 0x41, 0x41, 0x41, 0x7F, 0x3E, // 2
  0x1F, 0x3F, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 
  0x00, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xBE, // 3
  0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3F, 0x1F, 
  0x3F, 0x7F, 0x40, 0x40, 0x40, 0x40, 0xFF, 0xBF, // 4
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 
  0x3E, 0x7F, 0x41, 0x41, 0x41, 0x41, 0xC1, 0x80, // 5
  0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3F, 0x1F, 
  0xBE, 0xFF, 0x41, 0x41, 0x41, 0x41, 0xC1, 0x80, // 6
  0x1F, 0x3F, 0x20, 0x20, 0x20, 0x20, 0x3F, 0x1F, 
  0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFE, // 7
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 
  0xBE, 0xFF, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xBE, // 8
  0x1F, 0x3F, 0x20, 0x20, 0x20, 0x20, 0x3F, 0x1F, 
  0x3E, 0x7F, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xBE, // 9
  0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3F, 0x1F, 
};

const Font_TypeDef Text[] = {
  &Text_map[0], 3, 1, 0,
  &Text_map[3], 1, 8, 0, // !
  &Text_map[4], 3, 3, -1, // "
  &Text_map[7], 7, 8, 0, // #
  &Text_map[14], 5, 11, -1, // $
  &Text_map[24], 10, 8, 0, // %
  &Text_map[34], 7, 8, 0, // &
  &Text_map[41], 1, 3, -1, // '
  &Text_map[42], 3, 11, -1, // (
  &Text_map[48], 3, 11, -1, // )
  &Text_map[54], 5, 5, -1, // *
  &Text_map[59], 7, 7, 1, // +
  &Text_map[66], 2, 4, 6, // ,
  &Text_map[68], 3, 1, 4, // -
  &Text_map[71], 1, 2, 6, // .
  &Text_map[72], 5, 10, -1, // /
  &Text_map[82], 5, 8, 0, // 0
  &Text_map[87], 5, 8, 0, // 1
  &Text_map[92], 5, 8, 0, // 2
  &Text_map[97], 5, 8, 0, // 3
  &Text_map[102], 6, 8, 0, // 4
  &Text_map[108], 5, 8, 0, // 5
  &Text_map[113], 5, 8, 0, // 6
  &Text_map[118], 5, 8, 0, // 7
  &Text_map[123], 5, 8, 0, // 8
  &Text_map[128], 5, 8, 0, // 9
  &Text_map[133], 1, 6, 2, // :
  &Text_map[134], 2, 8, 2, // ;
  &Text_map[136], 6, 5, 2, // <
  &Text_map[142], 7, 3, 3, // =
  &Text_map[149], 6, 5, 2, // >
  &Text_map[155], 4, 8, 0, // ?
  &Text_map[159], 8, 9, 0, // @
  &Text_map[175], 6, 8, 0, // A
  &Text_map[181], 6, 8, 0, // B
  &Text_map[187], 7, 8, 0, // C
  &Text_map[194], 7, 8, 0, // D
  &Text_map[201], 5, 8, 0, // E
  &Text_map[206], 5, 8, 0, // F
  &Text_map[211], 7, 8, 0, // G
  &Text_map[218], 6, 8, 0, // H
  &Text_map[224], 3, 8, 0, // I
  &Text_map[227], 4, 8, 0, // J
  &Text_map[231], 6, 8, 0, // K
  &Text_map[237], 5, 8, 0, // L
  &Text_map[242], 7, 8, 0, // M
  &Text_map[249], 6, 8, 0, // N
  &Text_map[255], 7, 8, 0, // O
  &Text_map[262], 5, 8, 0, // P
  &Text_map[267], 7, 10, 0, // Q
  &Text_map[281], 6, 8, 0, // R
  &Text_map[287], 6, 8, 0, // S
  &Text_map[293], 7, 8, 0, // T
  &Text_map[300], 6, 8, 0, // U
  &Text_map[306], 6, 8, 0, // V
  &Text_map[312], 9, 8, 0, // W
  &Text_map[321], 6, 8, 0, // X
  &Text_map[327], 7, 8, 0, // Y
  &Text_map[334], 6, 8, 0, // Z
  &Text_map[340], 3, 11, -1, // [
  &Text_map[346], 4, 8, 0, // ?
  &Text_map[350], 3, 11, -1, // ]
  &Text_map[356], 7, 4, 0, // ^
  &Text_map[363], 7, 1, 9, // _
  &Text_map[370], 2, 2, -1, // `
  &Text_map[372], 5, 6, 2, // a
  &Text_map[377], 5, 9, -1, // b
  &Text_map[387], 5, 6, 2, // c
  &Text_map[392], 5, 9, -1, // d
  &Text_map[402], 5, 6, 2, // e
  &Text_map[407], 4, 9, -1, // f
  &Text_map[415], 5, 8, 2, // g
  &Text_map[420], 5, 9, -1, // h
  &Text_map[430], 1, 9, -1, // i
  &Text_map[432], 3, 11, -1, // j
  &Text_map[438], 5, 9, -1, // k
  &Text_map[448], 1, 9, -1, // l
  &Text_map[450], 9, 6, 2, // m
  &Text_map[459], 5, 6, 2, // n
  &Text_map[464], 5, 6, 2, // o
  &Text_map[469], 5, 8, 2, // p
  &Text_map[474], 5, 8, 2, // q
  &Text_map[479], 4, 6, 2, // r
  &Text_map[483], 4, 6, 2, // s
  &Text_map[487], 4, 8, 0, // t
  &Text_map[491], 5, 6, 2, // u
  &Text_map[496], 5, 6, 2, // v
  &Text_map[501], 7, 6, 2, // w
  &Text_map[508], 5, 6, 2, // x
  &Text_map[513], 5, 8, 2, // y
  &Text_map[518], 4, 6, 2, // z
  &Text_map[522], 5, 11, -1, // {
  &Text_map[532], 1, 11, -1, // |
  &Text_map[534], 5, 11, -1, // }
  &Text_map[544], 7, 3, 3, // ~
};

const Font_TypeDef Number[] = {
  &Number_map[0], 2, 1, 13, // .
  &Number_map[2], 6, 1, 0,
  &Number_map[8], 8, 14, 0, // 0
  &Number_map[24], 8, 14, 0, // 1
  &Number_map[28 + 12], 8, 14, 0, // 2
  &Number_map[44 + 12], 8, 14, 0, // 3
  &Number_map[58 + 14], 8, 14, 0, // 4
  &Number_map[74 + 14], 8, 14, 0, // 5
  &Number_map[90 + 14], 8, 14, 0, // 6
  &Number_map[106 + 14], 8, 14, 0, // 7
  &Number_map[120 + 16], 8, 14, 0, // 8
  &Number_map[136 + 16], 8, 14, 0, // 9
};