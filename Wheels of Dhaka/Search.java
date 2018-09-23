import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Search extends JFrame implements ActionListener{
	

	JLabel l3= new JLabel("Service:");
	JButton b1= new JButton("Cancel");
	JButton b2= new JButton("Go");
	JRadioButton rb1=new JRadioButton("Drop Off");
	JRadioButton rb2=new JRadioButton("Drive for Day");
    JRadioButton rb3=new JRadioButton("Tour");
	ButtonGroup bg1= new ButtonGroup();
	User u;


	
	public Search(User u){
		super("Search");
		this.u=u;
		JLabel background = new JLabel(new ImageIcon("F:\\Pictures\\texture_7.jpg"));
		setContentPane(background);
		setSize(400,600);
		setVisible(true);
		setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
	
		l3.setBounds(30,150,100,35);
		
		b1.setBounds(75,500,100,30);
		b2.setBounds(75+100+40,500,100,30);
		rb1.setBounds(30+100,150,150,30);
		rb2.setBounds(30+100,200,150,30);
		rb3.setBounds(30+100,250,150,30);
		bg1.add(rb1);
		bg1.add(rb2);
		bg1.add(rb3);
		
		
		
		add(l3);
		add(b1);
		add(b2);
		add(rb1);
		add(rb2);
		add(rb3);
		b1.addActionListener(this);
		b2.addActionListener(this);
	}
	
	
	public void actionPerformed(ActionEvent a){
		
		if(a.getSource() ==b1){ 	
			setVisible(false);
			Driver d=new Driver(u);
		}
		else if(a.getSource()== b2){
			String t;
			if(rb1.isSelected()){
				t="dropoff";
			}else if(rb2.isSelected()){
				t="driveday";
			}else{
				t="tour";
			}
			SearchResult s=new SearchResult(u,t);
			setVisible(false);
		}
		
		
	}
	
}