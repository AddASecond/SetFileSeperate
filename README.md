# SetFileSeperate
This program obtains orginal set file and randomly seperate it into train_val or test set file line by line. 
# Parameters	
if (argc != 4) {  
		std::cerr << "This program obtains orginal set file and randomly seperate it into train_val or test set file line by line. \n" 
			<< "Usage: " << argv[0] 
			<< " \"Path of original set file\" " 
			<< " \"Path of train_val set file\"" 
			<< " \"Path of test set file\"" << std::endl; 
		system("pause"); 
		return 1; 
	} 
