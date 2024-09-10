#ifndef QUBIT_H
#define QUBIT_H

#include <vector>
#include <complex>

class Qubit {
public:
    Qubit(); // Default constructor initializes to |0>
    Qubit(std::complex<double> alpha, std::complex<double> beta); // Initialize with specific state

    // Get the state vector
    std::vector<std::complex<double>> getState() const;

    // Set the state vector
    void setState(const std::vector<std::complex<double>>& state);

private:
    std::vector<std::complex<double>> stateVector; // [alpha, beta]
};

#endif // QUBIT_H
