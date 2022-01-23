#include <iostream>
#include <cmath>

using namespace std;

void arrAR(int *arr,int l);
void arrTW(int *arr, int l);

int main()
{
    int arr[5] = {1,2,3,4,5};
    int l = 5;
    arrAR(arr,l);

}

void arrAR(int *arr,int l){
    cout << l << endl;
    cout << *arr << endl;
    cout << arr<< endl;
    arrTW(&arr[1],l-1);
    
   
}

void arrTW(int *arr, int l){
    arr[1] = 10;
    cout << arr<< endl;
    for (int i = 0; i < l; i++){
        cout << arr[i] << " ";
    }
}

