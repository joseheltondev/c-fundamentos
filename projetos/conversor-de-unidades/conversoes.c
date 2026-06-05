#include "conversoes.h"

double converter_comprimento(int origem, int destino, double valor) {
    //convertendo a unidade de origem para a unidade metros
    switch (origem) {
    case 1:
        valor = valor * 1; // Metro para metro
        break;
    case 2:
        valor = valor / 100; // Centímetro para metro
        break;
    case 3:
        valor = valor / 1000; // Milímetro para metro
        break;
    case 4:
        valor = valor * 1000; // Quilômetro para metro
        break;
    }

    //convertendo de metros para a unidade de destino
    switch (destino) {
    case 1:
        valor = valor * 1; // Metro para metro
        break;
    case 2:
        valor = valor * 100; // Metro para Centímetro
        break;
    case 3:
        valor = valor * 1000; // Metro para Milímetro
        break;
    case 4:
        valor = valor / 1000; // Metro para Quilômetro
        break;
    }

    return valor;
}

double converter_massa(int origem, int destino, double valor) {
    //convertendo a unidade de origem para a unidade grama
    switch (origem) {
    case 1:
        valor = valor * 1000; // Quilograma para grama
        break;
    case 2:
        valor = valor * 1; // Grama para grama
        break;
    case 3:
        valor = valor / 1000; // Miligrama para grama
        break;
    case 4:
        valor = valor * 1000000; // Tonelada para grama
        break;
    }

    //convertendo de gramas para a unidade de destino
    switch (destino) {
    case 1:
        valor = valor / 1000; // Grama para quilograma
        break;
    case 2:
        valor = valor * 1; // Grama para grama
        break;
    case 3:
        valor = valor * 1000; // Grama para miligrama
        break;
    case 4:
        valor = valor / 1000000; // Grama para tonelada
        break;
    }

    return valor;
}

double converter_temperatura(int origem, int destino, double valor) {
    //convertendo a unidade de origem para a unidade Celsius
    switch (origem) {
    case 1:
        valor = valor * 1; // Celsius para Celsius
        break;
    case 2:
        valor = (valor - 32) * 5 / 9; // Fahrenheit para Celsius
        break;
    case 3:
        valor = valor - 273.15; // Kelvin para Celsius
        break;
    }

    //convertendo de Celsius para a unidade de destino
    switch (destino) {
    case 1:
        valor = valor * 1; // Celsius para Celsius
        break;
    case 2:
        valor = (valor * 9 / 5) + 32; // Celsius para Fahrenheit
        break;
    case 3:
        valor = valor + 273.15; // Celsius para Kelvin
        break;
    }

    return valor;
}

double converter_tempo(int origem, int destino, double valor) {
    //convertendo a unidade de origem para a unidade segundos
    switch (origem) {
    case 1:
        valor = valor * 1; // Segundo para segundo
        break;
    case 2:
        valor = valor * 60; // Minuto para segundo
        break;
    case 3:
        valor = valor * 3600; // Hora para segundo
        break;
    }

    //convertendo de segundos para a unidade de destino
    switch (destino) {
    case 1:
        valor = valor * 1; // Segundo para segundo
        break;
    case 2:
        valor = valor / 60; // Segundo para minuto
        break;
    case 3:
        valor = valor / 3600; // Segundo para hora
        break;
    }

    return valor;
}