<?php include("data_access.php"); ?>
<?php
	
    function admininfo($name, $email, $password, $confirmPassword, $gender, $dob){
        $sql = ("INSERT INTO admininfo VALUES( '$name', '$email', NULL, '$password', '$confirmPassword','$gender','$dob')");
        $result = executeSQL($sql);
        return $result;
    }
?>