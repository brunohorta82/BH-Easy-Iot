
#include <Arduino.h>                                       
const uint8_t firmware_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xDF, 0x2B, 0x26, 0x5D, 0x04, 0x03, 0x66, 0x69, 0x72, 0x6D, 0x77, 0x61, 
0x72, 0x65, 0x2E, 0x68, 0x74, 0x6D, 0x6C, 0x00, 0x6D, 0x52, 0x4B, 0x6A, 0xE4, 0x30, 0x10, 0xBD, 
0x4A, 0xA1, 0xBD, 0x30, 0x33, 0xD9, 0xBA, 0x0D, 0xCD, 0x30, 0x03, 0x0D, 0x03, 0x33, 0xE4, 0xB7, 
0xC8, 0xAE, 0x6C, 0xC9, 0xB1, 0x40, 0x96, 0x4C, 0xA9, 0xDC, 0x9D, 0x9C, 0x27, 0x47, 0xC9, 0xC5, 
0x52, 0xB2, 0xDD, 0xDD, 0xC1, 0xED, 0x85, 0x0A, 0x51, 0xDF, 0xF7, 0xEA, 0x55, 0x69, 0xDC, 0x11, 
0x1A, 0x8F, 0x29, 0xED, 0x54, 0x1D, 0xDF, 0x40, 0x9E, 0x1E, 0xC8, 0xF5, 0x48, 0xEF, 0xAA, 0x82, 
0x55, 0x54, 0x77, 0x16, 0x8D, 0x25, 0x38, 0x39, 0xEE, 0x74, 0x1D, 0x49, 0xFE, 0xAA, 0x2A, 0xBB, 
0xBB, 0xEF, 0x29, 0xEC, 0xD8, 0x5B, 0xF1, 0xA6, 0x01, 0xC3, 0xD9, 0xEF, 0x31, 0xBC, 0xEA, 0x71, 
0x30, 0xC8, 0x12, 0xD9, 0xFF, 0x7A, 0x7C, 0xDA, 0xFF, 0x3D, 0xBC, 0xEC, 0xEF, 0xA1, 0x2C, 0x72, 
0x56, 0x55, 0x16, 0xDD, 0x9D, 0x18, 0x99, 0x55, 0x95, 0x6D, 0xA4, 0x1E, 0x28, 0x7A, 0xBB, 0x53, 
0xF9, 0xAB, 0xA0, 0xB7, 0xDC, 0x45, 0xB3, 0x53, 0xFF, 0xFF, 0x3D, 0x3C, 0x2A, 0xC0, 0x86, 0x5D, 
0x0C, 0x3B, 0x55, 0x2C, 0xDD, 0xC0, 0x86, 0x86, 0xDF, 0x07, 0xC9, 0xEE, 0x47, 0xCF, 0x6E, 0x40, 
0xE2, 0x22, 0xD7, 0x69, 0x89, 0x62, 0x26, 0xD0, 0x3A, 0xEB, 0x4D, 0xB2, 0x0C, 0xCE, 0x48, 0xC7, 
0x56, 0x81, 0x71, 0x09, 0x6B, 0x6F, 0xCD, 0x0D, 0x39, 0x21, 0x64, 0xD6, 0x9C, 0x29, 0x9E, 0x56, 
0x9E, 0x26, 0x7A, 0xFD, 0x96, 0xF4, 0x8F, 0x9F, 0x5B, 0x14, 0x9B, 0x91, 0xC8, 0x06, 0xD6, 0x47, 
0x4B, 0x49, 0x60, 0xAA, 0xEA, 0x59, 0x3E, 0x9F, 0x1F, 0x11, 0x90, 0x47, 0xF4, 0x0B, 0x5B, 0x98, 
0xEA, 0x66, 0x3C, 0x8E, 0xFA, 0x13, 0x92, 0x7D, 0x5E, 0xF2, 0xAF, 0xCD, 0x6A, 0xEB, 0x61, 0xB2, 
0xDA, 0x85, 0x36, 0xAA, 0x4A, 0x5F, 0x8A, 0x6B, 0x2A, 0xAA, 0xC9, 0xC0, 0xBC, 0xB1, 0x4D, 0x70, 
0x2B, 0xD0, 0xD3, 0x46, 0x5E, 0x29, 0x8E, 0x83, 0xA0, 0x9E, 0x9B, 0x8B, 0xEB, 0x3A, 0xFF, 0x10, 
0x86, 0x91, 0xFF, 0x38, 0x2F, 0xFB, 0xDC, 0x60, 0x15, 0xEC, 0x49, 0xB7, 0x39, 0x58, 0xFD, 0x4E, 
0x32, 0xA1, 0x93, 0x03, 0x88, 0xD0, 0xBA, 0xA6, 0xB3, 0x8E, 0x22, 0x18, 0x84, 0x10, 0x8F, 0x08, 
0xC7, 0x99, 0xEA, 0x45, 0xD2, 0x69, 0x8C, 0xC0, 0x70, 0xB9, 0xF7, 0xCC, 0xF6, 0x76, 0x5A, 0xC0, 
0x5E, 0xA4, 0x3B, 0x6B, 0x39, 0x0B, 0x39, 0x8D, 0x2A, 0x96, 0x7B, 0xB8, 0xB5, 0x6B, 0xD5, 0xDA, 
0x18, 0x59, 0xCE, 0x30, 0x6F, 0x66, 0x64, 0x8E, 0x61, 0xE9, 0x92, 0xC6, 0xBA, 0x77, 0xAC, 0x2E, 
0x99, 0x1C, 0x40, 0xDE, 0xF9, 0xB4, 0x61, 0x4B, 0x3D, 0x17, 0x12, 0xA3, 0xF7, 0x99, 0xEF, 0x55, 
0x41, 0x38, 0x4C, 0x5E, 0xA4, 0x6D, 0x96, 0xF3, 0xCC, 0x8B, 0x16, 0xC5, 0xF9, 0xDC, 0xB2, 0x27, 
0x6F, 0x7D, 0x01, 0xFD, 0x05, 0x1C, 0x64, 0xDF, 0x18, 0x66, 0x03, 0x00, 0x00, };
      
