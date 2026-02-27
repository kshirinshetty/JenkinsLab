#include <iostream>
#include <unistd.h>

int main() {
    char hostname[1024];
    gethostname(hostname, 1024);

    std::cout << "Served by backend: " << hostname << std::endl;

    while (true) {
        sleep(1);
    }

    return 0;
}
