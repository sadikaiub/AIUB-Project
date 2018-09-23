import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;



class Login extends JFrame implements ActionListener{
	
	
	private Color c1= Color.RED;
	private JLabel l1=new JLabel("Username", JLabel.CENTER);
	private JLabel l2=new JLabel("Password", JLabel.CENTER);
	private JLabel background = new JLabel(new ImageIcon("F:\\Pictures\\Car.jpg"));
	private JTextField t1=new JTextField();
	private JPasswordField t2=new JPasswordField();
	private JButton b1=new JButton("Login");
	private JButton b2=new JButton("Register");
	User u=new User();
	
	public Login(){
		super("login");
		setVisible(true);
		setSize(400,600);
		setLayout(null);
		setContentPane(background);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		l1.setBounds(40,200,90,35);
		l2.setBounds(40,250,90,35);
		l1.setFont(new Font("Times New Roman", Font.BOLD,15));
		l2.setFont(new Font("Times New Roman", Font.BOLD,15));
		add(l1);
		add(l2);
		l1.setForeground(c1);
		l2.setForeground(c1);
		t1.setBounds(75+60+20,205,175,28);
		t2.setBounds(75+60+20,255,175,28);
		add(t1);
		add(t2);
		b1.setBounds(75+40,350,90,30);
		b2.setBounds(75+40+100,350,90,30);
		add(b1);
		add(b2);
		b1.addActionListener(this);
		b2.addActionListener(this);
		
		
	}
	public Login(String s){
		this();
		t1.setText(s);
	}
	
	public void actionPerformed(ActionEvent a){
		String p=new String(t2.getPassword());
		
		if(a.getSource()==b1){
			String dsql="SELECT * FROM `user` WHERE userName='"+t1.getText()+"'";
			try{
				Class.forName("com.mysql.jdbc.Driver");  
				Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/wheels","root","");
				Statement stmt=con.createStatement();
				ResultSet rs=stmt.executeQuery(dsql);
				
				if(rs.next()){
					
					if(p.equals(rs.getString(4))){
						
						u.setA(rs.getInt(9));
						u.setC(rs.getString(7));
						u.setD(rs.getString(8));
						u.setE(rs.getString(5));
						u.setF(rs.getString(2));
						u.setL(rs.getString(3));
						u.setP(rs.getString(4));
						u.setG(rs.getString(6));
						u.setU(rs.getString(1));
						
						if(u.getA()==1){
							setVisible(false);
							Passenger pp= new Passenger(u);
						}else{
							setVisible(false);
							Driver d=new Driver(u);
						}
					}else{
						JOptionPane.showMessageDialog(this,"Wrong Username or Password");
					}
				}else{
					JOptionPane.showMessageDialog(this,"Wrong Username or Password");
				}
			}
			catch(SQLException g){
				JOptionPane.showMessageDialog(this,"Wrong Username or Password");
			}
			catch(Exception eq){
				JOptionPane.showMessageDialog(this,"Wrong Username or Password");
			}
			
		}else if(a.getSource()==b2){
			setVisible(false);
			Reg r = new Reg();
			
		}
	}
}