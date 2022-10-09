#include <iostream>
#include "Server/src/ClientPart.hpp"

int main() {
    int dataSocket = socket(AF_UNIX, SOCK_STREAM, 0);
    if (dataSocket == -1) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    server::ClientPart client(dataSocket);
    client.connect();
    client.start();
    return 0;
}
