# __Bit Manipulation__

- In simple words it is used to modify each bit in an memory.
- Generally, Boolean takes two values (0) false and (1) true. 1-bit data is enough to handle this process but minimum of 1 byte(8-bits) of memory is allocated to store boolean value.
- Using bit manipiulation remaining memory bits can be modified.
- Bit manipulation is used a lot in certain programming contexts (e.g. graphics, encryption, compression, optimization), but not as much in general programming.

## __Bit flags__

- In computing, a flag is a value that signals when some condition exists in a program. With a bit flag, a value of true means the condition exists.

## __Manipulating bits via std::bitset__

Header file - ___#include \<bitset>__

std::bitset provides 4 key functions that are useful for doing bit manipulation:

- test() allows us to query whether a bit is a 0 or 1
- set() allows us to turn a bit on (this will do nothing if the bit is already on)
- reset() allows us to turn a bit off (this will do nothing if the bit is already off)
- flip() allows us to flip a bit value from a 0 to a 1 or vice versa

## __The size of std::bitset__

- One potential surprise is that std::bitset is optimized for speed, not memory savings.
- Thus, a std::bitset<8> will typically use either 4 or 8 bytes of memory, even though it technically only needs 1 byte to store 8 bits. Thus, std::bitset is most useful when we desire convenience, not memory savings.