int main()
{
    int value { 5 };

    int* ptr0 { &value };             // ptr0 points to an "int" and is not const itself, so this is a normal pointer.

    const int* ptr1 { &value };       // ptr1 points to a "const int", but is not const itself, so this 
                                      //is a pointer to a const value.

    int* const ptr2 { &value };       // ptr2 points to an "int", but is const itself, so this is a const pointer 
                                      //(to a non-const value).
                                      
    const int* const ptr3 { &value }; // ptr3 points to an "const int", and it is const itself, so this is a const 
                                      //pointer to a const value.

    return 0;
}