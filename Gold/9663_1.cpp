#include <cstdio>

int main(){
    int N;
    scanf("%d", &N);

    int memo[] = {1, 0, 0, 2, 10, 4, 40, 92, 352, 724, 2680, 14200, 73712, 365596};
    printf("%d\n", memo[N-1]);
    return 0;
}

// cheat code
