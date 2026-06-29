#include<stdio.h>
#include<stdlib.h>

void BEST(){
    FILE *fp;
    fp = fopen("bestcase1000.txt", "w");
    for(int i=1; i<=1000; i++){
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);
}

void WROST(){
    FILE *fp1;
    fp1 = fopen("worstcase1000.txt", "w");
    for(int i=1000; i>=1; i--){
        fprintf(fp1, "%d\n", i);
    }
    fclose(fp1);
}

void AVG(){
    FILE *fp2;
    fp2 = fopen("averagecase1000.txt", "w");
    for(int i=1; i<=1000; i++){
        fprintf(fp2, "%d\n", rand() % 1000 + 1);
    }
    fclose(fp2);
}

int main(){
    BEST();
    WROST();
    AVG();
    return 0;
}





// int main()
// {
//     FILE *fptr;

//     fptr = fopen('BestCase', "w");
//     if (fptr == NULL)
//     {
//         printf("Error creating file %s\n", fptr);
//         exit(1);
//     }
//     for (int i = 0; i < SZ; i++)
//     {
//         fprintf("%d", i);
//     }
//     fclose(fptr);

// }
