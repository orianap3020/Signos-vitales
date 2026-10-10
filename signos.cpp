#include <iostream>
#include <string>
double fahrenheitACelsius(double f) { 
    return (f-32)*5.0 / 9.0;
    }
   std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) return "bradicardia";
    if (lpm <= 100) return "normal";
    return "taquicardia";
} 

int main() {
    double tempF = 98.6;
    std::cout<< "Temperatura en Celsius:" << fahrenheitACelsius(tempF) << std ::endl;
    int lpm = 80 ;
    std::cout << "Frecuencia cardiaca: " << clasificarFrecuencia(lpm) << std::endl;
    
    return 0;
}