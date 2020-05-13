void entrypoint_109_02() {
	start()
	switch (story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */]) {
	  case 0:
		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
		  case 0:
			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
			  case 0:
				switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
				  case 0:
					flw_134:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 4608), ('next', 55), ('param3', 13)])
					printf("######Listen up, pal. I don't want you gettin'\ntoo familiar with my little rainbow.\nAnd you'd better keep your eyes to\nyourself too, if you know what I mean.")
				  case 1:
					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
					  case 0:
						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
						  case 0:
							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
							  case 0:
								switch (story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */]) {
								  case 0:
									switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
									  case 0:
										switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
										  case 0:
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 3584), ('next', 71), ('param3', 13)])
											printf("######Bamboo slivers! Who's the rascal who's\ngone and stolen my baby girl's heart?\n\n\n######Oh...I knew this day had to come, but...")
										  case 1:
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4608), ('next', 69), ('param3', 13)])
											printf("######Bamboo slivers! My darlin' daughter's\ngot herself a feller, ####!\n\n\n######Oh...who could it be? Who's the scamp\nwho's stolen my muffin's heart?\n\n\n######And you, ####! Why did I\never put my trust in you? Any more\nbrains and I'd be as smart as a\ntree stump.\nOh my goodness gracious... What am\nI supposed to do now?")
											story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
										}
									  case 1:
										switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
										  case 0:
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 4608), ('next', 77), ('param3', 13)])
											printf("######Don't you go fallin' head over boots\nfor my honey baby, ####!\n\n\nI know she's as irresistible as a cool\nglass of lemonade on a sweaty day, but\nI won't stand for it. You hear me, son?")
										  case 1:
											OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 138), ('param3', 31)])
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 5120), ('next', 74), ('param3', 13)])
											printf("######Hey, ####! Have I got\nnews for you!\n\n\nMy sweetie daughter's given her\ngood-for-nothin' feller the boot!\n\n\n######Of course, I feel for her. I hate to see\nher blue and all, but...\n\n\n######I'm pleased as punch the egg-swipin'\nscamp's out of the picture!\n\n\nTell me true, ####. Are\nyou responsible for breakin' them up?\nNever mind! It makes no difference\nto me.\n######I'm as happy as a Loftwing in an\nupdraft. I truly am.")
											OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 75), ('param3', 43)])
											story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
										}
									}
								  case 1:
									flw_137:
									OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 5120), ('next', 66), ('param3', 13)])
									printf("######That you, ####? What\nseems to be the problem?\n\n\nMy baby girl's as restless as a twisted\nsheet in the wind. Is there somethin' in\nthe water?")
								}
							  case 1:
								goto flw_137
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 4608), ('next', 64), ('param3', 13)])
							printf("######I'm countin' on you, ####!\nGet rid of the lowlife who's been\npesterin' my baby girl, and ease this\nold man's heart!")
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 135), ('param3', 31)])
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 4608), ('next', 57), ('param3', 13)])
						printf("######Howdy, ####. You picked \na good time to visit.\n#####Why? #####Daughter?")
						switch (choice(2, 0)) {
						  case 0:
							printf("######What do you mean \"why\"? This is\nimportant! My little girl's in trouble!")
							flw_61:
							printf("######Yep, the shinin' star of the Item Check\nis the source of my problem. That's my\ndarlin' daughter, in case you forgot.\n\nShe's been out of sorts lately. She'll\nbe sittin' and starin' off into yonder,\nand then she'll get redder than a\ntomato on the vine.\n######Wait just a gosh-darn minute!\nI know what's going on! My sunshine's\ngot herself an###### #####unwanted admirer#####!\n\nNot that I can blame the feller. She's as\nsweet as honey and twice as pretty as a\nspring flower! ######Nope--three times as\npretty!\nIt's no wonder the boys buzz around\nher like a swarm of amorous bees.")
							printf("######But I won't stand for it! No way. \nNo how! I'm going to find the rascal\nand give him a good whuppin'!\n\n######You got to help me out. You see anyone\nbuzzin' around my little flower, you\ngive him what for and send him\npackin'.\n######I'll keep my peepers peeled too, but I\ncan't stand watch all day long.\n\n\nI promise I'll make it worth your while.\nYou chase the varmint off, and I'll let\nyou chat with the apple of my eye.")
							printf("######Hush! You don't have to say a word.\nI can see how you feel by the spark in\nyour eye.\n\n######There's not a feller alive who wouldn't\njump at this chance!\n\n\n######Ease this old man's heart, and get rid\nof the lowlife who's pesterin' my\nbaby girl. I'm countin' on you,\n####!")
							story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
						  case 1:
							printf("######Sure enough is. You're as smart as a\nbullwhip, aren't you?")
							goto flw_61
						}
					}
				}
			  case 1:
				goto flw_134
			}
		  case 1:
			goto flw_134
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 5120), ('next', 84), ('param3', 13)])
		printf("######Thanks for stopping by. Welcome to\nthe home of Skyloft's most popular\nfather-and-daughter dream team.")
		printf("######What? You tellin' me you don't know\nwho I am? Believe it or not, I used to\nbe the #####most popular guy in the sky#####!\nMr. Skyloft, that was me.\n######But#####...#####you might relate better if I told\nyou I was the proud father of Skyloft's\nmost popular girl: #####Peatrice#####, #####princess\nof the Item Check#####.\n######How's that? Does that clear anything\nup for you, young feller? Ha ha ha ha!")
		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
		loadzone_temp_flags[2 /* 0x9 04 */] = true;
	}
}

