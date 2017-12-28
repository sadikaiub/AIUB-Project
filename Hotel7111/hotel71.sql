-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 28, 2017 at 09:41 AM
-- Server version: 10.1.26-MariaDB
-- PHP Version: 7.1.9

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `hotel71`
--

-- --------------------------------------------------------

--
-- Table structure for table `admininfo`
--

CREATE TABLE `admininfo` (
  `Name` varchar(50) NOT NULL,
  `Email` varchar(50) NOT NULL,
  `Password` varchar(50) NOT NULL,
  `DOB` date NOT NULL,
  `mblno` varchar(20) NOT NULL,
  `type` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `admininfo`
--

INSERT INTO `admininfo` (`Name`, `Email`, `Password`, `DOB`, `mblno`, `type`) VALUES
('Sajid Sarker', 'ss', '1', '2017-12-27', '', ''),
('m', 'm', '11', '1994-02-07', '', ''),
('sadi', 'a@gmail.com', '2', '2017-12-07', '01632028919', 'admin'),
('sadi', 'a@gmail.com', '2', '2017-12-07', '01632028919', 'admin'),
('ss', 'ss@gamail.com', '1', '2017-12-07', '01835656945', 'user'),
('ss', 'ss@gamail.com', '1', '2017-12-07', '01835656945', 'user'),
('tareq', 'tarek@gmail.com', '4', '2005-12-07', '01735656945', 'user'),
('tareq', 'tarek@gmail.com', '4', '2005-12-07', '01735656945', 'user'),
('sadik', 'aan.sarker@gmail.com', '1', '2017-12-07', '01835656945', 'user'),
('sadik', 'aan.sarker@gmail.com', '1', '2017-12-07', '01835656945', 'user'),
('sadik', 'sarker@gmail.com', '1', '2017-12-07', '01835656945', 'user'),
('sadik', 'sarker@gmail.com', '1', '2017-12-07', '01835656945', 'user'),
('sajid', 'arian@gmail.com', '1', '2017-12-27', '01632028919', 'user'),
('sajid', 'arian@gmail.com', '1', '2017-12-27', '01632028919', 'user'),
('sadik', 's@gamail.com', '1', '1994-08-11', '01682463055', 'admin'),
('sadik', 's@gamail.com', '1', '1994-08-11', '01682463055', 'admin'),
('tareq', 't@gmail.com', '1', '1994-02-23', '01682509079', 'admin'),
('tareq', 't@gmail.com', '1', '1994-02-23', '01682509079', 'admin'),
('sajid', 'arian.sarker@gmail.com', '1', '1994-11-24', '01835656945', 'admin'),
('sajid', 'arian.sarker@gmail.com', '1', '1994-11-24', '01835656945', 'admin'),
('Liza', 'l@gmail.com', '1', '1997-12-27', '01632028919', 'admin'),
('Liza', 'l@gmail.com', '1', '1997-12-27', '01632028919', 'admin'),
('pizza', 'liza@gmail.com', '2', '2017-12-07', '01835656945', 'user'),
('pizza', 'liza@gmail.com', '2', '2017-12-07', '01835656945', 'user');

-- --------------------------------------------------------

--
-- Table structure for table `userbooking`
--

CREATE TABLE `userbooking` (
  `Name` varchar(50) NOT NULL,
  `Email` varchar(50) NOT NULL,
  `ArrivalDate` date NOT NULL,
  `DepartureDate` date NOT NULL,
  `RoomType` varchar(50) NOT NULL,
  `Person` int(50) NOT NULL,
  `TotalAmount` int(50) NOT NULL,
  `BookingStatus` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `userbooking`
--

INSERT INTO `userbooking` (`Name`, `Email`, `ArrivalDate`, `DepartureDate`, `RoomType`, `Person`, `TotalAmount`, `BookingStatus`) VALUES
('sadik', 'aan.sarker@gmail.com', '2013-12-30', '2019-01-22', 'single bed room', 1, 2000, 'Approved'),
('tareq', 'tarek@gmail.com', '2013-12-12', '2013-12-13', 'single bed room', 1, 5000, 'Approved'),
('sadik', 'sarker@gmail.com', '2013-12-12', '2017-12-12', 'single bed room', 1, 5000, 'pending'),
('sajid', 'arian@gmail.com', '2013-12-12', '2019-01-22', 'single bed room', 1, 200, 'pending'),
('tareq', 'tarek@gmail.com', '2013-12-12', '2017-12-12', 'single bed room', 1, 400, 'pending'),
('pizza', 'liza@gmail.com', '2013-12-12', '2017-12-12', 'double bed room', 3, 2000, 'Approved'),
('pizza', 'liza@gmail.com', '0000-00-00', '0000-00-00', 'single bed room', 1, 0, 'Approved'),
('pizza', 'liza@gmail.com', '0000-00-00', '0000-00-00', 'single bed room', 1, 0, 'Approved'),
('pizza', 'liza@gmail.com', '0000-00-00', '0000-00-00', 'single bed room', 1, 0, 'Approved'),
('pizza', 'liza@gmail.com', '0000-00-00', '0000-00-00', 'single bed room', 1, 0, 'Approved'),
('pizza', 'liza@gmail.com', '0000-00-00', '0000-00-00', 'single bed room', 1, 0, 'Approved'),
('pizza', 'liza@gmail.com', '0000-00-00', '0000-00-00', 'single bed room', 1, 0, 'Approved'),
('pizza', 'liza@gmail.com', '0000-00-00', '0000-00-00', 'single bed room', 1, 5000, 'Approved'),
('pizza', 'liza@gmail.com', '2017-12-11', '2017-12-12', 'single bed room', 1, 5000, 'Approved'),
('pizza', 'liza@gmail.com', '2013-12-12', '2012-12-12', 'single bed room', 1, 0, 'Approved'),
('pizza', 'liza@gmail.com', '2013-12-12', '2015-12-12', 'single bed room', 1, 5000, 'Approved'),
('pizza', 'liza@gmail.com', '2013-12-12', '2017-12-12', 'NULL', 1, 12000, 'Approved'),
('pizza', 'liza@gmail.com', '2013-12-12', '2015-12-12', 'NULL', 1, 7000, 'Approved'),
('pizza', 'liza@gmail.com', '2020-12-12', '2020-12-12', 'NULL', 1, 10000, 'Approved');

-- --------------------------------------------------------

--
-- Table structure for table `usertransaction`
--

CREATE TABLE `usertransaction` (
  `DepartureDate` date NOT NULL,
  `Name` varchar(50) NOT NULL,
  `Email` varchar(50) NOT NULL,
  `Revenue` varchar(50) NOT NULL,
  `Maintenence` varchar(50) NOT NULL,
  `Profit` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
