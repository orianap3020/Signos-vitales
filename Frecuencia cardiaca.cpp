std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) return "bradicardia";
    if (lpm <= 100) return "normal";
    return "taquicardia";
}