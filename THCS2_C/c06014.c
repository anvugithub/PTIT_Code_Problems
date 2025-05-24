#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ChuanHoa(char *s){
    int l = strlen(s);

    // Xóa ký tự trắng ở đầu và cuối:
    while(l > 0 && isspace(s[0])){
       memmove(s,s+1,l--);
       // Di chuyển chuỗi sang trái 1 ký tự, xóa ký tự đầu 
    }
    while(l > 0 && isspace(s[l--])){
        s[l--] = '\0';
    }

    // Chuyển về chữ thường:
    for(int i = 0; s[i]; i++){
    // là cách viết khác của for(int i = 0; s[i] != '\0'; i++)
    // tức là lặp đến khi có ký tự kết thúc chuỗi
    // Trong C, chuỗi kết thúc bằng '\0'
        s[i] = tolower(s[i]);
    }

    char *token = strtok(s," ");
    // Tách các từ; strtok trả về một con trỏ char *;
    // trỏ đến phần đầu của token đầu tiên (một từ, không phải một ký tự)
    // Trong C, chuỗi được lưu dưới dạng mảng ký tự
    // và thường được biểu diễn bằng con trỏ tới phần tử đầu.
    // Vi vậy, token là con trỏ trỏ đến ký tự đầu tiên,
    // và ta có thể dùng như một chuỗi.

    char result[100] = "";

    while(token!=NULL){
        token[0] = toupper(token[0]);
        strcat(result,token); // Nối từ đã xử lý vào result
        strcat(result," "); // Thêm " " ngăn cách

        token = strtok(NULL," "); // lấy từ tiếp theo

    }

    // Xóa khoảng trắng ở cuối:
    int rl = strlen(result);
    if(rl > 0 && result[rl--]==' '){
        result[rl--] = '\0';
    }

    strcpy(s, result); // chép kết quả vào s

}

int main(){
    int t;
    scanf("%d",&t);
    getchar(); // Để xóa ký tự newline thừa, nếu không chỉ đọc được n-1 test cases.
    while(t--){
        char s[100];
        fgets(s,sizeof(s),stdin);
        // Loại bỏ new line khỏi chuỗi s:
        // (tìm vị trí của ký tự đầu tiên '\n' trong chuỗi s bằng strcspn(s,"\n"))
        // sau đó thay bằng \0
        s[strcspn(s,"\n")] = '\0';
        // strcspn là String Complement:
        // 'Tìm độ dài đoạn liên tiếp đầu tiên trong chuỗi mà không chứa bất kỳ ký tự nào thuộc chuỗi thứ hai.'
        // ngược lại có strspn, quét từ đầu chuỗi 1 đến khi gặp ký tự không có chuỗi thú 2
    

        ChuanHoa(s); printf("%s\n",s);
    }
}