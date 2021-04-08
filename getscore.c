#include "score.h"

void input_scores(int scores[]) {
	int i, input = 0;

	printf("Enter score, -1 to end:\n");
	for (i = 0; i < MAX && input != -1; i++) {
		printf("score %d: ", i + 1);
		scanf("%d", &input);
		if (input < -1 || input > 100) {
			printf("Invalid input\n");
			i--;
		}
		else {
			scores[i] = input;
		}
	}
}