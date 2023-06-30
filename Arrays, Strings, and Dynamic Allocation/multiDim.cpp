#include <iostream>

int main(){

    int maxRow{10};
    int maxCol{10};

    int product[10][10]{};

    for(int row{1}; row <maxRow; row++){

        for(int col{1}; col < maxCol; col++){
            product[row][col] = row*col;
        }
    }

//print the result
    for(int row{1}; row <maxRow; row++){

        for(int col{1}; col < maxCol; col++){
           std::cout<< product[row][col]<<"\t";
        }
        std::cout<<"\n";
    }

    
}