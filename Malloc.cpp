// There's no need to include any external header file to use malloc() and free() function for dynamic memory allocation.
#include <iostream>

// It is a basic program for storing Ids. (dynamically)
int main(){
    std::cout<<"Enter the number of Id's you want to save: ";
    int number; // Number of ids
    std::cin>>number;

    // Validating the input for input 0 and less than 0
    if(number <= 0){
        std::cout<<"Invalid input\n";
    }

    // Malloc implementation, malloc - Memory Allocation.
    int *ptr = (int*)malloc(sizeof(int)*number);

    // Malloc failure check
    if(ptr == NULL){
        std::cout<<"Malloc failed, either heap is full or can't access it";
    }

    // User inputs for Ids
    for(int i = 0; i < number; i++){
        std::cout<<"Enter Id number "<<i+1<<": ";
        std::cin>>ptr[i];
    }

    std::cout<<std::endl;

    // Printing all ids
    for(int i = 0; i < number; i++){
        std::cout<<"Id number "<<i+1<<" is: "<<ptr[i]<<std::endl;
    }

    // Freeing the memory allocated to avoid memory leak.
    free(ptr);
}