#include <cmath>
#include "lorentzContraction.hpp"

namespace lengthContraction
{
    double lorentzContraction(double velocity, double length){
        return length * std::sqrt(1 - velocity * velocity);
    }
}
