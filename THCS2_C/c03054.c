#include <stdio.h>
#include <string.h>

/*
Số 0 cắt đôi vẫn ra số 0
Số 1 cắt đôi vẫn ra số 1
Số 8 cắt đôi ra số 0
Số 9 cắt đôi ra số 0
Các số khác cắt đôi sẽ không hợp lệ.
Cho một số nguyên dương không quá 18 chữ số. Hãy in ra kết quả “cắt đôi” của số đó.

Nếu không hợp lệ thì ghi ra INVALID. Chú ý: nếu cắt đôi ra một dãy toàn 0 thì cũng được coi là không hợp lệ. Kết quả cắt đôi thì không tính chữ số 0 ở đầu.
*/

/*
Invalid khi một dãy toàn 0, hay có số 0 ở đầu.
Vậy để số hợp lệ, trong số ít nhất phải có chữ số 1. 

Invalid khi có số không phải 0, 1, 8, 9 xuất hiện (không thể cắt).
*/
int main(){
    int t; scanf("%d",&t);
    while(t--){
        char n[19]; scanf("%s",n);
        int isValid = 1;
        for(int i = 0; i < strlen(n); i++){
            if(n[i]=='1') isValid = 1;
            else if(n[i]!='0' && n[i] != '8' && n[i] != '9'){
                isValid = 0;
                break;
            }
        }


        // Nếu phát hiện không hợp lệ thì dừng luôn.
        if(!isValid){
            printf("INVALID\n");
            continue;
        }

        isValid = 0; // Thực chất mục đích để kiểm tra
        // đã gặp số 1 hay chưa

        for(int i = 0; i < strlen(n); i++){
            if(n[i]=='1'){
                printf("1");
                isValid = 1;
            }
            else if(isValid){
                printf("0");
            }
        }

        if(!isValid) printf("INVALID\n");

        printf("\n");

    }
}