#include <commands.h>

void ls() {
    FILE *fp = popen("ls -l", "r");
    if (fp != NULL) {
        char buffer[1024];
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            std::cout << buffer;
        }
        pclose(fp);
    } else {
        std::cerr << "Failed to open pipe." << std::endl;
    }
}

void rm(std::string elem) {
    std::string command = "rm -r " + elem;

    int status = system(command.c_str());
    if (status == 0) {
        std::cout << "Command executed successfully.\n";
    } else {
        std::cerr << "Command failed with exit code: " << status << std::endl;
    }

    ls();
}