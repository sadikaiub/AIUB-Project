import javax.swing.*;
import java.awt.event.*;
import java.awt.image.*;
import java.sql.*;

class Reg extends JFrame implements ActionListener{
	JLabel l1=new JLabel("First Name");
	JLabel l2=new JLabel("Last Name");
	JLabel l3=new JLabel("Username");
	JLabel l4=new JLabel("Password");
	JLabel l5=new JLabel("Confirm Password");
	JLabel l6 = new JLabel("Gender");
	JLabel l7 = new JLabel("Date of Birth");
	JLabel l8=new JLabel("Email");
	JLabel l9=new JLabel("Contact No");
	JLabel l10= new JLabel("Account Type");
	JLabel background = new JLabel(new ImageIcon("F:\\Pictures\\texture_3.jpg"));
	JTextField t1=new JTextField();
	JTextField t2=new JTextField();
	JTextField t3=new JTextField();
	JPasswordField t4=new JPasswordField();
	JPasswordField t5=new JPasswordField();
	JRadioButton rb1= new JRadioButton("Male");
	JRadioButton rb2= new JRadioButton("Female");
	ButtonGroup bg1 = new ButtonGroup();
	String[] year={"2010","2009","2008","2007","2006","2005","2004","2003","2002","2001","2000","1999","1998","1997","1996","1995","1994","1993","1992","1991","1990"};
	String[] mon={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
	String[] date={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"};
	JComboBox yearList = new JComboBox(year);
	JComboBox monList= new JComboBox(mon);
	JComboBox dateList= new JComboBox(date);
	JTextField t6=new JTextField();
	JTextField t7=new JTextField();
	JRadioButton rb3= new JRadioButton("Passenger");
	JRadioButton rb4= new JRadioButton("Driver");
	ButtonGroup bg2 = new ButtonGroup();
	JButton b1=new JButton("Cancle");
	JButton b2=new JButton("Submit");
	Login l;
	
	public Reg(){
		super("Registration");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setContentPane(background);
		setVisible(true);
		setSize(500,700);
		setLayout(null);
		l1.setBounds(25,100,150,35);
		l2.setBounds(25,150,150,35);
		l3.setBounds(25,200,150,35);
		l4.setBounds(25,250,150,35);
		l5.setBounds(25,300,150,35);
		l6.setBounds(25,350,150,35);
		rb1.setBounds(25+150+30,350,80,35);
		rb2.setBounds(25+150+30+100+20,350,80,35);
		l7.setBounds(25,400,150,35);
		yearList.setBounds(25+150+30,400,60,35);
		monList.setBounds(25+150+30+60,400,60,35);
		dateList.setBounds(25+150+30+60+60,400,60,35);
		bg1.add(rb1);
		bg1.add(rb2);
		l8.setBounds(25,450,150,35);
		l9.setBounds(25,500,150,35);
		l10.setBounds(25,550,150,35);
		rb3.setBounds(25+150+30,550,90,35);
		rb4.setBounds(25+150+30+100+20,550,80,35);
		bg2.add(rb3);
		bg2.add(rb4);
		add(l1);
		add(l2);
		add(l3);
		add(l4);
		add(l5);
		add(l6);
		add(l7);
		add(l8);
		add(l9);
		add(l10);
		add(rb1);
		add(rb2);
		add(rb3);
		add(rb4);
		add(yearList);
		add(dateList);
		add(monList);
		t1.setBounds(25+150+30,100,200,28);
		t2.setBounds(25+150+30,150,200,28);
		t3.setBounds(25+150+30,200,200,28);
		t4.setBounds(25+150+30,250,200,28);
		t5.setBounds(25+150+30,300,200,28);
		t6.setBounds(25+150+30,450,200,28);
		t7.setBounds(25+150+30,500,200,28);
		add(t1);
		add(t2);
		add(t3);
		add(t4);
		add(t5);
		add(t6);
		add(t7);
		b1.setBounds(75+40,600,100,30);
		b2.setBounds(75+40+100+40,600,100,30);
		add(b1);
		add(b2);
		b2.addActionListener(this);
		b1.addActionListener(this);
		
	}
	public void actionPerformed(ActionEvent a){
		String p1=new String(t4.getPassword());
		String p2=new String(t5.getPassword());
		
		if(a.getSource()==b2){
			if(t3.getText().isEmpty() || t1.getText().isEmpty() ||t2.getText().isEmpty()||t6.getText().isEmpty()||t7.getText().isEmpty()){
				JOptionPane.showMessageDialog(this,"All Fields Must Be Filled");
			}else if(p1.equals(p2)){
				
				User u= new User();
				u.setF(t1.getText());
				u.setL(t2.getText());
				u.setU(t3.getText());
				u.setP(new String(t4.getPassword()));
				u.setE(t6.getText());
				u.setC(t7.getText());
				if(rb1.isSelected()){
					u.setG(rb1.getText());
				}else{
					u.setG(rb2.getText());	
				}
				if(rb3.isSelected()){
					u.setA(1);
				}else{
					u.setA(2);
				}
				u.setD(yearList.getSelectedItem().toString(),monList.getSelectedItem().toString(),dateList.getSelectedItem().toString());
				
				String dsql="INSERT INTO `wheels`.`user` (`userName`, `firstName`, `lastName`, `password`, `email`, `gender`, `contactNo`, `dateOfBirth`,`type`) VALUES ('"+u.getU()+"', '"+u.getF()+"', '"+u.getL()+"', '"+u.getP()+"', '"+u.getE()+"', '"+u.getG()+"', '"+u.getC()+"', '"+u.getD()+"', '"+u.getA()+"')";
				try{
					Class.forName("com.mysql.jdbc.Driver");  
					Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/wheels","root","");
					Statement stmt=con.createStatement();
					stmt.executeUpdate(dsql);
					
				}
				catch(SQLException g){
					JOptionPane.showMessageDialog(this,"Username Already in Use");
				}
				catch(Exception eq){
				
				}
				setVisible(false);
				Login log= new Login();
			}else{
				JOptionPane.showMessageDialog(this,"Password didnt match");
			}
		}else{
			setVisible(false);
			Login log=new Login();
		}
	}
	

}