const uint8_t mqtt_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xB0, 0x15, 0x26, 0x5D, 0x04, 0x03, 0x6D, 0x71, 0x74, 0x74, 0x2E, 0x68, 
0x74, 0x6D, 0x6C, 0x00, 0xB5, 0x94, 0xC1, 0x6E, 0xD4, 0x30, 0x10, 0x86, 0x5F, 0xC5, 0xF2, 0x09, 
0x0E, 0xDE, 0xB0, 0x5D, 0xA9, 0x02, 0x94, 0xCD, 0x01, 0x55, 0x42, 0x95, 0x28, 0x5A, 0x44, 0x7B, 
0x46, 0x93, 0x78, 0xB2, 0xB1, 0xEA, 0xD8, 0xC6, 0x76, 0x76, 0xB7, 0xBC, 0x0E, 0x07, 0x1E, 0xA4, 
0x2F, 0xC6, 0x64, 0xB3, 0x49, 0x96, 0xA4, 0x48, 0x50, 0xA9, 0x87, 0x58, 0xC9, 0xCC, 0x64, 0xFE, 
0xF9, 0x3F, 0xD9, 0x4E, 0xA5, 0xDA, 0xB1, 0x42, 0x43, 0x08, 0x6B, 0x9E, 0xDB, 0x03, 0xA3, 0x47, 
0x38, 0xAF, 0x6A, 0xF0, 0x0F, 0x3C, 0x63, 0x93, 0xAC, 0xA8, 0x10, 0x24, 0x7A, 0xB6, 0x57, 0xB1, 
0x12, 0xB9, 0xF5, 0xF4, 0xCE, 0xB3, 0xB4, 0x5A, 0x9D, 0x97, 0x44, 0x15, 0x35, 0xF2, 0xEC, 0xE6, 
0xCB, 0xED, 0x2D, 0x4B, 0x93, 0x6A, 0x95, 0xA5, 0x09, 0x35, 0xC9, 0xD2, 0xD2, 0xFA, 0x9A, 0x1A, 
0x96, 0x0A, 0xB5, 0x0C, 0x18, 0x99, 0x92, 0x6B, 0x5E, 0x96, 0x9C, 0x49, 0x15, 0x20, 0xD7, 0x28, 
0x67, 0x62, 0x24, 0x20, 0xA7, 0x33, 0x78, 0xBB, 0x9F, 0x44, 0x0A, 0xAB, 0xC5, 0x21, 0x88, 0xE5, 
0xC5, 0x24, 0xDE, 0xCA, 0x89, 0xAD, 0xB7, 0x8D, 0xA3, 0x09, 0x35, 0xE4, 0xA8, 0x19, 0x85, 0xD6, 
0xBC, 0xFE, 0x1E, 0xE3, 0x37, 0x45, 0xC1, 0x0F, 0xDE, 0xDE, 0x93, 0x95, 0xEB, 0x0D, 0x4B, 0xD8, 
0xD5, 0xE7, 0xAF, 0x69, 0x72, 0x2C, 0xA2, 0x26, 0xCA, 0xB8, 0x26, 0xFE, 0xD1, 0xA6, 0xB0, 0x26, 
0x7A, 0xAB, 0x39, 0x33, 0x50, 0x63, 0xD7, 0xE2, 0xDA, 0x5D, 0x99, 0xC0, 0x59, 0x7C, 0x70, 0x14, 
0x88, 0x78, 0x88, 0x9C, 0x0C, 0x8D, 0xDD, 0x99, 0xD3, 0x50, 0x60, 0x65, 0xB5, 0x44, 0xD2, 0xC4, 
0xC3, 0x7B, 0xB6, 0x7C, 0x77, 0xB1, 0x58, 0x5E, 0xBE, 0x5D, 0x2C, 0x17, 0xAB, 0x37, 0x3C, 0x21, 
0x99, 0x23, 0x95, 0x6E, 0x9D, 0xFA, 0xA9, 0xA5, 0xB8, 0x64, 0xCF, 0x32, 0xD6, 0x04, 0xF4, 0xED, 
0x90, 0x94, 0x0A, 0x0E, 0x4C, 0xFF, 0x8F, 0x06, 0xB3, 0x15, 0x63, 0xEE, 0x2E, 0x2A, 0xAD, 0x7E, 
0x80, 0xB4, 0x3E, 0x4D, 0xDA, 0xB2, 0xEC, 0x9F, 0xCC, 0x43, 0x13, 0x6D, 0x61, 0x6B, 0xA7, 0x31, 
0x92, 0x67, 0x5B, 0x96, 0xE7, 0x3C, 0xEE, 0x4E, 0xCD, 0xFF, 0x82, 0x64, 0xD0, 0x9E, 0x83, 0x51, 
0x50, 0x13, 0x8F, 0x97, 0xC1, 0xE1, 0xA8, 0x64, 0x4F, 0xDB, 0xF4, 0x29, 0x1C, 0x63, 0x6E, 0x03, 
0x1A, 0x76, 0x1E, 0xD8, 0x86, 0x22, 0xF8, 0x3F, 0x44, 0x46, 0xFB, 0x9B, 0x53, 0xB3, 0xDE, 0xFE, 
0xD0, 0x7C, 0x4E, 0xED, 0x8C, 0xCA, 0x50, 0x35, 0xA7, 0x12, 0x1A, 0x87, 0x3E, 0x90, 0x8C, 0xD9, 
0xF6, 0x55, 0x03, 0xA5, 0xF9, 0x3A, 0x3D, 0x39, 0xA5, 0xB5, 0x91, 0xF6, 0x76, 0x80, 0x1D, 0xB6, 
0xB8, 0xF2, 0x26, 0x46, 0x6B, 0x4E, 0xA3, 0x79, 0xA4, 0xD3, 0xC7, 0x87, 0xEA, 0x68, 0x18, 0x3D, 
0x42, 0x62, 0x09, 0x8D, 0x8E, 0x4F, 0x81, 0x2A, 0x34, 0x82, 0x11, 0xDD, 0xB9, 0xE5, 0xD9, 0x27, 
0x55, 0x3B, 0xF0, 0x8C, 0x18, 0x94, 0x6A, 0xDB, 0x78, 0x78, 0xFC, 0xF5, 0xF8, 0xD3, 0x0E, 0xD0, 
0x3A, 0xA5, 0xA9, 0x64, 0xF7, 0xC1, 0x99, 0x35, 0x85, 0x56, 0xC5, 0xFD, 0x9A, 0xB7, 0x83, 0xDD, 
0x10, 0x81, 0x57, 0xAF, 0xA7, 0x83, 0x8C, 0x77, 0xCF, 0x7C, 0x90, 0xCE, 0xCE, 0xC7, 0x06, 0xBC, 
0x04, 0x3F, 0x93, 0xEC, 0x79, 0xF4, 0x17, 0x4C, 0x1B, 0x39, 0xDE, 0x39, 0x5D, 0xE2, 0x37, 0x75, 
0xE3, 0x44, 0x71, 0xE8, 0x04, 0x00, 0x00, };
                  
