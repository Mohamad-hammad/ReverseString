#include <iostream>
using namespace std;
int main()
{
    char str[] = "This is a string";
    int j = strlen(str) - 1;
    //reverseing whole string 
    for (int i = 0; i < strlen(str) / 2; i++)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    //reverseing each word of string 
    for (int i = 0; i < strlen(str); i++)
    {
        int start = i;
        int j;
        for ( j = i; str[j]!= ' ' ; j++)
        {
            if (str[j] == '\0')
                break;
        }
        int end = j-1;
        int size = end - start;
        int k = 0;
        
        for ( k = 0; k < (size); k++)
        {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            end--;
            start++;
            if (end < start)
                break;
        }
        i = i + size+1;
    }
    cout << str << endl;
    return 0;
}
