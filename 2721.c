#include<stdio.h>
int main(){
    char s1[20], s2[20], s3[20];
    scanf("%s %s %s", s1, s2, s3);
    for(int i=1; s1[i]!='\0'; i++){
        if(s1[i+1]=='\0'){
            if(s1[i]==s2[0]){
                for(int j=1; s2[j]!='\0'; j++){
                    if(s2[j+1]=='\0'){
                    if(s2[j]==s3[0]){
                        for(int k=1; s3[k]!='\0'; k++){
                            if(s3[k+1]=='\0'){
                            if(s3[k]==s1[0]){
                                printf("good");
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
}
    }
    printf("bad");
    return 0;
}