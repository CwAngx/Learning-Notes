bool isAnagram(char *s, char *t)
{
	int i, x[26] = { 0 }, y[26] = { 0 };
	for (i = 0; s[i] != '\0'; i++)	x[s[i] - 'a']++;	//���� s ���ַ��� x
	for (i = 0; t[i] != '\0'; i++)	y[t[i] - 'a']++;	//���� t ���ַ��� y
	for (i = 0; i < 26; i++)							//�Ƚ����ַ����Ƿ���ͬ
		if (x[i] != y[i])	return false;
	return true;										//���ࡢ��������ͬ
}