void entrypoint_201_51() {
	start()
	switch (temp_flags[0 /* 0x1 01 */]) {
	  case 0:
		printf("")
	  case 1:
		printf("")
	}
}

void entrypoint_201_17() {
	start()
	printf("You have acquired a new item.\nAnalysis of this object's insect-like\nprofile and wings indicates ######it can #####fly#####.\n\nTilt the Wii Remote to #####remotely##### #####pilot\n#####the device. The sharp structure on the\nfront of the device can sever threads\nand deliver a blow to smaller objects.\nTo launch the device, press ##### to\nready it for takeoff then press ###############.")
}

void entrypoint_201_52() {
	start()
	printf("")
}

void entrypoint_201_18() {
	start()
	scene_flags[11 'Faron: Skyview Temple'][21 /* 0x3 20 */] = true;
	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
	  case 0:
		printf("My readings indicate the presence\nof #####sacred water #####within the temple.\nUnfortunately, it is##### not possible to\nuse your ######dowsing##### ability here.\nBased on my calculations, I estimate\nthe water is located in the deepest\npart of the temple complex.")
		scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 205), ('param3', 30)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 206), ('param3', 6)])
		scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = true;
		printf("I recommend using the ##### on your\nmap as a guide when revisiting the\ndeepest area of the temple.")
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 78), ('param3', 34)])
		printf("I am detecting a greater enemy\npresence in the vicinity than I\npreviously observed. You would be\nwise to proceed with caution.")
	  case 1:
		printf("I am detecting a greater enemy\npresence in the vicinity than I\npreviously observed. You would be\nwise to proceed with caution.")
	}
}

void entrypoint_201_01() {
	start()
	printf("Gaze upon your map until your\neye finds the #####, for it is there\nthat you must strike a glittering\ngemstone to reveal a path.\nYou shall find a temple map in\na room with two such gemstones.")
}

void entrypoint_201_53() {
	start()
	printf("######Master, as I just translated, it would\nappear that #####Zelda##### purified herself in\nthe waters of this spring.\n\nI calculate a 97% chance that she has\nalready set out for #####Eldin#####, where\nanother great spring exists.\n\nHowever, it is not clear what method of\ntravel Zelda used to move from here\nto her next destination.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 86), ('param3', 39)])
	printf("My analysis suggests you should take\nthe tablet to the altar in Skyloft.\n\n\nDoing so will likely open a new ###########column\nof light #####on the surface, allowing you to\ndescend to another area and continue\nyour search for Zelda.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 9), ('param3', 39)])
	switch (story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */]) {
	  case 0:
		printf("Let's return to the sky once more\nbefore continuing our search. The #####bird\nstatue##### outside can take us back up.")
		flw_79:
		loadzone_temp_flags[3 /* 0x9 08 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 81), ('param3', 36)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', -1), ('param3', 6)])
	  case 1:
		printf("The bird statue that transports you\nback to the sky should be in the forest\nyou previously passed through.")
		goto flw_79
	}
}

void entrypoint_201_19() {
	start()
	printf("I detect #####sacred water##### nearby. There\nare no monster auras causing\ninterference, so you can #####dowse #####here.")
}

void entrypoint_201_02() {
	start()
	printf("He who descended from the sky:\nlend your ear to the wise voice\nof the servant who brought you\nto the firm soil.")
}

void entrypoint_201_54() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 47), ('param2', 0), ('next', 167), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 330), ('param2', 0), ('next', 168), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 3), ('next', 169), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 26), ('param3', 39)])
	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
	  case 0:
		printf("There is a 95% probability that the\nwater here is identical to the water\nwithin the Water Dragon's basin.\nI suggest we take it back to her.")
		loadzone_temp_flags[3 /* 0x9 08 */] = true;
		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 84), ('param3', 36)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 170), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', -1), ('param3', 6)])
	  case 1:
		printf("My analysis of the water here reveals\nan extraordinarily high concentration\nof energy.\n\nThere is a strong likelihood that this\nenergy will be amplified upon contact\nwith an object of conforming\nwavelength.")
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
	}
}

void entrypoint_201_03() {
	start()
	printf("Two doors lead to rooms left and\nright, but they will only open\nwhen the gemstones are struck.\nOne is above, one below.")
}

void entrypoint_201_55() {
	start()
	printf("Well...##### You put up more of a fight than\nI would have thought possible out of\nsuch a soft boy.\n\nBut don't clap for yourself quite yet.\n#####That sword of yours is the only reason\nyou still live.")
}

