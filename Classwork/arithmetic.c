int main()
{
    int x = 7;
    int y = 4;
    float z = 0;
    //////// WRITE EACH RESULT ////////
    printf("x(%d) * y(%d) = %d\n", x, y, x*y);
    z = (float)x / y;
    printf("x(%d) / y(%d) = %f\n", x, y, z);
    printf("x(%d) %% y(%d) = %d\n", x, y, x%y); 
    printf("y(%d) + x(%d) = %d\n", y, x, y+x); 
    printf("y(%d) - x(%d) = %d\n", y, x, y-x);
    //-y
    printf("y: %d => -y: %d\n", y, -y);
    //x++
    printf("x: %d => ", x);       
    x++;
    printf("x++: %d\n", x);
    //y++
    printf("y: %d => ", y);       
    y++;
    printf("y++: %d\n", y); 
    //x--
    printf("x: %d => ", x);       
    x--;
    printf("x--: %d\n", x);
    //--y
    printf("y: %d => ", y);       // y = 3 + 1; Result: 4
    --y;
    printf("--y: %d\n", y);
    printf("1 + 2 * (3 + y(%d)) + 5 = %d\n", y, 1 + 2 * (3 + y) + 5);
    return 0;
}