#include <stdio.h>

int global_var = 10; // 전역변수

void foo() {
    int local_var = 20; // 지역변수
    static int static_var = 30; // 정적변수

    global_var++;
    local_var++;
    static_var++;

    printf("global_var: %d\n", global_var);
    printf("local_var: %d\n", local_var);
    printf("static_var: %d\n", static_var);
}

int main() {
    foo();
    foo();
    foo();

    return 0;
}