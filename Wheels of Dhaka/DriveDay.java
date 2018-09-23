import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

class DriveDay extends JFrame implements ActionListener
{
	JLabel l1= new JLabel ("Driving Schedule");
	JLabel l2= new JLabel ("Date:");
	JLabel l3= new JLabel("Starting Time");
	JLabel l4= new JLabel ("How Long:");
	String[] year={"2016","2017"};
	String[] mon={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
	String[] date={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"};
	String[] time={"7.30 AM","9.00 AM","11.00 AM","12.00 PM","2.00 PM","5.00 PM","7.00 PM"};
	String[] hl={"3 Hours","4 Hours","5 Hours","6 Hours","7 Hours","8 Hours","9 Hours","10 Hours"};
	JComboBox yearList = new JComboBox(year);
	JComboBox monList= new JComboBox(mon);
	JComboBox dateList= new JComboBox(date);
	JComboBox timeList= new JComboBox(time);
	JComboBox hlList= new JComboBox(hl);
	JButton b1 = new JButton("Cancel");
	JButton b2 = new JButton("Submit");
	User u;
	
	public DriveDay(User u)
	{	
		super("Drive for a Day");
		JLabel background = new JLabel(new ImageIcon("F:\\Pictures\\texture_6.jpg"));
		setContentPane(background);
		this.u=u;
		setSize(400,600);
		setVisible(true);
		setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		l1.setBounds(120,10,100,35);
		l2.setBounds(30,80,100,35);
		l3.setBounds(30,170,100,35);
		l4.setBounds(30,260,100,35);
		
		yearList.setBounds(30+100+30,80,60,35);
		monList.setBounds(30+100+30+60,80,60,35);
		dateList.setBounds(30+100+30+60+60,80,60,35);
		timeList.setBounds(30+100+30,170,150,35);
		hlList.setBounds(30+100+30,260,100,35);
		
		b1.setBounds(75,500,100,30);
		b2.setBounds(75+100+40,500,100,30);
		add(b1);
		add(b2);
		
		
		
		add(l1);
		add(l2);
		add(l3);
		add(l4);
		add(yearList);
		add(monList);
		add(dateList);
		add(timeList);
		add(hlList);
		b1.addActionListener(this);
		b2.addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent a){
		if(a.getSource()==b2){
			String dsql = "INSERT INTO `wheels`.`driveday` (`date`, `time`, `hLong`, `userName`) VALUES ('"+yearList.getSelectedItem().toString()+"-"+monList.getSelectedItem().toString()+"-"+dateList.getSelectedItem().toString()+"', '"+timeList.getSelectedItem().toString()+"', '"+hlList.getSelectedItem().toString()+"', '"+u.getU()+"')";
			try{
				Class.forName("com.mysql.jdbc.Driver");  
				Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/wheels","root","");
				Statement stmt=con.createStatement();
				stmt.executeUpdate(dsql);
				
			}
			catch(SQLException g){
				
			}
			catch(Exception eq){
			
			}
			JOptionPane.showMessageDialog(this,"Your Request Have Been Submitted");
		}else{
			setVisible(false);
			Welcome w=new Welcome(u);
		}
	}
	
}