#include <stdio.h>
#define MAXSTR 1024
#define WORDLEN	3

struct tango
{
	char word[20];
	int count;
};

//
// 文字列 s の長さを求める
//
int strlength(char s[])
{
	int len = 0;
	while(*s++){
		len++;
	}
	return len;
}

//
// 2つの文字列 s1 と s2 が何文字目まで等しいか調べる
//
int stringcmp(char s1[], char s2[])
{
	int i;
	for(i = 0; i < WORDLEN; i++){
		if(s1[i] != s2[i])
			return -1;  // 一致しない場合-1を返却
	}
	return i;
}

//
// 文字列 s がすでに配列 c に存在するかを調べる
//
int checktango(char s[], struct tango c[], int num)
{
	int i;
	for(i = 0; i < num; i++){
		if(stringcmp(s, c[i].word) == WORDLEN)
			return i;
	}
	return -1;  // 存在しなければ-1を返却
}

//
// 文字列 s2 を s1 にコピーする
//
int stringcopy(char s1[], char s2[])
{
	int i;
	for(i = 0; i < WORDLEN; i++)
		s1[i] = s2[i];
	s1[WORDLEN] = 0;
	return 0;
}

//
// 結果をソートする
//
void wordsort(struct tango c[], int n)
{
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(c[j].count > c[j+1].count){
				struct tango tmp;
				tmp = c[j];
				c[j] = c[j+1];
				c[j+1] = tmp;
			}
		}
	}
}

//
// main 関数
//
int main(void)
{
	char s[MAXSTR];
	int i, ntango = 0;
	struct tango collect[2000];
	

	while(1){
		int ch;
		i = scanf("%s", s);
		if(i == EOF) {
			break;
        }
		if(strlength(s) == WORDLEN) {
			if((ch = checktango(s, collect, ntango)) != -1){
				stringcopy(collect[ch].word, s);
				collect[ch].count += 1;
			}else{
				stringcopy(collect[ntango].word, s);
				collect[ntango].count = 1;
				// printf("%d: %s\n", ntango, s);
				ntango++;
			}
        }
	}
	wordsort(collect, ntango);
	for(i = 1; i < ntango + 1; i++){
		printf("%d: %s\n", collect[i].count, collect[i].word);
	}
}
