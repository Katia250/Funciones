#include <iostream>
using namespace std;

float celsiusAFahrenheit(float celsius){
    float 
    fahrenheit= celsius* 9 / 5 + 32;
    return fahrenheit;
}

int main(){
    float celsius, resultado;
    
    cout<<"Ingrese la temperatura en Celsius "<<endl;
    cin>>celsius;

    resultado=celsiusAFahrenheit(celsius);

    cout<<"La temperatura en fahrenheit:"<<resultado <<endl;

return 0;
}