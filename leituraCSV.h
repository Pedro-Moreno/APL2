/*
    Faculdade de Computação e Informática
    Estrutura de Dados II
    Professor: Jean M. Laine
    Aplicação 1 (Parte A e B)
    Aplicação que ajuda a controlar as calorias e a perda de peso
    Alunos:
        - Diego Guedes de Moraes (32148127)
        - Erick Cauã Ferreira Gomes (32116251)
        - Laura C. Balbachan dos Santos (32173008)
        - Pedro Moreno Campos (32172656)
*/

#ifndef LEITURACSV_H_
#define LEITURACSV_H_

#include <iostream>
#include <string>
#include <fstream>
#include "Alimentos.h"
#include "AVL.cpp"
#include "NodeAVL.cpp"

using namespace std;

void leituraCSV(AVL *arvore)
{
    string key;
    string calories, caloriesFromFat, totalFatG, totalfatDV, sodiumG, sodiumDV, potassiumG, potassiumDV;
    string totalCarbG, totalCarbDV, dietaryFiberG, dietaryFiberDV, sugars, protein, vitaminA, vitaminC;
    string calcium, iron, saturatedFatDV, saturatedFatMG, cholesterolDV, cholesterolMG, foodType;

    string nameFile = "teste2.CSV";
    ifstream csvFile(nameFile);

    if (csvFile.is_open())
    {
        while (!csvFile.eof())
        {
            getline(csvFile, key, ';');
            getline(csvFile, calories, ';');
            getline(csvFile, caloriesFromFat, ';');
            getline(csvFile, totalFatG, ';');
            getline(csvFile, totalfatDV, ';');
            getline(csvFile, sodiumG, ';');
            getline(csvFile, sodiumDV, ';');
            getline(csvFile, potassiumG, ';');
            getline(csvFile, potassiumDV, ';');
            getline(csvFile, totalCarbG, ';');
            getline(csvFile, totalCarbDV, ';');
            getline(csvFile, dietaryFiberG, ';');
            getline(csvFile, dietaryFiberDV, ';');
            getline(csvFile, sugars, ';');
            getline(csvFile, protein, ';');
            getline(csvFile, vitaminA, ';');
            getline(csvFile, vitaminC, ';');
            getline(csvFile, calcium, ';');
            getline(csvFile, iron, ';');
            getline(csvFile, foodType);

            Alimentos *alimento = new Alimentos(key, stof(calories), stof(caloriesFromFat), stof(totalFatG), stof(totalfatDV), stof(sodiumG), stof(sodiumDV), stof(potassiumG), stof(potassiumDV), stof(totalCarbG), stof(totalCarbDV), stof(dietaryFiberG), stof(dietaryFiberDV), stof(sugars), stof(protein), stof(vitaminA), stof(vitaminC), stof(calcium), stof(iron), foodType);

            // adicionar na árvore
            arvore->Insert(key, alimento);
        }
        csvFile.close();
    }
}
#endif
