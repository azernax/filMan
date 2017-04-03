CREATE DATABASE  IF NOT EXISTS `baza` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `baza`;
-- MySQL dump 10.13  Distrib 5.7.12, for Win64 (x86_64)
--
-- Host: localhost    Database: baza
-- ------------------------------------------------------
-- Server version	5.7.17-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `filmy`
--

DROP TABLE IF EXISTS `filmy`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `filmy` (
  `film_id` int(11) NOT NULL AUTO_INCREMENT,
  `tytul` varchar(150) NOT NULL,
  `rezyser` varchar(45) NOT NULL,
  `gatunek` varchar(45) NOT NULL,
  `cena` double NOT NULL,
  `ogr_wiek` int(11) NOT NULL,
  `ilosc` int(11) NOT NULL,
  PRIMARY KEY (`film_id`),
  UNIQUE KEY `film_id_UNIQUE` (`film_id`),
  UNIQUE KEY `tytul_UNIQUE` (`tytul`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `filmy`
--

LOCK TABLES `filmy` WRITE;
/*!40000 ALTER TABLE `filmy` DISABLE KEYS */;
INSERT INTO `filmy` VALUES (1,'Ring','nieznany','horror',10,18,2),(2,'AAA','bbb','ccc',20,12,5),(3,'jsfhjsdh','fodsds','oisdfg',23,4,59);
/*!40000 ALTER TABLE `filmy` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2017-01-26  9:02:28
