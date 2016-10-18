void modAddress(int *pointer) {
    // Pretend
    // that
    // there's
    // lots
    // of
    // code
    // here
    free(pointer);
    // that's
    // hard
    // to
    // follow
}

void main() {
    int *x;
    
    x = (int *)malloc(sizeof(int));
    *x = 30;
    
    modAddress(x);
    
    printf("x is %d \n", x);
    free(x);
}