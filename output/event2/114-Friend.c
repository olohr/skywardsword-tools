void entrypoint_114_03() {
	start()
	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
	  case 0:
		printf("######Hey, ####! Did you find\nany clues about Zelda? I know you\ncan find her. Don't give up!")
	  case 1:
		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
		  case 0:
			printf("######Hey, ####! Just make sure\nyou come back and see me.")
		  case 1:
			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
			  case 0:
				printf("######Zelda fell from her bird... I can't\nbelieve it...\n\n\nShe's such a good rider, you know?\n\n\n\n######Since I'm pretty much the worst rider\naround, all I can do is hope she's OK.")
			  case 1:
				switch (scene_flags[40 /* 0x4 01 */]) {
				  case 0:
					printf("######That's pretty serious,\n####.##### Hope you find\nyour bird soon#####...#####")
				  case 1:
					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
					  case 0:
						printf("######Hey, what's wrong, ####?\n\n\n\n######You...don't know where your bird is?\n#####What are you talking about,\n####?\n\nYou called it, but#####...#####it didn't even come\nto you?\n\n\n###########...#####So that means...#####\n#####Oh... I knew it...\n\n\n######Huh? #####Oh, uh, nothing.##### Really, I was,\nuh...#####talking to myself. You know, like\nI do...")
						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
					  case 1:
						switch (scene_flags[23 /* 0x3 80 */]) {
						  case 0:
							printf("######I have to hang back and watch the\nacademy today. Good luck with the\n#####ceremony#####, ####!")
						  case 1:
							switch (scene_flags[39 /* 0x5 80 */]) {
							  case 0:
								printf("######I'm not like you, ####.\nI fail at everything I try.\n\n\nThat's why I'm still here practicing\n#####picking up #####barrels with #####.\n\n\n######I guess it's not all bad. At least I'm\ngetting paid.")
							  case 1:
								printf("######Good morning, ####!\nToday's the big #####Wing Ceremony#####,\nright?\n\n######I wanted to fly too, but I#####...##### I didn't\nmake the cut, so I'm stuck back here at\nthe academy.\n\n######Plus, I've got to move these #####barrels\n#####over to the kitchen.\n\n\n######I was hoping to at least be able to\ncheer you on, ####, but...\n######I guess that's the way it goes.#####\nGo out there and wow them, buddy!")
								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
							}
						}
					}
				}
			}
		}
	}
}

