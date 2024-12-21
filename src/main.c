#include <stdio.h>
#include <string.h>

// 1. Unidades de comprimento
//
//
//
//
//
// 2. Unidades de massa
//
//
//
//
//
// 3. Unidades de volume
double converterVolume(double valorConvertido, int unidadeOrigem, int unidadeDestino) {

    // 1 = litro
    // 2 = mililitro
    // 3 = metro cubico

    // validação de erro de entrada
    if ((unidadeOrigem < 1 || unidadeOrigem > 3) || (unidadeDestino < 1 || unidadeDestino > 3)) {
        return -1;
    }

    // usando litros como valor base
    double litros;

    if (unidadeOrigem == 1) {
        litros = valorConvertido;
    } else if (unidadeOrigem == 2) {
        litros = valorConvertido / 1000.0;
    } else if (unidadeDestino == 3) {
        litros = valorConvertido * 1000.0;
    }

    if (unidadeDestino == 1) {
        return litros;
    } else if (unidadeDestino == 2) {
        return litros * 1000.0;
    } else if (unidadeDestino == 3) {
        return litros / 1000.0;
    }

    return -1;
}

// 4. Unidades de temperatura
//
//
//
//
//
// 5. Unidades de velocidade
//
//
//
//
//
// 6. Unidades de potência
//
//
//
//
//
// 7. Unidades de área
//
//
//
//
//
// 8. Unidades de tempo (segundos, minutos, horas)
//
//
//
//
//
// 9. Unidades de armazenamento de dados (Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB))
//
//
//
//
//
// 10. Interface de usuário
//
//
//
//
//

//int main()
//{
//    printf("Hello, World!\n");
//    return 0;
//}