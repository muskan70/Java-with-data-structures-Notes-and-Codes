package gui;
import java.awt.Color;
import javax.swing.*;
import java.awt.event.*;
class tictactoe extends JFrame{
	JLabel l1,l2,l3;
	JTextField t1,t2;
	JButton b0,b1,b2,b3,b4,b5,b6,b7,b8,b9;
	int status;
	boolean player1turn;
	Player player1,player2;
	Board board;
	public tictactoe(){
		super("TIC TAC TOE");
	}
	public static void main(String args[])
	{
		tictactoe x=new tictactoe();
		x.setcomponents();
		x.setSize(300,400);
		x.setBackground(Color.BLACK);
		x.setVisible(true);
		x.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public void setcomponents(){
		l1=new JLabel("Player 1    X");
		l2=new JLabel("Player 2    O");
		l3=new JLabel();
		t1=new JTextField();
		t2=new JTextField();
		b0=new JButton("Start game");
		b1=new JButton();
		b2=new JButton();
		b3=new JButton();
		b4=new JButton();
		b5=new JButton();
		b6=new JButton();
		b7=new JButton();
		b8=new JButton();
		b9=new JButton();
		setLayout(null);
		l1.setBounds(50,50,100,20);
		l2.setBounds(50,80,100,20);
		l3.setBounds(80,300,200,20);
		t1.setBounds(150,50,100,20);
		t2.setBounds(150,80,100,20);
		b0.setBounds(60,120,150,20);
		b1.setBounds(80,150,50,30);
		b2.setBounds(145,150,50,30);
		b3.setBounds(210,150,50,30);
		b4.setBounds(80,185,50,30);
		b5.setBounds(145,185,50,30);
		b6.setBounds(210,185,50,30);
		b7.setBounds(80,220,50,30);
		b8.setBounds(145,220,50,30);
		b9.setBounds(210,220,50,30);
		add(l1);
		add(l2);
		add(l3);
		add(t1);
		add(t2);
		add(b0);
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		add(b5);
		add(b6);
		add(b7);
		add(b8);
		add(b9);
		b0.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e)
			{
			    player1=new Player(t1.getText(),'X');
                player2=new Player(t2.getText(),'O');
	            board=new Board('X','O');
                status=Board.INCOMPLETE;
                player1turn=true;
				b0.setText(player1.getname()+"'s turn");
			}
		});			
			
		b1.addActionListener(new answer(0,0,1));
		b2.addActionListener(new answer(0,1,2));
		b3.addActionListener(new answer(0,2,3));
		b4.addActionListener(new answer(1,0,4));
		b5.addActionListener(new answer(1,1,5));
		b6.addActionListener(new answer(1,2,6));
		b7.addActionListener(new answer(2,0,7));
		b8.addActionListener(new answer(2,1,8));
		b9.addActionListener(new answer(2,2,9));
	}
	class answer implements ActionListener{
		int x,y,i;
		public answer(int x,int y,int z)
		{
			this.x=x;
			this.y=y;
			this.i=z;
		}
         public void actionPerformed(ActionEvent e)
		{
			if(status==Board.INCOMPLETE ||status==Board.INVALID)
            {
				if(player1turn)
                {
                    status=board.move('X',x,y);
                    if(status!=Board.INVALID)
                    {
                        player1turn=false;
					    fill("X");
					    b0.setText(player2.getname()+"'s turn");
                    }
                    else{
                        l3.setText("Invalid Move !! try again !!");
                    }
                }
                else
                {
                    status=board.move('O',x,y);
                    if(status!=Board.INVALID)
                    {
                        player1turn=true;
					    fill("O");
					    b0.setText(player1.getname()+"'s turn");
                    }
                    else{
                        l3.setText("Invalid Move !! try again !!");
                    }
                }
			}
            if(status==Board.PLAYER_1_WIN)
            {
				l3.setText("PLAYER 1 - "+player1.getname()+" WINS !!");
				b0.setText("Game Finish");
			}
        
            else if(status==Board.PLAYER_2_WIN)
			{
				l3.setText("PLAYER 2 - "+player2.getname()+" WINS !!");
			    b0.setText("Game Finish");
			}
        
             else if(status==Board.DRAW)
			 {
				 l3.setText("DRAW !!");
                 b0.setText("Game Finish");
			 }				 
		}
		public void fill(String symbol)
		{
			switch(i)
			{
				case 1:b1.setText(symbol);
     		           break;
			    case 2:b2.setText(symbol);
			           break;
				case 3:b3.setText(symbol);
			           break;	
                case 4:b4.setText(symbol);
			           break;
                case 5:b5.setText(symbol);
			           break;
                case 6:b6.setText(symbol);
			           break;
                case 7:b7.setText(symbol);
			           break;
                case 8:b8.setText(symbol);
			           break;
                case 9:b9.setText(symbol);
			           break;					   
			}
        }
    }		
}	