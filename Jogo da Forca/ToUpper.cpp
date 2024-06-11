#pragma once

#include "Assinaturas.hpp"

inline std::string toUpper(std::string str) {

    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return toupper(c); });

    return str;
}