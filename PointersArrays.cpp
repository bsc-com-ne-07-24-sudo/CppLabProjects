#include <iostream>
using namespace std;

int main() {
    int numbersArrray[5];
    int * pPointer = nullptr;
    //assign the address of the first element of the array to the pointer
    pPointer = numbersArrray;
    *pPointer = 10; //assign the value 10 to the first element of the array
    /*increment the pointer to point to the next element*/
    pPointer++;
    *pPointer = 20; //assign the value 20 to the second element of the array
    // assign the value 30 to the third element of the array using pointer arithmetic
    *pPointer = &numbersArrray[2];
    *pPointer = 30;
    /*assign the address of the fourth element of the array to the pointer
    
    */
   pPointer = numberArray + 3;
   *pPointer = 40; //assign the value 40 to the fourth element of
    // the array
    // assign the address to the first element of the array to the pointer
    pPointer = numbersArray;
    /*assign a value to the fifth element using index */
    *(pPointer + 4) = 50; //assign the value 50 to the fifth element of the array
    //iterate and output all elements in the array
    for (int i = 0; i < 5; i++) {
        cout << numbersArray[i] << " ";
    }
    return 0;


}
