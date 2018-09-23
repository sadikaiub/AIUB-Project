import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;

class SearchResult extends JFrame implements ActionListener{
	User u;
	JButton b1=new JButton("Back");
	
	public SearchResult(User u,String t){
		super("Services");
		JLabel background = new JLabel(new ImageIcon("F:\\Pictures\\texture_8.jpg"));
		setContentPane(background);
		this.u=u;
		setVisible(true);
		setSize(400,600);
		setLayout(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		String dsql= "SELECT user.*,"+t+".date from user,"+t+" where user.userName="+t+".userName";
		add(b1);
		b1.setBounds(140, 500, 100, 30);
		b1.addActionListener(this);
		try{
			Class.forName("com.mysql.jdbc.Driver");  
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/wheels","root","");
			Statement stmt=con.createStatement();
			ResultSet rs=stmt.executeQuery(dsql);
			
			int i=1;
			int mul=70;
			
			
			while(rs.next()){	
						
						JLabel ln=new JLabel((i)+": "+rs.getString(1)+" wants "+t+" services on "+rs.getString(10));
						JLabel cn=new JLabel("For more details Contact "+rs.getString(7));
						cn.setBounds(45,i*mul+20,350,40);
						ln.setBounds(30,i*mul,350,40);
						add(ln);
						add(cn);
						i++;
				}
			
		}
		catch(SQLException g){
			JOptionPane.showMessageDialog(this,"Error");
		}
		catch(Exception eq){
			JOptionPane.showMessageDialog(this,"Error");
		}
		

		
	}
	public void actionPerformed(ActionEvent a){
		
		if(a.getSource()==b1){
		setVisible(false);
		Search s= new Search(u);
		}
	}
}
