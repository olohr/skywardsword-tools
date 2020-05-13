void entrypoint_117_40() {
	start()
	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
	  case 0:
		switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
		  case 0:
			printf("######Oh no. You've done it now!\nThere's no escaping this one!")
		  case 1:
			flw_493:
			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
			  case 0:
				switch (scene_flags[69 /* 0x9 20 */]) {
				  case 0:
					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
					  case 0:
						printf("######I hear this chandelier is here 'cause of\nall your hard work.\n\n\n######You aren't just doing it to try and\nimpress Kina, are you?")
					  case 1:
						flw_617:
						switch (scene_flags[5 /* 0x1 20 */]) {
						  case 0:
							printf("######So all that talk about monsters and\ndemons was just superstition, right?!\n\n\n######That old guy was just talking nonsense!")
						  case 1:
							flw_41:
							printf("######Listen to this!\n\n\n\nThe old guy over there says he saw a\ndemon!\n\n\n####\n#He's obviously trying to get Kina's\nattention, but he won't get anywhere\nusing creepy lines like that!")
						}
					}
				  case 1:
					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
					goto flw_617
				}
			  case 1:
				switch (scene_flags[5 /* 0x1 20 */]) {
				  case 0:
					printf("######Don't tell me you believe in\nsuperstitious hogwash like\ndemons now, do you?\n\n####\n#Hold on! Are you trying to get Kina\nto look your way too?!")
				  case 1:
					goto flw_41
				}
			}
		}
	  case 1:
		goto flw_493
	}
}

void entrypoint_117_23() {
	start()
	printf("######I am so grateful that you brought \nthis lovely guy to help me!\n\n\nI'm going to ask him to help with all\nkinds of things! ######Thank##### you##### very,##### very,#####\nvery #####much!")
	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
	temp_flags[17 /* 0x3 02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
}

void entrypoint_117_41() {
	start()
	printf("######Hooo yeah! I'm gonna show you how\nit's done!")
}

void entrypoint_117_24() {
	start()
	switch (scene_flags[22 /* 0x3 40 */]) {
	  case 0:
		printf("######So what will it be?\n#####Harp.#####Soup.#####Nothing.")
		flw_312:
		switch (choice(3)) {
		  case 0:
			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
			  case 0:
				printf("######Great! You can entertain my customers\nand put a smile on Kina's face!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 117), ('param2', 32), ('next', -1), ('param3', 7)])
			  case 1:
				printf("######Oh, sorry, but Kina only does \nperformances at night.\n\n\nCome on back at night, OK?")
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 316), ('param3', 12)])
			printf("######I'm impressed that a young man like\nyourself can appreciate the refined\ntaste!\n\nJust #####10 Rupees #####a bottle. Interested?\n#####Fill 'er up!#####No, thanks.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 126)])) {
			  case 0:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 10), ('param3', 10), ('param4', 2), ('param5', 128)])) {
				  case 0:
					switch (adventure_pouch_has(1 0x0001)) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 322), ('param3', 42)])
						give_item(195 0xC3);
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -10), ('next', 552), ('param3', 8)])
						printf("The soup is meant to be enjoyed hot!\nJust so you know, it'll be cold in just\nfive minutes.")
					  case 1:
						printf("######You don't have an #####?!\n\n\n\nIt's mighty hard to drink soup when\nyou've got nothing to drink from!\nCome see me again when you've found\nan #####!")
					}
				  case 1:
					printf("######Looks like you don't have enough\nmoney. Maybe next time, then?")
				}
			  case 1:
				printf("######Come on! Make your mind up,\nwill you?!")
			}
		  case 2:
			printf("######I get it. Well, even if there's nothing in\nparticular you need, I hope you'll take\nsome time to sit back and relax!\n\n######Oh, and don't forget to stop and\nsay hello to Kina now, you hear?")
		}
	  case 1:
		printf("######Hey, ####! What do you \nthink of this new chandelier?\n\n\n######Let me tell you, this beauty set me back\nquite a bit!")
		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
		printf("######You...think I spent too much on it?!\n\n\n\n######Don't be a wet blanket! It's thanks to\nyour hard work that I was able to buy\nsuch a stunner of a chandelier!\n######So don't break it!")
		printf("######Anyway, what can I do for you? If it's\nwork you're after, I'm sure I can find\nsomething for you to do. Just for\nold times' sake!\n######And, of course, I'll pay you for it this\ntime. Want to make some money\nplaying your harp for us? Or maybe\nyou just want some soup?\n#####Play harp.#####Soup.#####I'm busy.")
		goto flw_312
	}
}

