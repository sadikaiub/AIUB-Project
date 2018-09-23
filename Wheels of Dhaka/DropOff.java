import javax.swing.*;
import java.awt.event.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.awt.*;

class DropOff extends JFrame implements ActionListener{
	JLabel top=new JLabel("Drop Off");
	JLabel l1= new JLabel("Set Date");
	JLabel l2= new JLabel("Set Area");
	JLabel l3= new JLabel("Road Name/No");
	String[] year={"2016","2017"};
	String[] mon={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
	String[] date={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"};
	JComboBox yearList = new JComboBox(year);
	JComboBox monList= new JComboBox(mon);
	JComboBox dateList= new JComboBox(date);
	String[] area ={"Banani","Dhanmondi","Mirpur","Rampura","Mohammodpur","Farmget"};
	JComboBox areaList=new JComboBox(area);
	JTextField t1=new JTextField();
	JButton b1=new JButton("Cancle");
	JButton b2=new JButton("Submit");
	User u;
	
	public DropOff(User u){
		super("Drop Off");
		JLabel background = new JLabel(new ImageIcon("F:\\Pictures\\texture_6.jpg"));
		setContentPane(background);
		this.u=u;
		setVisible(true);
		setSize(400,600);
		setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		top.setBounds(160,10,100,35);
		l1.setBounds(30,100,100,40);
		l2.setBounds(30,200,100,40);
		l3.setBounds(30,300,100,40);
		yearList.setBounds(30+100,100,80,40);
		monList.setBounds(30+100+80,100,80,40);
		dateList.setBounds(30+100+80+80,100,80,40);
		areaList.setBounds(30+100,200,150,40);
		t1.setBounds(30+100,300,200,40);
		add(yearList);
		add(monList);
		add(dateList);
		add(areaList);
		add(t1);
		add(l1);
		add(l2);
		add(l3);
		add(top);
		b1.setBounds(75,500,100,30);
		b2.setBounds(75+100+40,500,100,30);
		add(b1);
		add(b2);
		b2.addActionListener(this);
		b1.addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent a){
		if(a.getSource()==b2){
			String dsql = "INSERT INTO `wheels`.`dropoff` (`date`, `area`, `roadNo`, `userName`) VALUES ('"+yearList.getSelectedItem().toString()+"-"+monList.getSelectedItem().toString()+"-"+dateList.getSelectedItem().toString()+"', '"+areaList.getSelectedItem().toString()+"', '"+t1.getText()+"', '"+u.getU()+"')";
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