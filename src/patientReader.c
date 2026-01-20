 #include <dirent.h>
 #include "patientReader.h"
 #include <stdio.h>

void countAllFiles(){
    int filesCount = 0;
    struct dirent* entry;

    DIR *dir = opendir("./patients");
    if(dir == NULL){
        perror("Failed to open patient directory.");
    }else{
        printf("Succesfully opened patient directory.");
    }

    while ((entry = readdir(dir)) != NULL)
    {
        filesCount++;
    }

    printf("Files found in patients folder: %d\n", filesCount);
    
}