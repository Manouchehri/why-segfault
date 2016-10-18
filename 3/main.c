int addTwo(int x) {
    printf("Adding 2..\n");
    return x + 2;
}

int main(int argc, char **argv) {
    int x = 13;
    int y = 37;
    printf("And that's it.\n");
    
    int i;
    for(i = x*y; i < 1337; i++) // What's the value of i?
        printf("i + 2: %d \n", addTwo(i));
}