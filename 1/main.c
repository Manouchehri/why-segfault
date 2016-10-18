void main() {
    printf("This code is probably fine.\n"); // What happens if I remove this?
    char *x = 0;
    x = *41; // Hint: This is 0x29 in hex.
    printf("x is %d \n", *x);
}
