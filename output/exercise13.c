#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// this is a string

char * replaceWord(const char * str, const char * oldWord, const char * newWord)

{
    char * resultstring;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Let's count the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            // jump over this word
            i = i + oldWordLength - 1;
        }
    }
    // Making a new string to fit in the replaced words
    resultstring = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);
    i = 0;
    while (*str)
    {
        // compare the substring with the result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultstring[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else {
            resultstring[i]= *str;
            i += 1;
            str += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}

int main()
{
    FILE * ptr = NULL;
    FILE * ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill templete was: %s\n", str);
    // call the replace word function and generate newstr

    char * newstr;
    newstr = replaceWord(str, "{{item}}", "Asus vivobook 12th generation");
    newstr = replaceWord(newstr, "{{outlet}}", "ASUS show room Islampur");
    newstr = replaceWord(newstr, "{{name}}", "Suraj");

    printf("The actual bill generated is : %s\n", newstr);
    printf("The generated bill has been written to the file genbill.txt\n");

    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}