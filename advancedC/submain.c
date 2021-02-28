int add(int x, int y)
{
    static int sum;
    sum+=1;
    return x+y;
}

struct Myobj staticValue(int aa, int bb)
{   struct Myobj a;
    static int counter = 0;
   
    a.x = aa+bb;
    a.y = counter +1;//COUNTER VALUES
    return a;   //returns the structure of two int values
}