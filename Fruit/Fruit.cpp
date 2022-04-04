// Fruit.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Fruit
{
public:
    std::string name;
    std::string color;

    Fruit(std::string name, std::string color) : name(std::move(name)), color(std::move(color)) {}
};

class Banana : public Fruit
{
public:
    Banana(std::string name = "Banana", std::string color = "Yellow") : Fruit(std::move(name), std::move(color)) {}
};

class Apple : public Fruit
{
public:
    Apple(std::string name = "Apple", std::string color = "Red") : Fruit(std::move(name), std::move(color)) {}
};

class GrannySmith : public Apple
{
public:
    GrannySmith(std::string name = "Granny Smith", std::string color = "Green") : Apple(std::move(name), std::move(color))) {}
};

int main()
{

}

