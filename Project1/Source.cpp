#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    int n;
    std::cout << "n = ";
    std::cin >> n;

    sf::RenderWindow window(sf::VideoMode(1200, 600), "SFML works!"); // ������� ���� + ������� ���

    while (window.isOpen())  // ���������� ���������� ����
    {
        sf::Event event;  // ����� ���������� �������

        sf::RectangleShape rect(sf::Vector2f(100, 50)); // �������������
        rect.setPosition(0, 10);

        sf::CircleShape circle(50); // ����
        circle.setPosition(200, 100);

        sf::CircleShape triangle(50, 3); // �����������
        triangle.setPosition(400, 10);

        sf::RectangleShape line(sf::Vector2f(100, 2)); // �����
        line.rotate(45);// ������� �����
        line.setPosition(600, 100);


        while (window.pollEvent(event))  // ���������
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        for (int i = 0; i < n; i++)
        {
            rect.setPosition(0+i*120, 10+i*50);
            circle.setPosition(100+i * 120, 100 + i * 50);
            triangle.setPosition(200+ i * 120, 10 + i * 50);
            line.setPosition(300+ i * 120, 100 + i * 50);

            window.draw(rect);
            window.draw(circle);
            window.draw(triangle);
            window.draw(line);
        }
        
        window.display();
    }

    return 0;
}