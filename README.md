# RGB LED Cube Control Software

![4x4x4 RGB LED Cube](/Images/LED_Cube.png)



## Table of Contents <a name="table-of-contents"></a>

1. [Professional Self-Assessment](#professional-self-assessment)
2. [Initial Artifact](#initial-artifact)
3. [Enhancement One](#enhancement-one)
4. [Enhancement Two](#enhancement-two)
5. [Enhancement Three](#enhancement-three)
6. [Contact Information](#contact-information)



## Professional Self-Assessment <a name="professional-self-assessment"></a>

My content for the Professional Self-Assessment section goes here.

[Back to Table of Contents](#table-of-contents)



## Initial Artifact <a name="initial-artifact"></a>

### Description <a name="initial-artifact-description"></a>

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

### Links Back to Enhancements One - Three Artifact Descriptions
[Back to Enhancement One Artifact Description](#enhancement-one-artifact-choice)  
[Back to Enhancement Two Artifact Description](#enhancement-two-artifact-choice)  
[Back to Enhancement Three Artifact Description](#enhancement-three-artifact-choice)  

### Project Outline and Code Review Video

In the video linked below, I address the following:

- **Project Background**
  - Description of the hardware
  - Arduino Driver
- **Initial Artifact - RGB LED Cube Control Software**
  - Discuss how it works
  - Code Review
- **Enhancement 1**
  - Discuss Enhancement Plan
  - Discuss which course outcomes this enhancement works towards
- **Enhancement 2**
  - Discuss Enhancement Plan
  - Discuss which course outcomes this enhancement works towards
- **Enhancement 3**
  - Discuss Enhancement Plan
  - Discuss which course outcomes this enhancement works towards

[![Code Review Video](https://img.youtube.com/vi/PrN7pwSR6RM/0.jpg)](https://www.youtube.com/watch?v=PrN7pwSR6RM)

[Back to Table of Contents](#table-of-contents)










## Enhancement One <a name="enhancement-one"></a>

### Enhancement One Narrative

#### Artifact Choice <a name="enhancement-one-artifact-choice"></a>

For Enhancement One, which concentrated on **Software Design/Engineering**, I selected the RGB LED Cube Control Software as the focal artifact. A 
comprehensive description of this particular artifact has been provided in detail in the preceding section 
titled "Initial Artifact - Description".  

Link to [Initial Artifact - Description](#initial-artifact-description)

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

![Hardware Init Tab](/Images/Hardware_Init_Tab.png)  

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

### Enhancement One Project Files

Link to project files

[Back to Table of Contents](#table-of-contents)










## Enhancement Two <a name="enhancement-two"></a>

### Enhancement Two Narrative

#### Artifact Choice <a name="enhancement-two-artifact-choice"></a>

For Enhancement Two, which concentrated on **Algorithms and Data Structures**, I selected the RGB LED Cube Control Software as the focal artifact. A 
comprehensive description of this particular artifact has been provided in detail in the preceding section 
titled "Initial Artifact - Description".  

Link to [Initial Artifact - Description](#initial-artifact-description)

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

##### New Classes to Support Cube Control Tab

##### Cube Timing Algorithm

##### Timing Operation of the Cube

##### Managing Pattern Duration

##### Data Parsing Algorithm

###### Function design

###### String Parsing

###### LED Object Update

###### UI Synchronization

###### Time Complexity

##### Enhancement Two Video

A visual walkthrough encapsulated in the video linked below provides a dynamic exploration of these updates. The video not only discusses the 
intricacies of the software enhancements but also showcases the live functionality of the RGB LED Cube Control Software.  

[![Enhancement Two Video](https://img.youtube.com/vi/M9_ifvqkotE/0.jpg)](https://www.youtube.com/watch?v=M9_ifvqkotE)

### Enhancement Two Project Files

Link to project files

[Back to Table of Contents](#table-of-contents)










## Enhancement Three <a name="enhancement-three"></a>

### Enhancement Three Narrative

#### Artifact Choice <a name="enhancement-three-artifact-choice"></a>

For Enhancement Three, which concentrated on **Databases**, I selected the RGB LED Cube Control Software as the focal artifact. A 
comprehensive description of this particular artifact has been provided in detail in the preceding section 
titled "Initial Artifact - Description".  

Link to [Initial Artifact - Description](#initial-artifact-description)

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

### Enhancement Three Video

[![Enhancement Three Video](https://img.youtube.com/vi/LhghKqOzzrc/0.jpg)](https://www.youtube.com/watch?v=LhghKqOzzrc)

### Enhancement Three Project Files

Link to project files

[Back to Table of Contents](#table-of-contents)










## Contact Information <a name="contact-information"></a>

My contact information goes here.

[Back to Table of Contents](#table-of-contents)