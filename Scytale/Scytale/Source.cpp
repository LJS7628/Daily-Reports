#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Encoding(int);
void Decoding(int);

int main() 
{
	/*
	  0. ���ڿ��� ��ȣŰ �������� ���ڿ��� ������ ������ ��ȣ���� �ϼ��ȴ�. 
	  1. ���ڿ��� ���̸� ��ȣŰ�� ������ �� �������� ������ (��+1)�� ��ȣŰ �ƴ϶�� ���� ��ȣŰ 
	  2. ��ȣŰ-������ = �߰��� ��ĭ�� ��  (���ڿ��� ���̸� �̿��ϸ� �߰��� �ʿ䰡 ����.) 
	  3. ��ȣŰ ��ŭ �ݺ����� �����ϸ� ��ȣŰ �������� ���ڿ��� ������ ������ ���� �ϼ��ȴ�.
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