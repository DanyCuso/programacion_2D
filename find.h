

int find (int array[], int key, int len){

    int finded;

    for (int i = 0; i < len; i++ ){
        if (array[i] == key){
            finded = i + 1;
            return finded;
        }
    }
}