void entrypoint_114_20() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 33)])) {
	  case 0:
		switch (scene_flags[31 /* 0x2 80 */]) {
		  case 0:
			flw_72:
			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 84), ('param3', 12)])
				switch (temp_flags[6 /* 0x1 40 */]) {
				  case 0:
					printf("######Want to try again? It'll cost you\nanother #####20 Rupees#####.\n#####Yep! #####Rules?#####Nah.")
					flw_74:
					switch (choice(3)) {
					  case 0:
						flw_67:
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 20), ('param3', 10), ('param4', 2), ('param5', 26)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -20), ('next', 70), ('param3', 8)])
							printf("######All right! Let's get started. Show me\nhow it's done, ####!")
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
						  case 1:
							flw_66:
							printf("######Can't afford it, huh? Must be rough\nnot having enough Rupees to play\na little game, huh, ####?")
						}
					  case 1:
						flw_63:
						printf("######I'll toss pumpkins for #####90 seconds#####!\nYou get 10 points for every pumpkin\nyou hit.\n\n######The more pumpkins you hit in a row,\nthe more points you get. Don't miss!")
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 64), ('param3', 12)])
						printf("######Oh, and one more thing. It will cost you\n20 Rupees a try.\n\n\n######Playing for free is no fun, right?\nSo what do you say? You want to\ngive it a shot for #####20 Rupees#####?\n#####Sure! #####No, thanks.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 24)])) {
						  case 0:
							goto flw_67
						  case 1:
							goto flw_66
						}
					  case 2:
						printf("######OK, ####. I know how\nbusy you are.\n\n\nYou've got the whole #save Zelda\"\nmission going on and stuff. ####\n\nSorry for bugging you.")
					}
				  case 1:
					printf("######Hey, ####! How's\neverything going?\n\n\nYou want to try shooting some\npumpkins? One go around will cost\nyou #####20 Rupees#####!\n#####Yep!#####Rules?#####No, thanks.")
					goto flw_74
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 76), ('param3', 31)])
				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
				printf("######Hey, ####!\n\n\n\nI've pretty much maxed out on push-\nups. Wonder what exercise I can pick\nup next...\n\n######Whoa! #####That's one sweet bow you've\ngot there, ####!\n\n\nBet you're a total natural with it, too.\n#####Yep. #####Uh...")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 20)])) {
				  case 0:
					printf("######You're amazing, ####!\n\n\n\n######Even if I work my way up to 3,000\npush-ups, I'll never be as cool as you.")
					flw_59:
					printf("######I've got it! Why don't you show\nme how good you are with\nyour bow?\n\nI'm going to toss some pumpkins into\nthe air, OK?\n\n\n######You show me how good you are by\nfilling them full of arrows!\n\n\n######Throwing the pumpkins in the air will\ngive me a good workout too!\nTwo birds with one stone!\n#####OK! #####No, thanks.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 22)])) {
					  case 0:
						goto flw_63
					  case 1:
						printf("######OK, ####. I know how\nbusy you are.\n\n\nYou've got the whole #save Zelda\"\nmission going on and stuff. ####\n\nSorry for bugging you.")
					}
				  case 1:
					printf("######Why are you blushing? You know\nit's true!")
					goto flw_59
				}
			}
		  case 1:
			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
			  case 0:
				printf("######Hey, ####! The Isle of the \nGoddess vanished! What's going on?\n\n\n######Oh#####...#####so you already know everything,\nhuh, ####?\n\n\n######It must have something to do with\nfinding Zelda. I get it. I'm done being\nsurprised by this stuff. You just make\nsure you find Zelda, OK?")
				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
			  case 1:
				goto flw_72
			}
		}
	  case 1:
		temp_flags[6 /* 0x1 40 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 78), ('param3', 44)])
		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 16), ('param4', 4), ('param5', 35)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 28), ('param2', 9472), ('next', 79), ('param3', 13)])
			printf("######You scored ####### #####.\n\n\n\nJust not feeling it today, huh,\n####? Sorry, but you\ndon't get a prize with that score.\n\n######The easiest way to hit a pumpkin is\nto lead it. You know, put the cursor a\nlittle ahead of it as it's flying.\n\nDo that, and I bet you can score\n#####150 points #####or so.\n\n\n######Not that I'm giving you advice or\nanything. I mean, I know you know\nwhat you're doing.")
			flw_86:
			printf("######Drop by when you want to try again!")
			flw_91:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 103), ('param3', 45)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 80), ('param3', 13)])
			printf("Wow, ############# #####! Nice job,\n####!\n\n\nIt's not the best score ever, but you\nwere pretty smooth, ####!\n\n\nNext time, I want you to aim for at\nleast #####400 points#####!\n\n\n######Anyway, here's 50 Rupees I've earned\nfrom doing chores for the grumpy\nkitchen lady.")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 86), ('param3', 8)])
			goto flw_86
		  case 2:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 81), ('param3', 13)])
			printf("######Wow, ####### #####! That's great,\n####!\n\n\nYou're good at everything you do,\n####.\n\n\n######Here's your prize!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 88), ('param3', 42)])
			give_item(62 0x3E);
			printf("######It would be great to see you hit #####600\npoints##### and set a record next time.\nGive it your best shot!")
			goto flw_91
		  case 3:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 30), ('param2', 9984), ('next', 97), ('param3', 13)])
			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
			  case 0:
				printf("######You got ####### #####! That's beyond\namazing, ####!\n\n\n######The pride of the Knight Academy is\ntruly riding on your shoulders,\n####! Here, take this!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 89), ('param3', 42)])
				give_item(64 0x40);
				goto flw_91
			  case 1:
				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
				printf("######You got ####### #####! That's beyond\namazing, ####!\n\n\nThe hopes of the Knight Academy are\ntruly riding on your shoulders,\n####!\n\n######Take this##### symbol of friendship\n#####between you and me,\n####!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 99), ('param3', 42)])
				give_item(94 0x5E);
				goto flw_86
			}
		}
	}
}

void entrypoint_114_04() {
	start()
	printf("###################!#####")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 38), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', -1), ('next', 37), ('param3', 16)])
	printf("###########Hey,##### umm... I should probably tell you...\n\n\n\n######Ah, forget it. Never mind.#####\nSorry...")
}

void entrypoint_114_05() {
	start()
	switch (scene_flags[22 /* 0x3 40 */]) {
	  case 0:
		printf("######Thanks! That was a huge help,\n####!\n\n\n######I know it's not much, but here's half of\nthe pay the old lady offered me to\ndo that.")
		give_item(4 0x04);
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 44), ('param3', 12)])
		printf("######I have to hang back and watch the\nacademy today. Good luck with the\n#####ceremony#####, ####!")
		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
	  case 1:
		switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
		  case 0:
			printf("######I need you to carry one of these #####barrels#####\nover to the old lady who works in the\nkitchen.\n\nPress ##### to pick up a barrel, then press\n##### again to #####put it down #####at your feet.\n\n\n######If you #####hold the Wii Remote up and\nswing it#####, you can #####throw #####whatever you're\ncarrying.\n\nYou can #####roll #####small items like pots by\n#####holding the Wii Remote down #####and\n#####swinging #####it.\n\n######But we'll get in huge trouble if any of\nthese barrels break, so don't even think\nabout throwing or rolling them.")
			printf("######If you forget any of this, just #####press ####################.#####\n\n\n\nThat'll bring up an explanation of\nactions available to you at that moment\nin time. Pretty handy, huh?")
		  case 1:
			printf("######Aww, thanks. I didn't think you had\ntime to help me out,\n####.\n#####No problem!#####I'm busy...")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 10)])) {
			  case 0:
				printf("######Really? Thanks! OK, so...")
				printf("######I need you to carry one of these #####barrels#####\nover to the old lady who works in the\nkitchen.\n\nPress ##### to pick up a barrel, then press\n##### again to #####put it down #####at your feet.\n\n\n######If you #####hold the Wii Remote up and\nswing it#####, you can #####throw #####whatever you're\ncarrying.\n\nYou can #####roll #####small items like pots by\n#####holding the Wii Remote down #####and\n#####swinging #####it.\n\n######But we'll get in huge trouble if any of\nthese barrels break, so don't even think\nabout throwing or rolling them.")
				printf("######If you forget any of this, just #####press ####################.#####\n\n\n\nThat'll bring up an explanation of\nactions available to you at that moment\nin time. Pretty handy, huh?")
				loadzone_temp_flags[11 /* 0x8 08 */] = true;
			  case 1:
				printf("######Oh, right#####... #####You've got today's\nWing Ceremony to think about!\nYou can leave that there.")
			}
		}
	}
}

void entrypoint_114_01() {
	start()
	printf("##############!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 18), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 100), ('next', 25), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 17), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 0), ('next', 22), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 20), ('param3', 16)])
	printf("######That green uniform looks so...\nadventurous! You sure look like a\nknight now.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 112), ('param3', 39)])
	printf("######The headmaster said you're heading\nout to look for Zelda.\n\n\n######You're really something else. I could\nnever imagine myself doing what\nyou're about to do.\n\n##\n###I put a lot of work into making this!\nYou should take it with you.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 4096), ('next', 52), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 50), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 16), ('param3', 42)])
	give_item(112 0x70);
	printf("It's an##### Adventure Pouch#####. It's for...\nadventures. It's neat because you can\nfit #####four##### things in it that you'll need\non your big journey.\nYou can buy all kinds of stuff at the\nbazaar that you can put in this pouch.\nYou should go look!\n\n######You could buy some #####potions #####and a\n#####shield#####. They'd fit in the pouch, and they\nmight come in handy on an adventure.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 21), ('param3', 39)])
	printf("########! ######I just know you'll\nfind Zelda for us.")
	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_114_02() {
	start()
	printf("")
}

