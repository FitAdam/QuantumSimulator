#include "QuantumCircuit.h"

// Constructor
QuantumCircuit::QuantumCircuit(int num) : numQubits(num), qubits(num, Qubit()) {}

// Apply a gate to a specific qubit
void QuantumCircuit::applyGate(const QuantumGate& gate, int qubitIndex) {
    if(qubitIndex >= 0 && qubitIndex < numQubits) {
        std::vector<std::complex<double>> currentState = qubits[qubitIndex].getState();
        std::vector<std::complex<double>> newState = gate.apply(currentState);
        qubits[qubitIndex].setState(newState);
    }
    // Else, handle error or throw exception
}

// Get the state of all qubits
std::vector<Qubit> QuantumCircuit::getQubits() const {
    return qubits;
}

// Simulate measurement (simple implementation)
std::vector<int> QuantumCircuit::measure() const {
    std::vector<int> results;
    for(const auto& qubit : qubits) {
        auto state = qubit.getState();
        double probability0 = std::norm(state[0]);
        double randVal = static_cast<double>(rand()) / RAND_MAX;
        if(randVal < probability0)
            results.push_back(0);
        else
            results.push_back(1);
    }
    return results;
}
