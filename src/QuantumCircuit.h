#ifndef QUANTUMCIRCUIT_H
#define QUANTUMCIRCUIT_H

#include "Qubit.h"
#include "QuantumGate.h"
#include <vector>

class QuantumCircuit {
public:
    QuantumCircuit(int numQubits);

    // Apply a gate to a specific qubit
    void applyGate(const QuantumGate& gate, int qubitIndex);

    // Get the state of all qubits
    std::vector<Qubit> getQubits() const;

    // Simulate measurement of all qubits
    std::vector<int> measure() const;

private:
    int numQubits;
    std::vector<Qubit> qubits;
};

#endif // QUANTUMCIRCUIT_H
