# Fibonacci

The C program will print fibonacci numbers between 0 and 255 in a loop. So what are these numbers?

This are numbers where the present number is a sum of the last two numbers. In an example; `0 + 1 = 1`, `1 + 1 = 2`, `2 + 1 = 3`, `3 + 1 = 4`

| **Numbers Summation** | **Answer** |
|-----------------------| ------------|
| 0 + 1 | 1 |
| 1 + 1 | 2 |
| 2 + 1 | 3 |
| 2 + 3 | 5 |
| 3 + 5 | 8 |
| 5 + 8 | 13 |
| 8 + 13 | 21 |
| 13 + 21 | 34 |
| 21 + 34 | 55 |
| 34 + 55 | 89 |
| 55 + 89 | 144 |
| 89 + 144 | 233 |

So in this part of the code, x is first printed as 0, then we add the value of x as `0` and add to `1` the value of y to get a new value of z

```C
while (1){
        x = 0;
        y = 1;

        do{
            /* code */
            printf("%d/n", x);
            z = x + y;
            x = y;
            y = z;
        } while (x < 255);
        
    }
```