const uint8_t wifi_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xEF, 0x2E, 0x26, 0x5D, 0x04, 0x03, 0x77, 0x69, 0x66, 0x69, 0x2E, 0x68, 
0x74, 0x6D, 0x6C, 0x00, 0xC5, 0x56, 0xCB, 0x8E, 0xDA, 0x30, 0x14, 0xFD, 0x15, 0xCB, 0xAB, 0x76, 
0x11, 0x02, 0x0C, 0xA0, 0x76, 0x14, 0x22, 0x55, 0x1D, 0x95, 0x66, 0x31, 0x12, 0x2A, 0x8B, 0x59, 
0x8E, 0x9C, 0xF8, 0x42, 0x2C, 0x9C, 0x38, 0xB2, 0x1D, 0x02, 0x9F, 0xD3, 0x6F, 0xE9, 0x8F, 0xD5, 
0x0E, 0x09, 0x21, 0x84, 0xA2, 0x30, 0x6A, 0x3B, 0x0B, 0x13, 0x3F, 0xCF, 0xBD, 0xE7, 0x9C, 0xEB, 
0x10, 0x8F, 0xB2, 0x1D, 0x8A, 0x38, 0x51, 0x6A, 0x8E, 0x43, 0xB1, 0x47, 0xA6, 0x39, 0x99, 0x64, 
0x09, 0x91, 0x07, 0xEC, 0x23, 0x6F, 0x2D, 0x64, 0x62, 0x1F, 0x0C, 0x38, 0x55, 0xA0, 0x11, 0xA3, 
0x73, 0xBC, 0x5E, 0x63, 0x44, 0x99, 0x22, 0x21, 0x07, 0x6A, 0xD6, 0xDA, 0x00, 0x4E, 0x0C, 0x84, 
0x82, 0x44, 0x05, 0xD3, 0xB1, 0x13, 0x0A, 0x69, 0xFA, 0xD8, 0xF7, 0xE2, 0x87, 0xF3, 0x2D, 0x9A, 
0x69, 0x0E, 0xD8, 0xFF, 0xB2, 0x44, 0x2F, 0x81, 0xF3, 0x2D, 0x40, 0x9E, 0x1B, 0x3F, 0xF8, 0x9E, 
0x6B, 0x80, 0xFC, 0x0B, 0x34, 0x83, 0x40, 0x6D, 0x1E, 0xE7, 0xD3, 0x52, 0x14, 0x17, 0x33, 0x91, 
0xE0, 0x4E, 0x42, 0x9D, 0x09, 0xB2, 0x9D, 0xBD, 0x72, 0x46, 0xE3, 0x8B, 0x0D, 0x96, 0x85, 0xB3, 
0x91, 0x22, 0xCF, 0x4C, 0x2E, 0x9C, 0x84, 0xC0, 0x91, 0x99, 0x9A, 0x63, 0x92, 0xAD, 0x20, 0x92, 
0xA0, 0xB1, 0xBF, 0x34, 0xFB, 0x0A, 0x93, 0xAD, 0xE7, 0x96, 0xCB, 0xE6, 0x38, 0x4B, 0xB3, 0x5C, 
0x23, 0x92, 0x6B, 0x11, 0x89, 0x24, 0xE3, 0xA0, 0x61, 0x8E, 0x85, 0xA1, 0xDE, 0xC2, 0x8C, 0x44, 
0xAA, 0xA5, 0xE0, 0x18, 0xE9, 0x43, 0x66, 0xD6, 0xB3, 0x0A, 0x05, 0xA3, 0x94, 0x24, 0x70, 0x86, 
0x5F, 0xEA, 0xD6, 0x8C, 0x32, 0x4E, 0x22, 0x88, 0x05, 0xA7, 0x60, 0x92, 0x80, 0xFD, 0x23, 0x52, 
0x79, 0x06, 0x72, 0x59, 0x9F, 0x76, 0x4D, 0xF8, 0x52, 0x8D, 0xEE, 0xEF, 0xDB, 0xD5, 0xBE, 0x2A, 
0x75, 0x99, 0x57, 0xC1, 0xD6, 0xEC, 0x95, 0x8B, 0xCD, 0xAB, 0xD9, 0x7D, 0xA2, 0x17, 0x33, 0x4A, 
0x21, 0x45, 0x7F, 0x8E, 0x31, 0xBB, 0x12, 0xC3, 0x53, 0x19, 0x49, 0xDB, 0x98, 0x3C, 0xE4, 0x66, 
0xDE, 0xB5, 0x0B, 0xE6, 0x11, 0xCF, 0xDE, 0xC5, 0x67, 0xA5, 0x18, 0xC5, 0xFE, 0x6A, 0x15, 0x3C, 
0x5D, 0xF8, 0x7B, 0xD5, 0xCC, 0xAE, 0xE9, 0xB5, 0xBF, 0x1A, 0xF6, 0xFA, 0xE8, 0xED, 0x91, 0xA1, 
0x45, 0xB4, 0xDE, 0x56, 0x11, 0xBA, 0xBE, 0x26, 0x90, 0xDB, 0x7D, 0xD8, 0x6D, 0x99, 0xF8, 0x57, 
0x38, 0x95, 0x0A, 0xAB, 0xB2, 0xA0, 0x2A, 0xE1, 0xEB, 0x13, 0x9C, 0xA4, 0x1B, 0xA7, 0x2E, 0x45, 
0x5B, 0xDA, 0x9C, 0xEC, 0x24, 0x41, 0xB6, 0xBC, 0xA0, 0x72, 0xA2, 0x97, 0x0C, 0x67, 0x3C, 0xCB, 
0x30, 0x37, 0x84, 0x39, 0x45, 0x6B, 0xCC, 0x57, 0x37, 0x6B, 0xBD, 0x3E, 0x70, 0xA7, 0x32, 0x2D, 
0x53, 0x35, 0xD1, 0x2C, 0x0A, 0x8C, 0x2C, 0x4F, 0xDF, 0xBF, 0x2E, 0x7B, 0x31, 0x52, 0xFA, 0xC0, 
0x4B, 0x4A, 0x54, 0xC7, 0x8F, 0x68, 0x32, 0xCC, 0xF6, 0x35, 0x81, 0x28, 0x86, 0x68, 0x6B, 0x0A, 
0xD1, 0x12, 0x68, 0xA0, 0x6B, 0x0D, 0x9A, 0xF1, 0x8E, 0xF0, 0xDC, 0x16, 0x82, 0xCC, 0x6D, 0xB9, 
0x87, 0xB2, 0xC7, 0x15, 0xFD, 0x1F, 0xA5, 0x1D, 0xF4, 0xE3, 0x7F, 0xBD, 0x8A, 0x83, 0xCC, 0xB2, 
0x3E, 0xF5, 0xBB, 0x8E, 0x8D, 0x3E, 0x8F, 0x07, 0xA3, 0xD9, 0xA7, 0xC1, 0x68, 0x30, 0x1E, 0xDA, 
0x97, 0xD3, 0x3D, 0x8E, 0xF5, 0x22, 0xD1, 0xAA, 0xE5, 0x05, 0xD1, 0x50, 0x90, 0x43, 0x2F, 0x42, 
0x0D, 0x89, 0x45, 0x61, 0x49, 0xD4, 0xFD, 0xDB, 0x24, 0xA6, 0x93, 0x7F, 0xCF, 0xA2, 0x7B, 0x23, 
0x53, 0xD0, 0x09, 0x51, 0x5B, 0xEC, 0x3F, 0xFF, 0xFA, 0xA9, 0x22, 0x62, 0x6E, 0x24, 0x05, 0xF4, 
0x03, 0xE8, 0x1B, 0xEF, 0xE4, 0xB3, 0xC1, 0x2A, 0x29, 0x37, 0xA3, 0x2E, 0xE9, 0xF1, 0x74, 0x3A, 
0xA8, 0xDB, 0xF0, 0x9E, 0xFF, 0x95, 0xB5, 0x10, 0xDA, 0xBC, 0xF3, 0x15, 0xD9, 0x81, 0x65, 0x1F, 
0xE6, 0x5A, 0x8B, 0xB4, 0xAA, 0x9F, 0xE3, 0x00, 0x23, 0x91, 0x46, 0x9C, 0x45, 0xDB, 0x39, 0xB6, 
0xBB, 0x5E, 0x4C, 0x12, 0x1F, 0x3E, 0xE2, 0x13, 0x86, 0x4E, 0x91, 0x69, 0xCD, 0xA7, 0x44, 0x57, 
0x8F, 0x23, 0xF6, 0x22, 0x27, 0x92, 0x12, 0x79, 0xD2, 0xE0, 0x08, 0xDE, 0x24, 0x5A, 0x7F, 0x79, 
0xD8, 0x19, 0x2B, 0x45, 0x95, 0xEF, 0x6F, 0x67, 0x6B, 0xF0, 0x87, 0xB7, 0x08, 0x00, 0x00, };

