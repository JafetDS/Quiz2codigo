
//#1______________________
int suma_enteros(int* num1, int* num2){
    return *num1+*num2;
}

//#2____________________________

int* copia_array(int* copy,int* array2, int n){


    for(int i = 0; i<n ; i++){
        copy[i] = array2[i];
    }

    return copy;

}

//#3________________________
int* sum_matriz(int* matriz1,int* matriz2, int m, int n){

 
    for(int i = 0; i<m*n ; i++){
        matriz1[i] = matriz1[i] + matriz2[i];
    }

    return matriz1;

}

//#4_____________________

int* invert_array(int* array, int n){
    const int m = n;
    int l = n/2;
    for(int i = 0; i<(l) ; i++){
        int sw = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = sw;
    }

    return array;
}