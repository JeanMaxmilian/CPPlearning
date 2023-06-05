# sizeof operator

sizeof operator is an unary operator that takes either a type or a variable, and returns its size in bytes.

---
<p style="color:red">output from g++ compiler in vs code<p>


<div style="color:Green">
Size of char     :1

Size of wchar_t  :2    
Size of char16_t :2  
Size of char32_t :4  

Size of bool     :1  

Size of short     :2  
Size of int       :4  
Size of long int   :4  
Size of long long int :8  

Size of float       :4  
Size of double      :8  
Size of long double :16</div>

---
<p style="color:red">output from clang compiler in vs code<p>  

<div style="color:Green">

Size of char :1  
Size of wchar_t :2  
Size of char16_t :2  
Size of char32_t :4  

Size of bool :1  

Size of short :2  
Size of int :4  
Size of long int:4  
Size of long long int:8 

Size of float :4  
Size of double :8  
Size of long double :16</div>

---
