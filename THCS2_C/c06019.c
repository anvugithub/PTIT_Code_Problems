#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int wordsCount = 0, pos = 0;
    char s[100], words[100][100]; // Mỗi từ là một chuỗi con

    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = '\0';

    for(int i = 0; i < strlen(s); i++){
        if(isspace(s[i])){
            if(pos != 0){
                words[wordsCount][pos] = '\0'; // Đánh dấu kết thúc từ khi gặp khoảng trống
                wordsCount++;
                pos = 0;
            }
        }
        else{
                words[wordsCount][pos++] = tolower(s[i]);
            }
        
    }
    
    // Sau khi duyệt hết, nếu còn từ chưa được kết thúc (không có dấu cách):
    if(pos != 0){
        words[wordsCount][pos] = '\0';
        wordsCount++;
    }

    for(int i = 0; i < wordsCount - 1; i++){
        printf("%c",words[i][0]);
        // in chữ cái đầu của các từ trước tên
    }

    printf("%s@ptit.edu.vn",words[wordsCount - 1]);
    // in tên và đuôi mail

}