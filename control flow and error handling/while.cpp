#include <iostream>

void simplePyramid(int height){

    std::cout<<"Simple Pyramid:\n";

    int i{height};
    
    while (i>0){

        int j{(height - i) + 1};

        while (j){
            std::cout<<"* ";
            j--;
        }

        std::cout<<"\n";
        i--;
    }
}

void rotatedSimplePyramid(int height){

    std::cout<<"Rotated Simple Pyramid:\n";

    int i{height};
      
    while (i>0){

        int j{i-1};
        int k{(height-i)+1};

        while (j){
            std::cout<<"  ";
            j--;
        }
        while (k){
            std::cout<<" *";
            k--;
        }

        std::cout<<"\n";
        i--;
    }
}

void inverstedPyramid(int height){
    std::cout<<"Inverted Pyramid:\n";

    int i{height};
    
    while (i>0){

        int j{i};

        while (j){
            std::cout<<"* ";
            j--;
        }

        std::cout<<"\n";
        i--;
    }
}

void rotatedInvertedPyramid(int height){

    std::cout<<"Rotated Inverted Pyramid:\n";

    int i{height};
      
    while (i>0){

        int j{height - i};
        int k{i};

        while (j){
            std::cout<<"  ";
            j--;
        }
        while (k){
            std::cout<<" *";
            k--;
        }

        std::cout<<"\n";
        i--;
    }
}

void triangle(int height){

    std::cout<<"Triangle:\n";
    int i{height};
    
    while(i>0){
        int space{(2*i -1)/2};
        int j{(height-i) +1};
        while(space){
            std::cout<<" ";
            space --;
        }

        while(j){
            std::cout<<"* ";
            j--;
        }
        std::cout<<"\n";
        i--;
    }
}

void invertedTriangle(int height){

    std::cout<<"Inverted Triangle:\n";
    int i{height};
    
    while(i>0){
        int space{(2*(height - i) -1)/2 + 1};
        int j{i};

        if(i < height){

            while(space){
                std::cout<<" ";
                space --;
            }
        }
        

        while(j){
            std::cout<<" *";
            j--;
        }
        std::cout<<"\n";
        i--;
    }
}

int main(){
    int height{};
    std::cout<<"Enter the height of the pyramid :";
    std::cin>> height;
    std::cout<<"\n";

    simplePyramid(height);
    rotatedSimplePyramid(height);
    inverstedPyramid(height);
    rotatedInvertedPyramid(height);
    triangle(height);
    invertedTriangle(height);
    return 0;
}