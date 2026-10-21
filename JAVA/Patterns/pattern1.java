package JAVA.Patterns;


// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 


public class pattern1 {
    public static void main(String[] args){
        System.out.println("Hello World");

        int n = 4;
        for( int i = 1; i <= n; i++){
            // System.out.println(i);
            for(int j=1; j <=4; j++){
                System.out.print(j + " ");
            }
            System.out.println();
        }

    }


}
