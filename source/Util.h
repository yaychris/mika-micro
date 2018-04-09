#pragma once

#include <cmath>

const double pi = 2.0 * acos(0.0);
const double twoPi = 2.0 * pi;
inline double pitchFactor(double p) { return pow(1.0595, p); }
inline double pitchToFrequency(double p) { return 440.0 * pitchFactor(p - 69); }
inline double fastAtan(double x) { return x / (1.0 + .28 * (x * x)); }