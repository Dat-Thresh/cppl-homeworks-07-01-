
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>





int main()
{
    std::string word;
    std::cout << "[IN]: ";
    std::getline(std::cin, word);
    std::map<char, int> m;
    //ключ - буква, и так увеличиваем каждый раз значение под этим ключом, когда встречаем букву равную ключу
    for (auto& x : word) {
        m[x]++;
    }
    //создаем вектор из пар буква, число, с помощью конструктора копируя ранее полученный мап
    std::vector<std::pair<char, int>> m_vec(m.begin(), m.end());
    //сортируем вектор по значению числа по убыванию
    std::sort(m_vec.begin(), m_vec.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
        return a.second > b.second;
        }
    );

    std::cout << "[OUT]:\n";
    //печатаем вектор, чтобы получить вывод согласно тз
    for (const auto& x : m_vec) {
        std::cout << x.first << ": " << x.second << std::endl;
    }
    return 0;
}


