int main()
{
    int x;
    int y = 10;
    int a[10];

    int array_size = sizeof(a) / sizeof(a[0]);

    if (y >= 0 && y < array_size) {
        x = a[y];
    } else {
        // Handle out-of-bounds access, e.g., set x to a default value or print an error message
        x = 0;  // Default value
        printf("Index out of bounds!\n");
    }

    return 0;
}
