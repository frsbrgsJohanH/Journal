#pragma once
#include <string>

class Recipes
{
public:
    void makeRecipe(std::string recipeName);
    std::string recipeName;
    std::string mainIngredient;
    char recipeFirstLetter = 'S';
    
};
