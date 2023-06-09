# Explanation

## code
```cpp

std::int64_t powint(std::int64_t base, int exp){

    assert(exp >=0);

    std::int64_t result {1};
    while (exp)
	{
        if(exp & 1)
            result *= base;
        exp >>=1;
        base *= base;
    }

    return result;
}
 ```

 - The function takes two parameter base and exponent.
 - while the exponent is greater than zero, do the following code.

```cpp
        if(exp & 1)
            result *= base;

        exp >>=1;
        base *= base;
```
- exp & 1 -> checks if the least significant bit is odd. If yes then result *= base.
- Then exp >>=1 right-shifts the binary code of the exponent.
- Then base is multipled by itself.

---
### Eg:

Base = 6, Exponent = 3

binary code of 3 = 011
---
Step 1
 
 ```cpp
 while(011)//true
 {
    if(011 & 1) //true
        result *= 6 // result =6

    011 >>=1 // exp =001
    base *= base // base=36
 }
 ```
---

Step 2
 
 ```cpp
 while (001)//true
 {
    if(001 & 1) //true
        result *= 36 // result = 216

    001 >>=1 // exp =000
    base *= base // base=216
 }
 ```
---

Step 3
 
 ```cpp
 
 while(000)// false
 {
    //will not be executed
 }
 ```
 #### Result 216 will be returned.

 ---

