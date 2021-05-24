/* 
 * Enter your code here. Read input from STDIN. Print your output to STDOUT. 
 * Your class should be named CandidateCode.
*/

import java.io.*;
import java.util.*;
public class CandidateCode {

    static boolean seq(String s1,String s2,int a,int b)
    {
        int j=0;
        for(int i=0;i<b && j<a;i++)
        if(s1.charAt(j)==s2.charAt(i))
        j++;

        return(j==a);
    }

    public static void main(String args[] ) throws Exception {

    	String V,B;
        int N;
        Scanner sc=new Scanner(System.in);
        V=sc.next();
        N=sc.nextInt();
        
        for(int i=1;i<=N;i++)
        {
            B=sc.next();
            int a=B.length();
            int b=V.length();
            boolean r = seq(B,V,a,b);
            if(r)
            {
                System.out.println("POSITIVE");
            }
            else
            {
                System.out.println("NEGATIVE");
            }
        }


   }
}
