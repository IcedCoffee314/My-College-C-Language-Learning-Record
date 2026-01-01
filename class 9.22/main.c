/* 对 fahr = 0, 20, ..., 200 打印华氏温度与摄氏温度对照表 */

int main() {

	int fahr = 0, celsius;

	fahr = 0;  /* 温度表的下限 */

	while (fahr <= 200)  /* 循环 */

	{

		celsius = 5 * (fahr-32) / 9;

		printf("%d\t%d\n", fahr, celsius);  /* 输出 */

		fahr = fahr + 20;  /* 加上间距 */

	}

	return 0;

}
