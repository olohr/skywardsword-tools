void entrypoint_124_00() {
	start()
	switch (loadzone_temp_flags[4 /* 0x9 10 */]) {
	  case 0:
		printf("Hopefully your purchase lives up to\nyour expectations, fella! If you get the\nitch to buy some more treasure, you\nknow the stone to talk to.")
	  case 1:
		switch (loadzone_temp_flags[5 /* 0x9 20 */]) {
		  case 0:
			printf("So you're looking to buy then, eh?\n#####Please!#####Nah...")
			flw_3:
			switch (choice(2, 0)) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 4), ('param3', 12)])
				printf("Excellent! So, tell me, what kind of\ntreasure are you in the market for?\n###################################Other.")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 2)])) {
				  case 0:
					printf("OK, one ##### it is!\nFor #####200 Rupees#####, it's all yours!\n#####Sounds good!#####Too much.")
					switch (choice(2, 0)) {
					  case 0:
						switch (has_rupees(200)) {
						  case 0:
							printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
							loadzone_temp_flags[0 /* 0x9 01 */] = true;
							rupees += -200;
							loadzone_temp_flags[4 /* 0x9 10 */] = true;
						  case 1:
							printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
						}
					  case 1:
						printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
					}
				  case 1:
					printf("OK, one ##### it is! This baby's\nall yours for just #####200 Rupees#####.\n#####Sounds good!#####Too much.")
					switch (choice(2, 0)) {
					  case 0:
						switch (has_rupees(200)) {
						  case 0:
							printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
							loadzone_temp_flags[1 /* 0x9 02 */] = true;
							rupees += -200;
							loadzone_temp_flags[4 /* 0x9 10 */] = true;
						  case 1:
							printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
						}
					  case 1:
						printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
					}
				  case 2:
					printf("OK, one ##### coming right\nup! That'll be just #####200 Rupees#####, friend.\n#####Sounds good!#####Too much.")
					switch (choice(2, 0)) {
					  case 0:
						switch (has_rupees(200)) {
						  case 0:
							printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
							loadzone_temp_flags[2 /* 0x9 04 */] = true;
							rupees += -200;
							loadzone_temp_flags[4 /* 0x9 10 */] = true;
						  case 1:
							printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
						}
					  case 1:
						printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
					}
				  case 3:
					printf("Something else, huh? Well do any of\nthese pique your interest?\n###################################Other.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 28)])) {
					  case 0:
						printf("OK, one ##### it is! It's a steal at\njust #####100 Rupees#####.\n#####Sounds good!#####Too much.")
						switch (choice(2, 0)) {
						  case 0:
							switch (has_rupees(100)) {
							  case 0:
								printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
								loadzone_temp_flags[3 /* 0x9 08 */] = true;
								rupees += -100;
								loadzone_temp_flags[4 /* 0x9 10 */] = true;
							  case 1:
								printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
							}
						  case 1:
							printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
						}
					  case 1:
						printf("OK, one ##### it is!\nFor #####100 Rupees##### it's all yours!\n#####Sounds good!#####Too much.")
						switch (choice(2, 0)) {
						  case 0:
							switch (has_rupees(100)) {
							  case 0:
								printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
								loadzone_temp_flags[6 /* 0x9 40 */] = true;
								rupees += -100;
								loadzone_temp_flags[4 /* 0x9 10 */] = true;
							  case 1:
								printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
							}
						  case 1:
							printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
						}
					  case 2:
						printf("OK, one ##### it is!\nFor #####100 Rupees##### it's all yours!\n#####Sounds good!#####Too much.")
						switch (choice(2, 0)) {
						  case 0:
							switch (has_rupees(100)) {
							  case 0:
								printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
								loadzone_temp_flags[7 /* 0x9 80 */] = true;
								rupees += -100;
								loadzone_temp_flags[4 /* 0x9 10 */] = true;
							  case 1:
								printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
							}
						  case 1:
							printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
						}
					  case 3:
						printf("Sorry, friend, that's all I've got to sell\nright now. If none of those did the trick\nfor you, you'll just have to find what\nyou're after on your own!")
					}
				}
			  case 1:
				printf("Fine then. Folks who walk the straight\nand narrow are better off not getting\nmixed up with a shady character like\nmyself anyhow. Know what I'm saying?")
			}
		  case 1:
			switch (scene_flags[80 /* 0xB 01 */]) {
			  case 0:
				printf("Hey there, friend! What luck you have!\nYou've just stumbled upon one of th--#####\nOh. You again. You looking to buy\nsome treasure or what?\n#####Yep!#####Nah...")
				goto flw_3
			  case 1:
				printf("Hey there, friend! What luck you have!\nYou've just stumbled upon me, the\ninfamous #####Moonlight Merchant#####!\n\nDon't ask how I get my wares, 'cause\nI'm not telling!\n\n\nIf there's a rare bauble or two you're\ndying to get your hands on, I might\nknow a stone who knows a stone who\ncan get them for you...for a price!")
				printf("But...but! Before you go whipping out\nyour Rupees, you should know my\nwares carry a hefty price tag.\n\nPeople who come to me usually don't\nlike collecting treasure on their own,\nor simply can't manage to collect what\nthey need. You sure this is for you?\n#####Sure!#####No way.")
				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
				loadzone_temp_flags[5 /* 0x9 20 */] = true;
				goto flw_3
			}
		}
	}
}

void entrypoint_124_01() {
	start()
	printf("You're a weird one, climbing all the\nway up here.\n\n\nHey, if you tried to #####dive##### off the ledge\nhere, I bet you could land in the\nnest on top of the tower down there.\nBut what do I know? I'm a stone.")
}

