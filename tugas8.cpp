#include <iostream>
using namespace std;

bool isOdd(int a) {
    return a % 2 != 0;
}

void minEven(int myArr[], int size) {
    int max = 999;
    int pos;
    for(int i = 0; i < size; i++) {
        if(myArr[i] < max) {
            if(isOdd(myArr[i])) {
                max = myArr[i];
                pos = i;
            }
        }
    }
    cout << max << endl;
    cout << "index ke: " << pos << endl;
}

void insertionSort(int myArr[], int size) {
    int key, j;
    for (int i = 0; i < size; i++) {
        key = myArr[i];
        j = i;
        while(j > 0 && myArr[j - 1] < key) {
            myArr[j] = myArr[j - 1];
            j--;
        }
        myArr[j] = key;
     }
}

void bubbleSort(int myArr[], int size) {
    int temp;
    for(int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (myArr[i] < myArr[j]) {
                temp = myArr[i];
                myArr[i] = myArr[j];
                myArr[j] = temp;
            }
        }
    }
}

void print(int myArr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << myArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int myArr[] = {7 , 3, 4, 9, 12};
    minEven(myArr, 5);
    cout << "INSERTION SORT" << endl;
    insertionSort(myArr, 5);
    print(myArr, 5);
    cout << "BUBBLE SORT" << endl;
    bubbleSort(myArr, 5);
    print(myArr, 5);
}