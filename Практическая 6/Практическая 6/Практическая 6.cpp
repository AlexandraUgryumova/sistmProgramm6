// Практическая 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

bool CheckGlasnaya(char a) {
    char abc[] = { 'a','i','o','y','e','u' };
    bool check = false;
    for (int k = 0; k < sizeof(abc) / sizeof(abc[0]); k++) {
        if (a == abc[k]) {
            check = true;
        }
    }
    return check;
}
int main()
{
    //int j = 0;
    //char result[255];
    setlocale(LC_ALL, "Russian");
    
    char arr [255];
    
    cout << "Введите слово на английском\n";
    gets_s(arr);
    
    /*for (int i = 0; i < strlen(arr); i++ ) {
        if (!CheckGlasnaya(arr[i])) {
            result[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++) {
        cout << result[i];
    }*/
    for (int i = 0; i < strlen(arr); i++) {
        if (!CheckGlasnaya(arr[i])) {
            cout<< arr[i];
        }
    }
}