void entrypoint_117_42() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 27), ('next', 142), ('param3', 32)])
	printf("######Hey, so I guess he's going to be helping\nwith the pumpkin patch!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 122), ('param3', 16)])
	printf("######Seriously! I could plow the patch\nmuch faster than that mole guy out\nthere!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 27), ('next', 177), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 22), ('param2', 2048), ('next', 123), ('param3', 13)])
	printf("######What? Seriously? I'm so happy!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 129), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 124), ('param3', 16)])
	printf("######Hahaha! For Kina, I'd do anything!\nWhether that's on a pumpkin patch\nor inside a burning house!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 27), ('next', 179), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 2048), ('next', 125), ('param3', 13)])
	printf("######Hehe! Well then I look forward to\ngetting your help out there!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 143), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 144), ('param3', 16)])
	printf("You're all so sweet!######")
}

void entrypoint_117_08() {
	start()
	printf("######Yay! You found someone, didn't you?!")
	printf("######Wait a second... This isn't a person...\n\n\n\n######Ah, so you're saying that this mole\nis going to plow the patch for me?")
}

void entrypoint_117_25() {
	start()
	flw_34:
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 15), ('param4', 3), ('param5', 20)])) {
	  case 0:
		switch (scene_flags[6 /* 0x1 40 */]) {
		  case 0:
			switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
			  case 0:
				printf("######Great! Glad to have you. I know you're\nthe guy for the job!\n#####Let's do it!#####Never mind.")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 94)])) {
				  case 0:
					printf("######I knew you wouldn't let me down!######")
					flw_87:
					printf("######The trick to carrying several pumpkins\nat once is #####to walk slowly#####!\n\n\nIf they start to lean right, move right. \nIf they start to lean left, move left. \nTake your time, and keep your balance!\n\n######But if you panic and start to rush,\nwell, you're going to drop them.\n#####So... Good luck!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
				  case 1:
					flw_397:
					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
					  case 0:
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 224)])) {
						  case 0:
							printf("######Really?! I thought for sure you'd be\nwilling to lend a hand.")
						  case 1:
							printf("######Ugh... Are you always this boring?")
						}
					  case 1:
						printf("######Really?! I'm telling Father about this!")
					}
				}
			  case 1:
				switch (temp_flags[16 /* 0x3 01 */]) {
				  case 0:
					printf("######I hope I can count on you when it comes\ntime to harvest the pumpkins again.\n#####You##### strong##### knight, you!")
				  case 1:
					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
					  case 0:
						printf("######Oh! Perfect timing! How do you\nfeel about breaking a sweat with some\nhonest work?\n\n######Think you can help carry pumpkins\nto the storage shed? I'll pay you.\n#####Sure!#####No, thanks.")
						flw_3:
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
						  case 0:
							printf("######OK, then! I'll show you where you\nneed to carry the pumpkins!")
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 86), ('param3', 39)])
							printf("See that storage shed up ahead?\nCarry the pumpkins there.")
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 87), ('param3', 39)])
							goto flw_87
						  case 1:
							goto flw_397
						}
					  case 1:
						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
						  case 0:
							printf("######Now that the pumpkins have been\nharvested, the field needs to be plowed\nbefore we can plant new seeds!\n\nIf I could only find someone who\nwas good at plowing...")
							printf("######I've got a favor to ask of you. See,\nthere were some pumpkins that I\nwasn't able to pick, but...\n\n######Do you think you can help me get those\nin the storage shed? Don't worry--I'll\npay you for your efforts this time.\n#####Sure!#####No way.")
							goto flw_3
						  case 1:
							printf("######Oh? So you're willing to help us pick\npumpkins, are you?\n\n\n#####I'm in!#####Nah...")
							goto flw_3
						}
					}
				}
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 91), ('param3', 31)])
			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
			printf("######Oh...and your next job has been\ndecided! Looks like you'll be #####helping\nwith the pumpkin harvest#####!\n\n######What a relief! Do you have any idea\nhow heavy those pumpkins are?\n\n\n######Oh yeah? You think this is going to be\na piece of pumpkin cake, do you?\n\n\n######Heh heh... Let's make this interesting.\nHow about you #####carry five pumpkins #####at\nonce?\n\n######You better take it slow, or you'll\nrisk dropping them. Just get out there\nand haul those pumpkins!\n#####Let's do it!#####I'm busy.")
			goto flw_3
		}
	  case 1:
		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 390), ('param3', 12)])
			printf("######I knew you would come through for me!\nSomehow you carried them all.\nYou're the one I can trust to get the\njob done!\n######Here's 50 Rupees for your hard work.")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 497), ('param3', 8)])
			printf("######Thank##### you##### very##### much! I hope you'll\nstop in again soon.")
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 498), ('param3', 12)])
			flw_498:
			temp_flags[16 /* 0x3 01 */] = true;
			loadzone_temp_flags[2 /* 0x9 04 */] = false;
		  case 1:
			printf("######I just knew you would come through.\nYou managed to carry them all!\n\n\n######I guess that means you're done carrying\npumpkins!\n\n\n######Thank##### you##### very##### much#####!")
			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
			goto flw_498
		}
	  case 2:
		printf("######Awww, you dropped them! You can't\nbe careless like that...\n\n\n######If you want to try again, come on\nover here.")
		loadzone_temp_flags[2 /* 0x9 04 */] = true;
	}
}

void entrypoint_117_43() {
	start()
	printf("######Hah... Nothing better than a dirty\nday's work to make a guy feel alive!\n\n\n######Especially when I see that girl. Makes\nall the tiredness just melt away!\n\n\n######Say####\n.####\n.####\n.####\nhave you seen the way she's\nbeen eyeing me?\n\n\n######I think maybe that girl's fallen for me!\n\n\n\n######Lemme tell you, it makes me want to \nwork even harder tomorrow!")
}

void entrypoint_117_09() {
	start()
	printf("#####\nC'mon! Are you seriously trying to get\nme to work on a field all day?!\n\n\nIs that why you hauled me all the way\nup here into the sky?")
}

void entrypoint_117_26() {
	start()
	flw_73:
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 46)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 74), ('param3', 12)])
		printf("######I'm impressed that a young man like\nyourself can appreciate the refined\ntaste!\n\nJust #####10 Rupees #####a bottle. Interested?\n#####Fill 'er up!#####No, thanks.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 74)])) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 10), ('param3', 10), ('param4', 2), ('param5', 76)])) {
			  case 0:
				switch (adventure_pouch_has(1 0x0001)) {
				  case 0:
					printf("It's about time! Take this!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 117), ('param3', 42)])
					give_item(195 0xC3);
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -10), ('next', 551), ('param3', 8)])
					printf("The soup is meant to be enjoyed hot!\nJust so you know, it'll be cold in just\nfive minutes.")
				  case 1:
					printf("######You don't have an #####?!\n\n\n\nIt's mighty hard to drink soup when\nyou've got nothing to drink from!\nCome see me again when you've found\nan #####!")
				}
			  case 1:
				printf("######Looks like you don't have enough\nmoney. Maybe next time, then?")
			}
		  case 1:
			flw_434:
			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
			  case 0:
				flw_437:
				printf("######I get it. Sure. This place is good for\nmore than just drinking soup. You can\nalso meet some colorful folks here.\nMake yourself at home!\nBut don't break anything or make a\nmess of my pub.\n\n\n######Especially my special-ordered,\ncustom-made chandelier hanging from\nthe ceiling!\n\n######I don't want to see you shaking it!\nDon't even look at it sideways.\nAm I clear?")
			  case 1:
				switch (scene_flags[26 /* 0x2 04 */]) {
				  case 0:
					printf("######I see. Well, I guess you'll just have to\nwork off the cost of that chandelier.\n\n\n######Give me some time and come back\nand see me. Got that?")
				  case 1:
					switch (scene_flags[25 /* 0x2 02 */]) {
					  case 0:
						printf("######I see. Well, I guess you'll just have to\nwork off the cost of that chandelier.\n\n\n######Give me some time and come back\nand see me. Got that?")
					  case 1:
						goto flw_437
					}
				}
			}
		}
	  case 1:
		goto flw_434
	}
}

void entrypoint_117_44() {
	start()
	switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
	  case 0:
		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
		  case 0:
			switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
			  case 0:
				printf("######Is there really someone who would\nhelp me out?\n\n\n######Well, I'll try to keep my hopes up and\njust wait here patiently until they\nshow up.")
			  case 1:
				printf("######Now that the pumpkins have been\nharvested, the field needs to be plowed\nbefore we can plant new seeds!\n\nIf I could only find someone who\nwas good at plowing...")
			}
		  case 1:
			printf("######Are you looking to help out with \npumpkin picking?\n\n\n######It's kind of late to be harvesting now...\nHow about you come back tomorrow\nmorning? Me and the patch will\nbe waiting!")
		}
	  case 1:
		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
		  case 0:
			printf("######Oh! It's the knight who broke the\nchandelier! Still working it off, huh?\n\n\n######Oh, hey...#####Father said he had some\nmore work for you.\n\n\n######You better go talk to him and find out\nwhat he has in mind.")
		  case 1:
			printf("######Oh, look! It's the brave knight who\nslayed the chandelier! Still working it\noff, eh?")
		}
	}
}

