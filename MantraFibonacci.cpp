#include <iostream>
#define MAXSTACK 30;
using namespace std;

typedef struct stack *address;
struct stack {
    int data[MAXSTACK];
    int count;
};
stack a;

void initStack(address *a) {
    
}