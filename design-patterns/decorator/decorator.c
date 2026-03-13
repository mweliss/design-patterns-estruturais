#include <stdio.h>

typedef struct {
    void (*operation)();
} Component;

void concreteOperation() {
    printf("Operacao base\n");
}

void decoratorOperation() {
    concreteOperation();
    printf("Decoracao adicionada\n");
}

int main() {
    Component c;

    c.operation = decoratorOperation;

    c.operation();

    return 0;
}