void entrypoint_117_27() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 30), ('param2', 0), ('next', 450), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 26), ('next', 452), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 282), ('next', 453), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 26), ('next', 451), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', -1), ('next', 473), ('param3', 16)])
	switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
	  case 0:
		printf("######Don't just sit there! I suggest you get\na move on and find my father, or else!\n\n\n######You're going to be in big trouble!")
		flw_454:
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 282), ('next', 539), ('param3', 14)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 455), ('param3', 40)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 26), ('next', -1), ('param3', 15)])
	  case 1:
		printf("######Welcome! This is the #####Lumpy Pumpkin#####,\nhome of the finest pumpkin\nsoup in the big, wide sky!\n\n######There isn't much to do here but take\na load off, relax, and enjoy yourself!")
		goto flw_454
	}
}

void entrypoint_117_10() {
	start()
	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 117), ('param2', 11), ('next', -1), ('param3', 7)])
	  case 1:
		flw_520:
		scene_flags[21 'The Sky'][33 /* 0x5 02 */] = true;
		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
		  case 0:
			switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 117), ('param2', 24), ('next', -1), ('param3', 7)])
			  case 1:
				switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
				  case 0:
					printf("######I think you've done enough work to\nmake up for breaking my chandelier.\nYou're off the hook, kid. I'd even say\nyou did a good job!\nI thought you might give up partway\nthrough, but you stuck it out.\n\n\n######I hope you'll come back and see \nus again, but as a customer next time!")
				  case 1:
					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
					  case 0:
						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
						  case 0:
							switch (scene_flags[21 /* 0x3 20 */]) {
							  case 0:
								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
								  case 0:
									printf("######Hey! So you're saying that you'll \nplay one more time for Kina?\n#####I'm in!#####Explain!#####No way.")
									switch (choice(3)) {
									  case 0:
										printf("######Great! I was hoping you'd say that.")
										flw_383:
										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
										flw_546:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 293), ('param3', 39)])
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 26), ('next', 294), ('param3', 32)])
										OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 26), ('next', 295), ('param3', 15)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 26), ('next', 261), ('param3', 16)])
										printf("######All right then! Hey! Kina!")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 298), ('param3', 39)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 297), ('param3', 16)])
										printf("######Yes, Father! What is it?")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 302), ('param3', 39)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 26), ('next', 299), ('param3', 50)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 26), ('next', 262), ('param3', 17)])
										printf("######This kid is going to accompany you\nwhile you sing! Now how about letting\nyour Pops hear that beautiful voice of\nyours, eh?!")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 296), ('param3', 39)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 100), ('next', 263), ('param3', 16)])
										printf("Of course! Let's do it, kid.")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
									  case 1:
										printf("######Ugh... I'll explain one more time.")
										flw_265:
										printf("######Customers will start waving their arms\nas Kina sings her song, so you can just\nfollow them if you need a guide to the\nrhythm you should be playing.\n######Pick a customer whose movements are\neasy for you to follow, and strum with\nthem to stay on the right tempo.\n\nDon't worry about the direction of your\nstrumming. Just make sure you're not\nplaying too fast or too slow, and use\nnice, big, sweeping motions to strum!\n######When the customers stop moving,\nit's your chance to freestyle a little bit\nand play however you like!\n\nIt's all about playing to the rhythm!\nGot it?\n#####OK!#####Huh?")
										switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 114)])) {
										  case 0:
											goto flw_383
										  case 1:
											printf("What's wrong? Did you not understand \nwhat I said? Listen up!")
											goto flw_265
										}
									  case 2:
										printf("######Fair enough. Rest up and come back\nwhen you're ready to play!")
									}
								  case 1:
									printf("######Hey, it's you! #####Oh, I know that look.\nYou're fixing to play that harp of\nyours, aren't you?\n\nSorry, but we have to prepare the stage\nduring the day.\n\n\nCome back after nightfall!")
								}
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 517), ('param3', 31)])
								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
								  case 0:
									OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4096), ('next', 19), ('param3', 13)])
									printf("######Ahh! You came! Let me see... What was\nit that I wanted you to do next...?\n\n\n######Hey! What's that?! That's a strange-\nlooking instrument you have there...\n\n\n######Oh yes! You might just be surprised\nto hear that Kina is actually quite\nthe singer!\n\n######It wasn't that long ago that she would\nsing for our customers!\n\n\n######But she had to stop because her\npartner quit.\n\n\nThink you'd be willing to do a quick\nduet with Kina?\n#####Of course!#####Nah...")
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 31)])) {
									  case 0:
										printf("######Great! That's what I want to hear!\n\n\n\n######But make sure you put your heart into\nit! I won't stand for anything but\nyour best.")
										goto flw_265
									  case 1:
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 55), ('param3', 13)])
										printf("######Why do I waste my time... Don't you\nfeel even a little bad about what\nyou did?")
									}
								  case 1:
									printf("######Oh, it's you! What should I have you\nwork on next?\n\n\n######Oh yeah, you've got that interesting-\nlooking instrument...\n\n\n######I got it! I've got the perfect job for you!\n\n\n\n######But that job can only be done at night.\n\n\n\nWait until nightfall and come back \nand see me, all right?")
								}
							}
						  case 1:
							switch (scene_flags[26 /* 0x2 04 */]) {
							  case 0:
								printf("######I haven't figured out your next job yet!\nCome back later.\n\n\nOr are you interested in buying some\npumpkin soup and helping out our\nprofits a bit?\n#####In that case...#####No, thanks.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 117), ('param2', 26), ('next', -1), ('param3', 7)])
							  case 1:
								printf("######Impressive! You're done harvesting\nall those pumpkins!\n\n\n######But don't celebrate yet. You've still got\na ways to go before you've paid off that\nfancy chandelier!\n\n######Give me some time to think about what\nI need you to work on next. Just come\nback and see me.")
								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
							}
						}
					  case 1:
						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
						  case 0:
							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2321), ('next', 50), ('param3', 13)])
								printf("Go on out and talk with Kina. I need\nyou to help her with the pumpkin\nharvest!")
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1792), ('next', 195), ('param3', 13)])
								printf("Oh, but...you can only work on the\npatch during the day!\n\n\nThere's no telling what will happen\nunder the night sky!")
							  case 1:
								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
								  case 0:
									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 192), ('param3', 31)])
									OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4110), ('next', 563), ('param3', 13)])
									switch (scene_flags[25 /* 0x2 02 */]) {
									  case 0:
										printf("Oh! You're here just in time.\nJust in time for another job, that is!\n\n\nYour next job is to #####help pick the\npumpkins#####! And I don't want to hear\nany moaning or complaining.\n#####Fine...#####No way!")
										flw_47:
										switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 27)])) {
										  case 0:
											printf("######This should be an easy one for you.\nKina spends her afternoons picking\npumpkins in the patch out back.\n\nCarry those to the storage shed.\n#####Kina##### can give you the details!")
											printf("Oh, but...you can only work on the\npatch during the day!\n\n\nThere's no telling what will happen\nunder the night sky!")
											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
										  case 1:
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 48), ('param3', 13)])
											printf("######Why do I waste my time... Don't you\nfeel even a little bad about what\nyou did?")
										}
									  case 1:
										printf("Oh! Looks like you were able to deliver\nthe soup to Eagus safely!\n\n\n######I'll subtract your wages from the bill\nfor the chandelier.\n\n\n######And if you think that we're even, you\nbetter think again!\n\n\nNext, I need you to #####help harvest the\npumpkins#####! And I'm not taking no for\nan answer!\n#####Fine...#####No way!")
										goto flw_47
									}
								  case 1:
									switch (scene_flags[25 /* 0x2 02 */]) {
									  case 0:
										printf("######Huh? What's wrong? I'm still thinking\nabout what I need you to work on next!\n\n\nWhy? Because you still need to pay off\nthat fancy chandelier!\n\n\nWell, are you going to add to our\nprofits and buy some pumpkin soup?\n#####Sure.#####No, thanks.")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 117), ('param2', 26), ('next', -1), ('param3', 7)])
									  case 1:
										printf("######Ah, I see you've delivered the soup to\nEagus!\n\n\nI'll subtract your pay from the bill for\nthe chandelier...\n\n\n######But you're not done yet! I'm already\nscheming about what I need you\nto do next.\n\nI'm gonna need some time to think\nabout this, though, so come back and\nsee me later.")
										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
									}
								}
							}
						  case 1:
							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
							  case 0:
								switch (adventure_pouch_has(2 0x0002)) {
								  case 0:
									printf("######That soup will be cold in##### five minutes#####!\nNow get on your way and deliver that\nsoup to the Knight Commander!")
								  case 1:
									switch (adventure_pouch_has(3 0x0003)) {
									  case 0:
										printf("######Hey! Did you not hear a thing I said?\nYou let the soup get cold!\n\n\nI can't believe this... I'll fill it up again.")
										switch (adventure_pouch_has(1 0x0001)) {
										  case 0:
											flw_532:
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 29), ('param3', 42)])
											give_item(195 0xC3);
											printf("But you'll have to pay me for it!\nThat'll be #####10 rupees#####!")
											switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 10), ('param3', 10), ('param4', 2), ('param5', 90)])) {
											  case 0:
												OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -10), ('next', -1), ('param3', 8)])
											  case 1:
												OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 158), ('param3', 13)])
												printf("######What?! You don't have 10 Rupees?!\nWell...what can I do? You're off the\nhook...but just this once!")
											}
										  case 1:
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 46), ('param3', 13)])
											printf("Hey! You haven't got an #####!\n\n\n\nYou need an ##### if you want\nto carry soup! Go get yourself one and\ncome back here.")
										}
									  case 1:
										switch (adventure_pouch_has(1 0x0001)) {
										  case 0:
											printf("######What's that? You don't have any\n#####?\n\n\n######Don't tell me you drank it!\n\n\n\nI guess there's nothing to be done\nabout it now. Here--take some more!")
											goto flw_532
										  case 1:
											printf("######What's that? You don't have any\n#####?!\n\n\n######Don't tell me that you drank it!\nAnyhow, guess I'll just have to fill\nthat bottle up again.")
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 554), ('param3', 13)])
											printf("Hey! You haven't got an #####!\n\n\n\nYou need an ##### if you want\nto carry soup! Go get yourself one and\ncome back here.")
										}
									}
								}
							  case 1:
								switch (scene_flags[48 /* 0x7 01 */]) {
								  case 0:
									switch (adventure_pouch_has(1 0x0001)) {
									  case 0:
										printf("######Oh, I see you brought an #####\nwith you like I asked. Great!")
										flw_189:
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4100), ('next', 22), ('param3', 13)])
										printf("All right, then! Here's the\n###############!\n\n\n######Deliver that to the Knight Commander!")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 30), ('param3', 42)])
										give_item(195 0xC3);
										printf("######Listen up, kid. The Knight Commander\nhates cold soup!\n\n\nSo you're gonna take this hot soup over\nto him.\n\n\nI'd say you've got to deliver it in #####less\nthan five########## minutes #####or the soup will\nget cold!")
										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
									  case 1:
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2309), ('next', 591), ('param3', 13)])
										printf("Hey! You haven't got an #####!\n\n\n\nYou need an ##### if you want\nto carry soup! Go get yourself one and\ncome back here.")
									}
								  case 1:
									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 155), ('param3', 31)])
									switch (scene_flags[8 /* 0x0 01 */]) {
									  case 0:
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2317), ('next', 154), ('param3', 13)])
										printf("So are you ready to start paying\noff that chandelier?\n#####Yep!#####Uh...")
										flw_75:
										switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 48)])) {
										  case 0:
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4110), ('next', 76), ('param3', 13)])
											printf("That's right! And I'm going to hold\nyou to that!\n\n\n######Let's not waste any time putting you\nto work. I need you to deliver my\nfamous soup to #####Eagus#####, #####Skyloft's\nKnight Commander#####!\n######The Knight Commander is a regular\nhere. He says he can't get his day\nstarted without a bowl of my soup!\n\nWhat do you say? Are you ready to\ndeliver some soup to the Knight\nCommander?\n#####Yep!#####Wait...")
											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
											flw_17:
											switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 10)])) {
											  case 0:
												switch (adventure_pouch_has(1 0x0001)) {
												  case 0:
													goto flw_189
												  case 1:
													OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2309), ('next', 44), ('param3', 13)])
													printf("Hey! You haven't got an #####!\n\n\n\nYou need an ##### if you want\nto carry soup! Go get yourself one and\ncome back here.")
													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
												}
											  case 1:
												printf("######Hey! A man's word is his honor!\nI need you to deliver this soup to\nthe Knight Commander! Got it?\n#####Got it!#####Wait...")
												goto flw_17
											}
										  case 1:
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2321), ('next', 23), ('param3', 13)])
											printf("WHAT DID YOU JUST SAY?! You got\nsome nerve coming in here, busting up\nmy chandelier and thinking you can\nget away with it!")
											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
										}
									  case 1:
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2317), ('next', 21), ('param3', 13)])
										printf("What is wrong with you?! Just look\nat what you've done!\n\n\nYou broke my fancy, custom-ordered\nchandelier!\n\n\nYou're going to be working for me\nfor free until you pay off every single\nRupee that chandelier cost me!\nGot that?\nAre you ready to own up to your\nresponsibility?\n#####Of course!#####No way.")
										goto flw_75
									}
								}
							}
						}
					}
				}
			}
		  case 1:
			switch (loadzone_temp_flags[4 /* 0x9 10 */]) {
			  case 0:
				printf("######Welcome! Can I interest you in a\nlittle #####pumpkin soup #####pick-me-up?\n#####Just a little.#####I'll pass.")
				flw_558:
				loadzone_temp_flags[4 /* 0x9 10 */] = true;
				goto flw_73
			  case 1:
				printf("######Welcome to every bird rider's favorite\nrest stop, the Lumpy Pumpkin!\n\n\nThis is the one and only place you can\nenjoy some of our famous #####pumpkin\n#####sou###############p#####!\n\nWhat do you think? Want to try a bit\nand see what all the buzz is about?\n#####Just a little.#####I'll pass.")
				goto flw_558
			}
		}
	}
}

