#ifndef CPP_ASSINGMENT3_RATIONALCALC_H
#define CPP_ASSINGMENT3_RATIONALCALC_H

#include "Rational.h"

class RationalCalc {
public:
    /**
     * This function add two rational numbers
     *
     * @param lhs the first rational number (Left Hand Side)
     * @param rhs the second rational number (Right Hand Side)
     * @return the addition of the two rational numbers.
     */
    static Rational add(Rational lhs, Rational rhs);

    /**
     * This function subtract two rational numbers
     *
     * @param lhs the first rational number (Left Hand Side)
     * @param rhs the second rational number (Right Hand Side)
     * @return the subtraction of the two rational numbers.
     */
    static Rational sub(Rational lhs, Rational rhs);

    /**
     * This function multiply two rational numbers
     *
     * @param lhs the first rational number (Left Hand Side)
     * @param rhs the second rational number (Right Hand Side)
     * @return the multiply of the two rational numbers.
     */
    static Rational mul(Rational lhs, Rational rhs);

    /**
     * This function divide two rational numbers
     *
     * @param lhs the first rational number (Left Hand Side)
     * @param rhs the second rational number (Right Hand Side)
     * @return the divide of the two rational numbers.
     */
    static Rational div(Rational lhs, Rational rhs);

    /**
     * This function calculate the exponent of a rational number
     *
     * @param lhs the first rational number (Left Hand Side)
     * @param exponent the value of the exponent
     * @return the calculated value
     */
    static Rational pow(Rational lhs, int exponent);

    /**
     * This function process an expression (represented by a string).
     * Each operator has a space before and after it.
     *
     * @param expr the string representing the expression
     * @return the result of the expression
     */
    Rational calc(const std::string& expr);
};


#endif //CPP_ASSINGMENT3_RATIONALCALC_H
