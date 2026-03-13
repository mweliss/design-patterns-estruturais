#include <stdio.h>

typedef struct {
    void (*request)();
} Target;

void adapteeMethod() {
    printf("Metodo antigo chamado\n");
}

void adapterRequest() {
    adapteeMethod();
}

int main() {
    Target t;
    t.request = adapterRequest;

    t.request();

    return 0;
}