void entrypoint_117_45() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 26), ('next', 151), ('param3', 32)])
	printf("######I don't understand that Kina. If she\nwas having trouble tending to the\npumpkin patch on her own, she could\nhave just asked me for help!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 425), ('param3', 16)])
	printf("######Oh, but that's asking too much.\nCustomers shouldn't be made to\nwork in the pumpkin patch!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6657), ('param2', -256), ('next', 149), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 26), ('next', 426), ('param3', 16)])
	printf("######It's fine! I'll be a lot more reliable and\nhardworking than that shady-looking\nmole man you got here now!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 182), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6675), ('param2', 2048), ('next', 146), ('param3', 13)])
	printf("######Hehe! Well then I look forward to\ngetting your help out there!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6657), ('param2', -256), ('next', 152), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 427), ('param3', 16)])
	printf("######Hah! I'm happy to do it. After all,\nI live to see that smile!")
}

void entrypoint_117_28() {
	start()
	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
	  case 0:
		printf("######Hey, hard worker. You've gotten a lot\ndone for us.\n\n\nYou're always welcome here, as a \nhandyman or a customer!\n\n\nIf you're itching to do some work like\nyou did before, that's just fine with me!\nI'll even pay you for it this time.")
	  case 1:
		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
		  case 0:
			printf("######Hey, don't just sit there! Haven't you\ngot something to do right about now?")
		  case 1:
			printf("######Hey, why are you just sitting there?\n\n\n\n######Well, I guess we all have to sit and\nponder things once in a while. Good\nfor the noggin, I always say.\n\n######So relax! Take your time, thinker!")
		}
	}
}

void entrypoint_117_11() {
	start()
	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 117), ('param2', 12), ('next', -1), ('param3', 7)])
	  case 1:
		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
		  case 0:
			printf("######The place where I offer soup to #####Levias\n#####is inside the thunderhead cloud, on an\nisland with an everlasting #####rainbow#####.###### \n\n######Oh, you'll know it when you see it.\nGood luck!")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 459), ('param3', 31)])
			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
			  case 0:
				printf("######Hey! What are you thinking?! I go to\nthe trouble of making that soup, and\nyou change your mind before you\ndeliver it?\n####\n#That robot of yours brought it all\nback here!\n#####Sorry!#####Try again!")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 190)])) {
				  case 0:
					flw_462:
					printf("######Fine, I'll whip up another batch.\nBut only because it's for Levias!")
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 23), ('next', 464), ('param3', 32)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 471), ('param3', 32)])
					flw_471:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1013), ('next', 470), ('param3', 24)])
					printf("######You wait right here! I'm getting\ninspired to fire up some soup like I've\nnever souped before!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 223), ('param3', 16)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 228), ('param3', 47)])
					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 256), ('next', 229), ('param3', 15)])
					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 356), ('next', 230), ('param3', 15)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 338), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4096), ('next', 523), ('param3', 13)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 108), ('next', 524), ('param3', 24)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 224), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 547), ('param3', 48)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 548), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 8), ('next', 217), ('param3', 24)])
					printf("######Voil#! Here it is!\n\n\n\n######I've been cooking this stuff for well\nover 10 years, and I have to say this is\nthe best batch of #####pumpkin soup #####I have\never created!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 23), ('next', 218), ('param3', 33)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 315), ('param2', 0), ('next', 525), ('param3', 51)])
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 256), ('next', 219), ('param3', 13)])
					printf("######Master, I will signal for the robot.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 23), ('next', 536), ('param3', 17)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 3), ('next', 344), ('param3', 33)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 337), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 23), ('next', 345), ('param3', 17)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 341), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 23), ('next', 220), ('param3', 17)])
					printf("#####dMiss Fi! I'm heeeeere, bzzzrt!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 23), ('next', 221), ('param3', 33)])
					printf("#####dOh, this is another heavy load...\nBut don't worry! I can carry anything!\n\n\nI'll be waiting outside. I can take you\nwherever you need to go as soon as\nyou're ready, zizzat!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 23), ('next', 343), ('param3', 33)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 231), ('param3', 36)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 342), ('param3', 16)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 222), ('param3', 39)])
					printf("######The place where I offer soup to #####Levias\n#####is inside the thunderhead cloud, on an\nisland with an everlasting #####rainbow#####.###### \n\n######Oh, you'll know it when you see it.\nGood luck!")
					story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = true;
					story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */] = true;
					story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
				  case 1:
					goto flw_462
				}
			  case 1:
				switch (scene_flags[33 /* 0x5 02 */]) {
				  case 0:
					printf("######What's the matter? You look like\nyou've got something mighty\nserious on your mind.\n#####Actually...#####Really?")
					flw_204:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 96)])) {
					  case 0:
						printf("###########Levias##########...##### What about him?\n\n\n\n######Sure, I know Levias well, but I wasn't\naware anything was wrong...\n\n\n######Every year I offer him an entire\nbasin full of my #####pumpkin soup#####!\n\n\nBut lately a huge thunderhead has\nbeen brewing there, and I haven't yet\nmade this year's offering. I tell you,\nI feel horrible about it!")
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 23), ('next', 339), ('param3', 32)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 207), ('param3', 32)])
						printf("######You say you'll deliver a pot of my soup\nto Levias?\n\n\n###########Huh. #####I don't know how you plan to fly\ninto that huge thunderhead brewing\nout there, but...\n\n######If that's the case, I'm going to do\neverything I can to make Levias the\nbest batch of soup ever!")
						goto flw_471
					  case 1:
						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
						  case 0:
							flw_205:
							printf("######Oh! I guess it was nothing, then.\nIf that's the case, why don't you kick up\nyour boots and stay awhile?")
						  case 1:
							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
							  case 0:
								printf("######If that's the case, how about doing\nsome more work to pay off that\nchandelier?")
							  case 1:
								goto flw_205
							}
						}
					}
				  case 1:
					printf("######Welcome to the Lumpy Pumpkin!\nThis here's every bird rider's favorite\nrest stop.\n\nOf course, this is the only place you can\ndrink our famous homemade pumpkin\nsoup!\n\nJudging from the look on your face,\nI'd say you've got something stewing\nin your mind.\n#####Actually...#####Really?")
					goto flw_204
				}
			}
		}
	}
}

