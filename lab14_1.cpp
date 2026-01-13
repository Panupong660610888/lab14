#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    
    for (int i = 1; i < N; i++){
      
       T temp = d[i];
       int j;
       
       for (j = i - 1; j >= 0 && d[j] < temp; j-- ){
            d[j+1] = d[j];
       }
       d[j+1] = temp;
    
       cout << "Pass " << i << ":";
       for (int k = 0; k < N; k++){
            cout << d[k] << " ";
     }
       cout << endl;    
   }
}