# RGB LED Cube Control Software

![4x4x4 RGB LED Cube](/Images/LED_Cube.png)


&nbsp;
## Table of Contents <a name="table-of-contents"></a>

1. [Professional Self-Assessment](#professional-self-assessment)
2. [Initial Artifact](#initial-artifact)
3. [Project Outline and Code Review](#code-review)
4. [Enhancement One](#enhancement-one)
5. [Enhancement Two](#enhancement-two)
6. [Enhancement Three](#enhancement-three)
7. [Contact Information](#contact-information)
  
  







&nbsp;
## Professional Self-Assessment <a name="professional-self-assessment"></a>

### Introduction

Greetings, I am Justin Byrd, currently on the brink of completing my Bachelor's Degree in Computer Science, a significant milestone in a journey that 
began with an Associate's Degree in Electrical Engineering Technology. My professional voyage spans nine years at BAE Systems, where I've served as an 
electrical technician. Over the years, I've immersed myself in various domains of the defense industry, starting with production testing of intricate 
radio and optical systems.  

As I progressed, my journey led me into the dynamic realm of research and development, providing invaluable experiences within the integrated circuit 
design team. This phase involved diverse responsibilities, from circuit card schematic and layout design, integrated circuit schematic and layout 
design, embedded systems, and eventually culminating in the development of automated test software. Notably, I had the privilege of designing a 
full-stack application aimed at meticulously tracking materials entering and leaving dry box storage in our labs, a project that ignited my passion for 
software development.  

These pivotal assignments, particularly in full-stack application development and the integration of hardware and software in the automated test 
software, inspired the creation of the RGB LED Cube Control Software. This project stands as a testament to my commitment to marrying software and 
hardware, echoing the fulfillment I find in the convergence of these two worlds. As I reflect on this journey, I am excited to present this ePortfolio, 
a compilation of artifacts that showcase my skills, growth, and readiness to make meaningful contributions to the field of computer science.  

### Collaborating in a Team Environment

In my tenure in the computer science program, I've had the privilege of collaborating with exceptional professors and fellow students. Throughout my 
courses, interactive discussion assignments were a norm, fostering an environment where peers could exchange ideas and establish connections. However, 
it was the version control class, specifically focusing on git, that left a lasting impression on collaborative endeavors. This class introduced several 
projects where the entire cohort collaborated within the same remote repository on Bitbucket. We collectively contributed updates to the codebase, 
engaging in thorough code reviews. These reviews were instrumental in cultivating a standardized software package, ensuring uniformity in naming 
conventions, commenting standards, and, most importantly, seamless integration of everyone's contributions.  

My experience at BAE Systems, particularly in the research and development sector, provided additional insights into effective teamwork. The teams I've 
been part of boast diverse skill sets, each member contributing unique expertise. Given this diversity, duplicative efforts are rare, and successful 
project completion hinges on robust communication. The necessity to bridge gaps between various skill domains underscores the significance of clear and 
consistent communication in achieving project objectives.  

### Communicating to Stakeholders

Communicating to stakeholders has been a crucial aspect of my journey, both in academia and the professional sphere. In my academic pursuits, professors 
served as primary stakeholders for my assignments. To ensure alignment with guidelines and rubrics, I proactively sought clarification via email, 
providing supporting details for a comprehensive understanding of assignment expectations.  

In the professional realm, I've engaged with stakeholders in diverse capacities. When working on internal projects, the lead engineer or project manager 
took on the role of primary stakeholders. Conversely, external customers assumed this position for projects tailored to their needs. My communication 
strategy emphasized clarity and proactive clarification of uncertainties, regardless of the project's nature.  

A pivotal lesson in stakeholder communication was the importance of transparency when faced with unforeseen challenges. Rather than attempting to resolve 
issues independently, I recognized the value of promptly informing stakeholders about any obstacles and involving them in decision-making. While minor 
issues could be addressed swiftly, challenges of unknown scope demanded collaborative problem-solving, ensuring stakeholders had a voice in navigating 
the complexities.  

Moreover, understanding the busy schedules of stakeholders underscored the significance of concise communication. Striking a balance between providing 
sufficient, relevant information for informed decision-making and avoiding unnecessary details became paramount. This approach aimed to keep stakeholders 
well-informed without overwhelming them with extraneous information.  

### Data Structures and Algorithms

Data Structures and Algorithms have been integral components of all three enhancements within the RGB LED Cube Control Software project, showcasing my 
proficiency in these foundational aspects of computer science. The creation of classes such as RGBLEDCCS, cubeControl, led, userCredentials, and 
sqliteCRUDModule reflects my commitment to crafting a modular and interconnected architecture.  

Embedded within these classes are algorithms designed to facilitate seamless communication among different components of the RGB LED Cube Control 
Software. These algorithms extend their influence beyond the software, interfacing with the Arduino Uno and LED cube hardware, as well as the SQLite 
database. An essential aspect of my approach is not only creating functional algorithms but also ensuring their efficiency. The evaluation of time 
complexity for critical algorithms underscores my dedication to developing algorithms that not only work but work optimally. A notable example is the 
timing algorithm crafted for lighting the cube, enabling the illusion of the entire cube consistently appearing lit despite only four LEDs being 
illuminated at any given moment. This commitment to efficient and effective algorithm design is a hallmark of my approach to problem-solving in 
software development.  

### Software Engineering and Database

In the realm of Software Engineering and Database Management, my proficiency is prominently showcased throughout all three enhancements, stemming from the 
comprehensive nature of the RGB LED Cube Control Software project, which entails the development of a full-stack application. Leveraging various QT 
libraries, including their User Interface (UI) framework, Serial Port library for communication with an Arduino Uno, and SQL library for interaction with 
the SQLite database, I crafted a sophisticated yet user-friendly UI.  

Noteworthy is the journey with databases, epitomized by the strategic pivot from MongoDB, initially planned as the back-end solution, to SQLite, an 
entirely new database solution for me. This shift exemplifies my dedication to acquiring proficiency in diverse database solutions, driven by the pursuit 
of finding the most suitable tool for a given problem. The implementation of CRUD (Create, Read, Update, Delete) functionality, orchestrated through the 
sqliteCRUDModule class, underscores my capability to exert comprehensive control over databases directly from an application. This ability, coupled with 
the adept handling of various database solutions, emphasizes my adaptability and problem-solving skills in the dynamic field of software engineering.  

### Security

My commitment to creating security-centric software is prominently demonstrated in Enhancement One of the RGB LED Cube Control Software project. A key 
facet of this endeavor involves the creation of the userCredentials class, a dedicated module designed to prioritize the safeguarding of sensitive login 
information. The instantiation of this class during program startup, with username and password variables initialized from static const QString variables, 
systemUserName and systemPassword, establishes a secure foundation for user authentication.  

Notably, the UI design reflects a security-conscious strategy by limiting access exclusively to the login tab at startup. Successful authentication 
becomes a prerequisite for progression within the system. A systematic control mechanism, triggered upon successful login, secures the login button and 
grants access to subsequent tabs.  

This approach ensures that the software not only fulfills functional objectives but also embodies a proactive stance in addressing potential security 
vulnerabilities. The emphasis on a secure user authentication process and controlled system progression underscores my commitment to robust software 
architecture and data security.  

### Professional Goals

As I approach the conclusion of my bachelor's degree program in Computer Science, marked by the completion of this Capstone Project and ePortfolio, I am 
poised to channel the extensive skills I've cultivated through both academic learning and professional experiences into propelling my career forward. The 
integration of hardware and software has been a source of immense satisfaction for me, particularly in the creation of user-friendly software solutions 
through the development of full-stack applications. This involves tackling the intricacies of a problem and providing users with seamless interfaces for 
executing complex tasks effortlessly.  
 
My enthusiasm lies in utilizing these acquired skills to secure a role that not only allows me to further refine my expertise in the integration of 
hardware and software through full-stack application development but also provides insights into potential areas of specialization for a master's degree. 
This transition marks the beginning of a new chapter in my career, where I am eager to contribute to innovative projects and continue my journey of 
lifelong learning in the dynamic field of computer science.  

### Tying it All Together

Throughout the three enhancement phases of the project, my focus was on transforming the initial 'RGB LED Cube Control Software' from a simple tool into 
a comprehensive full-stack application. This choice not only allowed me to showcase my proficiency in software engineering and design, data structures and 
algorithms, and databases but also aligned seamlessly with my professional aspirations. Specifically, I aimed to delve deeper into full-stack application 
development with a keen emphasis on seamlessly integrating hardware and software solutions into a unified system.  

In the following sections of my ePortfolio, I will commence by providing an overview of the initial artifact that served as the focal point for 
enhancement throughout this project. This will be followed by a detailed video code review that I conducted, shedding light on the foundational state of 
the RGB LED Cube Control Software. Subsequently, I’ll delve into the key modifications implemented during each enhancement phase, providing links to the 
corresponding code files and YouTube video demonstrations. This will allow you to witness the live operation and evolution of the RGB LED Cube Control 
Software at each phase of its development. Additionally, you'll find links to comprehensive narratives offering in-depth insights into each enhancement 
phase's work, with detailed descriptions of the modifications and improvements made during development. These narratives are accessible both as 
stand-alone Word documents and on the web for easy viewing.  

[Back to Table of Contents](#table-of-contents)
  
  




&nbsp;
## Initial Artifact <a name="initial-artifact"></a>

The artifact central to my enhancements is the "RGB LED Cube Control Software", a project initiated during my Electrical Engineering Technology Associate 
degree program's capstone in 2015. Initially, I constructed a 4x4x4 LED Cube with RGB LEDs, shown below, integrating it with an FPGA development board and 
crafting custom firmware to manipulate the 52 control lines governing the 64 LEDs.  

![4x4x4 RGB LED Cube](/Images/LED_Cube.png)

In a recent pursuit of rekindling my enthusiasm for the project, I designed additional circuitry to interface my RGB LED Cube Control Software with an 
Arduino Uno, facilitating control over the RGB LEDs. Prior to the start of this course, I had developed a simple functional user interface (UI), shown 
below, establishing communication with the Arduino Uno through a COM Port. This initial UI empowered me to illuminate one color of one LED based on 
user-defined color, X, Y, and Z values.

![Initial Artifact UI](/Images/Initial_Artifact_UI.png)

Having accomplished the hardware integration and circuitry enhancements, the focus of my Computer Science Capstone project pivots decisively to the 
evolution of the RGB LED Cube Control Software. With the foundational hardware components in place and the initial user interface demonstrating functional 
control over individual LEDs, my aim is to delve into advanced features and optimizations within the software realm. This shift marks the latest chapter 
in the ongoing development of a project that seamlessly marries my technical skills in both hardware and software domains.

[Back to Table of Contents](#table-of-contents)


&nbsp;
## Project Outline and Code Review Video <a name="code-review"></a>

The code review marked the initiation of the development process. In the linked video below, I delve into the hardware interfacing aspects of the initial 
version of the RGB LED Cube Control Software, present the software in its initial state, conduct a comprehensive code review on the initial software, and 
outline a structured three-step enhancement plan. This plan outlines the specific objectives for each enhancement and demonstrates how they align with the 
course outcomes. 

[![Code Review Video](https://img.youtube.com/vi/PrN7pwSR6RM/0.jpg)](https://www.youtube.com/watch?v=PrN7pwSR6RM)

[Back to Table of Contents](#table-of-contents)
  
  




&nbsp;
## Enhancement One <a name="enhancement-one"></a>

### Overview of Modifications

In enhancement phase one of development, the RGB LED Cube Control Software underwent a transformative phase that laid the foundation for its evolution into 
a comprehensive full-stack application. The key highlights of this phase encompassed a meticulous UI overhaul, where I revamped and enhanced the user 
interface to ensure a more intuitive and aesthetically pleasing design. Simultaneously, the integration of robust security-centric features became a focal 
point, setting the stage for a secure and user-authenticated application.  

Notably, I implemented significant functionality within the Login and Hardware Initialization tabs. The Login tab, fortified with security measures, became 
the gateway to the software, ensuring secure access and authentication. Meanwhile, the Hardware Initialization tab set the groundwork for seamless 
communication with the RGB LED Cube hardware.  

#### UI Login Tab

![Login Tab](/Images/Login_Tab.png)  

#### UI Hardware Init Tab

![Hardware Init Tab](/Images/Hardware_Init_Tab.png)  

### Enhancement One Links

#### Project Files

[Full Project .zip File](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_1/RGB_LED_CCS%20-%20Enhancement%201.zip)  

[Singular Code Files](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/tree/main/Artifact_Enhancement_1/Individual_Code_Files)  

#### Video Walkthrough

[![Enhancement One Video](https://img.youtube.com/vi/-KXExONsFV8/0.jpg)](https://www.youtube.com/watch?v=-KXExONsFV8)

#### In-Depth Enhancement Narrative

[Word Document Version of Enhancement Narrative](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_1/Milestone%20Two%20Enhancement%20One%20Software%20Design%20and%20Engineering%20Narrative%20-%20Justin%20Byrd.docx)  

[Web Version of Enhancement Narrative](#enhancement-one-web-narrative)  

[Back to Table of Contents](#table-of-contents)







&nbsp;
## Enhancement Two <a name="enhancement-two"></a>

### Overview of Modifications

In enhancement phase two of development, I immersed myself into the nuances of software architecture related to data structures and algorithmic design. 
The refinements introduced in this stage, such as the overhauled Cube Control Tab, introduction of novel classes (led and cubeControl), and the inventive 
Cube Timing Algorithm, serve as concrete demonstrations of my proficiency in navigating algorithmic intricacies while ensuring streamlined data 
management. Notably, the Data Parsing Algorithm, strategically crafted to seamlessly integrate with an upcoming database module, reflects a 
forward-thinking approach to software design and underscores my commitment to creating adaptable and future-proof solutions. In essence, this selection 
highlights my unwavering dedication to mastering algorithms and data structures, thereby enriching the comprehensive skill set showcased in my ePortfolio.  

#### UI Cube Control Tab

![Cube Control Tab](/Images/Cube_Control_Tab.png)  

### Enhancement Two Links

#### Project Files

[Full Project .zip File](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_2/RGB_LED_CCS%20-%20Enhancement%202.zip)  

[Singular Code Files](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/tree/main/Artifact_Enhancement_2/Individual_Code_Files)  

#### Video Walkthrough

[![Enhancement Two Video](https://img.youtube.com/vi/M9_ifvqkotE/0.jpg)](https://www.youtube.com/watch?v=M9_ifvqkotE)

#### In-Depth Enhancement Narrative

[Word Document Version of Enhancement Narrative](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_2/Milestone%20Three%20Enhancement%20Two%20Algorithms%20and%20Data%20Structure%20Narrative%20-%20Justin%20Byrd.docx)  

[Web Version of Enhancement Narrative](#enhancement-two-web-narrative)  

[Back to Table of Contents](#table-of-contents)







&nbsp;
## Enhancement Three <a name="enhancement-three"></a>

### Overview of Modifications

In enhancement phase three, I showcase substantial advancements in database integration, underlining my proficiency in crafting full-stack applications. 
The introduction of the sqliteCRUDModule class marked a significant stride, focusing on implementing CRUD (Create, Read, Update, Delete) operations and 
showcasing a commitment to modular and organized code. The creation of the “RGB_LED_CCS_DB.db” database, including the “cubePatterns” table, illustrated 
a deliberate approach to structured data storage, aligning with the principles of CRUD. The decision to pivot from MongoDB to SQLite, which I will speak 
to in further detail below, underscored a pragmatic problem-solving approach, emphasizing adaptability and decision-making skills. In essence, this 
artifact selection highlights my dedication to mastering comprehensive database integration, particularly emphasizing CRUD functionality, and illustrates 
my ability to interface with databases and integrate them seamlessly into full-stack applications within the realm of software development.  

#### UI Database Tab

![Database Tab](/Images/Database_Tab.png)  

#### Command Line View of RGB_LED_CCS_DB.db

![Database On Command Line](/Images/Database_On_Command_Line.png)  

### Enhancement Three Links

#### Project Files

[Full Project .zip File](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_3/RGB_LED_CCS%20-%20Enhancement%203.zip)  

[Singular Code Files](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/tree/main/Artifact_Enhancement_3/Individual_Code_Files)  

#### Video Walkthrough

[![Enhancement Three Video](https://img.youtube.com/vi/LhghKqOzzrc/0.jpg)](https://www.youtube.com/watch?v=LhghKqOzzrc)

#### In-Depth Enhancement Narrative

[Word Document Version of Enhancement Narrative](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_3/Milestone%20Four%20Enhancement%20Three%20Databases%20Narrative%20-%20Justin%20Byrd.docx)  

[Web Version of Enhancement Narrative](#enhancement-three-web-narrative)  

[Back to Table of Contents](#table-of-contents)





&nbsp;
## Contact Information <a name="contact-information"></a>

![Head Shot of Justin Byrd](/Images/Head_Shot.png)

**Full Name:** Justin Byrd  

**Email:** justin.byrd@snhu.edu

**GitHub:** [Justin Byrd's GitHub](https://github.com/JByrd-SNHU)  

**YouTube Channel:** [Justin Byrd's YouTube Channel](https://www.youtube.com/@JByrd-SNHU)  

[Back to Table of Contents](#table-of-contents)






&nbsp;
# ---------------------------------------------------------------
### End of ePortfolio
### Hosting Web Version of In-Depth Enhancement Narratives Below
# ---------------------------------------------------------------











&nbsp;
## Initial Artifact <a name="web-narrative-initial-artifact"></a>

The artifact central to my enhancements is the "RGB LED Cube Control Software", a project initiated during my Electrical Engineering Technology Associate 
degree program's capstone in 2015. Initially, I constructed a 4x4x4 LED Cube with RGB LEDs, shown below, integrating it with an FPGA development board and 
crafting custom firmware to manipulate the 52 control lines governing the 64 LEDs.  

![4x4x4 RGB LED Cube](/Images/LED_Cube.png)

In a recent pursuit of rekindling my enthusiasm for the project, I designed additional circuitry to interface my RGB LED Cube Control Software with an 
Arduino Uno, facilitating control over the RGB LEDs. Prior to the start of this course, I had developed a simple functional user interface (UI), shown 
below, establishing communication with the Arduino Uno through a COM Port. This initial UI empowered me to illuminate one color of one LED based on 
user-defined color, X, Y, and Z values.

![Initial Artifact UI](/Images/Initial_Artifact_UI.png)

Having accomplished the hardware integration and circuitry enhancements, the focus of my Computer Science Capstone project pivots decisively to the 
evolution of the RGB LED Cube Control Software. With the foundational hardware components in place and the initial user interface demonstrating functional 
control over individual LEDs, my aim is to delve into advanced features and optimizations within the software realm. This shift marks the latest chapter 
in the ongoing development of a project that seamlessly marries my technical skills in both hardware and software domains.

[Back to In Depth Enhancement Narrative One](#enhancement-one-web-narrative)  
[Back to In Depth Enhancement Narrative Two](#enhancement-two-web-narrative)  
[Back to In Depth Enhancement Narrative Three](#enhancement-three-web-narrative)  







&nbsp;
## Enhancement One Web Narrative <a name="enhancement-one-web-narrative"></a>

### Enhancement One Narrative

#### Artifact Choice <a name="enhancement-one-artifact-choice"></a>

For Enhancement One, which concentrated on **Software Design/Engineering**, I selected the RGB LED Cube Control Software as the focal artifact. A 
comprehensive description of this particular artifact has been provided in detail in the preceding section 
titled "Initial Artifact".  

Link to [Initial Artifact](#web-narrative-initial-artifact)

#### Why I Chose This Artifact to Display My Skills in Software Design/Engineering

For this phase of development, I selected the "RGB LED Cube Control Software" due to its unique amalgamation of hardware and software components. 
The project's standout features in Enhancement One include a thorough UI overhaul, seamless integration of security-centric features, and its 
pivotal role as the starting point for full-stack application development. Collectively, these aspects emphasize my proficiency and adaptability 
in software design and engineering.

#### The Modifications I Made to the RGB LED Cube Control Software in this Phase of Development

##### UI Overhaul

The decision to overhaul the user interface (UI) exemplifies my proficiency in graphical user interface design. In creating a new project within 
QT Creator, I demonstrated the ability to construct an intuitive and visually appealing UI. The transition from a singular view to a multi-tab 
interface comprised of Login, Hardware Init, Cube Control, and Database tabs, reflects my capacity to architect complex UI structures.

##### Login Tab Functionality

![Login Tab](/Images/Login_Tab.png)  

The implementation of the Login tab introduces elements of software security and user authentication to the project. The creation of a 
userCredentials class, complete with functions to check and verify user credentials, showcases my expertise in implementing secure software 
practices. The seamless integration of login functionality, including feedback mechanisms for successful and failed attempts, underscores my 
attention to both usability and security aspects.

##### Dynamic Hardware Initialization Tab Functionality



The Dynamic Hardware Initialization functionality further highlights my skills in software development. The addition of a QSerialPort object 
demonstrates my ability to integrate external communication protocols into the software architecture. The implementation of error handling 
mechanisms, such as checking for valid COM port entries and securing against repeated initialization attempts, showcases my commitment to robust 
and reliable software design.  
  
In summary, the RGB LED Cube Control Software is a compelling addition to my ePortfolio as it not only represents the evolution of a hardware 
project but also serves as a testament to my growth in software development. The enhancements made in the UI, security features, and dynamic 
hardware initialization underscore my ability to conceive and implement sophisticated software solutions. The ongoing refinement of this artifact 
aligns with my commitment to advancing and showcasing my software development skills throughout my academic and professional journey.

##### Enhancement One Video

A visual walkthrough encapsulated in the video linked below provides a dynamic exploration of these updates. The video not only discusses the 
intricacies of the software enhancements but also showcases the live functionality of the RGB LED Cube Control Software.  

[![Enhancement One Video](https://img.youtube.com/vi/-KXExONsFV8/0.jpg)](https://www.youtube.com/watch?v=-KXExONsFV8)

#### Meeting Course Objectives

##### Outcome One

The first outcome I met in this enhancement was, "Demonstrate and ability to use well-founded and innovative techniques, skills, and tools in 
computing practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals".

###### QT Library Usage

In achieving this, I strategically utilized QT's UI framework and QTSerialPort library, demonstrating a proficiency in integrating innovative 
tools into my work. This choice not only highlighted my technical skills but also emphasized the importance of leveraging external APIs and 
libraries in professional development, showcasing my capacity to expand capabilities without starting from scratch. My proficiency in navigating 
documentation pertaining to these libraries further underscored my understanding of this crucial aspect.

###### Full Stack Application Development

The development of an efficient UI with streamlined user interaction and robust exception handling was pivotal in realizing the broader goal of 
creating a full-stack application. This enhancement serves as a visible starting point for the top layer of the stack, the UI, and the intermediary 
layer, which comprises the code responsible for enabling login and serial port functionality. This meticulous attention to the UI's design and 
functionality not only aligns with the project's goals but also reinforces my commitment to delivering solutions that meet industry standards and 
user expectations.

##### Outcome Two

The second outcome I met with this enhancement was, “Develop a security mindset that anticipates adversarial exploits in software architecture 
and designs to expose potential vulnerabilities, mitigate design flaws, and ensure privacy and enhanced security of data resources”.

###### Class Creation - userCredentials

This approach involved the creation of a dedicated userCredentials class, emphasizing the importance of safeguarding sensitive login information. 
The instantiation of this class during program startup, with username and password variables initialized from static const QString variables, 
systemUserName, and systemPassword, establishes a secure foundation for user authentication.

###### Secure UI Design

The UI design reflects a security-conscious strategy by initially granting access solely to the login tab at startup. Successful authentication is 
required for progression within the system. A systematic control mechanism, triggered upon successful login, secures the login button and grants 
access to subsequent tabs.  

This approach ensures that the software not only meets functional objectives but also embodies a proactive stance in addressing potential security 
vulnerabilities. The emphasis on a secure user authentication process and controlled system progression underscores a commitment to robust software 
architecture and data security.

#### Reflecting on Enhancement One

##### Stepping Back from Relying on QT Designer for UI Interactions

In working on this enhancement, my previous experience largely revolved around utilizing QT Designer for crafting user interfaces and linking UI events 
to underlying software functionality. However, the specific requirements of this project required me to take a step back from relying on the built-in 
functionality of QT Designer. It lacked the capability to implement dynamic features, such as locking individual tabs or buttons based on other system 
actions. Initially, this shift posed a challenge, requiring a transition to manipulating widget properties directly in the code. This adjustment proved 
to be very rewarding as it offered a newfound level of flexibility within the QT UI Framework.

##### Security-Centric Mindset

Another noteworthy learning curve involved adopting a security-centric mindset, stepping back from my typical approach in school assignments where 
functionality took precedence. In professional software development experience, security concerns often fall within a dedicated sector, and private 
networks provide an additional layer of defense. However, this enhancement required a more comprehensive consideration of security aspects within my 
project. While initially unfamiliar, addressing security concerns became a welcomed challenge. It prompted a shift in perspective, allowing me to analyze 
my project through a new lens and integrate security measures seamlessly into the development process.

##### Conclusion

This dual learning experience not only expanded my technical skills but also enriched my approach to software development by incorporating a heightened 
awareness of security considerations

### Enhancement One Project File Links

[Link to Enhancement One Narrative Word Document](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_1/Milestone%20Two%20Enhancement%20One%20Software%20Design%20and%20Engineering%20Narrative%20-%20Justin%20Byrd.docx)  
[Link to Enhancement One Stand-Alone Code Files Directory](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/tree/main/Artifact_Enhancement_1/Individual_Code_Files)  
[Link to Enhancement One Full Project .zip File](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_1/RGB_LED_CCS%20-%20Enhancement%201.zip)  

[Back to Enhancement One](#enhancement-one)
  
  







&nbsp;
## Enhancement Two Web Narrative <a name="enhancement-two-web-narrative"></a>

### Enhancement Two Narrative

#### Artifact Choice <a name="enhancement-two-artifact-choice"></a>

For Enhancement Two, which concentrated on **Algorithms and Data Structures**, I selected the RGB LED Cube Control Software as the focal artifact. A 
comprehensive description of this particular artifact has been provided in detail in the preceding section 
titled "Initial Artifact".  

Link to [Initial Artifact](#web-narrative-initial-artifact)

#### Why I Chose This Artifact to Display My Skills in Algorithms and Data Structure

For this phase of development, I again chose the "RGB LED Cube Control Software" precisely because it posed a distinctive challenge, immersing me in 
the nuances of software architecture related to data structures and algorithmic design. The refinements introduced in this stage, such as the 
overhauled Cube Control Tab, introduction of novel classes (led and cubeControl), and the inventive Cube Timing Algorithm, serve as concrete 
demonstrations of my proficiency in navigating algorithmic intricacies while ensuring streamlined data management. Notably, the Data Parsing 
Algorithm, strategically crafted to seamlessly integrate with an upcoming database module, reflects a forward-thinking approach to software design 
and underscores my commitment to creating adaptable and future-proof solutions. In essence, this selection highlights my unwavering dedication to 
mastering algorithms and data structures, thereby enriching the comprehensive skill set showcased in my ePortfolio.

#### The Modifications I Made to the RGB LED Cube Control Software in this Phase of Development

##### Cube Control Tab Functionality

![Cube Control Tab](/Images/Cube_Control_Tab.png)  

The augmentation of the Cube Control Tab functionality reveals my expertise in graphical user interface design. The introduction of 64 comboBoxes, 
each representing an RGB LED on the cube, underscores my ability to manage and implement dynamic user interfaces. The incorporation of color selection 
options and a pattern duration input demonstrates a keen focus on user interaction and functionality.

##### New Classes to Support Cube Control Tab

The creation of the led and cubeControl classes represents a significant architectural improvement. The led class encapsulates the properties and 
behaviors of individual RGB LEDs, emphasizing the principles of encapsulation and modularity. Meanwhile, the cubeControl class serves as a comprehensive 
representation of the entire 4x4x4 RGB LED Cube, showcasing my proficiency in designing and implementing complex data structures.

##### Cube Timing Algorithm

The Cube Timing Algorithm addresses critical challenges in balancing power consumption and communication speed. My ability to optimize the timing of 
control line manipulations demonstrates a deep understanding of hardware constraints. The solution involves a meticulous consideration of power draw 
limitations, communication speed challenges inherent in serial communication, and the implementation of advanced techniques such as Arduino port 
manipulation to achieve the desired visual effect.

##### Timing Operation of the Cube

The Cube Timing Algorithm exhibits a strategic approach to managing power consumption and communication speed, showcasing a profound awareness of the 
intricacies involved in hardware manipulation. The algorithm's primary objective is to efficiently control the state of a 4x4x4 RGB LED cube over a 
specified duration. To achieve this, the algorithm engages with the constraints of the hardware by utilizing serial communication through an Arduino 
board.  
 
The core mechanism involves cyclically lighting individual slices of the cube in a manner imperceptible to the human eye, creating the illusion of a 
fully lit cube. This approach not only considers the visual impact but also addresses the limitations of hardware speed and power consumption. The 
algorithm employs a time-driven execution loop to control the duration of the visual effect, ensuring optimal power usage and preventing unnecessary 
strain on the hardware.  
 
In terms of time complexity, the nested loops iterating through the 16 [x][*][z] slices contribute to a time complexity of O(n^2), where 'n' 
represents the cube size. This design choice aligns with the fixed size of the RGB LED cube, demonstrating a conscious effort to balance computational 
efficiency with the specific requirements of the hardware.  
 
Furthermore, the integration of Arduino port manipulation and careful synchronization with the COMPORT communication adds a layer of sophistication. 
The algorithm's consideration of hardware speed disparities, as evidenced by the strategically placed wait statements, ensures that the RGBLEDCCS 
operates harmoniously with the COMPORT, preventing data buffering issues.  
 
The Cube Timing Algorithm exemplifies a thoughtful and skillful approach to addressing challenges inherent in hardware control. The strategic balance 
between time complexity, power consumption, and communication speed underscores a meticulous consideration of the project's unique constraints, 
showcasing an advanced understanding of both algorithmic and hardware principles.

##### Managing Pattern Duration

To control how long a pattern remained illuminated on the cube, a sophisticated timestamp mechanism was introduced. Before entering the execution 
loop, a timestamp was captured, and a second timestamp was recorded at the conclusion of each cube iteration. By calculating the time difference 
between these two timestamps, the algorithm determined whether to continue or exit the execution loop based on the user-specified duration. This 
meticulous time management further refined the Cube Timing Algorithm, providing precise control over the display duration for each pattern on the RGB 
LED Cube.

##### Data Parsing Algorithm

The Data Parsing Algorithm serves as a pivotal component in the RGB LED Cube Control Software, laying the groundwork for seamless integration with a 
forthcoming database module in Enhancement 3. The implementation of this algorithm not only showcases a forward-thinking approach to software design 
but also underscores a commitment to crafting extensible and adaptable solutions.

###### Function design

To facilitate the future loading of cube patterns from a database, a specialized function was meticulously crafted. This function accepts a 
64-character string, with each character representing integer values ranging from 0 to 7. These integer values correspond to the predefined colors 
(black, red, green, blue, yellow, purple, cyan, white) for the RGB LEDs.

###### String Parsing

Upon receiving the 64-character string, the algorithm systematically parses each character, converting it into an integer value. This parsing 
operation is crucial, as it establishes a direct mapping between the database representation of cube patterns and the internal color representation 
within the software.

###### LED Object Update

With the parsed integer values, the algorithm proceeds to update each of the 64 LED objects within the cubeControl class. This step ensures that the 
internal state of the RGB LED Cube accurately reflects the pattern specified by the database. Each LED is assigned the color corresponding to its 
designated integer value, aligning with the predefined color scheme.

###### UI Synchronization

The Data Parsing Algorithm goes beyond internal updates; it extends its influence to the graphical user interface (UI). The parsed integer values not 
only dictate the colors of the LED objects but also dynamically update the choices and colors of the corresponding combo boxes in the UI. This 
synchronization ensures that the user interface accurately mirrors the loaded cube patterns, providing a cohesive and intuitive user experience.

###### Time Complexity

In terms of time complexity, the Data Parsing Algorithm demonstrates efficiency with a linear time complexity of O(n), where 'n' represents the size 
of the input string (64 characters). The algorithm's design ensures that each character is processed individually, contributing to a linear 
relationship between the input size and the execution time. This linear scaling is particularly advantageous for managing larger datasets, showcasing 
a pragmatic consideration of potential future expansions in database patterns. The algorithm's ability to parse and update the cube's internal state 
with a linear time complexity aligns with best practices in algorithmic efficiency, reinforcing the software's responsiveness and adaptability.  

In summary, the enhancements made in the second phase of the RGB LED Cube Control Software project underscore my advanced skills in software 
development. From intricate UI design to the implementation of complex algorithms addressing power consumption and communication speed challenges, 
this artifact serves as a testament to my ability to conceive, design, and implement sophisticated software solutions. The ongoing evolution of this 
project aligns with my dedication to continuous improvement and innovation in the realm of software development.

##### Enhancement Two Video

A visual walkthrough encapsulated in the video linked below provides a dynamic exploration of these updates. The video not only discusses the 
intricacies of the software enhancements but also showcases the live functionality of the RGB LED Cube Control Software.  

[![Enhancement Two Video](https://img.youtube.com/vi/M9_ifvqkotE/0.jpg)](https://www.youtube.com/watch?v=M9_ifvqkotE)

#### Meeting Course Objectives

##### Objective One

The first outcome I met with this enhancement was, "Design and evaluate computing solutions that solve a given problem using algorithmic principles 
and computer science practices and standards appropriate to its solution, while managing the trade-offs involved in design choices".

###### Managing Trade-Offs

In meeting Outcome one, I successfully navigated the delicate balance between communication speed and power consumption limitations inherent in my 
hardware. The Cube Timing Algorithm, a pivotal component, addressed critical challenges in optimizing the timing of control line manipulations. This 
required a nuanced understanding of hardware constraints, leading to the implementation of advanced techniques like Arduino port manipulation.

###### Effective Timing Algorithms

The design of effective timing algorithms was crucial to achieving the desired visual effects. Specifically, the Timing Operation of the cube involved 
strategic illumination of only four RGB LEDs at any given moment. This approach optimized power consumption and visual impact. However, to create an 
illusion of the entire cube being illuminated simultaneously, the control lines had to cycle rapidly through sixteen sets of four LEDs. This careful 
orchestration was central to conveying a unified and dynamic visual experience.  

Moreover, to enhance user customization, I implemented a feature allowing patterns to stay illuminated for a user-defined duration. This meticulous 
consideration in timing algorithms provided users with control over the display duration for each pattern on the RGB LED Cube, aligning with Outcome 
one’s emphasis on managing trade-offs and design choices.  

In evaluating the performance characteristics, the timing operation algorithm exhibits a time complexity of O(n^2), where ‘n’ represents the size of the 
cube, ensuring efficiency for the fixed cube size.

###### Parsing Algorithm for Future Pattern Loading

Furthermore, the Data Parsing Algorithm, a key element introduced, was designed to facilitate the future loading of cube patterns from a database. This 
forward-thinking solution required crafting a specialized function that systematically parsed a 64-character string, establishing a direct mapping between 
database representation and internal color representation within the software. This demonstrated a proactive approach to adaptability and extensibility in 
software design. In evaluating its performance characteristics, the algorithm exhibits a linear time complexity of O(n), ensuring efficient processing of 
input data.

##### Objective Two

The second outcome I met with this enhancement was, "Demonstrate and ability to use well-founded and innovative techniques, skills, and tools in computing 
practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals"

###### UI Design and Implementation

In addressing Outcome two, the augmentation of Cube Control Tab functionality underscored my expertise in graphical user interface design. The introduction 
of 64 comboBoxes, each representing an RGB LED, showcased my ability to manage and implement dynamic user interfaces effectively. This innovative UI design 
enhances user interaction and functionality.

###### Encapsulation and Modularity

Additionally, the creation of the led and cubeControl classes represented a significant architectural improvement. Emphasizing principles of encapsulation 
and modularity, these classes provided a structured and organized approach to manage the properties and behaviors of individual RGB LEDs and the entire 
4x4x4 RGB LED Cube, respectively. This showcased proficiency in designing and implementing complex data structures, aligning with Outcome 2's emphasis on 
well-founded and innovative techniques.  

In summary, the second enhancement phase not only addressed the outlined outcomes but also showcased a comprehensive approach, integrating advanced 
algorithmic design, hardware optimization, and innovative UI implementation. The ongoing evolution of the project aligns seamlessly with my commitment to 
continuous improvement and innovation in the realm of software development.

#### Reflecting on Enhancement Two

##### What I Have Learned

###### BAUD Rates and Serial Communication

Exploring ways to increase communication speeds led me to delve into the intricacies of BAUD Rates in serial communication. Understanding how data is 
transmitted between the software and Arduino Uno, and the impact of different BAUD Rates on speed, was crucial for optimizing the Cube Timing Algorithm. 
This experience provided valuable insights into the nuances of efficient serial communication, enhancing my proficiency in this fundamental aspect of 
hardware-software interaction.

###### Ctime Library and Timing Algorithm

The implementation of the Timing Operation of the cube involved incorporating the ctime library into the algorithm. This library, dealing with time-related 
functions, played a key role in achieving precise control over the display duration for each pattern. Learning about and leveraging the ctime library not only 
refined the Cube Timing Algorithm but also expanded my knowledge of using specialized libraries to enhance software functionality.

###### QSerialPort Library

My focus on enhancing communication speed also prompted a deeper understanding of the QSerialPort Library. Exploring its features and functionalities allowed 
me to make informed decisions about optimizing data transmission between the software and the Arduino Uno. Gaining proficiency in utilizing this library is a 
testament to the importance of leveraging existing tools to overcome challenges in software development.

###### Commenting Standards

Emphasizing good commenting standards and adopting clear comment headers during this enhancement phase underscored the importance of code documentation. 
Ensuring that my code is well-documented not only aids in my understanding of the logic during subsequent phases but also promotes collaboration and ease of 
maintenance. This focus on documentation aligns with industry best practices and reflects a commitment to producing high-quality, understandable code.

##### Challenges Faced

###### Power Draw

In the initial stages of designing the Cube Timing Algorithm, a critical challenge surfaced - managing power draw while illuminating the RGB LEDs. Given the 
hardware specifications where only one RGB LED should be powered at any given time, exceeding this limit would lead to inadequate current for each LED, 
resulting in color fading or undesired hue shifts. This constraint necessitated a meticulous approach to ensure optimal power distribution among the LEDs.

###### Communication Speed

A fundamental requirement for the RGB LED Cube was the need to manipulate the control lines rapidly, creating the illusion that the entire cube is 
simultaneously illuminated. This presented a unique challenge due to the constraints of serial communication. Inherent delays in sending data to the Arduino 
resulted in a visual effect reminiscent of an older monitor with a slow refresh rate, leading to perceptible blinking rather than a seamless display.

###### Power Draw Vs. Communication Speed Solution

To address the power draw challenge, a systematic testing process was conducted to determine the maximum number of LEDs that could be powered concurrently 
without compromising color integrity. The optimal solution emerged when it was found that lighting four RGB LEDs simultaneously was within the power 
constraints, reducing the number of control line manipulations from 64 (one per LED) to 16 (one per 4 LEDs). This not only conserved power but also streamlined 
the control process.  

In tandem with optimizing power draw, a two-fold strategy was implemented to overcome communication speed challenges. First, the Baud Rate of the COMPORT was 
significantly increased, enhancing the rate at which data could be transmitted. Secondly, a critical adjustment was made to the Arduino Uno's software, 
employing port manipulation instead of the slower digital write functions. This dual-pronged approach proved effective in ensuring that control lines cycled 
swiftly enough to create a seamless visual experience for the observer, with the entire cube appearing constantly lit, devoid of any blinking or color issues.

###### Addressing Serial Communication Buffering

Even with these optimizations, a final challenge emerged — buffering issues in the QSerialPort. The software was operating at a pace faster than the COMPORT 
could handle, leading to a breakdown in the timing algorithm. The solution involved incorporating a waitForBytesWritten statement within the execution loop. 
This strategic addition ensured synchronization between the software and COMPORT, preventing data from being excessively buffered and enabling a harmonious 
operation of the Cube Timing Algorithm.

##### Conclusion

In summary, the second enhancement phase was instrumental in not only providing effective solutions to specific challenges but also in significantly expanding 
my knowledge in critical areas of serial communication, timing algorithms, library utilization, and code documentation standards. The challenges encountered, 
such as managing power draw and optimizing communication speed to achieve the desired visual effects, served as practical testing grounds for the theoretical 
concepts explored. These hands-on experiences deepened my understanding of the underlying principles and intricacies involved in real-world software 
development.

### Enhancement Two Project File Links

[Link to Enhancement Two Narrative Word Document](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_2/Milestone%20Three%20Enhancement%20Two%20Algorithms%20and%20Data%20Structure%20Narrative%20-%20Justin%20Byrd.docx)  
[Link to Enhancement Two Stand-Alone Code Files Directory](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/tree/main/Artifact_Enhancement_2/Individual_Code_Files)  
[Link to Enhancement Two Full Project .zip File](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_2/RGB_LED_CCS%20-%20Enhancement%202.zip)  

[Back to Enhancement Two](#enhancement-two)








&nbsp;
## Enhancement Three Web Narrative <a name="enhancement-three-web-narrative"></a>

### Enhancement Three Narrative

#### Artifact Choice <a name="enhancement-three-artifact-choice"></a>

For Enhancement Three, which concentrated on **Databases**, I selected the RGB LED Cube Control Software as the focal artifact. A 
comprehensive description of this particular artifact has been provided in detail in the preceding section 
titled "Initial Artifact".  

Link to [Initial Artifact](#web-narrative-initial-artifact)

#### Why I Chose This Artifact to Display My Skills with Databases

For this development phase, I chose the "RGB LED Cube Control Software" to showcase substantial advancements in database integration, underlining my 
proficiency in crafting full-stack applications. The introduction of the sqliteCRUDModule class marked a significant stride, focusing on 
implementing CRUD (Create, Read, Update, Delete) operations and showcasing a commitment to modular and organized code. The creation of the 
"RGB_LED_CCS_DB.db" database, including the "cubePatterns" table, illustrated a deliberate approach to structured data storage, aligning with the 
principles of CRUD. The decision to pivot from MongoDB to SQLite, which I will speak to in further detail below, underscored a pragmatic 
problem-solving approach, emphasizing adaptability and decision-making skills. In essence, this artifact selection highlights my dedication to 
mastering comprehensive database integration, particularly emphasizing CRUD functionality, and illustrates my ability to interface with databases and 
integrate them seamlessly into full-stack applications within the realm of software development.

#### The Modifications I Made to the RGB LED Cube Control Software in this Phase of Development

##### Database Tab Functionality

![Database Tab](/Images/Database_Tab.png)  

The augmentation of the Database Tab functionality stands as a testament to my expertise in graphical user interface design. The introduction of a ListView 
Widget, managing and implementing dynamic user interfaces effectively, showcases a keen eye for user interaction and functionality.

##### New Class to Support Database Interaction - sqliteCRUDModule

![sqliteCRUDModule Header File](/Images/sqliteCRUDModule.png)  

A significant architectural leap is marked by the introduction of the sqliteCRUDModule class, a dedicated module for database interaction. This class not 
only encapsulates the complexities of database connections but also exemplifies my commitment to modular and organized code. The constructor and destructor 
operations ensure the efficient handling of database resources, mitigating potential memory leaks.

##### Member Function Additions in Existing Classes

###### RGBLEDCCS Class Member Function Additions

![RGBLEDCCS Member Function Additions](/Images/RGBLEDCCS_Member_Function_Additions.png)  

###### cubeControl Class Member Function Additions

![cubeControl Member Function Additions](/Images/cubeControl_Member_Function_Addition.png)  

Incorporating new member functions into existing classes, such as RGBLEDCCS and cubeControl, reflects the seamless integration of software enhancements into 
a pre-existing codebase. These additions act as private slots and member functions, ensuring a harmonious synergy between UI functionality and the underlying 
database operations.

##### Database Creation

![Database On Command Line](/Images/Database_On_Command_Line.png)  

The creation of the 'RGB_LED_CCS_DB.db' database, housing a table named 'cubePatterns,' is a deliberate step towards structured data storage. The table, with 
columns 'patternName' and 'patternString,' sets the foundation for efficient application functionality. This meticulous structuring underscores the 
significance of organized data management in the context of software design.

##### Enhancement Three Video

A visual walkthrough encapsulated in the video linked below provides a dynamic exploration of these updates. The video not only discusses the 
intricacies of the software enhancements but also showcases the live functionality of the RGB LED Cube Control Software.  

[![Enhancement Three Video](https://img.youtube.com/vi/LhghKqOzzrc/0.jpg)](https://www.youtube.com/watch?v=LhghKqOzzrc)

#### Meeting Course Objectives

##### Outcome One

The first outcome I met with this enhancement was, “Demonstrate and ability to use well-founded and innovative techniques, skills, and tools in computing 
practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals”.

###### UI Design and Implementation

The augmentation of the Database Tab functionality serves as a tangible manifestation of my expertise in graphical user interface design. The introduction 
of a ListView Widget not only enhances user interaction but also showcases a dynamic and effective implementation of graphical interfaces.

###### Encapsulation and Modularity

The creation of the sqliteCRUDModule Class epitomizes my commitment to encapsulation and modularity in software development. Employing dummy functions 
initially allowed for incremental testing and updates, enabling a systematic integration process. This approach not only streamlined development but also 
showcased a methodical approach to modularizing functionality.

###### Using Industry Tools to Facilitate Efficient Work

Acknowledging the challenges faced with deploying MongoCXX drivers, which I will talk about in more detail below, the decision to pivot towards SQLite 
demonstrates a pragmatic approach to problem-solving. Leveraging the readily available SQL library in QT reflects an understanding of industry tools, 
facilitating efficient development and avoiding unnecessary complexity.

##### Outcome Two

The second outcome I met with this enhancement was, “Design and evaluate computing solutions that solve a given problem using algorithmic principles and 
computer science practices and standards appropriate to its solution, while managing the trade-offs involved in design choices”.

###### Managing Trade-Offs

The decision to switch from MongoDB to SQLite during this enhancement highlights the practical aspects of managing trade-offs. Balancing the robustness of 
databases with project deadlines necessitated a strategic shift, emphasizing the importance of adaptability and decision-making in a professional context. 
This scenario mirrors real-world situations where project scope adjustments are made to meet schedule requirements.

###### Pattern Generation Algorithm

The implementation of a pattern generation algorithm in the RGB LED Cube Control Software exemplifies a commitment to algorithmic principles, emphasizing 
both time complexity and optimization. Employing nested loops to iterate through all 64 LEDs in the static 4x4x4 RGB LED Cube, the algorithm achieves a 
time complexity of O(n^3), ensuring efficiency for the fixed cube size. To optimize the process, getter functions of the LED objects in the cubeControl 
class are utilized, offering controlled and encapsulated access to color values. Despite not directly accessing the member variable, this design choice 
ensures data integrity while facilitating a streamlined pattern generation. The algorithm's careful balance of time complexity and optimization adheres to 
best practices, reflecting a thoughtful approach to performance considerations within the RGB LED Cube Control Software project.

##### Outcome Three

The third outcome I had planned to meet in this enhancement but had to pivot on was, “Develop a security mindset that anticipates adversarial exploits in 
software architecture and designs to expose potential vulnerabilities, mitigate design flaws, and ensure privacy and enhanced security of data resources”.

###### Why Outcome Three Was Not Met

While the initial plan involved MongoDB and its user access functionality, a shift to SQLite occurred due to practical considerations and deployment 
challenges. Although this pivot led to the exclusion of user access controls in this enhancement, it's crucial to note that the broader security objective 
was already met in Enhancement 1 with the implementation of a secure login page. The decision to prioritize project completion and maintain overall 
security aligns with a pragmatic approach to software development.

#### Reflecting on Enhancement Three

##### What I Have Learned

###### CMake

The journey of integrating MongoDB drivers introduced me to the powerful world of CMake. While the ultimate goal of successfully building the MongoCXX 
drivers remained elusive, delving into CMake provided valuable insights into its functionality. This encounter revealed CMake's role as a robust tool for 
building diverse solutions based on various variables, such as compilers and other available libraries. Despite the specific challenge faced, the exposure 
to CMake proved to be an enriching learning experience.

###### SQLite Databases

Navigating the terrain of SQLite, a lightweight SQL-type database, presented an opportunity to refresh and deepen my database knowledge. Having taken a 
class on MySQL databases in the past, reacquainting myself with database interactions through SQLite required significant research. This step served as an 
informative immersion into SQLite's intricacies, adding a new layer to my understanding of database management within the project.

###### Working with QT Models and ListView Widget

The decision to incorporate a ListView Widget into the project marked a departure from familiar QT widgets. To populate this widget with pattern names from 
the database, delving into QT models and understanding their role in dynamically sizing database tables for ListView widgets became a crucial aspect of the 
learning process. This exploration expanded my toolkit within the QT framework and broadened my understanding of more intricate UI elements.

##### Challenges Faced

###### MongoDB Integration Issues

The initial pursuit of integrating MongoDB with C++ software posed significant challenges. While I achieved success in running MongoDB on my system and 
interacting with it through the command line using Mongo Shell, building the crucial MongoCXX drivers proved to be a formidable hurdle. The process of 
acquiring and building the drivers led to multiple roadblocks, encountering build errors and complications specific to my compiler. Despite extensive 
research and attempts, a resolution remained elusive within the project timeline.

###### Transition to SQLite

In response to the MongoDB integration challenges, a pivotal decision was made to pivot towards SQLite as an alternative database solution. This shift 
brought its own set of challenges, particularly in the realm of interacting with SQL databases. Unfamiliarity with SQLite necessitated in-depth research 
and a learning curve, but the decision proved fortuitous as it allowed for the successful completion of the enhancement within the project constraints.

##### Conclusion

The enhancement process was marked by dynamic learning experiences and strategic decision-making. From grappling with CMake intricacies and navigating 
SQLite's nuances to incorporating advanced QT widgets, each challenge presented an opportunity for growth. The ability to pivot from MongoDB to SQLite 
underscored adaptability and resilience, showcasing the real-world decision-making inherent in software development projects. Overall, the journey 
encapsulated not just technical advancements but also the development of problem-solving skills and a deeper understanding of database management within 
the project context.

### Enhancement Three Project File Links

[Link to Enhancement Three Narrative Word Document](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_3/Milestone%20Four%20Enhancement%20Three%20Databases%20Narrative%20-%20Justin%20Byrd.docx)  
[Link to Enhancement Three Stand-Alone Code Files Directory](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/tree/main/Artifact_Enhancement_3/Individual_Code_Files)  
[Link to Enhancement Three Full Project .zip File](https://github.com/JByrd-SNHU/JByrd-SNHU.github.io/blob/main/Artifact_Enhancement_3/RGB_LED_CCS%20-%20Enhancement%203.zip)  

[Back to Enhancement Three](#enhancement-three)