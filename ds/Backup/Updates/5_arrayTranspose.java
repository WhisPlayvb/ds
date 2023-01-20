import java.util.*;

class arrayTranspose
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
       
        int row,col,x,y;
        int row1,col1;
       
        System.out.println("");
        System.out.println("Enter the number of rows : ");
        row = sc.nextInt();
       
        System.out.println("Enter the number of column : ");
        col = sc.nextInt();
       
        int[][] a = new int[row][col];
       
        for(int i=0;i<=row-1;i++)
        {
            for(int j=0;j<=col-1;j++)
            {
                System.out.println("Enter the value : ");
                x = sc.nextInt();
                a[i][j] = x;
            }
        }
       
        for(int i=0;i<=row-1;i++)
        {
            for(int j=0;j<=col-1;j++)
            {
                System.out.print(" \t "+a[i][j]);
            }
            System.out.println("");
        }
        System.out.println("Enter the number of rows : ");
        row1 = sc.nextInt();
       
        System.out.println("Enter the number of column : ");
        col1 = sc.nextInt();
       
        int[][] b = new int[row1][col1];
       
        for(int i=0;i<=row1-1;i++)
        {
            for(int j=0;j<=col1-1;j++)
            {
                System.out.println("Enter the value : ");
                x = sc.nextInt();
                b[i][j] = x;
            }
        }
       
        for(int i=0;i<=row1-1;i++)
        {
            for(int j=0;j<=col1-1;j++)
            {
                System.out.print(" \t "+b[i][j]);
            }
            System.out.println("");
        }

        int[][] sum = new int[row][col];

        //Additon of Two matrix
        for(int i=0;i<=row-1;i++)
        {
            for(int j=0;j<=col-1;j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        //display of array
        System.out.println("");
        System.out.println("Addition of 2 Matrix : ");


        for(int i=0;i<=row-1;i++)
        {
            for(int j=0;j<=col-1;j++)
            {
                System.out.print(" \t "+sum[i][j]);
            }
            System.out.println("");
        }

     
        //Transpose of matrix
        System.out.println("");
        System.out.println("Transpose of Matrix is : \n");

        int transpose[][]=new int[row][col];
        
        for(int i=0;i<a.length;i++)
        {
            for(int j=0;j<a[i].length;j++)
            {
                transpose[i][j]=a[j][i];
            }
        }

        // Displaying Transpose Matrix
        for(int i=0;i<a.length;i++)
        {
            for(int j=0;j<a[i].length;j++)
            {
                System.out.print(" "+transpose[i][j]);
            }
            System.out.println();
        }
    }
}



