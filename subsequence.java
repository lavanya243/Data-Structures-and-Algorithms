import java.io.*;
import java.util.*;
public class CandidateCode {

    static boolean seq(String s1,String s2,int a,int b)
    {
        if(a==0)
        return true;
        if(b==0)
        return false;

        if(s1.charAt(a-1)==s2.charAt(b-1))
        return seq(s1,s2,a-1,b-1);

        return seq(s1,s2,a,b-1);
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