const uint8_t devices_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0x35, 0x2C, 0x26, 0x5D, 0x04, 0x03, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 
0x73, 0x2E, 0x68, 0x74, 0x6D, 0x6C, 0x00, 0x6D, 0x51, 0xB1, 0x52, 0xC3, 0x30, 0x0C, 0xFD, 0x15, 
0x9F, 0x27, 0x18, 0x7C, 0x05, 0xBA, 0x95, 0xD4, 0x0B, 0x13, 0x0B, 0x0B, 0xEC, 0x9C, 0x63, 0x2B, 
0xB6, 0x0E, 0xD7, 0xF6, 0xD9, 0x4A, 0x9A, 0xF0, 0xF5, 0x38, 0x09, 0xE1, 0x7A, 0x2D, 0x83, 0x74, 
0xF2, 0xD3, 0xD3, 0xF9, 0xE9, 0xA9, 0x31, 0x38, 0x30, 0xED, 0x55, 0x29, 0x47, 0xDE, 0xC6, 0x91, 
0xD5, 0x10, 0x25, 0x7A, 0x34, 0xCC, 0xC0, 0x80, 0x1A, 0xC4, 0x0C, 0xB4, 0x96, 0x4B, 0x76, 0xC5, 
0x14, 0x0E, 0x94, 0x81, 0xCC, 0x65, 0xE3, 0xF6, 0x97, 0x30, 0x21, 0x79, 0xA8, 0x68, 0x49, 0x2A, 
0x6C, 0xB8, 0x57, 0xC1, 0x8A, 0x72, 0x46, 0xD2, 0x0E, 0x0A, 0x97, 0xAF, 0x81, 0x20, 0xE7, 0x3E, 
0x51, 0xCC, 0x50, 0x9A, 0xDD, 0xCC, 0x94, 0x4D, 0xDB, 0x13, 0xC5, 0xC0, 0x0A, 0x4D, 0x1E, 0x8E, 
0xDC, 0x01, 0x5A, 0x47, 0x07, 0xF6, 0xF4, 0x90, 0xC6, 0x67, 0x96, 0x94, 0x31, 0x18, 0x6C, 0x7D, 
0xA6, 0x91, 0x3D, 0x56, 0x68, 0x2D, 0x96, 0xDE, 0x49, 0x65, 0x8B, 0x41, 0x78, 0xE8, 0x36, 0x7A, 
0x17, 0x03, 0x89, 0x82, 0xDF, 0x70, 0x58, 0x28, 0xFC, 0x4F, 0x1D, 0x05, 0x56, 0x43, 0xA4, 0x8C, 
0x75, 0x68, 0xE2, 0x2C, 0x06, 0xED, 0x51, 0x7F, 0xD5, 0x4E, 0x8F, 0xDE, 0xBC, 0x2F, 0xFA, 0x3E, 
0xE0, 0x94, 0xBC, 0x22, 0xB8, 0xBB, 0xFF, 0x6F, 0x87, 0x00, 0x67, 0x2E, 0x5F, 0x32, 0xAA, 0xCC, 
0xDE, 0xE2, 0x10, 0x37, 0xED, 0xBB, 0x45, 0xFC, 0x5C, 0xB8, 0x7D, 0x4D, 0xD5, 0x28, 0x79, 0xED, 
0x56, 0x1B, 0xCD, 0xB4, 0x9A, 0x78, 0x0B, 0x6F, 0x4B, 0x6F, 0x7D, 0x34, 0x47, 0xBE, 0xBA, 0xF5, 
0xA9, 0x63, 0xE8, 0xD0, 0xF2, 0xCB, 0x91, 0xF5, 0x2E, 0x85, 0xFF, 0x7E, 0x74, 0x9B, 0x7F, 0x00, 
0xFB, 0x06, 0x0B, 0x20, 0xD3, 0x01, 0x00, 0x00, };


