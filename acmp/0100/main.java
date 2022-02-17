import java.io. *;
import java.util.*;
import java.util.Scanner;
import java.math. *;

public class main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		BigInteger[][] dp = new BigInteger[101][1000];
 		int n = in.nextInt();
 		dp[0][0] = BigInteger.valueOf(1);
		for (int i = 1; i <= n; i++){
			for (int j = 0; j <= 9*n; j++){
				dp[i][j] = BigInteger.ZERO;
				for (int k = 0; k <= 9; k++)
					if (j >= k && dp[i - 1][j - k] != null) dp[i][j] = dp[i][j].add(dp[i - 1][j - k]);
			}
		}
		System.out.print(dp[n][9*n/2]);
//		in.nextInt();
	}
}
