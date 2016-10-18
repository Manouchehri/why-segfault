int timesPlusTwo(int thing1, int thing2) {
    return thing1*thing2 + 3;
}

int main(int argc, char **argv) {
    int x, y;
    
    x = 10;
    y = 5;
    
    printf("%d \n", timesPlusTwo(x, y));
}