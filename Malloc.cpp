// There's no need to include any external header file to use malloc() and free() function for dynamic memory allocation.
#include <iostream>
using namespace std;

// It is a basic program for storing Ids. (dynamically)
int main(){
    cout<<"Enter the number of Id's you want to save: ";
    int number; // Number of ids
    cin>>number;

    // Validating the input for input 0 and less than 0
    if(number <= 0){
        cout<<"Invalid input\n";
    }

    // Malloc implementation, malloc - Memory Allocation.
    int *ptr = (int*)malloc(sizeof(int)*number);

    // Malloc failure check
    if(ptr == NULL){
        cout<<"Malloc failed, either heap is full or can't access it";
    }

    // User inputs for Ids
    for(int i = 0; i < number; i++){
        cout<<"Enter Id number "<<i+1<<": ";
        cin>>ptr[i];
    }

    cout<<endl;

    // Printing all ids
    for(int i = 0; i < number; i++){
        cout<<"Id number "<<i+1<<" is: "<<ptr[i]<<endl;
    }

    // Freeing the memory allocated to avoid memory leak.
    free(ptr);
}