void entrypoint_117_46() {
	start()
	switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
	  case 0:
		printf("Oh, now I've done it...\n\n\n\nI knew better than to get greedy!")
	  case 1:
		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
		  case 0:
			printf("#####Jakamar##### is pretty good at fixing stuff.\n\n\n\nI'll bet he can fix Skyloft's windmill\ntoo!")
		  case 1:
			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
			  case 0:
				printf("#####Sparrot #####hasn't been seen hanging\naround the bazaar lately...\n\n\nIt's a shame. His predictions were\nso accurate it was spooky!")
			  case 1:
				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
				  case 0:
					printf("With all of her jobs, #####Kina##### has a lot\non her plate.\n\n\nIf only there was someone who was\nreally good at digging holes...")
				  case 1:
					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
					  case 0:
						printf("Have you seen #####Owlan#####'s collection of\nplants?\n\n\nI wonder if he's made any new\ndiscoveries lately?")
					  case 1:
						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
						  case 0:
							printf("Say, I wonder how Dodoh's doing.\nHave you heard anything?\n\n\nI know he was working hard to make\na place where we can all have some\nfun and blow off some steam.")
						  case 1:
							printf("Wow! I didn't know people were\nskydiving over the Lumpy Pumpkin!\n\n\nI heard there are colorful critters that\nsometimes accompany you when you\nskydive.\n\nI wonder if something good happens\nwhen they appear? Seems only right.")
						}
					}
				}
			}
		}
	}
}