void entrypoint_201_20() {
	start()
	printf("######Master ####, it is likely\nthat I am the servant this tablet is\nreferring to.\n\nTo help you###### with your mission, the\ngoddess gave me a massive quantity\nof knowledge about this land.\n\nShould you find yourself in need of\nanswers, I hope you won't hesitate to\ncall on me by pressing #####.\n#####\nIf you #####target #####an object with ##### and\nthen #####press ##########, I will tell you all the\ninformation I know about it.##########")
	scene_flags[11 'Faron: Skyview Temple'][68 /* 0x9 10 */] = true;
}

void entrypoint_201_04() {
	start()
	printf("")
}

void entrypoint_201_56() {
	start()
	printf("I fear I spent far too long teasing and\ntoying with you.\n\n\nThe girl's presence has all but faded\nfrom this place, which means there's\nno reason to linger here.\n\nGood-bye, sky child. Run and play this\ntime. Get in my way again, though,\nand you're dead.")
	story_flags[83 /* us: 805A9AE9 0x80, jp: 805ACD69 0x80 */] = true;
}

void entrypoint_201_21() {
	start()
	printf("The sentries you see here are born of\nevil magic. They have a tendency to fix\ntheir gaze on any pointed object that\nmoves within their view. ")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 217), ('param3', 39)])
	printf("This set of sentries is bound together.\nThis allows them to resist being rotated\nindependently of one another.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 219), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_201_91() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 196), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 197), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 99), ('next', 198), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 194), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 212), ('param3', 39)])
	scene_flags[11 'Faron: Skyview Temple'][31 /* 0x2 80 */] = true;
	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 255), ('param3', 33)])
	switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 201), ('param2', 96), ('next', -1), ('param3', 7)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4115), ('param2', 4100), ('next', 46), ('param3', 13)])
		printf("Just fantastic. I work like a weasel\njust to swipe a key from that monster,\nand then I hafta go and lose it.")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 4103), ('next', 43), ('param3', 13)])
		printf("I just can't remember which hole\nI hid it in.")
		switch (scene_flags[15 /* 0x0 80 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 201), ('param2', 96), ('next', -1), ('param3', 7)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', 2057), ('next', 45), ('param3', 13)])
			printf("Eh, what do I need a key for, anyway?\nI can buy a trunk full of those things\nonce I find the treasure I'm after!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		}
	}
}

void entrypoint_201_57() {
	start()
	printf("####K#Hah, quite the sword you have here.#####\nBut so long as #####you telegraph your\nattacks #####like the novice you are,\nyou'll never land a blow.")
}

void entrypoint_201_22() {
	start()
	printf("######Master, I detect targetable objects in\nyour immediate vicinity.\n\n\nIf you press ##### while #####targeting##### a\nperson or object with #####, I will provide\nyou with information on that subject.##########")
	scene_flags[11 'Faron: Skyview Temple'][113 /* 0xF 02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 224), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 225), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 226), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 227), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_201_92() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 154), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 155), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 100), ('next', 161), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', -1), ('next', 57), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3342), ('next', 55), ('param3', 13)])
	printf("Hold it... You're that guy. That guy\nI met in the volcano!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 2065), ('next', 52), ('param3', 13)])
	printf("Here to do some treasure hunting too?\n#####Yep!#####Nope.")
	switch (choice(2, 0)) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3346), ('next', 60), ('param3', 13)])
		printf("I called it! You got treasure hunter\nwritten all over your face.")
		flw_61:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2059), ('next', 62), ('param3', 13)])
		printf("Did the big stone guy out there tip ya\noff to the loot too?\n#####Stone guy?#####Tip?")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 2050), ('next', 96), ('param3', 13)])
		printf("Yeah, what'd he say again?\n############Strum a chord #####most beautiful\nin the place within the temple\nwhere the butterflies dance.\"")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4116), ('param2', 2057), ('next', 98), ('param3', 13)])
		printf("So I get here, and I let loose with\nsome of the most gorgeous humming\nI've done in my entire life, and\nnothing happens!")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2050), ('next', 100), ('param3', 13)])
		printf("But seeing how I've come this far,\nthere's no chance I'm gonna give\nup the hunt for treasure just yet!")
		story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4116), ('param2', 4617), ('next', 54), ('param3', 13)])
		printf("You're a terrible liar, guy. Ya got\ntreasure hunter written all over\nyour face.")
		goto flw_61
	}
}

void entrypoint_201_23() {
	start()
	printf("######Master ####, the water\nin this room is...##########ordinary water#####.\n\n\nThe #####sacred water #####that the Water\nDragon seeks is likely located in \nthe deepest part of the temple.")
}

void entrypoint_201_93() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 200), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 201), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 99), ('next', 202), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 160), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 213), ('param3', 39)])
	loadzone_temp_flags[56 /* 0xE 01 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 69), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4115), ('param2', 4364), ('next', 67), ('param3', 13)])
	printf("Sheesh. I dig some serious miles to\nget my paws on treasure, and I've\nfound squat. Talk about bad luck!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4116), ('param2', 4112), ('next', 64), ('param3', 13)])
	printf("I think some no-good thief beat me\nto the goods. There's nuttin' here\nbut #####water #####now.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 4615), ('next', 66), ('param3', 13)])
	printf("Who in the stinkin' world would\ncome all this way for water?\nNobody, that's who.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', 2061), ('next', 71), ('param3', 13)])
	printf("I'm cuttin' my losses and headin' home.\nSee ya!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_201_94() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 138), ('param3', 46)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 141), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 143), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 139), ('param3', 49)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 137), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 105), ('param3', 49)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4096), ('param2', 1), ('next', 113), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 136), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 16), ('next', 106), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 107), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 108), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 356), ('next', 109), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 100), ('next', 111), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 110), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 104), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 100), ('next', 112), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 16), ('next', 103), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 102), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 201), ('param2', 92), ('next', -1), ('param3', 7)])
}

void entrypoint_201_95() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 148), ('param3', 46)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 151), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 17), ('next', 149), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 17), ('next', 147), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 145), ('param3', 49)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 146), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 17), ('next', 144), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 162), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', -1), ('next', 115), ('param3', 16)])
	switch (scene_flags[58 /* 0x6 04 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4369), ('param2', 3346), ('next', 117), ('param3', 13)])
		printf("Whoa there, buddy. I bet you think\nyou're going to run ahead and swipe\nall the best treasure for yourself.")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4373), ('param2', 3345), ('next', 119), ('param3', 13)])
		printf("But I say you're setting yourself\nup for big-time disappointment.#####\n\n\nJust 'cause some weird design popped\nup on the wall doesn't mean you're any\ncloser to finding treasure, all right?")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4372), ('param2', 2057), ('next', 121), ('param3', 13)])
		printf("I think you've been had by that\nboulder with legs!")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4361), ('param2', 2050), ('next', 123), ('param3', 13)])
		printf("Stay here if ya want. I'm going on\nahead!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4369), ('param2', 3329), ('next', 126), ('param3', 13)])
		printf("Hold it... You're that guy. That guy\nI met in the volcano!")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4373), ('param2', 3345), ('next', 125), ('param3', 13)])
		printf("Here to do some treasure hunting too?\n#####Yep!#####Nope.")
		switch (choice(2, 0)) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4369), ('param2', 3346), ('next', 133), ('param3', 13)])
			printf("I called it! You got treasure hunter\nwritten all over your face.")
			flw_152:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4361), ('param2', 2062), ('next', 153), ('param3', 13)])
			printf("Did the big stone guy out there tip ya\noff to the loot too?\n#####Stone guy?#####Tip?")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4369), ('param2', 3339), ('next', 135), ('param3', 13)])
			printf("No one's beatin' me to all the sweet\nloot piled up in this place!")
			story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4372), ('param2', 4617), ('next', 130), ('param3', 13)])
			printf("You're a terrible liar, guy. Ya got\ntreasure hunter written all over\nyour face.")
			goto flw_152
		}
	}
}

void entrypoint_201_96() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 261), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 99), ('next', 173), ('param3', 16)])
	switch (scene_flags[15 /* 0x0 80 */]) {
	  case 0:
		switch (scene_flags[69 /* 0x9 20 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3345), ('next', 177), ('param3', 13)])
			printf("What?! Ya found my key and then\nused it already?")
			flw_182:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4116), ('param2', 4617), ('next', 178), ('param3', 13)])
			printf("Hmm. I was just thinkin', what use do\nus Mogmas have for keys? We can dig\nour way in and out of anything!")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2050), ('next', 179), ('param3', 13)])
			printf("Well, good to know where that key\nwent. I gotta get back to hunting for\ntreasure. Here's hoping we both\nstrike it rich in here! See ya!")
			scene_flags[11 'Faron: Skyview Temple'][55 /* 0x7 80 */] = true;
			flw_256:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3346), ('next', 176), ('param3', 13)])
			printf("Say, that's my missing key! You found\nit and brought it back to me!")
			goto flw_182
		}
	  case 1:
		switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4115), ('param2', 4100), ('next', 251), ('param3', 13)])
			printf("Huh? I can't find it anywhere...")
			story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = false;
			flw_189:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2050), ('next', 188), ('param3', 13)])
			printf("It's the darnedest thing. I buried a key\naround here, but I can't recall where\nexactly I put it.")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 3345), ('next', 190), ('param3', 13)])
			printf("Now where could I have hidden that\nkey? I guess it might not be this room\nafter all. You don't happen to have a\nmap on you, do you, pal?")
			goto flw_256
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4113), ('param2', 3329), ('next', 250), ('param3', 13)])
			printf("Hey. What do you want?\n#####Key?#####Treasure?#####Never mind.")
			switch (choice(3, 1)) {
			  case 0:
				goto flw_189
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4105), ('param2', 2050), ('next', 184), ('param3', 13)])
				printf("You know that big guy? The one who\nlooks like a boulder with legs?\nCraaazy eyebrows too.\n\nSo anyway, he told me about this\n#####golden sculpture #####that opens a\ndoor to some fancy place here.")
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 3332), ('next', 186), ('param3', 13)])
				printf("Heyyy, what's with the grin? Ya know\nsomething, don'tcha? Come on.\nSpit it out, kid.")
				goto flw_256
			  case 2:
			}
		}
	}
}

