#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "array.h"

using namespace std;

void enterDataIntoArray(int *array){
    for (int i = 0; i < SIZE; i++) {
        cout<<"*(array +"<<i<<") = "<<endl;
        scanf("%d", &*(array +i));
        //cin >> (&*(array +i));
    }
}

void displayArray(int *array){

    for(int i=0; i<SIZE; i++){
        cout<<"*(array +"<<i<<") = "<<*(array+i)<<endl;
    }
}

int findMaximumValue(int *array){
    int max = *array;
    for(int i=0; i<SIZE; i++){
        if(*(array +i) > max){
            max = *(array +i);
        }
    }
    return max;
}

int findMinimumValue(int *array){
    int min = *array;
    for(int i=0; i<SIZE; i++){
        if(*(array +i) < min){
            min = *(array +i);
        }
    }
    return min;
}

float calculateAverage(int *array){
    int sum = 0;
    for(int i=0; i<SIZE; i++){
        sum += *(array +i);
    }
    float average = (float) sum / SIZE;
    return average;
}

//void saveArrayToFile(int *array){
//    FILE *fptr = NULL;
//    fptr = fopen("plik.txt", "a");
//    if(fptr == NULL){
//        cout<<"Blad otwierania pliku"<<endl;
//        exit(1);
//    }
//    for(int i=0; i<SIZE; ++i){
//        fprintf(fptr,"array[%d] = %d\n",i, array[i]);
//    }
//    fclose(fptr);
//}

void saveArrayToFile(int *array){

    ofstream zapis("plik.txt");
    if(zapis = NULL){
        cout<<"Blad otwierania pliku"<<endl;
        exit(1);
    }
    for(int i=0; i<SIZE; ++i){
        zapis<<"array["<<i<<"] = "<<array[i]<<endl;
    }
    zapis.close();
}


//void getArrayFromFile(int *array){
//    FILE * fptr = NULL;
//    char fileLine[100];
//    fptr = fopen("plik.txt", "r");
//    if (fptr != NULL)
//    {
//        while (!feof(fptr))
//        {
//            fgets(fileLine, 100, fptr);
//            if (!feof(fptr))
//            {
//                puts(fileLine);
//            }
//        }
//    }
//    else
//    {
//        cout<<"Blad otwierania pliku"<<endl;
//    }
//    fclose(fptr);
//}

void getArrayFromFile(int *array){

    char fileLine[100];
    ifstream odczyt("plik.txt");
    if (odczyt = NULL)
    {
        cout<<"Blad otwierania pliku"<<endl;
    }
    else
    {
           // fgets(fileLine, 100, odczyt);

                puts(fileLine);
                odczyt>>fileLine;
    }

    odczyt.close();
}