void entrypoint_117_29() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 477), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 26), ('next', 484), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 282), ('next', 485), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 26), ('next', 478), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', -1), ('next', 483), ('param3', 16)])
	switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
	  case 0:
		printf("######Don't just sit there! I suggest you get\na move on and find my father, or else!\n\n\n######You're going to be in big trouble!")
		flw_480:
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 282), ('next', 481), ('param3', 14)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 26), ('next', -1), ('param3', 15)])
	  case 1:
		printf("######Welcome! This is the #####Lumpy Pumpkin#####,\nhome of the finest pumpkin\nsoup in the big, wide sky!\n\n######There isn't much to do here but take\na load off, relax, and enjoy yourself!")
		goto flw_480
	}
}

void entrypoint_117_12() {
	start()
	goto flw_520
}

void entrypoint_117_47() {
	start()
	switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
	  case 0:
		printf("What? Is something wrong?")
	  case 1:
		printf("Oh yeahhh... There's nowhere else\nI'd rather be at night!")
	}
}

void entrypoint_117_30() {
	start()
	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
	  case 0:
		switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
		  case 0:
			printf("######What were you thinking? You scared\na year off my life!\n\n\n####\n#What did you want again? I lost my\ntrain of thought...")
			flw_56:
			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
			  case 0:
				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
				  case 0:
					switch (scene_flags[70 /* 0x9 40 */]) {
					  case 0:
						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
						  case 0:
							printf("######It's nice having a bigger chandelier\nand all, but I think the thing's a bit\ntoo bright for my eyes.")
						  case 1:
							flw_70:
							printf("######What?! Are you telling me you moved \nthe gravestone?!\n\n\n####\n#And did you see the monster?!\nWhat?! Weren't you scared?\n\n\nYou can't fool me! I bet you were\nscared stiff!")
						}
					  case 1:
						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
						goto flw_70
					}
				  case 1:
					switch (scene_flags[5 /* 0x1 20 */]) {
					  case 0:
						printf("######What?! Didn't you hear me the first\ntime?\n\n\n#####Nighttime?#####Cemetery?")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 254)])) {
						  case 0:
							printf("######Yeah. If you want to wait till #####night#####,\nreturn to Skyloft and #####rest in a bed#####.\n\n\nSkyloft becomes a completely different\nplace at night...\n\n\n####\n#I don't think you should go, though. \nAnd it's not my fault if something bad\nhappens to ya. Nope.")
						  case 1:
							printf("######Well, you see... It was the dead of\nnight. I hit the #####gravestone closest to\nthe tree#####. The #####impact #####made the\ngravestone light right up!\nAfter that, I went to inspect the lit-up\ngravestone. When I #####pushed against the\ngravestone#####, the door to the storage\nshed next to it opened all on its own...\nAnd that's when I saw it! I saw the\nmonster! It lives in the storage shed!\n\n\n####\n#I'm serious! You shouldn't go in\nthere! If you do, don't say I didn't\nwarn ya!")
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 42), ('param3', 31)])
						printf("######You have that gullible look that says\nyou might take an old man's ramblings\nseriously. So tell me... Do you believe\nin the Skyloft monster?\nI shouldn't even call it a monster!\nIt's a demon, I tell ya! But no one\ncan say fer sure because no one's\nseen it and lived to tell the tale!\n######Wha-huh? You wanna know how\ncome I'm tellin' the tale if nobody\nwho's seen it is left alive? Is that it?\n#####Yep.#####Not at all!")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 40)])) {
						  case 0:
							printf("####\n#Yeah, well...I saw it, but I was able to\nescape by the seat of my pants. I was\nsaved by my catlike reflexes, I tell ya!\n\n######Any regular person wouldn't have\nlived long enough to scream!")
							flw_66:
							printf("######Anyway, I saw the thing, I tell ya!\n\n\n\nThere's a great big tree in the\ncemetery. I walked by that tree in the\n#####middle of the night #####and...\n\nI saw it #####hit##### the #####gravestone nearest the\ntree#####, and the gravestone lit up!\n\n\nIt #####pushed the gravestone#####, and the door\nto the storage shed opened up all by\nitself...\n\nThe monster then went into the shed,\nand then...it closed the door behind\nitself, which was unexpectedly polite\nfor a demon...\n######It was the most terrifying thing these\nold eyes have ever seen! If you're\nsmart, you'll stay clear of the #####cemetery\nin the middle of the night#####!")
							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
						  case 1:
							printf("Well I will keep going if you stop\ninterrupting me like that!")
							goto flw_66
						}
					}
				}
			  case 1:
				printf("######You believe me, don't ya?!\n#####Believe what?#####Sure!#####No chance.")
				switch (choice(3)) {
				  case 0:
					printf("######There's a fiendish demon living in\nSkyloft!\n\n\nI'm tellin' ya, I came this close to\ngetting eaten by that evil beast!\n\n\n######You look like you've gotten a little\nknight training, but you'd better keep\nyour guard up, or he'll take a bite out\nof you too!")
				  case 1:
					printf("######I know, right?! You're a good kid!")
				  case 2:
					printf("####\n#Hey, now.#####.#####.##### What's with you kids today\nand all your disrespectin' and whatnot!\nI swear...")
				}
			}
		  case 1:
			goto flw_56
		}
	  case 1:
		goto flw_56
	}
}

void entrypoint_117_13() {
	start()
	printf("######Well, good luck, Mr. ####\nMole####\n Man!")
}

void entrypoint_117_48() {
	start()
	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
	  case 0:
		printf("######Hooo boy! It's been too long since I \nheard Kina sing like that. I might have\nfallen in love with her all over again!")
	  case 1:
		printf("######Hey, did you know this?\n\n\n\n#####Kina##### will sometimes get on that stage\nand sing a song or two for us.\n\n\n######If there was a lovely melody playing,\nI bet she couldn't help but sing along.")
	}
}

void entrypoint_117_31() {
	start()
	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
	  case 0:
		printf("######Yep! Kina's singing is the best I've\never heard! There's nothing like it.\nIt's the opposite of my wife's warbly\nvoice...")
	  case 1:
		switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
		  case 0:
			printf("######What were you thinking? You scared\na year off my life!\n\n\n####\n#What did you want again? I lost my\ntrain of thought...")
		  case 1:
			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
			  case 0:
				printf("######Kina's singing voice is beautiful!\n####\n.####\n.####\n.But her music partner quit recently,\nand so I haven't heard her sing in a\nwhile.\nI really wish I could hear her voice\nagain.")
			  case 1:
				printf("######You really shouldn't wander around \nSkyloft at night! If there's something\nyou want to talk to me about, do it\nduring the day.")
			}
		}
	}
}

