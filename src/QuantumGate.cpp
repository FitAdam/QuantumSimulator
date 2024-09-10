#include "QuantumGate.h"

// Constructor
QuantumGate::QuantumGate(const std::vector<std::vector<std::complex<double>>>& matrix) : gateMatrix(matrix) {}

// Apply the gate to a qubit's state
std::vector<std::complex<double>> QuantumGate::apply(const std::vector<std::complex<double>>& state) const {
    std::vector<std::complex<double>> result(2, 0.0);
    for(int i = 0; i < 2; ++i) { // Rows
        for(int j = 0; j < 2; ++j) { // Columns
            result[i] += gateMatrix[i][j] * state[j];
        }
    }
    return result;
}
