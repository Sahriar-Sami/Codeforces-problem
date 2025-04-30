import java.util.Scanner;

public class prob-231A {


    
    public static void main(String[] args) {
       Scanner input=new Scanner(System.in);
       int a=input.nextInt();
       int count=0;
       for(int i=0;i<a;i++){
        int x=input.nextInt();
        int y=input.nextInt();
        int z=input.nextInt();
        if(x+y+z>1){count++;}


       }
       System.out.println(count);


    }
    
}
