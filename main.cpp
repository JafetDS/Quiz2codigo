#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

#include "problemas.cpp"
using namespace std;

int main(){

   // #Example 1
    int n = 4;
    int m = 3;
    cout<<suma_enteros(&m,&n)<<endl;
   // Example2
    int array[] ={1,2,3,4}; 
    int copy[4];

    int *arr = copia_array(&(copy[0]),&(array[0]),n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }

//Example 3

    int mat1[][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    int mat2[][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

    arr = sum_matriz(&(mat1[0][0]), &(mat2[0][0]),m,n);


        for(int j = 0; j<n*n; j++){
        cout<<arr[j]<<endl;
    }


    // Example4

    arr = invert_array(&(array[0]),n);

    

    for(int k = 0; k<n; k++){
        cout<<arr[k]<<endl;
    }

 
    return 0;
}