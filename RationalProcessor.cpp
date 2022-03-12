#include "RationalProcessor.h"

#include <fstream>

RationalProcessor::RationalProcessor(const std::string& m_path) {
    this->path = m_path;
}

bool RationalProcessor::process() {
    // Open the file
    std::ifstream file {this->path};
    if (!file) return false;

    // Get the file name from the path
    auto index = this->path.rfind('.');
    std::string file_name = this->path.substr(0, index);
    file_name.append(".out");

    // Create output file
    std::ofstream output {file_name};
    if (!output) return false;

    std::string line;
    while (std::getline(file, line)) {
        Rational result = this->calculator.calc(line);

        output << result.to_str() << std::endl;
    }
    file.close();
    output.close();

    return true;
}