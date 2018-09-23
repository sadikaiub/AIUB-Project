class User{
		private String firstName;
		private String lastName;
		private String userName;
		private String password;
		private String email;
		private String contactNo;
		private int accountType;
		private String dateOfBirth;
		private String gender;
		
		public User(){
			
		}
		
		public void setF(String f){
			this.firstName=f;
		}
		public void setL(String l){
			this.lastName=l;
		}
		public void setU(String u){
			this.userName=u;
		}
		public void setP(String p){
			this.password=p;
		}
		public void setE(String e){
			this.email=e;
		}
		public void setG(String g){
			this.gender=g;
		}
		public void setC(String c){
			this.contactNo=c;
		}
		public void setA(int a){
			this.accountType=a;
		}
		public void setD(String y,String m,String d){
			this.dateOfBirth= y+"-"+m+"-"+d;
		}
		public void setD(String d){
			this.dateOfBirth=d;
		}
		
		public String getG(){
			return this.gender;
		}
		public String getF(){
			return this.firstName;
		}
		public String getL(){
			return this.lastName;
		}
		public String getU(){
			return this.userName;
		}
		public String getP(){
			return this.password;
		}
		public String getE(){
			return this.email;
		}
		public String getC(){
			return this.contactNo;
		}
		public int getA(){
			return this.accountType;
		}
		public String getD(){
			return this.dateOfBirth;
		}
	}
