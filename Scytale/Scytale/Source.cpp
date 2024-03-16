#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Encoding(int);
void Decoding(int);

int main() 
{
	/*
	  0. 문자열을 암호키 간격으로 문자열을 나누어 넣으면 암호문이 완성된다. 
	  1. 문자열의 길이를 암호키로 나눴을 때 나머지가 있으면 (몫+1)이 복호키 아니라면 몫이 복호키 
	  2. 암호키-나머지 = 추가할 빈칸의 수  (문자열의 길이를 이용하면 추가할 필요가 없다.) 
	  3. 복호키 만큼 반복문을 수행하면 복호키 간격으로 문자열을 나누어 넣으면 평문이 완성된다.
	*/
	Encoding(3);
	Decoding(3);

	return 0;
}
void Encoding(int key) 
{
	char sentance[] = "ILOVEYOU";
	char secret[] = "ILOVEYOU";
	int cnt = 0;

	for (int i = 0; i < key; i++)
	{
		for (int j = i; j < strlen(sentance); j += key)
		{
			secret[cnt] = sentance[j];
			cnt += 1;
		}
		
	}
	printf("Secret Sentance : %s\n", secret);
}


void Decoding(int Key)
{
	char secret[] = "IVOLEUOY";
	char sentance[] = "IVOLEUOY";
	int cnt = 0;

	int solution = 0;
	int len = strlen(secret);

	if (len % Key == 0)
		solution = len / Key;
	else
		solution = len / Key + 1;

	for (int i = 0; i < solution; i++)
	{
		for (int j = i; j < len; j += solution)
		{
			sentance[cnt] = secret[j];
			cnt += 1;
		}

	}

	printf("General Sentance : %s\n", sentance);

}