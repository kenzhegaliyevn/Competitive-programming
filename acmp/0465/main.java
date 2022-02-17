import java.io. *;
import java.util.*;
import java.util.Scanner;
import java.math. *;

public class main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
		BigInteger[] dp = new BigInteger[2000];
		int n = in.nextInt();
        dp[0] = BigInteger.valueOf(1);
        dp[1] = BigInteger.valueOf(1);
         
        for (int i = 2; i <= n + 1; i++){
        	dp[i] = BigInteger.ZERO;
            dp[i] = dp[i].add(dp[i - 1]);
            dp[i] = dp[i].add(dp[i - 2]);
		}       
        System.out.print(dp[n + 1]);        
    }
}
