#ifndef QUANTUMGATE_H
#define QUANTUMGATE_H

#include <vector>
#include <complex>

class QuantumGate {
public:
    QuantumGate(const std::vector<std::vector<std::complex<double>>>& matrix);

    // Apply the gate to a qubit's state
    std::vector<std::complex<double>> apply(const std::vector<std::complex<double>>& state) const;

private:
    std::vector<std::vector<std::complex<double>>> gateMatrix;
};

#endif // QUANTUMGATE_H
