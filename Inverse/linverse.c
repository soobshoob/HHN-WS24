#include <stdio.h>
#include <string.h>

void inverse(const char word[], char inv_word[])
{
    int l = strlen(word);
    for (int i = 0; i < l; i++) {
        inv_word[i] = word[l - i - 1];
    }
    inv_word[l] = '\0'; // Завершающий нулевой символ
}

int main(void)
{
    char word[100];
    char inv_word[100]; // Массив для хранения перевернутого слова
    
    printf("Write any word here: ");
    scanf("%99s", word); // Нет необходимости в использовании &
    
    inverse(word, inv_word); // Вызываем функцию, передавая два массива
    printf("The inverse of '%s' is '%s'\n", word, inv_word);
    
    return 0;
}
