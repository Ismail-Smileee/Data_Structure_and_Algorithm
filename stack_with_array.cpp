#include <iostream>
using namespace std;
int arr[50];
int size_of_array = 0;
void PrintArray(){
    for(int i = 0 ; i<size_of_array ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void InsertIntoArray(int data, int position){
    for(int i = size_of_array -1 ; i>= position ; i--){
        arr[i+1] = arr[i];
    }
    arr[position] = data;
    size_of_array++;
}
void DeleteFromArray(int position){
    for(int i = position+1; i< size_of_array;i++){
        arr[i-1] = arr[i];
    }
    size_of_array--;

}
void push(int x){
     InsertIntoArray(x, size_of_array);
}
void pop(){
     DeleteFromArray(size_of_array-1);
}


int main(){
    push(100);
    push(102);
    push(105);
    push(106);
    push(1089);
    PrintArray();
    pop();
    PrintArray();
    pop();
    pop();
    push(23);
    PrintArray();

}
