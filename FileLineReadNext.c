#include <iostream>
#include <string.h>

// コンフィグファイルからのbuffer読み込み文字列が外から渡される
static 	char	buf[1024];

int main()
{
    int i;
    static	char	*wp;
    static	char	*tp;
    char 	*pp;
    // コンフィグファイルから読み込んだ文字列想定
    char    buf[] = "TA_ADJUSTMENT	103";

    // タブまたはスペース区切りが有効
    strtok_r(buf," \t",&wp);
    tp = strtok_r(NULL," \t\n",&wp);
    pp = tp;
    for(i = 0; i < strlen(tp); i++, pp++){
        if(isdigit(*pp) == 0){
            // 数字じゃない時はデフォルト (0想定) を返す
            return(0);
        }
    }
}
