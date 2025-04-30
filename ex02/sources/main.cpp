#include "../includes/Array.hpp"

int	main(void)
{
    try
	{
        // Test du constructeur par défaut
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        // Test du constructeur avec une taille donnée
        Array<int> intArray(5);
        std::cout << "intArray size: " << intArray.size() << std::endl;

        // Initialisation des éléments
        for (unsigned int i = 0; i < intArray.size(); ++i)
            intArray[i] = i * 2;

        // Affichage des éléments
        std::cout << "intArray elements: ";
        for (unsigned int i = 0; i < intArray.size(); ++i)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        // Test du constructeur par copie
        Array<int> copiedArray = intArray;
        copiedArray[0] = 19;
        std::cout << "Original intArray[0]: " << intArray[0] << std::endl;
        std::cout << "Copied intArray[0]: " << copiedArray[0] << std::endl;

        // Test avec un tableau de chaînes
        Array<std::string> strArray(3);
        strArray[0] = "Hello";
        strArray[1] = "World";
        strArray[2] = "!";
        std::cout << "strArray elements: ";
        for (unsigned int i = 0; i < strArray.size(); ++i) {
            std::cout << strArray[i] << " ";
        }
        std::cout << std::endl;

        // Test de l'accès hors limites
        std::cout << "Accessing out of bounds: " << strArray[3] << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}