void entrypoint_109_03() {
	start()
	story_flags[216 /* us: 805A9AF3 0x08, jp: 805ACD73 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 47), ('param3', 12)])
	switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
	  case 0:
		printf("######You want to try again? Need to blow\noff steam by mowin' down a tower of\nbamboo? It'll only cost you #####10 Rupees#####!\n#####I'm in!#####Rules?#####No, thanks.")
		flw_3:
		switch (choice(3, 1)) {
		  case 0:
			flw_16:
			switch (has_rupees(20)) {
			  case 0:
				rupees += -10;
				switch (story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */]) {
				  case 0:
					printf("Your current high score is #######!\nYou're going to need your A-game to\ntop that!")
					flw_6:
					printf("######All right, then. Get to slicin'!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
				  case 1:
					goto flw_6
				}
			  case 1:
				printf("######What's the problem? You don't have\nenough Rupees? Don't worry about it--\nI'll let you play for free!\n\n######Bahaha! You actually believed me for\na second there, didn't you? That's the\nproblem with you kids, always thinkin'\nyou're gettin' somethin' for nothin'!\n######You could learn a little somethin'\nabout reality from my little pumpkin.\nNow there's a gal with a head on her\nshoulders, believe you me!")
			}
		  case 1:
			printf("######You're goin' to take a swing at\nwhittlin' down that big old bamboo\nright there in the middle of the room.\n\nThing is, see, it's a contest to see how\nmany cuts you can make before it hits\nthe ground. If you're good enough,\nyou'll stroll out of here with a prize!")
			printf("######So, what's it gonna be? Want to hack\nsome bamboo? One try will cost you\n#####10 Rupees#####.\n#####I'm in!#####Rules?#####No, thanks.")
			goto flw_3
		  case 2:
			printf("######I got it. You're afraid of sharp objects.\nNot the slicin' type. Come on back if\nyou change your mind!")
		}
	  case 1:
		switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
		  case 0:
			switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
			  case 0:
				switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
				  case 0:
					printf("######I want the custard-bellied coward who\nbroke my baby girl's heart. It's drivin'\nme crazy!\n\n######Times like this, a man just wants to\nchop bamboo! You want to give it a\nwhack? It'll cost you #####10 Rupees#####.\n#####I'm in!#####Rules?#####No, thanks.")
					goto flw_3
				  case 1:
					printf("######How you doing, ####!\nLooks like that mangy milquetoast's\nstopped pesterin' my little dumplin'.\n\nLet's celebrate by butcherin' some\nbamboo! One try will cost you\n#####10 Rupees#####. What do you say?\n#####I'm in!#####Rules?#####No, thanks.")
					goto flw_3
				}
			  case 1:
				printf("######Tell me somethin', ####!\nDid you find that dirty rotten egg\nburglar who's been botherin' my\nbaby girl?\nOr are you here to buff up your sword\narm with a little bamboo slice 'n' dice?\nIt's only #####10 Rupees #####a round!\n#####I'm in!#####Rules?#####No, thanks.")
				goto flw_3
			}
		  case 1:
			printf("######How's it goin', ####?\nGood to see you again!\n\n\nHow's that slicin' arm feel? Ready to\nslay some bamboo? It's only #####10 Rupees\n#####a shot!\n#####I'm in!#####Rules?#####No, thanks.")
			goto flw_3
		}
	}
}

void entrypoint_109_04() {
	start()
	goto flw_3
}

