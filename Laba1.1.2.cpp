#include <iostream>
#include <ctime>
#include <queue>
int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    std::queue<float> queue1, queue2;
    int n, count = 0;
    std::cout << "Введите количесво элементов:";
    std::cin >> n;
    for (int i = 0; i < n;i++) {
        if (i % 2 == 0)
            queue1.push((float)rand() / 100);
        else
            queue1.push((float)(rand() * -1) / 100);
    }
    for (int i = 0; i < n; i++) {
        int t = queue1.front();
        if (t <= 0) {
            count++;
        }
        queue2.push(queue1.front());
        queue1.pop();
    }
    for (int i = 0; i < n; i++) {
        std::cout << queue2.front() << std::endl;
        queue1.push(queue2.front());
        queue2.pop();
    }
    std::cout << "Колличество отрицательных элементов очереди: " << count << std::endl;
}