# SetFileSeperate
Motivation: To train machine learning models, especially neural networks, it is important to seperate train and test file.  
This small program enables you to seperate the original set file (in which you write your file directories line by line) to   
train file and test file.  
# What is a set file
End with '.set', set file is just a test file which can be generated through the following CMD commond:  
  
del dir.set  
dir .\*.jpg /s/b > dir.set  
  
In these two lines I use .jpg file as examples, you can also change it to other file types.  
# Functions
This program obtains orginal set file and randomly seperate it into train_val or test set file line by line. 
# Input Parameters	
Note that you need to manually create all directories, this is not included in the program.  
argv[0]: *.exe  
argv[1]: your directory + *.set  //original set file location  
argv[2]: your directory + *.set	 //train set file location  
argv[3]: your directory + *.set  //test set file location  
