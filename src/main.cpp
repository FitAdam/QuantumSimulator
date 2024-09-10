#include <iostream>
#include "Qubit.h"
#include "QuantumGate.h"
#include "QuantumCircuit.h"

int main() {
    // Create a single qubit
    Qubit qubit;

    // Define the Hadamard gate
    std::vector<std::vector<std::complex<double>>> H = {
        {1.0/std::sqrt(2), 1.0/std::sqrt(2)},
        {1.0/std::sqrt(2), -1.0/std::sqrt(2)}
    };
    QuantumGate hadamard(H);

    // Apply Hadamard gate to qubit
    qubit.setState(hadamard.apply(qubit.getState()));

    // Print the new state
    auto state = qubit.getState();
    std::cout << "Qubit state after Hadamard gate:" << std::endl;
    std::cout << "Alpha: " << state[0] << std::endl;
    std::cout << "Beta: " << state[1] << std::endl;

    // Measure the qubit
    QuantumCircuit circuit(1);
    circuit.applyGate(hadamard, 0);
    auto measurement = circuit.measure();
    std::cout << "Measurement result: " << measurement[0] << std::endl;

    return 0;
}
