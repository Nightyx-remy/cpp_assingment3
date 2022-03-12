#ifndef CPP_ASSINGMENT3_RATIONALPROCESSOR_H
#define CPP_ASSINGMENT3_RATIONALPROCESSOR_H

#include <string>
#include "RationalCalc.h"

class RationalProcessor {
private:
    RationalCalc calculator;
    std::string path;
public:
    /**
     * Create a RationalProcessor object using the given path.
     *
     * @param m_path the path to the file being process
     */
    explicit RationalProcessor(const std::string& m_path);

    /**
     * Processes the file (representing a list of expression, separated by a new line) with the correct path.
     *
     * @return true if the function finished correctly
     */
    bool process();
};


#endif //CPP_ASSINGMENT3_RATIONALPROCESSOR_H
