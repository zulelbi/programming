/*
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_LEN 5

void printArray(int* arr){
	int i;
	for(i = 0; i <= MAX_LEN - 1; i++){
		printf(i == MAX_LEN - 1 ? "%d\n" : "%d,  ", arr[i]);
	}
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){ // encontrar las posiciones, de los valores que sumados den el target
    *returnSize = 2;
    int * result = malloc(*returnSize * sizeof(int)); // se pide memoria para el array result
    int i, j;
  for(i = 0; i<= numsSize -1; i++){
      for(j = 1; j <= numsSize -1; j++){ // sumar cada posicion con cada una de las posiciones, parar comparar con el target
          if(i != j && (nums[i] + nums[j]) == target){ 
              result[0] = i; // como es un array de dos posiciones cuando se cumpla, se almacena el indice de las posiciones
              result[1] = j;
              return result;
              }
          }
      } 
   return result;
}

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    *returnSize = candiesSize;
    bool * result = malloc(*returnSize * sizeof(bool));
    int i, j, max = candies[0];
    for (i = 1; i <= candiesSize -1; i++){
        if(max <= candies[i]){ // encontrar el valor maximo (mayor cantidad de candies)
            max = candies[i];
        }
    }
    for (j = 0; j <= candiesSize -1; j++){
        if((candies[j] + extraCandies) >= max){ // comparar con el maximo, para saber si tiene mayor cantidad de candies entre los ninos
            result[j] = true;
        } else {
            result[j] = false;
        }
    }
    return result;
}

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){ // cuantos numeros son mas pequeños para cada posicion
    *returnSize = numsSize;
    int *result = malloc(*returnSize *sizeof(int));
    int i, j, k;              
    for(i = 0; i <= numsSize -1; i++, k = 0){
        for(j = 0; j <= numsSize -1; j++){
            if(i != j && nums[i] > nums[j]){ //se compara cada posicion del array a ver si es mayor que cada uno de las posiciones del mismo array
                k++; // suma todos los menores
            }
        }
        result[i] = k; //almacena la cantidad de menores en un array
    }
    return result;
} 

int findContentChildren(int* g, int gSize, int* s, int sSize){
    int i, j, sIndex, content_children = 0;
    
    for(i = 0; i <= gSize -1; i++){ // each children
        sIndex = -1; // candidate
        
        // find index of minor ammount of cookies to satistfy the kid
        for(j = 0; j <= sSize -1; j++) {
            if(s[j] == g[i]) {
                sIndex = j;
                break;
            } else if(s[j] > g[i]) { // it could satisfy the child
                if(sIndex == -1) sIndex = j; // first one found that could satisfy
                else if(s[sIndex] > s[j]) sIndex = j;
            }
        }
        
        if(sIndex != -1) {
            content_children++;
            s[sIndex] = 0;//so next time it does not consider it
        }
    }
    
    return content_children;
}

bool validMountainArray(int* arr, int arrSize){
    int i;
    
    if(arrSize < 3 || arr[0] > arr[1]){ // comprueba que pueda ser montaña o sea mas de 2 posiciones
        return false;
    }
    for(i = 0; i < arrSize -1; i++){
        if(arr[i] == arr[i + 1]){ // comprobar que no hayan dos valores iguales seguidos
            return false;
        }
        if(arr[i] > arr[i+1]){
            break;
        }
    }
    if(i == arrSize -1){ // comprobar que el numero mayor (pico) no se encuentre en el final del array
        return false;
    }
    for(; i < arrSize -1; i++){
        if(arr[i] == arr[i + 1]){
            return false;
        }
        if(arr[i] < arr[i+1]){
            return false;
        }
    }
 return i == arrSize -1;
}

int pivotIndex(int* nums, int numsSize){ //SOLO SIRVE PARA NUM POSITIVOS (se debe encontrar el num pivot, donde la suma de sus valores a la izq es igual a los de su derecha
    
    int i = numsSize/2, j, Left_sum, Right_sum; // se asume que el pivot se encuentra en la mitad, para iterar a los lados segun el resultado de las sumas
    
    while(i >= 0 && i <= numsSize -1){
		Left_sum = 0;
		Right_sum = 0;
		for(j = i - 1; j >= 0; j--){
            Left_sum += nums[j];
        }
        for(j = i + 1; j <= numsSize -1; j++){
            Right_sum += nums[j];
        }
         
		if(Left_sum == Right_sum){
			return i; // si coinciden las sumas ya se cncontró el pivot
		} else if(Left_sum > Right_sum){ // si la suma de los valores a la izquierda es mayor, hay que mover la i a la izq para reducir su valor, como equiparar la "balanza"
			i--;
		} else {
			i++;
		}
    } 
    return -1;
}
 

int main(int argc, char **argv)
{
	
	return 0;
}

