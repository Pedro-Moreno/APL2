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

#ifndef ALIMENTOS_H_
#define ALIMENTOS_H_

#include <iostream>
#include <string>
using namespace std;

class Alimentos
{
private:
   string key, foodType;
   float calories, caloriesFromFat, totalFatG, totalFatDV, sodiumG, sodiumDV, potassiumG, potassiumDV;
   float totalCarbG, totalCarbDV, dietaryFiberG, dietaryFiberDV, sugars, protein, vitaminA, vitaminC;
   float calcium, iron;

public:
   Alimentos(){};
   // construtor
   Alimentos(string key, float calories, float caloriesFromFat, float totalFatG, float totalFatDV, float sodiumG, float sodiumDV, float potassiumG, float potassiumDV, float totalCarbG, float totalCarbDV, float dietaryFiberG, float dietaryFiberDV, float sugars, float protein, float vitaminA, float vitaminC, float calcium, float iron, string foodType)
   {
      this->key = key;
      this->calories = calories;
      this->caloriesFromFat = caloriesFromFat;
      this->totalFatG = totalFatG;
      this->totalFatDV = totalFatDV;
      this->sodiumG = sodiumG;
      this->sodiumDV = sodiumDV;
      this->potassiumG = potassiumG;
      this->potassiumDV = potassiumDV;
      this->totalCarbG = totalCarbG;
      this->totalCarbDV = totalCarbDV;
      this->dietaryFiberG = dietaryFiberG;
      this->dietaryFiberDV = dietaryFiberDV;
      this->sugars = sugars;
      this->protein = protein;
      this->vitaminA = vitaminA;
      this->vitaminC = vitaminC;
      this->calcium = calcium;
      this->iron = iron;
      this->foodType = foodType;
   }

   // getters e setters atributos
   string getKey() { return this->key; };
   void setKey(string key) { this->key = key; };

   float getCalories() { return this->calories; };
   void setCalories(float calories) { this->calories = calories; };

   float getCaloriesFromFat() { return this->caloriesFromFat; };
   void setCaloriesFromFat(float caloriesFromFat) { this->caloriesFromFat = caloriesFromFat; };

   float getTotalFatG() { return this->totalFatG; };
   void setTotalFatG(float totalFatG) { this->totalFatG = totalFatG; }

   float getTotalFatDV() { return this->totalFatDV; };
   void setTotalFatDV(float totalFatDV) { this->totalFatDV = totalFatDV; }

   float getSodiumG() { return this->sodiumG; };
   void setSodiumG(float sodiumG) { this->sodiumG = sodiumG; }

   float getSodiumDV() { return this->sodiumDV; };
   void setSodiumDV(float sodiumDV) { this->sodiumDV = sodiumDV; }

   float getPotassiumG() { return this->potassiumG; };
   void setPotassiumG(float potassiumG) { this->potassiumG = potassiumG; }

   float getPotassiumDV() { return this->potassiumDV; };
   void setPotassiumDV(float potassiumDV) { this->potassiumDV = potassiumDV; }

   float getTotalCarbG() { return this->totalCarbG; };
   void setTotalCarbG(float totalCarbG) { this->totalCarbG = totalCarbG; }

   float getTotalCarbDV() { return this->totalCarbDV; };
   void setTotalCarbDV(float totalCarbDV) { this->totalCarbDV = totalCarbDV; }

   float getDietaryFiberG() { return this->dietaryFiberG; };
   void setDietaryFiberG(float dietaryFiberG) { this->dietaryFiberG = dietaryFiberG; }

   float getDietaryFiberDV() { return this->dietaryFiberDV; };
   void setDietaryFiberDV(float dietaryFiberDV) { this->dietaryFiberDV = dietaryFiberDV; }

   float getSugars() { return this->sugars; };
   void setSugars(float sugars) { this->sugars = sugars; }

   float getProtein() { return this->protein; };
   void setProtein(float protein) { this->protein = protein; }

   float getVitaminA() { return this->vitaminA; };
   void setVitaminA(float vitaminA) { this->vitaminA = vitaminA; }

   float getVitaminC() { return this->vitaminC; };
   void setVitaminC(float vitaminC) { this->vitaminC = vitaminC; }

   float getCalcium() { return this->calcium; };
   void setCalcium(float calcium) { this->calcium = calcium; }

   float getIron() { return this->iron; };
   void setIron(float iron) { this->iron = iron; }

   string getFoodType() { return this->foodType; };
   void setFoodType(string foodType) { this->foodType = foodType; }
};

#endif