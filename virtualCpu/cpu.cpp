#include<bits/stdc++.h>
#include "../common.h"

int main(int argc, char* argv[]) {
    if(argc < 2) {
        fprintf(stderr, "Usage: mem <value>\n");
        exit(1);
    }

    char* str = argv[1];

    while(1) {
        printf("%s\n", str);
        Spin(1);
    }
}

// run with ./cpu A & ./cpu B & ./cpu C & ./cpu D &
// to kill these processes
// open shell
// ps -aux | grep ./cpu
// kill all pids