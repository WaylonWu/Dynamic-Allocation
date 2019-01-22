//----------------------------------------------------------
//  Name: Waylon Wu
//  E-mail Address: wiw5145@psu.edu
//  Class: CMPSC 121
//  Homework #7
//  Due Date: 11/28/16
//  Brief Project Description: Dynamic Allocation
//----------------------------------------------------------

#include <iostream>
using namespace std;

//  Prototypes
void input(double[], int);
void showArray(double[], int, int);

int main() {
    
    int size;
    int size2 = 0;
    
    //  Dynamically allocates arrays
    double *array1 = nullptr;
    double *array2 = nullptr;
    
    //  Prompts the user to enter array size
    cout << "Enter array size: ";
    cin >> size;
    
    //  Dynamically allocates arrays large enough to hold sizes
    array1 = new double[size];
    array2 = new double[size2];
    
    //  Call input function
    input(array1, size);
    
    //  Determines distinct numbers
    for(int x = 0; x < size; x++)
    {
        int y;
        for(y = 0; y < size2; y++)
            if(array1[x] == array2[y])
                break;
        
        if(size2 == y)
        {
            array2[size2] = array1[x];
            size2++;
        }
    }
    
    //  Call showArray
    showArray(array2, size, size2);
    
    //  Free dynamically allocated memory
    delete [] array1;
    delete [] array2;
    array1 = nullptr;
    array2 = nullptr;
    
    return 0;
}

void showArray(double array2[], int size, int size2) {
    
    //Displays distinct numbers
    cout << "Distinct numbers: ";
    for(int x = 0; x < size2; x++) {
        cout << array2[x] << " ";
    }
    cout << endl;
}

void input(double array1[], int size) {
    
    //  Prompts the user to enter values to fill array
    cout << "Enter values into array:\n";
    for(int x = 0; x < size; x++) {
        cout << "Value " << x+1 << ": ";
        cin >> array1[x];
    }
}
