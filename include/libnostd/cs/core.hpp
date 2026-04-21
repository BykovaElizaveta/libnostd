#ifndef LIBNOSTD_CS_CORE_HPP
#define LIBNOSTD_CS_CORE_HPP
#include <string

/**
 *  @brief BAsic Computer science utils
 */
namespace cs {
    /**
     *  @brief    Преобразует целое (беззнаковое) десятиричное в 16-ричное
     * 
     * %param[in] decimal Целое десятичное число
     * 
     * @return    std::string Число в 16-ной системе счисления
     */
    std::string dec2hex(unsigned int decimal);

    /**
     *  @brief    Преобразует из 16-ричной  системы счисления в десятичную
     * 
     * %param[in] hexademal Строка с числом в 16-ной системе счисления
     * 
     * @return     unsigned int Число в десятичной системе счисления
     */
    unsigned int hex2dec(const std::string & hexademal);
}

#endif