void entrypoint_109_01() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 15), ('param4', 3), ('param5', 13)])) {
	  case 0:
		switch (story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */]) {
		  case 0:
			switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
			  case 0:
				flw_109:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 109), ('param2', 3), ('next', -1), ('param3', 7)])
			  case 1:
				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
				  case 0:
					switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
					  case 0:
						switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
						  case 0:
							switch (story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */]) {
							  case 0:
								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
								  case 0:
									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
									  case 0:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 109), ('param2', 3), ('next', -1), ('param3', 7)])
									  case 1:
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 3584), ('next', 88), ('param3', 13)])
										printf("######Bamboo slivers! My darlin' daughter's\ngot herself a feller, ####!\n\n\n######Oh...who could it be? Who's the scamp\nwho's stolen my muffin's heart?\n\n\n######And you, ####! Why did I\never put my trust in you? Any more\nbrains and I'd be as smart as a\ntree stump.\nOh my goodness gracious... What am\nI supposed to do now?")
										story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
										printf("######The only thing to do now is decimate\nsome bamboo. It's #####10 Rupees #####for one\nround. Are you in or what?\n#####I'm in!#####Rules?#####No, thanks.")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 109), ('param2', 4), ('next', -1), ('param3', 7)])
									}
								  case 1:
									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
									  case 0:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 109), ('param2', 3), ('next', -1), ('param3', 7)])
									  case 1:
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 147), ('param3', 31)])
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', -256), ('next', 92), ('param3', 13)])
										printf("######Hey, ####! Have I got\nnews for you!\n\n\nMy sweetie daughter's given her\ngood-for-nothin' feller the boot!\n\n\n######Of course, I feel for her. I hate to see\nher blue and all, but...\n\n\n######I'm pleased as punch the egg-swipin'\nscamp's out of the picture!\n\n\nTell me true, ####. Are\nyou responsible for breakin' them up?\nNever mind! It makes no difference\nto me.\n######I'm as happy as a Loftwing in an\nupdraft. I truly am.")
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 93), ('param3', 43)])
										story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
									}
								}
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 109), ('param2', 3), ('next', -1), ('param3', 7)])
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 146), ('param3', 31)])
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 7), ('param2', -256), ('next', 97), ('param3', 13)])
							printf("######Howdy, ####! I was\nhoping I'd run into you.\n\n\n#####Why?#####Daughter?")
							switch (choice(2, 0)) {
							  case 0:
								printf("######What do you mean \"why\"? This is\nimportant! My little girl's in trouble!")
								flw_101:
								printf("######Yep, the shinin' star of the Item Check\nis the source of my problem. That's my\ndarlin' daughter, in case you forgot.\n\nShe's been out of sorts lately. She'll\nbe sittin' and starin' off into yonder,\nand then she'll get redder than a\ntomato on the vine.\n######Wait just a gosh-darn minute!\nI know what's going on! My sunshine's\ngot herself an###### #####unwanted admirer#####!\n\nNot that I can blame the feller. She's as\nsweet as honey and twice as pretty as a\nspring flower! ######Nope--three times as\npretty!\nIt's no wonder the boys buzz around\nher like a swarm of amorous bees.")
								printf("######But I won't stand for it! No way. No\nhow! I'm going to find the rascal and\ngive him a good whuppin'!\n\n######You got to help me out. You see anyone\nbuzzin' around my little flower, you\ngive him what for and send him\npackin'.\n######I'll keep my peepers peeled too, but I\ncan't stand watch all day long.\n\n\nI promise I'll make it worth your while.\nYou chase the varmint off, and I'll let\nyou chat with the apple of my eye.")
								printf("######Hush! You don't have to say a word.\nI can see how you feel by the spark in\nyour eye.\n\n######There's not a feller alive who wouldn't\njump at this chance!\n\n\n######Ease this old man's heart, and get rid\nof the lowlife who's pesterin' my\nbaby girl. I'm counting on you,\n####!")
								story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
								printf("######You want to slice up some bamboo?\nIt's #####10 Rupees #####a turn!\n#####I'm in!#####Rules?#####No, thanks.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 109), ('param2', 4), ('next', -1), ('param3', 7)])
							  case 1:
								printf("######Sure enough is. You're as smart as a\nbullwhip, aren't you?")
								goto flw_101
							}
						}
					  case 1:
						goto flw_109
					}
				  case 1:
					goto flw_109
				}
			}
		  case 1:
			loadzone_temp_flags[2 /* 0x9 04 */] = true;
			switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
			  case 0:
				printf("######Aha! So you're rarin' to go, right?\n#####You bet!#####I'll pass.")
				flw_35:
				switch (choice(2, 0)) {
				  case 0:
					printf("######That's the spirit! Chop away, boy!\n\n\n\nHold up a second! Get your horses\nholded. There's got to be a way to spice\nthings up a notch or three.\n######Hmm#####.#####.#####.\n######Yep. That's the ticket right there!")
					story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 18), ('param3', 39)])
					printf("You're goin' to take a swing at\nwhittlin' down that big old bamboo\nright there in the middle of the room.\n\nThing is, see, it's a contest to see how\nmany cuts you can make before it hits\nthe ground. If you're good enough,\nyou'll stroll out of here with a prize!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 150), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 44), ('param3', 12)])
					printf("######It'll cost you #####10 Rupees #####to see what\nyou're made of. You want to give it\na try?\n#####You bet! #####Not free?")
					switch (choice(2, 0)) {
					  case 0:
						goto flw_16
					  case 1:
						printf("######You have got to be pullin' my leg.\nI told you there's a prize on the table!\nYou think I'll do that just for\npopularity's sake?\nHow am I going to put food on my table\nif I let you play for free? If my family\ncould eat popularity, they'd be stuffed\nfull all the time. But they can't!\n######What do you say? One try will cost you\n#####10 Rupees#####. You up for a challenge?\n#####I'm in! #####No, thanks.")
						switch (choice(2, 0)) {
						  case 0:
							goto flw_16
						  case 1:
							printf("######I got it. You're afraid of sharp objects.\nNot the slicin' type. Come on back if\nyou change your mind!")
						}
					}
				  case 1:
					printf("######You kiddin' me? Girls don't want to\nhit the town with a wet blanket, son.\n\n\n######Not that I want you anywhere near my\nlittle cupcake. No, sir! You lay a finger\non her, and you'll have to buy new\ngloves.")
					loadzone_temp_flags[0 /* 0x9 01 */] = true;
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 7), ('param2', -256), ('next', 82), ('param3', 13)])
				switch (story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */]) {
				  case 0:
					printf("######Whoa! Is that you, ####?\nNever thought I'd run into you here.")
					flw_33:
					printf("######This here's my secret spot where I come\nto work the kinks out of my sword arm.\n\n\nThere was a time I was the #####most\npopular guy in all of Skyloft#####. Folks\nwere always cheerin' me on like it was\na parade. But as you know, time passes.\n######And I'm not the young buck I used to\nbe. I eat when I get stressed, and I'm\nworried about my darlin' daughter all\nthe time! I mean, look at this belly!\nSo that's what drives a feller here\nto chop some bamboo! Let me tell you,\nthere's no better way to sweat off\nthose pounds.\n######Here's an idea, ####.\nWhy don't you try slicin' some bamboo?\n#####Sure! #####I'll pass.")
					goto flw_35
				  case 1:
					printf("######Whoa! Is that you, ####?\nNever thought I'd run into you here.\n#####What is this place?#####Who are you?")
					story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
					switch (choice(2, 0)) {
					  case 0:
						goto flw_33
					  case 1:
						printf("######What? You tellin' me you don't know\nwho I am? Believe it or not, I used to \nbe the #####most popular guy in the sky#####!\nMr. Skyloft, that was me.\n######But#####...#####you might relate better if I told\nyou I was the proud father of Skyloft's\nmost popular girl: #####Peatrice#####, #####princess\nof the Item Check#####.\n######How's that? Does that clear anything\nup for you, young feller? Ha ha ha ha!")
						goto flw_33
					}
				}
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 38), ('param3', 44)])
		printf("Hold up, son, you're all done!\n\n\n\nLet's count those cuts.\nYour score this time is #######!")
		switch (story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 11)])) {
			  case 0:
				printf("######Hoo-wee! A new record. Way to go, kid!")
				flw_7:
				switch (minigame_related[0]) {
				  case 0:
					printf("######You're not lightin' any records on\nfire with that score, son. You got to get\nat least #####15 cuts#####!\n\n######Sharpen up your concentration!\nThere's no prize for sloppy slicin'.")
					flw_152:
					switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
					  case 0:
						flw_27:
						story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */] = true;
						printf("######Come on back whenever you feel like\nyou might want to chisel up that\nsword arm!")
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 49), ('param3', 45)])
						loadzone_temp_flags[1 /* 0x9 02 */] = true;
					  case 1:
						printf("######Well, look at that.##### Now that I take a\ngander at the thing, it's clear you got\nyourself a stubby little sword.####\n You did\nmighty well considering that.\nSee, the longer the sword you got, the\neasier it is to zip through that bamboo\nlike a loaf of warm butter!\n\nIf you get yourself a longer blade in\nthe future, come back and try again.\nYou'll be surprised what a little extra\nsteel can do for your chopping score!")
						goto flw_27
					}
				  case 1:
					printf("######Well, you got miles to go, but I'll give\nyou something for the effort.\nHere's 30 Rupees.")
					rupees += 30;
					printf("######Next time around, shoot for #####20 cuts#####.")
					goto flw_152
				  case 2:
					printf("######Hoo-wee! That's what I'm talking\nabout! You really brutalized that\nbamboo, boy. Here's your prize!")
					give_item(63 0x3F);
					printf("######I want to see you do #####28 chops #####next time!")
					goto flw_27
				  case 3:
					printf("######That is one humding-alinger of a score!\nI only reached that number a few\ntimes myself. Here's your prize!")
					give_item(64 0x40);
					goto flw_27
				}
			  case 1:
				goto flw_7
			}
		  case 1:
			goto flw_7
		}
	  case 2:
		printf("######What seems to be the problem?\nTime's up!")
	}
}

