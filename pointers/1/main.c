void main() {
    printf("This code is probably fine.\n"); // What happens if I remove this?
    char *x = 0;
    *x = 41;
    printf("x is %d \n", *x);
}
