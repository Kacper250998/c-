#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include "array.h"

using namespace std;

void menu(void){
    cout<<"1. Enter the values into array"<<endl;
    cout<<"2. Display the content of the array"<<endl;
    cout<<"3. Determine the maximum value"<<endl;
    cout<<"4. Determine the minimum value"<<endl;
    cout<<"5. Determine the average"<<endl;
    cout<<"6. Save array to file"<<endl;
    cout<<"7. Get array from file"<<endl;
    cout<<"0. EXIT"<<endl<<endl;
    cout<<"Select an option"<<endl;
}

int main() {

    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9,
                       10,};
    cout<<"Simple array..."<<endl;
    int option = 0;

    do {
        menu();
        cin>>option;
        switch(option){
            case 0:
                break;
            case 1:
                enterDataIntoArray(array);
                break;
            case 2:
                displayArray(array);
                break;
            case 3:
                cout<<"Maximum value = "<<findMaximumValue(array)<<endl;
                break;
            case 4:
                cout<<"Minimum value = "<<findMinimumValue(array)<<endl;
                break;
            case 5:
                cout<<"Average value = "<<calculateAverage(array)<<endl;
                break;
            case 6:
                saveArrayToFile(array);
                break;
            case 7:
                getArrayFromFile(array);
                break;
            default:
                cout<<"Choose the right option"<<endl;
        }

    }while(option!=0);

    return 0;
}
