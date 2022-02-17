import java.io. *;
import java.util. *;
import java.util.Scanner;
import java.math. *;
 
public class Main{
	public static void main(String[] args){
    	Scanner in = new Scanner(System.in);
    	BigInteger[] dp = new BigInteger[200];
    	int n = in.nextInt();
    	BigInteger two = BigInteger.valueOf(2);
		dp[0] = BigInteger.valueOf(2);
		for (int i = 1; i <= n; i++){
			dp[i] = BigInteger.ZERO;
			BigInteger tmp = BigInteger.valueOf(0);
			tmp = tmp.add(dp[i - 1]);
			tmp = tmp.add(dp[i - 1]);
			tmp = tmp.add(dp[i - 1]);
			tmp = tmp.subtract(two);
			dp[i] =	dp[i].add(tmp); 
		}
		System.out.print(dp[n]);
	}
}