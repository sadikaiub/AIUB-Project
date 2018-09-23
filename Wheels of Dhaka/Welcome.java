import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Welcome extends JFrame implements ActionListener{
	JLabel l1= new JLabel("Welcome To Wheels Of Dhaka");
	JLabel l2=new JLabel("Which WD Service You Want at The Moment ?");
	JButton b1 = new JButton("Drop Off");
	JButton b2 = new JButton("Drive for Day");
	JButton b3 = new JButton("Tour");
	JButton b4= new JButton("Back");
	JLabel name;
	User u;
	
	public Welcome(User u){
		super("Welcome");
		JLabel background = new JLabel(new ImageIcon("F:\\Pictures\\texture_4.jpg"));
		setContentPane(background);
		this.u=u;
		setVisible(true);
		setSize(400,600);
		setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		name = new JLabel(u.getF()+" "+u.getL());
		l1.setBounds(20,50,400,50);
		name.setFont(new Font("Times New Roman",Font.PLAIN,15));
		l1.setFont(new Font("Times New Roman", Font.BOLD,22));
		name.setBounds(150,100,150,50);
		add(l1);
		add(name);
		b1.setBounds(70,200,250,60);
		b1.setFont(new Font("Times New Roman", Font.BOLD,20));
		b2.setFont(new Font("Times New Roman", Font.BOLD,20));
		b3.setFont(new Font("Times New Roman", Font.BOLD,20));
		b2.setBounds(70,270,250,60);
		b3.setBounds(70,340,250,60);
		b4.setBounds(260,500,100,30);
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent a){
		if(a.getSource()==b1){
			setVisible(false);
			DropOff d=new DropOff(u);
		}else if(a.getSource()==b2){
			setVisible(false);
			DriveDay d=new DriveDay(u);
		}else if(a.getSource()==b3){
			setVisible(false);
			TourD d=new TourD(u);
		}else{
			setVisible(false);
			Passenger p=new Passenger(u);
		}
	}
	
	
	
	
}