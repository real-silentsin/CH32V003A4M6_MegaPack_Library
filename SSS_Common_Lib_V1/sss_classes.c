/********************************** (C) COPYRIGHT ******************************
 * File Name          : sss_classes.c
 * Author             : vantr
 * Description        : Общая библиотека
 *******************************************************************************
 * Copyright (c) 2025 Vantr Universal Co., Ltd.
 *******************************************************************************/
// -----------------------------------------------------------------------------
#include "sss_classes.h"
// -----------------------------------------------------------------------------
// Перевод целого числа [0..99] в символы
Params _int_to_str(uint8_t value) {
    
    Params result;
    
#ifdef USE_LCD
    result.value1 = (((value / 10) % 10) + 0x30);
    result.value2 = ((value % 10) + 0x30);
#else
    result.value1 = ((value / 10) % 10);
    result.value2 = (value % 10);
#endif
    
    return (result);
}
// -----------------------------------------------------------------------------
// Перевод целого числа в символьное шестнадцатиричное
// Полностью зависит от файла symbols.h и кодировки типа _symbol
Params _int_to_hex(uint8_t value) {
    
    Params result;
    
    result.value1 = HEX_STR[(value >> 4) & 0x0F];
    result.value2 = HEX_STR[value & 0x0F];
    
    return result;
}
// -----------------------------------------------------------------------------
// Разбор чисел до 9999 на отдельные значения - { 9, 9, 9, 9 }
Params decompose_uint16 (uint16_t value) {

    Params result;

    result.sign = (value / 1000) % 10;   // Тысячи
    result.extend = (value / 100) % 10;  // Сотни
    result.value2 = (value / 10) % 10;   // Десятки
    result.value1 = value % 10;          // Единицы

    return result;
}
// -----------------------------------------------------------------------------
