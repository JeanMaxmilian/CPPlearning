#include <iostream>

void changeValue(int a[]){ //eventhough array is passed without reference , passing array will change the original array
    a[0] = {5};
    a[1] = {4};
    a[2] = {3};
    a[3] = {2};
    a[4] = {1};

}
int main(){

    int arr[5]{1,2,3,4,5};

    std::cout << "before : " << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << '\n';

    changeValue(arr);
    std::cout << "After : " << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << '\n';

}