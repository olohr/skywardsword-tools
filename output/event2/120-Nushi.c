void entrypoint_120_20() {
	start()
	printf("I'm unloading this cargo of pumpkin\nsoup here.\n\n\nYou've picked an odd place for\nsoup delivery. Feels dangerous.\nSomething could jump out at us at any\nmoment, hungry for soup...or robot.")
}

void entrypoint_120_21() {
	start()
	printf("I'm out of here! See you around, zzzrt!####(#")
	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
}

void entrypoint_120_01() {
	start()
	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
	  case 0:
		printf("Ho hoho! So you now hold the\nTriforce, do you? Astonishing!")
		flw_35:
		printf("You know what you must do. Go, and\ndo not stray from the path you know\nyou must walk.")
		flw_36:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
		  case 0:
			printf("Ho ho! Astonishing. I see you've finally\nfound the location of the Triforce!")
			goto flw_35
		  case 1:
			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
			  case 0:
				printf("Surely you understand what you need\nto do now. The song opens a doorway\nto a trial. The entrance to it is hidden\nsomewhere #####in the sky#####.\nIf you persevere through this trial, the\npath to the #####Triforce #####will be revealed\nto you, my boy.")
				goto flw_36
			  case 1:
				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
				  case 0:
					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
					  case 0:
						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 13), ('param3', 6)])
							changeScene(5, 0) // 
						  case 1:
							flw_8:
							printf("Ho-hohoho! How goes your quest, boy?\n\n\n\nYou must learn the three parts of the\nthe Song of the Hero known to the\ndragons and then return to me\nonce more!\nThe dragons reside in Faron Woods,\nEldin Volcano, and Lanayru Desert.\nGo and find those dragons!")
						}
					  case 1:
						goto flw_8
					}
				  case 1:
					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
					  case 0:
						printf("Gather the parts of the Song of the\nHero from the three dragons\nand then return to me.\n\nThen I shall complete the tune with\nmy own performance!\n\n\n#####It's been quite a while since I last sang.\nAhem-hem... I do believe some vocal\nexercises are in order...#####")
					  case 1:
						printf("Tell me, boy, was it you who brought\nme this most delectable cauldron\nof pumpkin soup?\n\nI must apologize for my earlier\nbehavior. A most peculiar and irksome\npest possessed me. I was not myself.\n\nBut that business is done with now!\nThe delicious aroma of that soup\nhas restored me to my senses.")
						printf("I am the great spirit they call Levias.\nBefore she passed from this world so\nlong ago, the goddess, Hylia, appointed\nme as warden of the skies.\nAnd what do they call you, boy?#####\nAh, ####, is it? A rather\npleasing name, that. Your parents\nclearly have excellent taste in names!\n#####Hmm... #####You carry a curious sword,\nboy. #####And I sense a silent power dwelling\nsomewhere in that little frame.\n\nAh, I see it now. ########, you\nare the goddess's chosen hero.\nHow interesting...\n\nI assume you've come to hear what\nI know of the #####Triforce#####.\n#####Right.#####You know?")
						switch (choice(2, 0)) {
						  case 0:
							flw_4:
							printf("As I suspected...##### Listen closely, and\nI will tell you.\n\n\nAs you likely know, long ago, an evil\nforce attempted to take the Triforce\nfor his own.\n\nThe goddess did everything in her\npower to prevent it from falling\ninto his hands.\n\nFor the safety of all things, she hid\nthe Triforce somewhere within the\nrock you call Skyloft. However, its\nlocation has been kept secret. \nEven I do not know where it rests now.\nOh, but the goddess did entrust me\nwith a hint as to the Triforce's location.\n\nThe clue is a song, meant to be played\non the harp you hold. It is known as the\n#####Song of the Hero#####.")
							printf("The song is the #####key #####to revealing the\nsecret location of the Triforce.")
							printf("The goddess split this song into four\nparts. She entrusted one part to me\nand the other three to the dragons\nof the land.\nYou must gather each of the #####################parts\nof the Song of the Hero#####. Seek out\nthe dragons, and convince them to \nteach you their parts.\nWhen they've taught you what they\nknow, come to me and I will complete\nthe song with my own voice!\n\nThe dragons can be found at Faron\nWoods, Eldin Volcano, and Lanayru\nDesert. Go on, then. Find the dragons\nyou now seek!")
							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
						  case 1:
							printf("Do I know? You do realize you are \nspeaking to the great sky spirit,\ndo you not? #####Bahhh. No matter.")
							goto flw_4
						}
					}
				}
			}
		}
	}
}

void entrypoint_120_02() {
	start()
	switch (scene_flags[36 /* 0x5 10 */]) {
	  case 0:
		scene_flags[21 'The Sky'][37 /* 0x5 20 */] = true;
	  case 1:
		scene_flags[21 'The Sky'][36 /* 0x5 10 */] = true;
	}
}