void entrypoint_117_14() {
	start()
	printf("######What?! But you... Well...I suppose...\nI guess I could at least give it a try.")
}

void entrypoint_117_15() {
	start()
	printf("######Hey! So what d'ya think?!")
}

void entrypoint_117_32() {
	start()
	goto flw_546
}

void entrypoint_117_50() {
	start()
	printf("###########WHY WOULD YOU DO\nTHAT?!\n\n\n#####Get down and come here this instant!")
	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
	loadzone_temp_flags[3 /* 0x9 08 */] = true;
}

void entrypoint_117_16() {
	start()
	printf("######Wow! Look at that! That's amazing!")
}

void entrypoint_117_51() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 277), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2321), ('next', 272), ('param3', 13)])
	printf("Hey now!\n\n\n\nYou don't think you can come in here\nand break my chandelier and just\nget away with it, do you?!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_117_17() {
	start()
	printf("######Hah... Ya think? Well, it was nothin'\nreally.\n\n\nRootin' around in the dirt is child's\nplay for us Mogmas!")
}

void entrypoint_117_52() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 281), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2321), ('next', 279), ('param3', 13)])
	printf("Hey now!\n\n\n\nYou don't think you can come in here\nand break my chandelier and just\nget away with it, do you?!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_117_18() {
	start()
	printf("#####\nWow! One more time! Please?!\nAgain! Again!")
}

void entrypoint_117_01() {
	start()
	switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
	  case 0:
		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
		  case 0:
			switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
			  case 0:
				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
				  case 0:
					switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
					  case 0:
						switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
						  case 0:
							switch (temp_flags[17 /* 0x3 02 */]) {
							  case 0:
								printf("######The fields are in good hands...er,\nclaws? He can easily do the work of a\nhundred people! I'm so lucky to have\nhim around.")
							  case 1:
								switch (loadzone_temp_flags[7 /* 0x9 80 */]) {
								  case 0:
									flw_388:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 117), ('param2', 25), ('next', -1), ('param3', 7)])
								  case 1:
									printf("######Teehee! Ever since the mole man came,\nwork on the patch has been going like a\ndream!\n\nWe can grow way more pumpkins now!")
									loadzone_temp_flags[7 /* 0x9 80 */] = true;
									goto flw_388
								}
							}
						  case 1:
							switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 31)])
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 234), ('param3', 31)])
								printf("######I sure hope you can find someone to\nplow the patch soon...")
								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
								  case 0:
								  case 1:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 236), ('param3', 51)])
									printf("Your ###########dowsing #####ability is not currently\nset to locate the individual this person\nseeks.\n\nDo you wish to set your ###########dowsing #####ability\nto locate a #####person who will plow the\npumpkin patch#####?\n#####Yes!#####Not now.")
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 104)])) {
									  case 0:
										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
										OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 15), ('next', 576), ('param3', 56)])
										printf("######Understood, Master.\n\n\n\nYour ###########dowsing #####ability has been set to\nlocate the type of person she is\ncurrently looking for.")
										flw_245:
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
									  case 1:
										printf("######Understood, Master. I will cancel your\ncurrent ######dowsing target.")
										goto flw_245
									}
								}
							}
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 99), ('param3', 31)])
						printf("######Oh! Thanks for helping me carry the\npumpkins the other day.\n\n\nThanks to you, we're ready to plant the\nnew seeds!\n\n\n###########The only thing is, plowing the patch so\nthat it's ready to be planted\n######is hard work!\n\n######If only there was someone who was\nreally good at plowing the field...\n#####I know someone!#####No idea...")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 70)])) {
						  case 0:
							printf("######Really?! If that's the case, I'd love to\nask this person to help me out.\n\n######\nIf you find this person, please tell them\nto come find me right away! OK?")
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 119), ('param3', 51)])
							printf("I calculate a 90% chance that this\nrequest is in some way connected to\n#####Gratitude Crystals#####.\n\nYour ###########dowsing #####ability can be calibrated\nto locate the person who will plow the\npumpkin patch for this girl.\n\nHowever, if you are searching for\nanother object that someone has\nasked you to find, that target will be\nremoved when you switch to this target.\nDo you wish to set your dowsing target\nas #####a person to plow the pumpkin\npatch#####?\n#####Yes!#####Not yet.")
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 260)])) {
							  case 0:
								printf("######Understood, Master. I will set your\ndowsing target to find an #####individual\nwho can plow the pumpkin patch#####.")
								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 15), ('next', 572), ('param3', 56)])
								flw_572:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 571), ('param3', 36)])
								story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 573), ('param3', 16)])
								printf("######Is there really someone who would\nhelp me out?\n\n\n######Well, I'll try to keep my hopes up and\njust wait here patiently until they\nshow up.")
							  case 1:
								printf("######Understood, Master. Should you wish\nto assign the person in question as a\ndowsing target, talk to this girl again.")
								goto flw_572
							}
						  case 1:
							printf("######Oh, come on! Are you telling me you're\nOK with a cute girl like me working the\nfield all by herself?! Some chivalrous\nknight you are!")
						}
					}
				  case 1:
					flw_387:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 117), ('param2', 25), ('next', -1), ('param3', 7)])
				}
			  case 1:
				goto flw_387
			}
		  case 1:
			goto flw_387
		}
	  case 1:
		switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
		  case 0:
			goto flw_34
		  case 1:
			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
			  case 0:
				printf("######Oh! It's the knight who broke the\nchandelier! Still working it off, huh?\n\n\n######Oh, hey...#####Father said he had some\nmore work for you.\n\n\n######You better go talk to him and find out\nwhat he has in mind.")
			  case 1:
				printf("######Oh, look! It's the brave knight who\nslayed the chandelier! Still working it\noff, eh?\n\n######Say, it's almost pumpkin-picking\nseason...#####\n\n\n######I wonder how I'm going to lift all those\nheavy pumpkins this year...")
			}
		}
	}
}

void entrypoint_117_19() {
	start()
	printf("######Oh yeah! Here I go!")
}

void entrypoint_117_53() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 357), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 359), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 361), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 360), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 358), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_117_02() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 18)])) {
	  case 0:
		printf("######I just knew you would come through.\nYou managed to carry them all!\n\n\n######I guess that means you're done carrying\npumpkins!\n\n\n######Thank##### you##### very##### much#####!")
	  case 1:
		printf("######Awww, you dropped them! You can't\nbe careless like that...\n\n\n######If you want to try again, come on\nover here.")
	}
}

void entrypoint_117_54() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 102), ('next', 527), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 102), ('next', 363), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 364), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 366), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 368), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 367), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 365), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_117_03() {
	start()
	printf("######Awww, you dropped them! You can't\nbe careless like that...\n\n\n######If you want to try again, come on\nover here.")
}

