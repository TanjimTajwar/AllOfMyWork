#include<stdio.h>
int main()
{
		int n,count;
		count = 0;
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
		    int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			if(a+b+c>=2)
			{
				count++;
			}
		}
		printf("%d",count);

}
/*import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int count = 0;

        for (int j = 0; j < n; j++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();

            if (a + b + c >= 2) {
                count++;
            }
        }

        System.out.println(count);

        scanner.close();
    }
}
*/
