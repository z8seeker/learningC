// 此程序使用词典查找

#include <stdio.h>
#include <stdbool.h>

struct entry
{
    char word[15];
    char definition[50];
};

void dictionarySort(struct entry dictionary[], int totalWords)
{
    int i, j;
    struct entry temp;
    int compareStrings(const char s1[], const char s2[]);

    for (i = 0; i < totalWords - 1; ++i)
        for (j = i + 1; j < totalWords; ++j)
            if (compareStrings(dictionary[i].word, dictionary[j].word) > 0) {
                temp = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp;
            }
}

int compareStrings (const char s1[], const char s2[])
{
    int i = 0, answer;

    while (s1[i] == s2[i] && 
            s1[i] != '\0' && s2[i] != '\0')
        ++i;
    
    if (s1[i] == '\0' && s2[i] == '\0')
        answer = 0;
    else if (s1[i] < s2[i]) 
        answer = -1;
    else
        answer = 1;
    
    return answer;
}

bool equalStrings (const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while (s1[i] == s2[i] && 
            s1[i] != '\0' && s2[i] != '\0')
        ++i;
    
    if (s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else 
        areEqual = false;
    
    return areEqual;
}

// 此函数在词典中查找一个单词

int lookup (const struct entry dictionary[], const char search[],
            const int entries)
{
    int i;
    bool equalStrings (const char s1[], const char s2[]);

    for (i= 0; i < entries; ++i)
        if (equalStrings(search, dictionary[i].word))
            return i;
    
    return -1;
}

int main(void)
{
    struct entry dictionary[100] = {
        {"ajar", "partially opened"},
        {"aardvark", "a burrowing African mammal"},
        {"abyss", "a bottomless pit"},
        {"acumen", "mentally sharp; keen"},
        {"addle", "to become confused"},
        {"aerie", "a high nest"},
        {"affix", "to append; attach"},
        {"agar", "a jelly made from seaweed"},
        {"ahoy", "a nautical call of greeting"},
        {"aigrette", "an ornamental cluster of feathers"},
        // {"ajar", "partially opened"}
    };
    char word[10];
    int entries = 10;
    int entry;
    int lookup (const struct entry dictionary[], const char search[], 
                const int entries);
    void dictionarySort(struct entry dict[], int totalWords);

    dictionarySort(dictionary, 10);
    
    return 0;
}