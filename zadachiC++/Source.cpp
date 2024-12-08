#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<cstring>
#include<sstream>
#include<cmath>
#include <algorithm>
#include<iomanip>
#include<thread>
#include<unordered_set>

using namespace std;

void uniq_number(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1]) {
            continue;
        }
        else {
            cout << arr[i] << " ";
        }
    }
}

int main(){
	setlocale(0, "");
	srand(time(NULL));











    /*int n;
    cout << "Ввести кол-во элементов ";
    cin >> n;
    int* arr = new int[n];

    cout << "Ввести числа: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Все элементы: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pos;
    cout << "Ввести индекс удаляемого элемента: ";
    cin >> pos;

    for (int i = pos; i < n; i++) {
        arr[i] = arr[i + 1];
    }
    
    cout << endl;

    cout << "Выводим новый массив: ";
    for (int i = 0; i < n-1; i++) {
        cout << arr[i] << " ";
    }*/
    
	return 0;
}

