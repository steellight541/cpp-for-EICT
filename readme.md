# Introduction to programming 2 (aka c++)

## Legend
- [hello world](#Hello-World) ([extra info](./hello-world-cpp/readme.md))
- how to initialize variables
- extra

## Hello World

installeer de g++ extensie via deze [link](https://software-installation-guide.netlify.app/c-plus-plus/#c-compiler-for-windows)

hoe gebruik je de g++ 
```
g++ <path-to-file>
```
example
```sh
g++ main.cpp
```
did maakt een exe aan genaamt hello in de directory waar je werkt

## how to initialize a variable

```cpp
// bad example
int a; // this can be from 0-65536
```
```cpp
char a; // this will always be "" on initialization

// both of the below are "strings" and both of them will have default value of ""
char data[255]; // string of 255 characters
std::string data; // string of x amount of characters
```

## extra
### timen

```pws
Measure-Command {start-process whateveryouwantexecute -Wait}
```
