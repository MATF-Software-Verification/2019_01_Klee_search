
#include "klee/klee.h"
#include <stdio.h>
#define ARRAY_LENGTH 1000

void better_with_dfs(int* a) {

        int k, n = 0;

        for (int i = 0; i < ARRAY_LENGTH; i++) {
                if (a[i] > 0){
                        a[i] = 1;
                }
                else {
                        a[i] = -1;
                }
        }

        for (int i = 0; i < ARRAY_LENGTH; i++) {
                n += a[i];
        }

        k = k / (n + ARRAY_LENGTH);
}


void better_with_bfs(int* a) {

        int k, n = 0;
        int brojac = 2;

        for (int i = 0; i < ARRAY_LENGTH; i++) {
                if (a[i] > 0){
                        a[i] = 1;
                        if (i == 0){
                                brojac--;
                        }
                }
                else {
                        a[i] = -1;
                        if (i == 1) {
                                brojac--;
                                k = 10/brojac;
                        }
                }
        }

        for (int i = 0; i < ARRAY_LENGTH; i++) {
                n += a[i];
        }

        k = k / (n + ARRAY_LENGTH);
}

int main()
{
        int a[ARRAY_LENGTH];

        klee_make_symbolic(a, sizeof(a), "a");

        better_with_bfs(a);
        better_with_dfs(a);
}

