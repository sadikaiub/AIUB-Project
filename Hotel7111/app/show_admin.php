<?php

    include_once("../service/Adminprofile_service.php");
     $Email=$_REQUEST['Email'];
    deleteUser($Email);
	header("location: Deleteadmin.php");

?>