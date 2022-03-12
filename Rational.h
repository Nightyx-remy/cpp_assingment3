#ifndef CPP_ASSINGMENT3_RATIONAL_H
#define CPP_ASSINGMENT3_RATIONAL_H

#include <string>

class Rational {
private:
    int m_numerator;
    int m_denominator;
public:
    /**
     * Creates a Rational object with the given numerator and denominator and simplify the fraction.
     *
     * @param numerator the numerator of the rational number
     * @param denominator the denominator of the rational number
     */
    explicit Rational(int numerator, int denominator);

    /**
     * Creates a Rational object with the given numerator and 1 as the m_denominator.
     *
     * @param numerator the numerator of the rational number
     */
    explicit Rational(int numerator);

    /**
     * Creates a Rational object with a string representing the fraction. ('/' is used to divide the m_numerator and m_denominator)
     *
     * @param value the string representing the rational number
     */
    explicit Rational(const std::string& value);

    /**
     * Getter for the m_numerator variable
     *
     * @return the m_numerator of the fraction
     */
    int num() const;

    /**
     * Getter for the m_denominator variable
     *
     * @return the m_denominator variable
     */
    int den() const;

    /**
     * Setter for the m_numerator variable. Also simply the fraction once set.
     *
     * @param m_numerator the new value for the m_numerator
     */
    void set_num(int numerator);

    /**
     * Setter for the m_denominator variable. Also simplify the fraction once set.
     *
     * @param m_denominator the new value for the m_denominator.
     */
    void set_den(int denominator);

    /**
     * Create a string representing the fraction.
     *
     * @return the created string
     */
    std::string to_str() const;

    /**
     * Return the double value corresponding to this rational number.
     *
     * @return the double representation
     */
    double to_double() const;

    /**
     * Returns if the rational number if positive or not (0 is treated as not positive and not negative) .
     *
     * @return true if the rational number is positive, false otherwise
     */
    bool is_positive() const;

    /**
     * Returns if the rational number if negative or not (0 is treated as not positive and not negative) .
     *
     * @return true if the rational number is negative, false otherwise
     */
    bool is_negative() const;

    /**
     * Returns if the rational number is infinity (a value other than 0 for the m_numerator and 0 for the m_denominator)
     *
     * @return true if the rational number is inf, false otherwise
     */
    bool is_inf() const;

    /**
     * Returns if the rational number is Not A Number (0 for the m_numerator and 0 for the m_denominator)
     *
     * @return true if the rational number is NaN, false otherwise
     */
    bool is_nan() const;

    /**
     * Useful function to calculate the Greatest Common Divider of two number. This functions is used to simplify fractions
     *
     * @param a the first number
     * @param b the second number
     * @return the Greatest Common Divider of the two given number
     */
    static int gcd(int a, int b);

    /**
     * Useful function to calculate the Lowest Common Multiple of two number. This functions is used to put fractions
     * to the same m_denominator
     *
     * @param a the first number
     * @param b the second number
     * @return the Lowest Common Multiple of the two given number
     */
    static int lcm(int a, int b);
};


#endif //CPP_ASSINGMENT3_RATIONAL_H
