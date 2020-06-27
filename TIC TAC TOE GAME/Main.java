import java.util.*;
class Player{
    private String name;
    private char symbol;
    
    public Player(String name,char symbol)
    {
        setname(name);
        setsymbol(symbol);
    }
    public void setname(String name)
    {
        if(!name.isEmpty())
        this.name=name;
    }
    public void setsymbol(char symbol)
    {
        if(symbol!='\0')
        this.symbol=symbol;
    }
    public String getname()
    {
        return this.name;
    }
    public char getsymbol()
    {
        return this.symbol;
    }
}
class Board{
    private char board[][];
    private int boardsize=3;
    private char p1symbol,p2symbol;
    private int count;
    public final static int PLAYER_1_WIN=1;
    public final static int PLAYER_2_WIN=2;
    public final static int DRAW=3;
    public final static int INCOMPLETE=4;
    public final static int INVALID=5;
    
    public Board(char p1symbol,char p2symbol)
    {
       board=new char[boardsize][boardsize];
       for(int i=0;i<boardsize;i++)
       {
           for(int j=0;j<boardsize;j++)
           {
               board[i][j]=' ';
           }
       }
       this.p1symbol=p1symbol;
       this.p2symbol=p2symbol;
       count=0; 
    }
    
    public int move(char symbol,int x,int y)
    {
        if(x<0 || y<0 ||x>=boardsize ||y>=boardsize || board[x][y]!=' ')
        return INVALID;
        
        board[x][y]=symbol;
        count++;
        
        if(board[0][y]==board[1][y] && board[0][y]==board[2][y])
        return symbol==p1symbol ? PLAYER_1_WIN :PLAYER_2_WIN;
        
        if(board[x][0]==board[x][1] && board[x][0]==board[x][2])
        return symbol==p1symbol ? PLAYER_1_WIN :PLAYER_2_WIN;
        
        if(board[0][0]!=' ' && board[0][0]==board[1][1] && board[0][0]==board[2][2])
        return symbol==p1symbol ? PLAYER_1_WIN :PLAYER_2_WIN;
        
        if(board[0][2]!=' ' && board[0][2]==board[1][1] && board[0][2]==board[2][0])
        return symbol==p1symbol ? PLAYER_1_WIN :PLAYER_2_WIN;
        
        if(count==boardsize*boardsize)
        return DRAW;
        return INCOMPLETE;
    }
    public void print()
    {
        System.out.println("-----------------------");
        for(int i=0;i<boardsize;i++)
        {
            for(int j=0;j<boardsize;j++)
            {
                System.out.print("| "+board[i][j]+" |");
            }
            System.out.println();
        }
        System.out.println("-----------------------");
    }
}
public class Main {
    private Player player1,player2;
    private Board board;
     
    public void startgame()
    {
        Scanner s=new Scanner(System.in);
        player1=takeinput(1);
        player2=takeinput(2);
        while(player1.getsymbol()==player2.getsymbol())
        {
            System.out.println("Symbol already taken !! pick another symbol");
            char symbol=s.next().charAt(0);
            player2.setsymbol(symbol);
        }
        
        board=new Board(player1.getsymbol(),player2.getsymbol());
        int status=Board.INCOMPLETE;
        boolean player1turn=true;
        while(status==Board.INCOMPLETE ||status==Board.INVALID)
        {
            if(player1turn)
            {
                System.out.println("Player1 "+player1.getname()+"'s turn");
                System.out.println("enter x:");
                int x=s.nextInt();
                System.out.println("enter y:");
                int y=s.nextInt();
                status=board.move(player1.getsymbol(),x,y);
                if(status!=Board.INVALID)
                {
                    player1turn=false;
                    board.print();
                }
                else{
                    System.out.println("Invalid Move !! try again !!");
                }
            }
            else
            {
                System.out.println("Player2 "+player2.getname()+"'s turn");
                System.out.println("enter x:");
                int x=s.nextInt();
                System.out.println("enter y:");
                int y=s.nextInt();
                status=board.move(player2.getsymbol(),x,y);
                if(status!=Board.INVALID)
                {
                    player1turn=true;
                    board.print();
                }
                else{
                    System.out.println("Invalid Move !! try again !!");
                }
            }
        }
        if(status==Board.PLAYER_1_WIN)
        System.out.println("PLAYER 1 - "+player1.getname()+" WINS !!");
        
        else if(status==Board.PLAYER_2_WIN)
        System.out.println("PLAYER 2 - "+player2.getname()+" WINS !!");
        
        else
        System.out.println("DRAW !!");
        
    }
    
    private Player takeinput(int n)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter player "+n+" name");
        String name=s.nextLine();
        System.out.println("enter player "+n+" symbol");
        char symbol=s.next().charAt(0);
        Player p=new Player(name,symbol);
        return p;
    }
    public static void main(String args[]) {
        Main t=new Main();
        t.startgame();
    }
}