const uint8_t index_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0x49, 0x2D, 0x26, 0x5D, 0x04, 0x03, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x2E, 
0x68, 0x74, 0x6D, 0x6C, 0x00, 0xAD, 0x56, 0x69, 0x8E, 0xD3, 0x30, 0x14, 0xBE, 0x8A, 0x09, 0x42, 
0x80, 0x84, 0x09, 0x20, 0x01, 0xA5, 0x24, 0x81, 0x02, 0x45, 0x54, 0x62, 0x29, 0x50, 0xD6, 0x3F, 
0xC8, 0x89, 0x5F, 0x12, 0x33, 0x8E, 0x1D, 0xBC, 0xB4, 0x53, 0x2E, 0xC0, 0x01, 0x10, 0x27, 0xE0, 
0x28, 0x73, 0x31, 0x9E, 0xB3, 0x74, 0xA0, 0x33, 0x42, 0x08, 0xF8, 0xD1, 0x38, 0x79, 0xEB, 0xF7, 
0x56, 0x37, 0x39, 0xF3, 0xE0, 0xD9, 0xFD, 0xD5, 0xBB, 0xE5, 0x9C, 0xD4, 0xAE, 0x91, 0x59, 0x32, 
0x3C, 0x81, 0xF1, 0x8C, 0x24, 0x0D, 0x38, 0x46, 0x8A, 0x9A, 0x19, 0x0B, 0x2E, 0x8D, 0xBC, 0x2B, 
0xE9, 0x24, 0x1A, 0xC8, 0x28, 0xEE, 0x5A, 0x0A, 0x9F, 0xBC, 0x58, 0xA7, 0xD1, 0x5B, 0xFA, 0x6A, 
0x46, 0xEF, 0xEB, 0xA6, 0x65, 0x4E, 0xE4, 0x12, 0x22, 0x52, 0x68, 0xE5, 0x40, 0xA1, 0xCE, 0x62, 
0x9E, 0x02, 0xAF, 0x20, 0x68, 0x39, 0xE1, 0x24, 0x64, 0xF7, 0x1E, 0x91, 0x39, 0xB3, 0x5B, 0xB2, 
0x78, 0xB6, 0x4A, 0xE2, 0x8E, 0x84, 0x2C, 0x29, 0xD4, 0x01, 0x31, 0x20, 0xD3, 0x48, 0xA0, 0x66, 
0x44, 0x6A, 0x03, 0x65, 0x1A, 0x71, 0xE6, 0xD8, 0xF4, 0xD2, 0xE8, 0xF0, 0xD8, 0xE6, 0x46, 0x70, 
0x57, 0xA7, 0x1C, 0xD6, 0xA2, 0x00, 0xDA, 0x7D, 0x5C, 0x22, 0x42, 0x09, 0x27, 0x98, 0xA4, 0xB6, 
0x60, 0x12, 0xD2, 0xAB, 0x97, 0x48, 0xC3, 0x0E, 0x45, 0xE3, 0x9B, 0x63, 0x82, 0xB7, 0x60, 0xBA, 
0x2F, 0x96, 0x23, 0x41, 0xE9, 0x88, 0x28, 0xD6, 0x40, 0x1A, 0xAD, 0x05, 0x6C, 0x5A, 0x6D, 0x5C, 
0xF4, 0x0B, 0x0E, 0xEB, 0xB6, 0x12, 0x6C, 0x0D, 0xE0, 0x46, 0x34, 0x85, 0xB5, 0xF1, 0x8C, 0x37, 
0x42, 0x3D, 0x5E, 0xCD, 0x2F, 0xE3, 0x71, 0x19, 0x09, 0x77, 0x6E, 0x46, 0x59, 0x12, 0x77, 0xC9, 
0x4A, 0x72, 0xCD, 0xB7, 0xA4, 0x90, 0xCC, 0xDA, 0x34, 0x22, 0xF6, 0x40, 0x28, 0x9A, 0x4B, 0x0F, 
0xC4, 0x0A, 0x0E, 0x39, 0x33, 0x14, 0x35, 0x04, 0x0A, 0x73, 0xB1, 0x46, 0x3F, 0x41, 0x03, 0xCC, 
0x28, 0xDD, 0x30, 0x14, 0xEE, 0x49, 0x01, 0x84, 0x62, 0xEB, 0x91, 0x83, 0xAF, 0xA8, 0x4B, 0xBA, 
0x03, 0xC1, 0x3B, 0x4C, 0x6F, 0x41, 0x9D, 0x6E, 0x23, 0x62, 0xB4, 0x84, 0x8E, 0x2F, 0x2A, 0x24, 
0x6A, 0x15, 0x14, 0xBD, 0x1C, 0xF5, 0x76, 0x4E, 0x41, 0xF9, 0x88, 0x84, 0x3C, 0x86, 0x3C, 0x55, 
0xA1, 0x88, 0xCE, 0x00, 0xF4, 0xA1, 0x8E, 0xC2, 0x88, 0x8A, 0x0D, 0x31, 0x9E, 0x8D, 0x46, 0x62, 
0xD0, 0xA4, 0xC2, 0x41, 0x33, 0xA8, 0x87, 0x6F, 0xF4, 0xA7, 0x79, 0xA7, 0x6C, 0x5B, 0xA6, 0x46, 
0x49, 0xC9, 0x54, 0x45, 0x7B, 0xC6, 0xD3, 0xA3, 0xAF, 0x49, 0x1C, 0x78, 0x98, 0x14, 0x86, 0x3F, 
0x29, 0x32, 0xF4, 0xF3, 0xE7, 0xE6, 0xFB, 0x92, 0xDA, 0x53, 0x3D, 0x94, 0xC0, 0x9C, 0x37, 0x81, 
0xF9, 0xF0, 0xD5, 0xD3, 0xA3, 0x2F, 0x47, 0xDF, 0xE6, 0x2F, 0xF7, 0x7D, 0xFD, 0x5D, 0x4C, 0x1B, 
0x51, 0x8A, 0xD1, 0x63, 0xF6, 0x66, 0x41, 0x1F, 0x8A, 0xFF, 0x63, 0xB7, 0xF9, 0xE4, 0xDC, 0xCE, 
0xEE, 0x93, 0xE7, 0xAB, 0xD5, 0x9E, 0xD9, 0x7F, 0xB1, 0x5D, 0x0A, 0xD3, 0x6C, 0x98, 0x39, 0xBD, 
0x16, 0xBE, 0x45, 0x49, 0x64, 0xCD, 0x56, 0xAF, 0x66, 0x8F, 0x17, 0xEF, 0x67, 0x2F, 0x4E, 0x3A, 
0xF6, 0x12, 0x15, 0x63, 0xEC, 0x9E, 0x70, 0xF4, 0x9D, 0x87, 0x6F, 0xD8, 0x9B, 0xA3, 0xA1, 0x6E, 
0x58, 0x50, 0x09, 0x64, 0xF4, 0x2B, 0xA3, 0xF5, 0x52, 0x52, 0x09, 0x25, 0x8E, 0x45, 0x37, 0x22, 
0x38, 0x17, 0x5A, 0x6A, 0x33, 0x25, 0x9B, 0x1A, 0x51, 0xDE, 0x26, 0x35, 0x88, 0xAA, 0x76, 0x53, 
0x72, 0xF5, 0x4A, 0x7B, 0x78, 0x7B, 0xD0, 0x1D, 0x25, 0x5B, 0xC6, 0xB9, 0x50, 0xD5, 0x94, 0x5C, 
0x47, 0xDE, 0x08, 0xFD, 0x57, 0x33, 0x67, 0x27, 0x93, 0xBC, 0xBC, 0x55, 0xDC, 0x8E, 0x48, 0xF6, 
0x46, 0x60, 0x29, 0xA6, 0xA4, 0x07, 0x3F, 0x0A, 0x0B, 0x8E, 0xCD, 0x8D, 0xDD, 0xFD, 0x41, 0xE6, 
0x88, 0x8C, 0x52, 0xBA, 0xCF, 0xEE, 0xEB, 0x49, 0xAD, 0xA8, 0x14, 0x43, 0x89, 0x2B, 0xE7, 0x76, 
0x02, 0x71, 0x18, 0xBD, 0xFE, 0x79, 0x22, 0x20, 0x83, 0xA0, 0x8F, 0x23, 0x2A, 0x71, 0xD1, 0xA0, 
0x85, 0xCF, 0x80, 0x61, 0xDC, 0x40, 0xA8, 0xE4, 0xE7, 0x10, 0x3B, 0xE0, 0xB9, 0x77, 0x4E, 0xEF, 
0xA0, 0xE7, 0xDA, 0x70, 0x4C, 0x57, 0xAE, 0x91, 0xD8, 0x74, 0xC9, 0xA1, 0x86, 0x71, 0xE1, 0xED, 
0x90, 0x06, 0x92, 0xB3, 0xE2, 0xA0, 0x32, 0xDA, 0x2B, 0x4E, 0x07, 0x53, 0x63, 0x9C, 0xA4, 0xD3, 
0x45, 0x82, 0xD2, 0x0A, 0x4D, 0x13, 0xAD, 0x0A, 0x29, 0x8A, 0x03, 0xAC, 0xA4, 0x66, 0xDC, 0x3E, 
0xC6, 0x72, 0x7A, 0x56, 0xC1, 0x85, 0xF3, 0xCB, 0xD5, 0xF9, 0x8B, 0xE8, 0x79, 0x89, 0x4D, 0xD4, 
0xFB, 0xFE, 0x3D, 0x88, 0x2E, 0xA0, 0x3D, 0x14, 0xFF, 0x0E, 0x62, 0xFE, 0xB4, 0x03, 0x31, 0x7F, 
0x3A, 0x80, 0xF8, 0x4D, 0x56, 0x87, 0x5D, 0x4D, 0x37, 0x86, 0xB5, 0x6D, 0xBF, 0xD6, 0x2C, 0x14, 
0x61, 0x51, 0xED, 0x49, 0x74, 0x5B, 0x1D, 0xF7, 0x1F, 0x42, 0x2F, 0xA5, 0x17, 0x1C, 0xBB, 0xDC, 
0xD6, 0xB9, 0x66, 0x86, 0xD3, 0x1D, 0x27, 0xEC, 0xD8, 0x5E, 0xFB, 0xD8, 0x63, 0xA9, 0xB5, 0xDB, 
0xDB, 0xA0, 0x81, 0xD4, 0xB9, 0x3A, 0xBD, 0xBC, 0xA4, 0x16, 0x9C, 0x83, 0xA2, 0x87, 0xB8, 0x42, 
0x4E, 0x0E, 0xCD, 0x1A, 0x8C, 0xED, 0xD6, 0xE8, 0x6B, 0x7C, 0x39, 0xFA, 0xAE, 0x4F, 0xE9, 0xBB, 
0x41, 0x64, 0x68, 0xBD, 0xBD, 0xBE, 0xB2, 0xCE, 0x68, 0x55, 0x65, 0xE1, 0x6A, 0x5B, 0x68, 0x47, 
0x28, 0x59, 0xEA, 0x0D, 0x18, 0xE0, 0x24, 0xDF, 0x92, 0xDD, 0x58, 0x87, 0x2B, 0xD3, 0x4E, 0xE3, 
0xB8, 0x12, 0xAE, 0xF6, 0xF9, 0xE5, 0x42, 0x37, 0x71, 0x6E, 0xBC, 0xD2, 0x35, 0x5E, 0x3F, 0x6C, 
0x72, 0x2D, 0xBE, 0xF7, 0x88, 0x06, 0x03, 0x14, 0x2D, 0x44, 0xD9, 0xBD, 0xC0, 0x21, 0x8F, 0x02, 
0x2B, 0x4C, 0x2E, 0xB9, 0x4B, 0xAE, 0x5D, 0xB9, 0x3A, 0xC1, 0x8B, 0x8E, 0x2C, 0x91, 0xE6, 0x2B, 
0x26, 0x93, 0x78, 0xF0, 0x9A, 0xC4, 0x7D, 0xEC, 0xD9, 0x08, 0xA6, 0x30, 0xA2, 0x75, 0xC4, 0x9A, 
0x22, 0x8D, 0x3E, 0xDA, 0xF8, 0xE3, 0x27, 0x0F, 0x66, 0xDB, 0xDD, 0x59, 0x1F, 0x43, 0xF0, 0x71, 
0xCF, 0x3F, 0x21, 0x27, 0x14, 0x87, 0x43, 0x14, 0xB9, 0x73, 0xF3, 0x67, 0xA1, 0x38, 0x5C, 0x6C, 
0x78, 0x74, 0x7F, 0x0C, 0x7E, 0x00, 0x80, 0x55, 0xE7, 0x3C, 0x2E, 0x08, 0x00, 0x00, };


