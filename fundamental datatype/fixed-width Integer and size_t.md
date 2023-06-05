# __Fixed-width integers and size_t__

## __problems with intergals(short,int,long,long long)__


- compiler sets minimum size for int , short and long. For eg: for int it is 2 byte
- This memory allocation size various for different architecture of cpu. For eg: typical memory allocation of int is 4 byte
- This uncertainty in memory size can affect programs compatibility.
  
---
## __Fixed-width integer__

Fixed-width integer can solve the problems from the above scenario. It allocates memory of fixed size (8 , 16, 32) bit.

|Name|Type|Range|Notes|
|----|----|-----|-----|
|std::int8_t|	1 byte signed|	-128 to 127|	Treated like a signed char on many systems. See note below.|
|std::uint8_t|	1 byte unsigned|	0 to 255|	Treated like an unsigned char on many systems. See note below.|
|std::int16_t|	2 byte signed|	-32,768 to 32,767|	
|std::uint16_t|	2 byte unsigned|	0 to 65,535|	
|std::int32_t| 4 byte signed|	-2,147,483,648 to 2,147,483,647|	
|std::uint32_t|	4 byte unsigned|	0 to 4,294,967,295|	
|std::int64_t| 8 byte signed|	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807|	
|std::uint64_t| 8 byte unsigned|	0 to 18,446,744,073,709,551,615|

---
## __Fast and least__ intergers

- The fast types (std::int_fast#_t and std::uint_fast#_t) provide the fastest signed/unsigned integer type with a width of at least # bits (where # = 8, 16, 32, or 64). For example, std::int_fast32_t will give you the fastest signed integer type that’s at least 32 bits.
- The least types (std::int_least#_t and std::uint_least#_t) provide the smallest signed/unsigned integer type with a width of at least # bits (where # = 8, 16, 32, or 64). For example, std::uint_least32_t will give you the smallest unsigned integer type that’s at least 32 bits.
  
- __<p style="color:red">CPU may be faster with processing certain bytes like some architecture process 64-bit faster than 32-bit , the *int_fast8_t* will find the best memory size closer to 8-bit that is fater processed by CPU </p>__
- __<p style="color:red">The purpose of *int_least#_t* is to ensure that there is an integer type available with at least the specified minimum width.</p>__

---
## __size_t__

- std::size_t is defined as an unsigned integral type, and it is typically used to represent the size or length of objects.

- size_t is defined to be big enough to hold the size of the largest object creatable on your system (in bytes).
- The sizeof opterator return the value in the typeof size_t.