void entrypoint_117_20() {
	start()
	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
	  case 0:
		switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
		  case 0:
			printf("######Don't even pretend that was an\naccident! I put signs up there to\nwarn people to be careful of the\nchandelier and everything!\n######Well I wash my hands of the whole\nthing! Don't be surprised if my dad\ngives you a royal chewing out!")
		  case 1:
			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
			  case 0:
				printf("######Well, well... Welcome!\n\n\n\nMy father told me! He said that you\nhave to work to pay off the chandelier!\n\n\n######It won't be easy, but I know you can\ndo it.")
				flw_491:
				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
				  case 0:
				  case 1:
					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
					  case 0:
						printf("######What?! Something happened to\nLevias? \n\n\nYou know, Father used to deliver his\npumpkin soup to Levias every year.\nMaybe you should talk to him?")
					  case 1:
					}
				}
			  case 1:
				printf("######Don't even pretend that was an\naccident! I put signs up there to\nwarn people to be careful of the\nchandelier and everything!\n######Well I wash my hands of the whole\nthing! Don't be surprised if my dad\ngives you a royal chewing out!")
				goto flw_491
			}
		}
	  case 1:
		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
		  case 0:
			flw_105:
			printf("######Well, well... Welcome! I can see from\nyour handsome outfit there that you're\na Skyloft knight!\n\n######I hope you'll make yourself at home!\n\n\n\n######Have the Rupees sitting on top of\nthe chandelier caught your eye?\n\n\n######Don't go thinking that you can get\nthose down, you hear?\n\n\nYou might think that you could knock\nthe Rupees down by bumping\nsomething and making the chandelier\nshake, but...\n######Don't even##### think##### about it!\nAre we clear?")
		  case 1:
			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
			  case 0:
				printf("######Hey there!\n\n\n\nWelcome to the Lumpy Pumpkin!\nSit back and relax! #####Are you OK?\nYou look flustered.")
			  case 1:
				goto flw_105
			}
		}
	}
}

void entrypoint_117_55() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 372), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 374), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 373), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 371), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_117_04() {
	start()
	printf("I brought the old Mogma, zzzrt!")
}

void entrypoint_117_21() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 16), ('param4', 4), ('param5', 106)])) {
	  case 0:
		printf("######Huh... I thought it would sound a lot\nbetter when you played it, just 'cause\nthat's such a pretty little instrument\nyou have there...\n######The customers didn't seem impressed,\neither...")
		flw_252:
		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
	  case 1:
		printf("######I...guess you could call that playing...\nSort of...\n\n\n######To tell the truth, I found your\n#performance\" a little lacking.")
		goto flw_252
	  case 2:
		printf("######You're much better than I expected!\nI think I underestimated you.\n######I hope we have a chance to\nentertain the customers again!")
		goto flw_252
	  case 3:
		printf("######That wasn't just amazing... That\nblew my socks right off! Your harp\nplaying was even more impressive than\nmy voice!\n######You've got yourself a fan! I hope I'll\nhave a chance to hear you play again\nsometime.")
		goto flw_252
	}
}

void entrypoint_117_56() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 102), ('next', 529), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 102), ('next', 376), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 377), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 379), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 381), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 380), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 378), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_117_05() {
	start()
	printf("Send my best to Fi, bzzzzzzat!")
}

void entrypoint_117_22() {
	start()
	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 16), ('param4', 4), ('param5', 136)])) {
		  case 0:
			printf("####\n#And what was that?! Your horrible\n#music\" made even Kina's\nperformance look bad!\n\n######You listen here. I'm not paying you for\nthat little stunt. Got that?!")
		  case 1:
			printf("######I hate to tell you this, but you need to\nwork on your playing. I'm not shelling\nout hard-earned Rupees for a sloppy\nperformance like that.")
		  case 2:
			printf("######That was all right, I suppose. Though\nyou could really make Kina smile if\nyou played just a bit better.\n\n######I'll give you #####20 Rupees #####for that\nperformance. Go on, take it.")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', -1), ('param3', 8)])
		  case 3:
			printf("##############, that was fantastic!\n######I'm giving you #####50 Rupees##### for that\nperformance!")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', -1), ('param3', 8)])
		}
	  case 1:
		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 16), ('param4', 4), ('param5', 110)])) {
		  case 0:
			printf("######What in the blue sky was that?!\nIs that your sad little idea of what \nmusic is?!\n\n####\n#What?! Don't look at me like you think\nwe're even now! You're crazy! I'm not\npaying you for that. You're gonna have\nto try again later!")
		  case 1:
			printf("######I can't say it knocked my socks off, but\nyou know, for a first try, you did good\nenough!")
			flw_258:
			printf("######With this, I say we're even! You don't\nhave to work for me anymore.\nGreat job!\n\n######You know, I'm going to buy a new\nchandelier to replace that old one!\nIt really fancied up the place.\n\n######Considering all the hard work you put\nin around here, I feel like I should\ngive you a little something. Take this!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 305), ('param3', 42)])
			give_item(94 0x5E);
			printf("######Maybe you can swing by later. Yep,\nas a customer next time.")
			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
		  case 2:
			printf("######Impressive! I'd say you passed.")
			goto flw_258
		  case 3:
			printf("######Wow... Even I got a little dust in my\neye there during your performance!\nI didn't think you had it in you.")
			goto flw_258
		}
	}
}

void entrypoint_117_57() {
	start()
	switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
	  case 0:
		printf("######Oh no... You've gone and made a\nterrible mess of things, haven't you?\n\n\n######Well, now you're going to be in a world\nof trouble!")
	  case 1:
		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
		  case 0:
			printf("######Hey, ####. If you catch a\nbunch of bugs and you have more than\nyou know what to do with, I'll be happy\nto take some off your hands.\n######But rather than do it here, come by\nmy room in the academy...")
		  case 1:
			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
			  case 0:
				switch (loadzone_temp_flags[5 /* 0x9 20 */]) {
				  case 0:
					printf("######Flying through the holes in the rocks\nmakes flying so much faster. But it's an\nexperts-only kind of thing.\n\n######You're more likely to smack into the\nrock and have the opposite effect.\nHeh heh heh...\n")
				  case 1:
					printf("######Hey, ####. Wanna hear \nsome worthwhile information?\n\n\nEver come across those##### big rocks with\nholes #####while you're out flying?\n\n\nWell, there's a mysterious power or\nvortex or something in them. If you\nfly through it, you'll get a #####temporary#####\nboost of speed.\n######Skilled bird riders use this trick to\nget across that big sky quickly.")
					loadzone_temp_flags[5 /* 0x9 20 */] = true;
				}
			  case 1:
				printf("######Hey, ####!\n\n\n\n######I didn't think I'd see you here.\nBet you're wondering what I'm \ndoing here.\n#####Yep.#####Not really.")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 186)])) {
				  case 0:
					printf("######I think I mentioned this before, but\nman, I am really into bugs.\n\n\nThat's why I'm out collecting insects\nwherever I think I'll find them.\n\n\n######If you have a Bug Net too, you should\ntry catching some. Heh heh heh...\nIf you don't have one, you can pick\none up at Beedle's Airshop.\n######I'm sure that sweaty shopkeeper is\nflying around Skyloft now...")
				  case 1:
					printf("######Not really...?\n\n\n\n######I always knew you weren't a bug lover\nlike me...")
				}
			}
		}
	}
}

