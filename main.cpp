#pragma warning(disable:4996)
#include <stdio.h>
void help();
int main() {
	int index = 0, price = 0, num = 0;
	int Rseat[10][5]{ 0 }, Sseat[10][5]{ 0 };
	char rs = '0';

	int(*pR)[5] = Rseat, (*pS)[5] = Sseat;
	
	//R���� S���� _�� �ʱ�ȭ
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			Rseat[i][j] = '_';
			Sseat[i][j] = '_';
		}
	}

	//������ ������ �¼�
	*pR[5] = 'x';
	for (int i = 0; i < 5; i++)
		*pS[i] = 'x';

	

	while (1) {
		help();
		scanf("%d", &index);
		if (index == 1) {
			printf("o: ���ϰ� ������ �¼�, x: Ÿ���� ������ �¼�, _: �� �¼��Դϴ�.\n");
			printf("R��\n");
			for (int j = 0; j < 5; j++) {
				for (int i = 0; i < 10; i++)
					printf("%c", Rseat[i][j]);
				printf("\n");
			}
			printf("\n\nS��\n");
			for (int j = 0; j < 5; j++) {
				for (int i = 0; i < 10; i++)
					printf("%c", Sseat[i][j]);
				printf("\n");
			}
			printf("\n");
			index = 0;
			continue;
		}
		else if (index == 2) {
			printf("R���� 5����, S���� 3�����Դϴ�.\n");
			printf("�¼��� �Է��ϼ���. ����:R1_R50, S1~S50 > ");
			scanf(" %c%d", &rs, &num);
			//printf("%c%d\n", rs, num);
			if (rs == 'R') {
				//**pR + (4 * num) = 'o';
				printf("%p\n", **pR);
			}
			//printf("%c%d�� �¼��� ����Ǿ����ϴ�.");
			index = 0;
			continue;
		}
		else if (index == 3) {

		}
		else {
			continue;
		}
	}


	printf("����� �¼��� ��ȣ�� �Ʒ��� �����ϴ�.\n");
	//printf("%c%d %c%d\n", );
	//printf("�� ���� �ݾ��� %d���Դϴ�.\n");
}
void help() {
	printf("1. �¼� ��Ȳ ���, 2. ����, 3. ���� ���, �ٸ� ���� ����> ");
}