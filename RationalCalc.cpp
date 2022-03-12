//
// Created by Remyf on 3/4/2022.
//

#include <ctgmath>
#include "RationalCalc.h"

Rational RationalCalc::add(Rational lhs, Rational rhs) {
    int lcm = Rational::lcm(lhs.den(), rhs.den());

    int num = 0;
    if (lhs.den() == 0 or rhs.den() == 0) {
        return Rational {1, 0};
    }
    num += (lhs.num() * (lcm / lhs.den()));
    num += (rhs.num() * (lcm / rhs.den()));

    return Rational {num, lcm};
}

Rational RationalCalc::sub(Rational lhs, Rational rhs) {
    int lcm = Rational::lcm(lhs.den(), rhs.den());

    int num = 0;
    if (lhs.den() == 0 or rhs.den() == 0) {
        return Rational {1, 0};
    }
    num += (lhs.num() * (lcm / lhs.den()));
    num -= (rhs.num() * (lcm / rhs.den()));

    return Rational {num, lcm};
}

Rational RationalCalc::mul(Rational lhs, Rational rhs) {
    return Rational {lhs.num() * rhs.num(), lhs.den() * rhs.den()};
}

Rational RationalCalc::div(Rational lhs, Rational rhs) {
    return Rational {lhs.num() * rhs.den(), lhs.den() * rhs.num()};
}

Rational RationalCalc::pow(Rational lhs, int exponent) {
    if (exponent == 0) {
        return Rational {1, 1};
    } else {
        int num = std::ceil(std::pow(lhs.num(), (double) exponent));
        int den = std::ceil(std::pow(lhs.den(), (double) exponent));
        return Rational {num, den};
    }
}

Rational RationalCalc::calc(const std::string& expr) {
    auto index = expr.find(" + ");
    if (index != std::string::npos) {
        Rational lhs = Rational {expr.substr(0, index)};
        Rational rhs = Rational {expr.substr(index + 3)};
        return this->add(lhs, rhs);
    }
    index = expr.find(" - ");
    if (index != std::string::npos) {
        Rational lhs = Rational {expr.substr(0, index)};
        Rational rhs = Rational {expr.substr(index + 3)};
        return this->sub(lhs, rhs);
    }
    index = expr.find(" * ");
    if (index != std::string::npos) {
        Rational lhs = Rational {expr.substr(0, index)};
        Rational rhs = Rational {expr.substr(index + 3)};
        return this->mul(lhs, rhs);
    }
    index = expr.find(" / ");
    if (index != std::string::npos) {
        Rational lhs = Rational {expr.substr(0, index)};
        Rational rhs = Rational {expr.substr(index + 3)};
        return this->div(lhs, rhs);
    }
    index = expr.find(" ^ ");
    if (index != std::string::npos) {
        Rational lhs = Rational {expr.substr(0, index)};
        int right = std::stoi(expr.substr(index + 3));
        return this->pow(lhs, right);
    }

    return Rational {0, 0};
}
