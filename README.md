# learncpp

## Prepare the Development Environment

### Opción 1: [WSL](https://code.visualstudio.com/docs/cpp/config-wsl)

#### Useful comands to manage WSL:

``` 
wsl.exe --list --running 
```
``` 
wsl --terminate <DistributionName> 
```

#### Using Visual Studio Code

##### Compiling:

`ctrl + shift + b ` or Terminal: Run  Build Task

Choose: `C/C++:g++ build active file ` 

##### Running the build:
Type on the terminal: `./nameOfTheFile`

##### Debugging:
Press `F5`

Choose: `C++ (GDB/LLDB)`

Choose: ` g++ build and debug active file`

Press `F5` to debug