const uint8_t node_html[] PROGMEM={0x1F, 0x8B, 0x08, 0x08, 0xF8, 0x2A, 0x26, 0x5D, 0x04, 0x03, 0x6E, 0x6F, 0x64, 0x65, 0x2E, 0x68, 
0x74, 0x6D, 0x6C, 0x00, 0x85, 0x52, 0xCD, 0x6E, 0x9C, 0x30, 0x10, 0x7E, 0x15, 0xCB, 0xA7, 0xF6, 
0x80, 0x56, 0x6D, 0xA4, 0x1E, 0x2A, 0xE0, 0x92, 0xAA, 0x55, 0x2F, 0x39, 0xB4, 0x4F, 0x30, 0xD8, 
0x03, 0x58, 0x31, 0x36, 0x1D, 0x86, 0xEC, 0xEE, 0x73, 0xF4, 0x09, 0xAA, 0x1E, 0xF2, 0x20, 0xFB, 
0x62, 0x19, 0x67, 0x59, 0x92, 0x00, 0xAB, 0x1C, 0x6C, 0xEC, 0xF1, 0x30, 0xDF, 0xCF, 0x4C, 0x6E, 
0xDD, 0x83, 0x32, 0x1E, 0x86, 0xA1, 0xD0, 0x55, 0x3C, 0x28, 0x59, 0x59, 0x4F, 0xAE, 0x03, 0x3A, 
0xEA, 0x52, 0x2D, 0x5E, 0xB3, 0x16, 0xC1, 0x22, 0xA9, 0xBD, 0xE3, 0x36, 0xAB, 0x22, 0xC9, 0x59, 
0x97, 0x79, 0x7B, 0xF3, 0x3A, 0x85, 0x1D, 0x7B, 0x54, 0x12, 0x1E, 0x7A, 0x08, 0x97, 0x07, 0x0F, 
0xA1, 0xC9, 0x42, 0xB4, 0xA8, 0xCB, 0xBB, 0xD3, 0xDF, 0x7C, 0x97, 0xDE, 0xCA, 0x7C, 0xD7, 0xDE, 
0xC8, 0x26, 0x10, 0x65, 0x5E, 0x47, 0xEA, 0x04, 0xAE, 0x76, 0xE8, 0xED, 0x80, 0xAC, 0x9C, 0x2D, 
0x74, 0x5D, 0x6B, 0x65, 0xDD, 0x00, 0x95, 0x47, 0xBB, 0xA2, 0x22, 0xF0, 0x76, 0xC9, 0x90, 0xE2, 
0x7E, 0x11, 0x31, 0xD1, 0x67, 0x9D, 0xCD, 0xBE, 0xA8, 0x74, 0x38, 0x0C, 0xD9, 0xA7, 0xCF, 0x8B, 
0x84, 0x84, 0x9B, 0x35, 0x14, 0xC7, 0x5E, 0x18, 0x7B, 0xA8, 0xD0, 0x2B, 0x09, 0x15, 0x3A, 0x71, 
0xFD, 0x69, 0x37, 0x55, 0x40, 0x97, 0x54, 0xC4, 0x0E, 0x67, 0x19, 0xCF, 0xFF, 0x49, 0x5D, 0x17, 
0xFA, 0x91, 0xDF, 0x54, 0x36, 0x31, 0x30, 0x45, 0xAF, 0x15, 0x1F, 0x7B, 0x2C, 0x34, 0xE3, 0x81, 
0xB5, 0x4A, 0x15, 0x66, 0x04, 0x51, 0xFA, 0x72, 0xEE, 0x3D, 0x18, 0x6C, 0xA3, 0xB7, 0x28, 0x14, 
0xF0, 0xF0, 0x55, 0xDD, 0x3B, 0x36, 0x2D, 0x06, 0xAD, 0x08, 0xFF, 0x8C, 0x8E, 0xD0, 0xEE, 0x26, 
0xC3, 0xD6, 0xFB, 0xD2, 0x9F, 0x3A, 0x46, 0x96, 0x56, 0x0D, 0xF0, 0x80, 0x49, 0x73, 0x35, 0x32, 
0xC7, 0x30, 0xF1, 0x78, 0xBE, 0x48, 0xD5, 0x18, 0x8C, 0x77, 0xE6, 0xBE, 0xD0, 0x29, 0xEB, 0x4E, 
0x48, 0x7C, 0xF8, 0xA8, 0xE7, 0x1A, 0x1C, 0x94, 0xAC, 0x97, 0x61, 0x58, 0x5B, 0x71, 0xAE, 0xFD, 
0x63, 0x04, 0xB2, 0x40, 0xB3, 0x1B, 0xE7, 0xE2, 0x02, 0x39, 0x91, 0xBB, 0xF4, 0x34, 0x45, 0xA6, 
0x36, 0xAF, 0xA7, 0xEA, 0xEA, 0x24, 0x6D, 0xE2, 0x1E, 0x07, 0xC6, 0x4E, 0x97, 0xBF, 0x5D, 0xFA, 
0xC2, 0x84, 0xAC, 0xD6, 0xF3, 0xB4, 0xED, 0xC9, 0xFB, 0x76, 0xF8, 0x08, 0xF6, 0x1B, 0xD6, 0x30, 
0x7A, 0x1E, 0x36, 0x2C, 0xD9, 0x03, 0x05, 0x17, 0x9A, 0x2D, 0x6A, 0x84, 0xA2, 0x34, 0xAB, 0xC1, 
0x70, 0x4C, 0x9E, 0xDD, 0x02, 0x11, 0x36, 0x40, 0xEA, 0x36, 0x86, 0xDA, 0x35, 0x23, 0xC1, 0xE9, 
0xF1, 0xF4, 0x3F, 0x2A, 0x8B, 0xEA, 0xFB, 0xE9, 0x5F, 0x45, 0xCE, 0xCC, 0xEC, 0x2F, 0xC6, 0xBD, 
0x4B, 0x8E, 0xB0, 0x12, 0x19, 0x1B, 0xB4, 0xAC, 0x10, 0x40, 0xBA, 0xC2, 0x8A, 0x81, 0x58, 0x97, 
0xBF, 0xD0, 0x05, 0x67, 0xDC, 0xD5, 0x6E, 0x4D, 0x1D, 0x3A, 0x5F, 0x9E, 0x00, 0x18, 0xF6, 0x03, 
0x9D, 0x1B, 0x04, 0x00, 0x00, };