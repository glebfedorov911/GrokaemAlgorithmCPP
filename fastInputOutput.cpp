#include "fastInputOutput.h"
#include <iostream>
#include <string>


// Для быстрого ввода можно выполнить несколько действий
//
// **Отключить синхронизацию и отвязать cin/cout**
//
//    std::ios_base::sync_with_stdio(false);
//    std::cin.tie(0);
//
//    sync_with_stdio(false) — отключает синхронизацию cin/cout с scanf/printf → ускоряет I/O.
//    cin.tie(nullptr) — отвязывает cin от cout, чтобы cin не ждал cout → ещё быстрее.
//    !!!! После этих настроек не смешивай scanf/printf с cin/cout — могут быть баги. !!!!

void input() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string s;
//    std::cin >> s; // чтение строки до пробела
    std::getline(std::cin, s); // чтение строки целиком
    std::cout << s;
}