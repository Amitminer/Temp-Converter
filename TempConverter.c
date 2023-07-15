#include <stdio.h>
#include <ctype.h>

//ReturnType FunctionName ()
float convert(float temperature, char unit) {
    if (tolower(unit) == 'c') {
        float fahrenheit = (temperature * 9 / 5) + 32;
        return fahrenheit;  // Return the converted temperature in Fahrenheit
    } else if (tolower(unit) == 'f') {
        float celsius = (temperature - 32) * 5 / 9;
        return celsius;  // Return the converted temperature in Celsius
    } else {
        return -1;  // Invalid unit entered
    }
}

int main() {
    // type name = value(opt);
    float temperature;
    char unit;
    
    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    
    printf("Enter the unit (C/F): ");
    scanf(" %c", &unit);

    float convertedTemp = convert(temperature, unit);
    
    if (convertedTemp == -1) {
        printf("Invalid unit entered!\n");
    } else {
        if (tolower(unit) == 'c') {
            printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", temperature, convertedTemp);
        } else if (tolower(unit) == 'f') {
            printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", temperature, convertedTemp);
        }
    }

    return 0;
}