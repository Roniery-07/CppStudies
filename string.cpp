#include <iostream>
#include <cstring>

char **stringCreator(int size)
{
    char **arr = new char *[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new char[20];
        snprintf(arr[i], 20, "String-%d", i);
    }

    return arr;
}

char *phraseCreator(char **words, int size)
{
    size_t length = 0;
    for (int i = 0; i < size; i++)
    {
        length += strlen(words[i]);
    }
    length += size;

    char *phrase = new char[length];
    strcpy(phrase, words[0]);
    for (int i = 1; i < size; i++)
    {
        strcat(phrase, words[i]);
        strcat(phrase, " ");
    }
    return phrase;
}

int main()
{
    int size = 4;
    char **meuArray = stringCreator(size);

    // Exibe as strings no Serial Monitor
    for (int i = 0; i < size; i++)
    {
        std::cout << (meuArray[i]) << std::endl;
    }

    const char *phrase = phraseCreator(meuArray, size);
    std::cout << "Frase: " << phrase << std::endl
              << "Tamanho: " << strlen(phrase) << std::endl;

    // Libera a memória alocada
    for (int i = 0; i < size; i++)
    {
        delete[] meuArray[i]; // Libera cada string
    }
    delete[] meuArray; // Libera o array de ponteiros
    return 0;
}