import javax.swing.*;
import java.sql.*;
import java.awt.event.*;
import java.awt.*;

class Passenger extends JFrame implements ActionListener{
	JLabel top=new JLabel("Passenger Information");
	JLabel l1= new JLabel("Name:");
	JLabel l2= new JLabel("Contact NO:");
	JLabel l3= new JLabel("Date of Birth:");
	JLabel l4=new JLabel("Gender:");
	JLabel l5=new JLabel("Email:");
	JButton b1= new JButton("Go");
	JButton b2= new JButton("Logout");
	User u;
	
	public Passenger(User u){
		super("Passenger Information");
		JLabel background = new JLabel(new ImageIcon("F:\\Pictures\\texture_5.jpg"));
		setContentPane(background);
		this.u=u;
		setSize(400,600);
		setVisible(true);
		setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		top.setBounds(145,40,300,35);
		

			JLabel ln1= new JLabel(u.getF()+" "+u.getL());
			JLabel ln2= new JLabel(u.getC());
			JLabel ln3= new JLabel(u.getD());
			JLabel ln4= new JLabel(u.getG());
			JLabel ln5= new JLabel(u.getE());
			add(ln1);
			add(ln2);
			add(ln3);
			add(ln4);
			add(ln5);
			
			
			ln1.setBounds(30+100+20,100,250,40);
			ln2.setBounds(30+100+20,200,100,40);
			ln3.setBounds(30+100+20,300,100,40);
			ln4.setBounds(30+100+20,150,100,40);
			ln5.setBounds(30+100+20,250,250,40);
			
		l1.setBounds(30,100,100,40);	
		
		l2.setBounds(30,200,100,40);
		
		l3.setBounds(30,300,100,40);
		
		l4.setBounds(30,150,100,40);
		
		l5.setBounds(30,250,100,40);
		
		b1.setBounds(75,500,100,30);
		b2.setBounds(75+100+40,500,100,30);
		add(top);
		
		add(l1);
		add(l2);
		add(l3);
		add(l4);
		add(l5);
		add(b1);
		add(b2);
		b1.addActionListener(this);
		b2.addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent a){
		if(a.getSource()==b1){
			setVisible(false);
			Welcome w=new Welcome(u);
		}else{
			setVisible(false);
			Login l=new Login(u.getU());
		}
	}
	
}