import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JOptionPane;
import javax.swing.JTextPane;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
import javax.swing.JFileChooser;
import javax.swing.JPanel;

import java.awt.Color;
import java.awt.Font;

import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;

public class Huffmangui {

	private JFrame frame;
	private JFileChooser fileChooser;
	String fullPath;
	private JTextField textField;
	private JButton btnBrowse;
        private JLabel lblNewLabel;
        private JButton btnClickToCompress;
        
	public static void main(String[] args) {
                Huffmangui window = new Huffmangui();
                window.frame.setVisible(true);
	}

	public Huffmangui() {
		initialize();
	}

	private void initialize() {
		frame = new JFrame();
		frame.getContentPane().setBackground(Color.DARK_GRAY);
		frame.setBounds(100, 100, 801, 456);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
	        
	        lblNewLabel = new JLabel("                                 Text Compressor");
	        lblNewLabel.setFont(new Font("Verdana", Font.PLAIN, 24));
	        lblNewLabel.setForeground(Color.WHITE);
	        lblNewLabel.setBackground(Color.DARK_GRAY);
	        lblNewLabel.setBounds(10, 11, 746, 50);
	        frame.getContentPane().add(lblNewLabel);

	        textField = new JTextField();
	        textField.setFont(new Font("Tahoma", Font.PLAIN, 17));
		textField.setBounds(10, 150, 630, 42);
		frame.getContentPane().add(textField);
	      
	        btnBrowse = new JButton("Browse");
		btnBrowse.setBackground(Color.LIGHT_GRAY);
		btnBrowse.setBounds(670, 149, 89, 43);
		btnBrowse.addActionListener(new ActionListener() {
			    public void actionPerformed(ActionEvent e) {
					JFileChooser f=new JFileChooser();
					FileTypeFilter filter = new FileTypeFilter(".txt","text");
					f.addChoosableFileFilter(filter);
					int i=f.showOpenDialog(null);    
					if(i==JFileChooser.APPROVE_OPTION) {    
					         File fc=f.getSelectedFile();    
					         fullPath=fc.getPath(); 
					         textField.setText(fullPath);
					         }
                                     }
                          } );
		frame.getContentPane().add(btnBrowse);
	        
		btnClickToCompress = new JButton("Click to Compress");
		btnClickToCompress.setBackground(Color.ORANGE);
		btnClickToCompress.setBounds(267, 302, 221, 42);
		btnClickToCompress.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {

				filecompress f=new filecompress();

				if(textField.getText().equals(""))
				{
				        JOptionPane.showMessageDialog(null,"please enter the path");
				}
				else
				{
				        int ans=f.File(textField.getText());
				        if(ans==2)
				        {
				                JOptionPane.showMessageDialog(null, "File saved in current directory");
					}
					else if(ans ==0)
					{
						JOptionPane.showMessageDialog(null, "File not Found");
					}
					else
						JOptionPane.showMessageDialog(null, "Empty File");
				}
			}
		});
		frame.getContentPane().add(btnClickToCompress);
	}
}