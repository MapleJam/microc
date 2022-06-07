// 测试break
void main(int n) {
    int i;
    i=0;
    for( i = 0 ; i < n;  i = i + 1){
        print(i);
        if(i>5){
          break;
        }
    }
}