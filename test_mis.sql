# Host: localhost  (Version: 5.6.26)
# Date: 2015-09-11 15:42:22
# Generator: MySQL-Front 5.3  (Build 4.214)

/*!40101 SET NAMES gb2312 */;

#
# Structure for table "admin"
#

DROP TABLE IF EXISTS `admin`;
CREATE TABLE `admin` (
  `admin_id` varchar(50) NOT NULL,
  `pwd` varchar(50) NOT NULL,
  PRIMARY KEY (`admin_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

#
# Data for table "admin"
#

INSERT INTO `admin` VALUES ('admin','123'),('lirongfan','123'),('xiaoliguangzilong','lrf697295');

#
# Structure for table "filling"
#

DROP TABLE IF EXISTS `filling`;
CREATE TABLE `filling` (
  `QuestionID` int(11) NOT NULL AUTO_INCREMENT,
  `Question` varchar(255) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL DEFAULT '0',
  `Blank_num` int(11) NOT NULL DEFAULT '0',
  `Answer` varchar(50) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL DEFAULT '0',
  `Score` int(10) NOT NULL DEFAULT '0',
  `QuestionLevel` int(10) NOT NULL DEFAULT '0',
  `Is_order` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`QuestionID`)
) ENGINE=InnoDB AUTO_INCREMENT=55 DEFAULT CHARSET=latin1;

#
# Data for table "filling"
#

INSERT INTO `filling` VALUES (9,'1231241241',2,'你好###我不好啊',12,5,1),(16,'你在干什么\t',2,'火火火&&&水水水###火',12,3,0),(20,'水火不相容',1,'水&&&火',2,1,1),(21,'C++的流库预定义了4个流，它们是cin、cout、clog和___。',1,'cerr',1,1,1),(22,'每个对象都是所属类的一个___。',1,'实例',1,1,1),(23,'在已经定义了整型指针ip后，为了得到一个包括10个整数的数组并由ip所指向，应使用语句___。',1,'int *ip=new int［10］;',1,1,1),(24,'函数模板中紧随template之后尖括号内的类型参数都要冠以保留字___。',1,'class',1,1,1),(25,'定义类的动态对象数组时，系统只能够自动调用该类的___构造函数对其进行初始化。',1,'无参',1,1,1),(26,'表达式cout<<end1 还可表示为___。',1,'\\n',1,1,1),(27,'在C++中，访问一个指针所指向的对象的成员所用的指向运算符是___。',1,'->',1,1,1),(28,'假如一个类的名称为MyClass，使用这个类的一个对象初始化该类的另一个对象时，可以用___构造函数来完成此功能。',1,'复制!@#$%拷贝',2,2,1),(29,'对赋值运算符进行重载时，应声明为___函数。',1,'类成员',2,2,1),(30,'下列程序段的输出结果是___。for(i=0,j=10,k=0;i<=j;i++,j-=3,k=i+j);cout<<k;',1,'4',2,2,1),(31,' 假设int a=1,b=2;则表达式(++a/b)*b--的值为___。',1,'2',2,2,1),(32,'抽象类中至少要有一个___函数。',1,'纯虚',2,2,1),(33,'一个抽象类的派生类可以实例化的必要条件是实现了所有的___。',1,'纯虚函数的定义',2,2,1),(34,'下面程序的输出结果为___。#include <iostream.h>\nvoid main()\n{int num=2,i=6;\ndo\n{i--;\nnum++;\n}while(--i);\ncout<<num<<endl;\n}\n',1,'5',2,2,1),(35,'静态成员函数、友元函数、构造函数和析构函数中，不属于成员函数的是___。',1,'友元函数',3,3,1),(36,'在用C＋＋进行程序设计时，最好用___代替malloc。',1,'new',3,3,1),(37,' 由const修饰的对象称为___。',1,'常对象',3,3,1),(38,'在C++程序设计中，建立继承关系倒挂的树应使用___继承。',1,'单',3,3,1),(39,'基类的公有成员在派生类中的访问权限由___决定。',1,'访问控制方式或继承方式',3,3,1),(40,'不同对象可以调用相同名称的函数，但执行完全不同行为的现象称为___。',1,'多态性',3,3,1),(41,'this指针始终指向调用成员函数的___。',1,'对象',3,3,1),(42,'预处理命令以___符号开头。',1,'operater',4,4,1),(43,'类模板用来表达具有___的模板类对象集。',1,'相同处理方法',4,4,1),(44,' C++程序的源文件扩展名为___。',1,'cpp',4,4,1),(45,'在#include命令中所包含的头文件，可以是系统定义的头文件，也可以是___的头文件。',1,'自定义',4,4,1),(46,' vector类中向向量尾部插入一个对象的方法是___。',1,'push_back',4,4,1),(47,' C++语言中如果调用函数时，需要改变实参或者返回多个值，应该采取___方式。',1,'传地址!@#$%引用',4,4,1),(48,'在编译指令中，宏定义使用___指令。',1,'#define',4,4,1),(49,'单目运算符作为类成员函数重载时，形参个数为___个。',1,'0',5,5,1),(50,'抽象类中至少要有一个___函数。',1,'纯虚',5,5,1),(51,'vector类中用于删除向量中的所有对象的方法是___。',1,'clear()',5,5,1),(52,'重载的运算符保持其原有的___、优先级和结合性不变。',1,'操作数',5,5,1),(53,'编译时的多态性通过___函数实现。',1,'重载',5,5,1),(54,'基类的公有成员在派生类中的访问权限由___决定。',1,'访问控制方式!@#$%继承方式',5,5,1);

#
# Structure for table "single_select"
#

DROP TABLE IF EXISTS `single_select`;
CREATE TABLE `single_select` (
  `QuestionID` int(11) NOT NULL AUTO_INCREMENT,
  `Question` varchar(255) NOT NULL DEFAULT '',
  `OptionA` varchar(200) NOT NULL DEFAULT '',
  `OptionB` varchar(200) NOT NULL DEFAULT '',
  `OptionC` varchar(200) NOT NULL DEFAULT '',
  `OptionD` varchar(200) NOT NULL DEFAULT '',
  `Answer` varchar(1) NOT NULL DEFAULT '',
  `Score` int(10) NOT NULL DEFAULT '0',
  `QuestionLevel` int(10) NOT NULL DEFAULT '0',
  PRIMARY KEY (`QuestionID`)
) ENGINE=InnoDB AUTO_INCREMENT=49 DEFAULT CHARSET=utf8;

#
# Data for table "single_select"
#

INSERT INTO `single_select` VALUES (1,'编写C++程序一般需经过的几个步骤依次是（）',' 编辑、调试、编译、连接','编辑、编译、连接、运行','编译、调试、编辑、连接','编译、编辑、连接、运行','B',3,1),(2,'决定C++语言中函数的返回值类型的是（）','return语句中的表达式类型','调用该函数时系统随机产生的类型','调用该函数时的主调用函数类型','在定义该函数时所指定的数据类型','D',3,1),(3,'下面叙述不正确的是（）','派生类一般都用公有派生','对基类成员的访问必须是无二义性的','赋值兼容规则也适用于多重继承的组合','基类的公有成员在派生类中仍然是公有的','D',3,1),(4,'所谓数据封装就是将一组数据和与这组数据有关操作组装在一起，形成一个实体，这实体也就是（）','类','对象','函数体','数据块','A',3,1),(5,'在公有派生类的成员函数不能直接访问基类中继承来的某个成员，则该成员一定是基类中的（）','私有成员','公有成员','保护成员','保护成员或私有成员','A',3,1),(6,'对基类和派生类的关系描述中，错误的是（）',' 派生类是基类的具体化','基类继承了派生类的属性','派生类是基类定义的延续','派生类是基类的特殊化','B',3,2),(7,'关于this指针使用说法正确的是（）','保证每个对象拥有自己的数据成员，但共享处理这些数据的代码','保证基类私有成员在子类中可以被访问。','保证基类保护成员在子类中可以被访问。','保证基类公有成员在子类中可以被访问。','A',3,2),(8,'所谓多态性是指 （）','不同的对象调用不同名称的函数','不同的对象调用相同名称的函数',' 一个对象调用不同名称的函数','一个对象调用不同名称的对象','B',3,2),(9,'一个函数功能不太复杂，但要求被频繁调用，则应把它定义为 （）','内联函数','重载函数','递归函数','嵌套函数','A',3,2),(10,'假设ClassY:publicX，即类Y是类X的派生类，则说明一个Y类的对象时和删除Y类对象时\n，调用构造函数和析构函数的次序分别为（）','X,Y；Y,X',' X,Y；X,Y','Y,X；X,Y','Y,X；Y,X','A',2,2),(11,'适宜采用inline定义函数情况是（）','函数体含有循环语句','函数体含有递归语句','函数代码少、频繁调用',' 函数代码多、不常调用','C',2,3),(12,'静态成员函数没有（）',' 返回值',' this指针',' 指针参数',' 返回类型','B',2,3),(13,'假定AB为一个类，则执行“AB a(2), b［3］,*p［4］;”语句时调用该类构造函数的次数为（）','3','4','5','9','B',2,3),(14,'有关多态性说法不正确的是（）','C++语言的多态性分为编译时的多态性和运行时的多态性','编译时的多态性可通过函数重载实现','运行时的多态性可通过模板和虚函数实现','实现运行时多态性的机制称为动态多态性','C',2,3),(15,'假定一个类的构造函数为“A(int i=4, int j=0) {a=i;b=j;}”, 则执行“A x (1);”语句后，x.a和x.b的值分别为（）',' 1和0','1和4','4和0','4和1','A',2,3),(16,'类MyA的拷贝初始化构造函数是 （）',' MyA()',' MyA(MyA*)',' MyA(MyA&)',' MyA(MyA)','C',2,4),(17,'在C++中，函数原型不能标识（）',' 函数的返回类型','函数参数的个数','函数参数类型','函数的功能','D',2,4),(18,' 友元关系不能（）','提高程序的运行效率','是类与类的关系','是一个类的成员函数与另一个类的关系','继承','D',2,4),(19,'下列不是描述类的成员函数的是（）','构造函数','构造函数','友元函数','拷贝构造函数','C',2,4),(39,'整部的结构','上部','下部','中部','内部','a',5,3),(41,'学校','大一','大二','大三','大四','B',5,4),(44,'分部显示','分页','后补','人生','查询','a',5,3),(48,'医生社保系统的正确答案','社保','系统','东软','分部','a',1,3);

#
# Structure for table "student"
#

DROP TABLE IF EXISTS `student`;
CREATE TABLE `student` (
  `stu_name` varchar(100) NOT NULL,
  `pwd` varchar(50) NOT NULL DEFAULT '0',
  `stu_num` varchar(255) NOT NULL DEFAULT '0',
  PRIMARY KEY (`stu_name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

#
# Data for table "student"
#

INSERT INTO `student` VALUES ('xiaobai','123','1');

#
# Structure for table "test_paper"
#

DROP TABLE IF EXISTS `test_paper`;
CREATE TABLE `test_paper` (
  `Testpaper_id` int(11) NOT NULL AUTO_INCREMENT,
  `Testpaper_title` varchar(100) NOT NULL,
  `Testpaper_maketime` datetime NOT NULL,
  `Testpaper_score` int(11) NOT NULL DEFAULT '100',
  `Testpaper_difficultylevel` varchar(255) NOT NULL DEFAULT '',
  `Testpaper_description` varchar(255) NOT NULL DEFAULT '',
  PRIMARY KEY (`Testpaper_id`)
) ENGINE=InnoDB AUTO_INCREMENT=25 DEFAULT CHARSET=utf8;

#
# Data for table "test_paper"
#

INSERT INTO `test_paper` VALUES (2,'test1','2015-09-08 13:46:09',34,'随机','综合'),(3,'test1','2015-09-08 13:46:10',34,'随机','综合'),(12,'test2','2015-09-08 22:21:47',36,'随机','综合'),(13,'test2','2015-09-08 22:21:47',36,'随机','综合'),(14,'test2','2015-09-08 22:21:48',36,'随机','综合'),(15,'','2015-09-11 14:38:16',12,'等级一','综合'),(16,'','2015-09-11 14:38:16',12,'等级一','综合'),(17,'','2015-09-11 14:38:16',12,'等级一','综合'),(18,'','2015-09-11 14:38:17',12,'等级一','综合'),(19,'','2015-09-11 14:38:17',12,'等级一','综合'),(20,'','2015-09-11 14:38:17',12,'等级一','综合'),(21,'','2015-09-11 14:38:17',12,'等级一','综合'),(22,'','2015-09-11 14:38:17',12,'等级一','综合'),(23,'','2015-09-11 14:38:17',12,'等级一','综合'),(24,'','2015-09-11 14:38:17',12,'等级一','综合');

#
# Structure for table "testpaper_filling"
#

DROP TABLE IF EXISTS `testpaper_filling`;
CREATE TABLE `testpaper_filling` (
  `Testpaper_id` int(11) DEFAULT NULL,
  `QuestionID` int(11) DEFAULT NULL,
  KEY `test_filling_key1` (`Testpaper_id`),
  KEY `test_filling_key2` (`QuestionID`),
  CONSTRAINT `test_filling_key1` FOREIGN KEY (`Testpaper_id`) REFERENCES `test_paper` (`Testpaper_id`),
  CONSTRAINT `test_filling_key2` FOREIGN KEY (`QuestionID`) REFERENCES `filling` (`QuestionID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

#
# Data for table "testpaper_filling"
#

INSERT INTO `testpaper_filling` VALUES (2,38),(2,41),(2,36),(2,39),(3,37),(3,38),(3,35),(3,39),(12,9),(12,16),(13,9),(13,16),(14,16),(14,9),(15,21),(15,27),(16,25),(16,22),(17,23),(17,24),(18,25),(18,27),(19,22),(19,25),(20,23),(20,21),(21,21),(21,25),(22,23),(22,22),(23,23),(23,24),(24,26),(24,25);

#
# Structure for table "testpaper_single_select"
#

DROP TABLE IF EXISTS `testpaper_single_select`;
CREATE TABLE `testpaper_single_select` (
  `Testpaper_id` int(11) DEFAULT NULL,
  `QuestionID` int(11) DEFAULT NULL,
  KEY `test_single_select_key1` (`Testpaper_id`),
  KEY `test_single_select_key2` (`QuestionID`),
  CONSTRAINT `test_single_select_key1` FOREIGN KEY (`Testpaper_id`) REFERENCES `test_paper` (`Testpaper_id`),
  CONSTRAINT `test_single_select_key2` FOREIGN KEY (`QuestionID`) REFERENCES `single_select` (`QuestionID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

#
# Data for table "testpaper_single_select"
#

INSERT INTO `testpaper_single_select` VALUES (2,9),(2,2),(2,7),(2,3),(3,2),(3,1),(3,4),(3,8),(12,9),(12,2),(13,2),(13,4),(14,3),(14,9),(15,5),(15,2),(16,1),(16,5),(17,3),(17,4),(18,1),(18,3),(19,4),(19,3),(20,4),(20,2),(21,3),(21,5),(22,2),(22,3),(23,5),(23,3),(24,1),(24,4);

#
# Structure for table "tf_question"
#

DROP TABLE IF EXISTS `tf_question`;
CREATE TABLE `tf_question` (
  `QuestionID` int(11) NOT NULL AUTO_INCREMENT,
  `Question` varchar(255) NOT NULL DEFAULT '',
  `Answer` varchar(50) NOT NULL DEFAULT '',
  `Score` int(10) NOT NULL DEFAULT '0',
  `QuestionLevel` int(10) NOT NULL DEFAULT '0',
  PRIMARY KEY (`QuestionID`)
) ENGINE=InnoDB AUTO_INCREMENT=41 DEFAULT CHARSET=utf8 ROW_FORMAT=COMPACT;

#
# Data for table "tf_question"
#

INSERT INTO `tf_question` VALUES (10,'编译时的多态性通过___函数实现。','false',2,1),(11,'每个对象都是所属类的一个___。','false',2,1),(12,'在已经定义了整型指针ip后，为了得到一个包括10个整数的数组并由ip所指向，应使用语句___。','true',2,1),(13,'函数模板中紧随template之后尖括号内的类型参数都要冠以保留字___。','true',2,1),(14,'定义类的动态对象数组时，系统只能够自动调用该类的___构造函数对其进行初始化。','true',2,1),(15,'表达式cout<<end1 还可表示为___。','true',2,1),(16,'在C++中，访问一个指针所指向的对象的成员所用的指向运算符是___。','false',2,1),(17,'假如一个类的名称为MyClass，使用这个类的一个对象初始化该类的另一个对象时，可以用___构造函数来完成此功能。','false',2,2),(18,'对赋值运算符进行重载时，应声明为___函数。','false',2,2),(19,'下列程序段的输出结果是___。for(i=0,j=10,k=0;i<=j;i++,j-=3,k=i+j);cout<<k;','true',2,2),(20,'假设int a=1,b=2;则表达式(++a/b)*b--的值为___。','false',2,2),(21,'一个抽象类的派生类可以实例化的必要条件是实现了所有的___。','false',2,2),(22,'静态成员函数、友元函数、构造函数和析构函数中，不属于成员函数的是___。','true',2,2),(23,'在用C＋＋进行程序设计时，最好用___代替malloc。','true',2,2),(24,'由const修饰的对象称为___。','true',2,3),(25,'在C++程序设计中，建立继承关系倒挂的树应使用___继承。','true',2,3),(26,'基类的公有成员在派生类中的访问权限由___决定。','false',2,3),(27,'不同对象可以调用相同名称的函数，但执行完全不同行为的现象称为___。','true',2,3),(28,'this指针始终指向调用成员函数的___。','false',3,3),(29,'预处理命令以___符号开头。','true',3,4),(30,'类模板用来表达具有___的模板类对象集。','true',3,4),(31,'C++程序的源文件扩展名为___。','true',3,4),(32,'在#include命令中所包含的头文件，可以是系统定义的头文件，也可以是___的头文件。','true',3,4),(33,'vector类中向向量尾部插入一个对象的方法是___。','true',3,4),(34,'C++语言中如果调用函数时，需要改变实参或者返回多个值，应该采取___方式。','true',3,4),(35,'在编译指令中，宏定义使用___指令。','true',3,5),(36,'单目运算符作为类成员函数重载时，形参个数为___个。','false',3,5),(37,'vector类中用于删除向量中的所有对象的方法是___。','false',3,5),(38,'重载的运算符保持其原有的___、优先级和结合性不变。','false',3,5),(39,'编译时的多态性通过___函数实现。','false',3,5),(40,'基类的公有成员在派生类中的访问权限由___决定。','false',3,5);

#
# Structure for table "testpaper_tf_question"
#

DROP TABLE IF EXISTS `testpaper_tf_question`;
CREATE TABLE `testpaper_tf_question` (
  `Testpaper_id` int(11) DEFAULT NULL,
  `QuestionID` int(11) DEFAULT NULL,
  KEY `test_tf_question_key1` (`Testpaper_id`),
  KEY `test_tf_question_key2` (`QuestionID`),
  CONSTRAINT `test_tf_question_key1` FOREIGN KEY (`Testpaper_id`) REFERENCES `test_paper` (`Testpaper_id`),
  CONSTRAINT `test_tf_question_key2` FOREIGN KEY (`QuestionID`) REFERENCES `tf_question` (`QuestionID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

#
# Data for table "testpaper_tf_question"
#

INSERT INTO `testpaper_tf_question` VALUES (2,26),(2,17),(2,22),(2,21),(2,27),(3,17),(3,19),(3,22),(3,18),(3,21),(12,32),(12,35),(13,35),(13,32),(14,34),(14,29),(15,10),(15,12),(16,12),(16,11),(17,10),(17,12),(18,12),(18,13),(19,14),(19,12),(20,11),(20,14),(21,15),(21,11),(22,12),(22,13),(23,16),(23,12),(24,12),(24,14);
