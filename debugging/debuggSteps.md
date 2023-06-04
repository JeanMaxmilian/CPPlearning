# __Debugging cpp in vs code__

## __Debugger__

A debugger is a computer program that allows the programmer to control how another program executes and examine the program state while that program is running.

## __Prerequisite__

Make sure to have a c/c++ compiler and VS Code installed in your system.
I am using GCC 12.3.0 + LLVM/Clang/LLD/LLDB 16.0.4 + MinGW-w64 11.0.0 compiler project which comes with both gcc and clang 
compiler to download use this [link](https://winlibs.com/).

## __Running a program__

select the file you want to compile and run

then , terminal->configure task
this will open a task.json file

    
![taskjson](/images/taskJson.png)
   

modify the args as in the above image

press ctrl + shift + B to compile the code , then run the .exe file.

---
### __For debugging__


then edit the task.json 

To set up debugging, press Ctrl+Shift+P and select “C/C++: Add Debug Configuration”, followed by “C/C++: g++ build and debug active file”. This should create an open the launch.json configuration file. Change the “stopAtEntry” to true:
"stopAtEntry": true,


![launchjson](/images/launchjson.png)


Then open the cpp file and start debugging by pressing F11 or by pressing Ctrl+Shift+P and selecting “Debug: Start Debugging and Stop on Entry”.

---
