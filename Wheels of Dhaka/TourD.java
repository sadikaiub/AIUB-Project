import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

class TourD extends JFrame implements ActionListener
{
	JLabel l1= new JLabel("Tour");
	JLabel l2= new JLabel("Date:");
	JLabel l3= new JLabel("Starting Time:");
	JLabel l4= new JLabel("Location:");
	String[] year={"2016","2017"};
	String[] mon={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
	String[] date={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"};
	String[] time={"7.30-8.00 AM","9.00-9.30 AM","10.00-11.00 AM","2.00-2.30 PM"};
	String[] loc={"Bandorban","Coxs-bazar","Rangamati","Jaflong","Moynamoti","Sajek Vally","Bango Bondhu Safari Park","Mirpur Zoo"};
	JComboBox yearList = new JComboBox(year);
	JComboBox monList= new JComboBox(mon);
	JComboBox dateList= new JComboBox(date);
	JComboBox timeList =new JComboBox(time);
	JComboBox locList = new JComboBox(loc);
	
	JButton b1= new JButton("Cancel");
	JButton b2= new JButton("Submit");
	User u;
	
	public TourD(User u)
	{	super("Tour");
		JLabel background = new JLabel(new ImageIcon("F:\\Pictures\\texture_6.jpg"));
		setContentPane(background);
		this.u=u;
		setSize(400,600);
		setVisible(true);
		setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		l1.setBounds(160,10,100,35);
		l2.setBounds(40,100,100,35);
		l3.setBounds(40,250,100,35);
		l4.setBounds(40,400,100,35);
		yearList.setBounds(40+100,100,60,35);
		monList.setBounds(40+100+60,100,60,35);
		dateList.setBounds(40+100+60+60,100,60,35);
		timeList.setBounds(40+100,250,120,35);
		locList.setBounds(40+100,400,180,35);
		b1.setBounds(75,500,100,30);
		b2.setBounds(75+100+40,500,100,30);
		add(b1);
		add(b2);
		
		add(l1);
		add(l2);
		add(l3);
		add(l4);
		b1.addActionListener(this);
		b2.addActionListener(this);
		add(yearList);
		add(monList);
		add(dateList);
		add(timeList);
		add(locList);
	}
	public void actionPerformed(ActionEvent a){
		if(a.getSource()==b2){
			String dsql = "INSERT INTO `wheels`.`tour` (`date`, `time`, `location`, `userName`) VALUES ('"+yearList.getSelectedItem().toString()+"-"+monList.getSelectedItem().toString()+"-"+dateList.getSelectedItem().toString()+"', '"+timeList.getSelectedItem().toString()+"', '"+locList.getSelectedItem().toString()+"', '"+u.getU()+"')";
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