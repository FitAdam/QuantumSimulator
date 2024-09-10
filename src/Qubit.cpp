#include "Qubit.h"

// Default constructor: |0>
Qubit::Qubit() : stateVector{1.0, 0.0} {}

// Initialize with specific state
Qubit::Qubit(std::complex<double> alpha, std::complex<double> beta) : stateVector{alpha, beta} {}

// Get the state vector
std::vector<std::complex<double>> Qubit::getState() const {
    return stateVector;
}

// Set the state vector
void Qubit::setState(const std::vector<std::complex<double>>& state) {
    if(state.size() == 2) {
        stateVector = state;
    }
    // Else, handle error or throw exception
}
