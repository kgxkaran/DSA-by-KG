//iterative approach

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}


//recursive

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