void entrypoint_201_97() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 242), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 243), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 99), ('next', 244), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 240), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 245), ('param3', 39)])
	loadzone_temp_flags[55 /* 0xF 80 */] = true;
	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
	story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 237), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4115), ('param2', 4100), ('next', 235), ('param3', 13)])
	printf("Just fantastic. I work like a weasel\njust to swipe a key from that monster,\nand then I hafta go and lose it.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 4103), ('next', 232), ('param3', 13)])
	printf("I just can't remember which hole\nI hid it in.")
	switch (scene_flags[15 /* 0x0 80 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 201), ('param2', 96), ('next', -1), ('param3', 7)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', 2057), ('next', 234), ('param3', 13)])
		printf("Aww...and here I thought that key\nwould be my ticket to a life of luxury.#####\nI could have sworn I #####buried it right\naround here#####...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
	}
}

void entrypoint_201_11() {
	start()
	printf("I detect Zelda's aura! There is a high\nprobability that she is beyond this\nlarge door.")
	scene_flags[11 'Faron: Skyview Temple'][32 /* 0x5 01 */] = true;
}

void entrypoint_201_12() {
	start()
	printf("")
}

void entrypoint_201_99() {
	start()
	switch (temp_flags[63 /* 0x6 80 */]) {
	  case 0:
		scene_flags[11 'Faron: Skyview Temple'][16 /* 0x3 01 */] = true;
	  case 1:
	}
}

void entrypoint_201_13() {
	start()
	printf("The mechanism controlling the lock on\nthis door appears to have been\ndeactivated.")
	scene_flags[11 'Faron: Skyview Temple'][34 /* 0x5 04 */] = true;
}

void entrypoint_201_14() {
	start()
	printf("######Master, I have bad news. The auras of\nmany creatures reverberate\nthroughout this temple.\n\nAs a result, I can't isolate Zelda's aura#####.\n#####You will #####not be able to track her##### here.\n\n\n######Given the situation, I suggest you\n#####look around #####to see where we should\nmove next.")
	temp_flags[50 /* 0x7 04 */] = true;
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_201_15() {
	start()
	printf("######Master ####, I have\ninformation concerning the\nmechanisms that open the doors.\n\nGiven their function, logic dictates\nthat the mechanisms are positioned\nnear the doors that they open.\n\nThere is an 80% probability you will\nlocate these mechanisms if you\nthoroughly explore and #####look around\n#####in every direction.")
}

void entrypoint_201_16() {
	start()
	printf("It appears one of Ghirahim's \nunderlings has reengaged the lock\nhere. You will need to search the\narea for the key once again.")
	scene_flags[11 'Faron: Skyview Temple'][20 /* 0x3 10 */] = true;
}

