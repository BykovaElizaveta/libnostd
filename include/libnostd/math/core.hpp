#ifndef LIBNOSTD_MATH_CORE_HPP
#define LIBNOSTD_MATH_CORE_HPP

/**
 * @brief Basic mathematical utils
 */
namespace math {
    /**
     * @brief     вычисление квадрата числа
     * @details   Вычисление квадрата через умножение числа самого на себя
     *            (number * number)
     * @param[in] num Вещественное число
     * @return квадрат числа
     */
    double square(double num);

    /**
     * @brief     Быстрое возведение в целую степень
     * @details   Возведение числа в целую степень с абсолютной точностью.
     *            Алгорит: возводим число в степени 1, 2, 4, ... , 2n, 
     *            каждый раз пока степень не равна 0, сдвигая на 1 бит вправо.
     *            Если последний бит 1 (не равен 0), домжножаем результат на base. 
     *            (number * number)
     * @param[in] base Основание. вещественное число
     * @param[in] exp Экспонента. Неотрицательное длинное число.
     * @return Число, возведенное в степень \f$ {base}^{exp} \f$
     */
    double fast_power(double basem, unsigned long long exp);

}

#endif