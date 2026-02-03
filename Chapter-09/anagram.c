#include <stdio.h>
#include <string.h>
int anagram(char str1[], char str2[]) {
    int arr1[26] = {0}, arr2[26] = {0};
    int c = 0;
    while (str1[c] != '\0') {
        arr1[str1[c] - 'a']++;
        c++;
    }
     c = 0;
    while (str2[c] != '\0') {
        arr2[str2[c] - 'a']++;
        c++;
    }
    for (int i = 0; i < 26; i++) {
        if (arr1[i] != arr2[i])
            return 0; 
    }
    return 1;  
}
int main() {
    char str1[30], str2[30];
    int ana;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 == len2) {
        printf("Both strings have the same length.\n");
        ana = anagram(str1, str2);
        if (ana == 1)
            printf("The two strings are anagrams.\n");
        else
            printf("The two strings are not anagrams.\n");
    } else {
        printf("The two strings have different lengths, so they cannot be anagrams.\n");
    }

    return 0;
}
