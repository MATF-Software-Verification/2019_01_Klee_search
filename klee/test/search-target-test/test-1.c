#include "klee/klee.h"

void better_with_dfs(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9,
                     int a10, int a11, int a12, int a13, int a14, int a15) {

    int brojac = 16;

    int k;

    if (a0 > 0)
        a0 = 1;
    else {
		a0 = -1;
        brojac--;
    }
	if (a1 > 0)
		a1 = 1;
	else {
		a1 = -1;
        brojac--;
	}
	if (a2 > 0)
		a2 = 1;
	else {
		a2 = -1;
        brojac--;
	}
	if (a3 > 0)
		a3 = 1;
	else {
		a3 = -1;
        brojac--;
	}
	if (a4 > 0)
		a4 = 1;
	else {
		a4 = -1;
        brojac--;
	}
	if (a5 > 0)
		a5 = 1;
	else {
		a5 = -1;
        brojac--;
	}
	if (a6 > 0)
		a6 = 1;
	else {
		a6 = -1;
        brojac--;
	}
	if (a7 > 0)
		a7 = 1;
	else {
		a7 = -1;
        brojac--;
	}
	if (a8 > 0)
		a8 = 1;
	else {
		a8 = -1;
        brojac--;
	}
	if (a9 > 0)
		a9 = 1;
	else {
		a9 = -1;
        brojac--;
	}
	if (a10 > 0)
		a10 = 1;
	else {
		a10 = -1;
        brojac--;
	}
	if (a11 > 0)
		a11 = 1;
	else {
		a11 = -1;
        brojac--;
	}
	if (a12 > 0)
		a12 = 1;
	else {
		a12 = -1;
        brojac--;
	}
	if (a13 > 0)
		a13 = 1;
	else {
		a13 = -1;
        brojac--;
	}
	if (a14 > 0)
		a14 = 1;
	else {
		a14 = -1;
        brojac--;
    }
	if (a15 > 0)
		a15 = 1;
	else {
		a15 = -1;
        brojac--;
	}

	k = 10 / brojac;
}


void better_with_bfs(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9,
                     int a10, int a11, int a12, int a13, int a14, int a15) {

    int brojac = 2;

    int k;

    if (a0 > 0) {
        a0 = 1;
        brojac--;
    } else {
		a0 = -1;
    }
	if (a1 > 0) {
		a1 = 1;
	} else {
		a1 = -1;
		brojac--;
		k = 10 / brojac;
		return;
	}
	if (a2 > 0) {
		a2 = 1;
	} else {
		a2 = -1;
	}
	if (a3 > 0)
		a3 = 1;
	else {
		a3 = -1;
	}
	if (a4 > 0) {
		a4 = 1;
	}else {
		a4 = -1;
	}
	if (a5 > 0)
		a5 = 1;
	else {
		a5 = -1;
	}
	if (a6 > 0)
		a6 = 1;
	else {
		a6 = -1;
	}
	if (a7 > 0)
		a7 = 1;
	else {
		a7 = -1;
	}
	if (a8 > 0)
		a8 = 1;
	else {
		a8 = -1;
	}
	if (a9 > 0)
		a9 = 1;
	else {
		a9 = -1;
	}
	if (a10 > 0)
		a10 = 1;
	else {
		a10 = -1;
	}
	if (a11 > 0)
		a11 = 1;
	else {
		a11 = -1;
	}
	if (a12 > 0)
		a12 = 1;
	else {
		a12 = -1;
	}
	if (a13 > 0)
		a13 = 1;
	else {
		a13 = -1;
	}
	if (a14 > 0)
		a14 = 1;
	else {
		a14 = -1;
    }
	if (a15 > 0)
		a15 = 1;
	else {
		a15 = -1;
	}


	k = 10 / brojac;
}

int main()
{
	int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	int a10, a11, a12, a13, a14, a15;

	klee_make_symbolic(&a0, sizeof(a0), "a0");
	klee_make_symbolic(&a1, sizeof(a1), "a1");
	klee_make_symbolic(&a2, sizeof(a2), "a2");
	klee_make_symbolic(&a3, sizeof(a3), "a3");
	klee_make_symbolic(&a4, sizeof(a4), "a4");
	klee_make_symbolic(&a5, sizeof(a5), "a5");
	klee_make_symbolic(&a6, sizeof(a6), "a6");
	klee_make_symbolic(&a7, sizeof(a7), "a7");
	klee_make_symbolic(&a8, sizeof(a8), "a8");
	klee_make_symbolic(&a9, sizeof(a9), "a9");
	klee_make_symbolic(&a10, sizeof(a10), "a10");
	klee_make_symbolic(&a11, sizeof(a11), "a11");
	klee_make_symbolic(&a12, sizeof(a12), "a12");
	klee_make_symbolic(&a13, sizeof(a13), "a13");
	klee_make_symbolic(&a14, sizeof(a14), "a14");
	klee_make_symbolic(&a15, sizeof(a15), "a15");

	better_with_dfs(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	better_with_bfs(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}
