#include <stdio.h>
void func2();
void func3();
void func4();
void func5();
void func1()
{
func2();
func3();
func5();
}
void func2()
{
printf("This is func2\n");
}
void func3()
{
printf("This is func3\n");
func4();
}
void func5()
{
printf("This is func5\n");
}
void func4()
{
printf("This is func4\n");
}
