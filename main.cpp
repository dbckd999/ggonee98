#pragma warning(disable:4996)
#include <stdio.h>
void help();
int main() {
	int index = 0, price = 0, num = 0;
	int Rseat[10][5]{ 0 }, Sseat[10][5]{ 0 };
	char rs = '0';

	int(*pR)[5] = Rseat, (*pS)[5] = Sseat;
	
	//R석과 S석을 _로 초기화
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			Rseat[i][j] = '_';
			Sseat[i][j] = '_';
		}
	}

	//누군가 예약한 좌석
	*pR[5] = 'x';
	for (int i = 0; i < 5; i++)
		*pS[i] = 'x';

	

	while (1) {
		help();
		scanf("%d", &index);
		if (index == 1) {
			printf("o: 귀하가 예약한 좌석, x: 타인이 예약한 좌석, _: 빈 좌석입니다.\n");
			printf("R석\n");
			for (int j = 0; j < 5; j++) {
				for (int i = 0; i < 10; i++)
					printf("%c", Rseat[i][j]);
				printf("\n");
			}
			printf("\n\nS석\n");
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
			printf("R석은 5만원, S석은 3만원입니다.\n");
			printf("좌석을 입력하세요. 범위:R1_R50, S1~S50 > ");
			scanf(" %c%d", &rs, &num);
			//printf("%c%d\n", rs, num);
			if (rs == 'R') {
				//**pR + (4 * num) = 'o';
				printf("%p\n", **pR);
			}
			//printf("%c%d번 좌석이 예약되었습니다.");
			index = 0;
			continue;
		}
		else if (index == 3) {

		}
		else {
			continue;
		}
	}


	printf("예약된 좌석의 번호는 아래와 같습니다.\n");
	//printf("%c%d %c%d\n", );
	//printf("총 결제 금액은 %d원입니다.\n");
}
void help() {
	printf("1. 좌석 현황 출력, 2. 예약, 3. 예약 취소, 다른 값은 종료> ");
}