#include<stdio.h>
int main()
{
    // declare FILE type
    FILE *fptr;
    // open a file in read mode
    fptr = fopen("fileSystemInC.txt", "r");
    //store the content of the file
    char myString[100];
        // Print some text if the file does not exis
    if(fptr != NULL){
        //read the content and    print it
        while(fgets(myString, 100, fptr)){
            //print the file content
            printf("%s \n", myString);
        }
    }else{
        printf("Not able to open the file. \n");
    }

    //close the file
    fclose(fptr);

    //return
    return 0;
}



//
//#include<stdio.h>
//int main()
//{
//    // declare FILE type
//    FILE *fptr;
//    //create file
//    fptr = fopen("fileSystemInC.txt", "w");
//    //write some text to the file
//    fprintf(fptr, "Hello, World!");
//    //close the file
//    fclose(fptr);
//    //return
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    // declare FILE type
//    FILE *fptr;
//    //append content in the file
//    fptr = fopen("fileSystemInC.txt", "a");
//    //write some text to the file
//    fprintf(fptr, "Hello, World! What's app! See you Soon!");
//    //close the file
//    fclose(fptr);
//    //return
//    return 0;
//}
