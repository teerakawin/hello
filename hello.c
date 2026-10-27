#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // help
    if (argc > 1 && (strcmp(argv[1], "--help") == 0 || strcmp(argv[1], "-h") == 0)) {
        printf("Usage: %s [options]\n", argv[0]);
        printf("Options:\n");
        printf("  -h, --help     Show this help message\n");
        printf("  -v, --version  Show version info\n");
        return 0; 
    }
    // 2. version
    else if (argc > 1 && (strcmp(argv[1], "--version") == 0 || strcmp(argv[1], "-v") == 0)) {
        printf("version 1.0.0\n");
        return 0;
    }

    // 3. Normal
    printf("hello\n");
    return 0;
}

