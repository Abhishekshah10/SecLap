/*
Iterator - Starting Point - Test - Increment/Decrement - Loop Body
*/

#include<iostream>

int main(){
    for(int i = 1;i <= 10;i++){
        std::cout<< i <<" This is a loop!"<<std::endl;
    }
    std::cout<<"Loop over"<<std::endl;


    //Use size_t : a representation of some unsigned int for positive numbers [sizes]
    for(size_t j = 1;j <= 10;j++){
        std::cout<< j <<" A new method!" <<std::endl;
    }
    std::cout<<"Loop finished"<<std::endl;

    int k = 1;
    while(k <= 10){
        std::cout<< k << " Here comes while!" << std::endl;
        k++;
    }
    std::cout<<"Loop exhausted"<<std::endl;

    int l = 1;
    do{
        std::cout<< l << " Now a Do-While!" << std::endl;
        l++;
    }while(l<=10);
    std::cout<<"Loop terminated"<<std::endl;
}
