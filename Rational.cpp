//
// Created by Remyf on 3/4/2022.
//

#include "Rational.h"

Rational::Rational(int numerator, int denominator) : m_numerator{numerator}, m_denominator{denominator} {
    int gcd = Rational::gcd(numerator, denominator);
    if (std::abs(gcd) <= std::abs(numerator) and gcd != 0) {
        this->m_numerator /= gcd;
        this->m_denominator /= gcd;
    }

    if (this->m_denominator < 0) {
        // Switch the sign
        this->m_denominator *= -1;
        this->m_numerator *= -1;
    }
}

Rational::Rational(int numerator) : m_numerator{numerator}, m_denominator{1} {}

Rational::Rational(const std::string& value) {
    size_t index = value.find('/');

    if (index != std::string::npos) {
        int numerator = std::stoi(value.substr(0, index));
        int denominator = std::stoi(value.substr(index + 1, value.length() - index - 1));

        int gcd = Rational::gcd(m_numerator, m_denominator);
        if (gcd <= numerator and gcd != 0) {
            this->m_numerator = numerator / gcd;
            this->m_denominator = denominator / gcd;
        } else {
            this->m_numerator = numerator;
            this->m_denominator = denominator;
        }

        if (this->m_denominator < 0) {
            // Switch the sign
            this->m_denominator *= -1;
            this->m_numerator *= -1;
        }
    } else {
        int numerator = std::stoi(value);

        this->m_numerator = numerator;
        this->m_denominator = 1;
    }
}

int Rational::num() const {
    return this->m_numerator;
}

int Rational::den() const {
    return this->m_denominator;
}

void Rational::set_num(int numerator) {
    int gcd = this->gcd(numerator, this->m_denominator);
    if (std::abs(gcd) <= std::abs(numerator) and gcd != 0) {
        this->m_numerator = numerator / gcd;
        this->m_denominator /= gcd;
    } else {
        this->m_numerator = numerator;
    }
}

void Rational::set_den(int denominator) {
    int gcd = Rational::gcd(this->m_numerator, denominator);
    if (std::abs(gcd) <= std::abs(this->m_numerator) and gcd != 0) {
        this->m_numerator /= gcd;
        this->m_denominator = denominator / gcd;
    } else {
        this->m_denominator = denominator;
    }

    if (this->m_denominator < 0) {
        // Switch the sign
        this->m_denominator *= -1;
        this->m_numerator *= -1;
    }
}

std::string Rational::to_str() const {
    std::string str;
    str.append(std::to_string(this->m_numerator));
    str.append("/");
    str.append(std::to_string(this->m_denominator));
    return str;
}

double Rational::to_double() const {
    return (double) this->m_numerator / (double) this->m_denominator;
}

bool Rational::is_inf() const {
    return this->m_denominator == 0;
}

bool Rational::is_nan() const {
    return this->m_denominator == 0 && this->m_numerator == 0;
}

bool Rational::is_positive() const {
    return this->m_numerator > 0;
}

bool Rational::is_negative() const {
    return this->m_numerator < 0;
}

int Rational::gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int Rational::lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
