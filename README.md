# C++ Refresher

![](https://engineering.fb.com/wp-content/uploads/2015/06/1522635669452_11.jpg)

  

## GET INPUT 

```cpp
cin >> age 
```
  
## get string input 


```cpp 


getline(cin,name);
// input, var

cout << "hello " << name;

```



# ARRAYS 

```cpp
int mynumbers[]  = {4,5,6,7};


// empty array 

int mynumbers[20];
```

## Add number 

```cpp
mynumbers[4] = 8;
```

# Threading  


**PROS**

- Fast to start 
- Shares mem
- Unlike multiprocessing, all bloat isn't needed to prevent them stepping on each others toes 
- Low overhead

**CONS**
  
- Difficult to implement
- Can't run on distributed system   

 

```cpp
#include <thread>
#include <iostream>
using namespace std;


// FUNCTION WE WISH TO THREAD 

void function_1(){

	std::cout << " a random print statement" << std::endl;
}

int main(){
	std::thread t1(function_1); // t1 starts running
	

	// DEPENDENT 


	t1.join(); // main thread waits for t1 to finish

	// DEAOMON PROCESS 
	// DETACH means it runs freely (main wont wait)
	// If you ran this, it wouldn't print beause main finishes first
	t1.detach(); 

	return 0;
}

```

### functions 

```cpp 

// DECLARE THREAD 
std::thread t1(function_1);

// JOIN
t1.join();
  
// DETACH
t1.detach();


// Check detached
if (t1.joinable())
	t1.join();

```




  
# BASICS 


## Declaration 

```cpp
    string characterName = "Adam";
    int characterAge = 35;
```


## Print 

```cpp
cout << "My name is " << characterName << endl;
cout << "My name is " << characterName << "\n";


```

## String functions 

`string mystring = "Adam";`     

`mystring.len()`  
  
`mystring.find("d",0);`  

`mystring.substr(1,3);`  




	

