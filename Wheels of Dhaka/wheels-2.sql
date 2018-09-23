-- phpMyAdmin SQL Dump
-- version 4.4.14
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Dec 20, 2016 at 03:31 AM
-- Server version: 5.6.26
-- PHP Version: 5.6.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `wheels`
--

-- --------------------------------------------------------

--
-- Table structure for table `driveday`
--

CREATE TABLE IF NOT EXISTS `driveday` (
  `date` varchar(50) NOT NULL,
  `time` varchar(30) NOT NULL,
  `hLong` varchar(10) NOT NULL,
  `userName` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `driveday`
--

INSERT INTO `driveday` (`date`, `time`, `hLong`, `userName`) VALUES
('2017-Feb-3', '11.00 AM', '5 Hours', 'ma111');

-- --------------------------------------------------------

--
-- Table structure for table `dropoff`
--

CREATE TABLE IF NOT EXISTS `dropoff` (
  `date` varchar(50) NOT NULL,
  `area` varchar(20) NOT NULL,
  `roadNo` varchar(50) NOT NULL,
  `userName` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `dropoff`
--

INSERT INTO `dropoff` (`date`, `area`, `roadNo`, `userName`) VALUES
('2016-Dec-31', 'Mohammodpur', 'Shia Moshjid', 'say12'),
('2016-Dec-29', 'Dhanmondi', 'Abohani Math', 'rohan3');

-- --------------------------------------------------------

--
-- Table structure for table `tour`
--

CREATE TABLE IF NOT EXISTS `tour` (
  `date` varchar(20) NOT NULL,
  `time` varchar(20) NOT NULL,
  `location` varchar(15) NOT NULL,
  `userName` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tour`
--

INSERT INTO `tour` (`date`, `time`, `location`, `userName`) VALUES
('2017-Mar-2', '10.00-11.00 AM', 'Rangamati', 'ma111');

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `userName` varchar(50) NOT NULL,
  `firstName` varchar(20) NOT NULL,
  `lastName` varchar(20) NOT NULL,
  `password` varchar(30) NOT NULL,
  `email` varchar(30) NOT NULL,
  `gender` varchar(6) NOT NULL,
  `contactNo` varchar(20) NOT NULL,
  `dateOfBirth` varchar(20) NOT NULL,
  `type` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`userName`, `firstName`, `lastName`, `password`, `email`, `gender`, `contactNo`, `dateOfBirth`, `type`) VALUES
('jahin', 'Ashadul', 'Haque', '121', 'jahin@gmail.com', 'Male', '01624961340', '1995-Oct-23', 2),
('ma111', 'Mehjabin', 'Akter', '121', 'ma555@gmail.com', 'Female', '01966312456', '1996-Feb-15', 1),
('rai', 'Raisul', 'Islam', '12', 'rerer', 'Male', '01687071190', '1996-Apr-2', 2),
('ris', 'Risan', 'Hossain', '22', 'sdsd', 'Male', '01578651649', '2003-July-5', 1),
('risan5', 'Redwan', 'Hossain', '121', 'knkand', 'Male', '015656', '2002-July-5', 2),
('rohan3', 'Rayhan', 'Hossain', '1122', 'rohan.Hossain@gmail.com', 'Male', '01855236225', '2004-July-3', 1),
('Sajid', 'Sajid', 'Sarker', '12345', 'huhahha', 'Male', '1236544', '1994-Nov-24', 1),
('say12', 'Sayed', 'Hossain', '1122', 'sayed.hossain@yahoo.com', 'Male', '01827303545', '2004-Oct-12', 1);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `user`
--
ALTER TABLE `user`
  ADD PRIMARY KEY (`userName`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
