#include <iostream>
#include "timeDilation.hpp"
#include "relativisticMass.hpp"
#include "lorentzContraction.hpp"

int main() {
    double foo = timedilation::speedDilation(0.95);
    std::cout << foo;
    return 0;
}
