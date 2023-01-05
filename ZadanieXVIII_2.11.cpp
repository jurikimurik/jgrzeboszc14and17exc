void fun2([[deprecated("Zaleca sie nie korzystac ze zmiennej x")]] int x, int y)
{
    x += 6;
    x -= 2;
}
//****************************************************************************************************************
int main()
{
    fun2(10, 2);
}