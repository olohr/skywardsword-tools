void entrypoint_115_02() {
	start()
	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
	  case 0:
		printf("#####\nSo you want to sell some treasure?")
		flw_495:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 432), ('param3', 33)])
		printf("######Well, today I am buying these\ntreasures:\n\n\n###########\n#####################\n################\n################\n######Just these four! So, what do you want\nto do?\n#####I'll sell!#####No deal.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 150)])) {
		  case 0:
			flw_414:
			printf("Which will you sell to me?\n#####################.#####################.#####################.#####################.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 146)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 481), ('param3', 33)])
				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 187)])) {
				  case 0:
					printf("######Hmmm, how many Rupees can I offer\nfor each ################... \nDoes ####### seem fair?")
					flw_656:
					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 412), ('param3', 12)])
					printf("######I see that you're carrying ####### of those.\nHow many will you sell me?\n#####1.#####5.#####All of them!#####No deal.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 142)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 497), ('param3', 33)])
						flw_497:
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 195)])) {
						  case 0:
							printf("################Ah, the old ################ deal, eh?\nAnd you've got ####### of 'em?\nLet's see, how many Rupees is that\nworth...  Let's say #######?\n#####It's a deal!#####Never mind.")
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 140)])) {
							  case 0:
								printf("######All right. Here's your money.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 572), ('param3', 33)])
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 571), ('param3', 39)])
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2048), ('next', 573), ('param3', 13)])
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 429), ('param3', 6)])
								printf("Thanks. Come back soon.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
							  case 1:
								flw_410:
								printf("######Oh. Really? OK, well, hopefully you'll\ncome back again sometime.")
							}
						  case 1:
							printf("######You don't even have that many!\nQuit wasting my time.")
							goto flw_656
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 497), ('param3', 33)])
						goto flw_497
					  case 2:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 497), ('param3', 33)])
						goto flw_497
					  case 3:
						goto flw_410
					}
				  case 1:
					flw_494:
					printf("######Listen, pal...I've had enough of the\nfunny business. You don't even have a\nsingle one of those. So do you want to\nsell something else or what?\n#####I'll sell!#####No deal.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 185)])) {
					  case 0:
						goto flw_414
					  case 1:
						goto flw_410
					}
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 482), ('param3', 33)])
				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 189)])) {
				  case 0:
					printf("######Hmmm, how many Rupees can I offer\nfor each ################... \nDoes ####### seem fair?")
					goto flw_656
				  case 1:
					goto flw_494
				}
			  case 2:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 483), ('param3', 33)])
				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 191)])) {
				  case 0:
					printf("######Hmmm, how many Rupees can I offer\nfor each ################... \nDoes ####### seem fair?")
					goto flw_656
				  case 1:
					goto flw_494
				}
			  case 3:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 484), ('param3', 33)])
				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 193)])) {
				  case 0:
					printf("######Hmmm, how many Rupees can I offer\nfor each ################... \nDoes ####### seem fair?")
					goto flw_656
				  case 1:
					goto flw_494
				}
			}
		  case 1:
			goto flw_410
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 442), ('param3', 31)])
		printf("#####\nAh, hey... What do you need?\n#####Shopping!#####Um...")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 158)])) {
		  case 0:
			printf("######You want to do some shopping? Just\ncome back to the shop tomorrow.")
		  case 1:
			printf("######So when you say #um\"...that means\nyou don't have a good reason to be\nhere, huh?")
			printf("What? You think I'm being gruff?\nYou think I'm totally different during\nthe day?\n\n######Well, I get tired of having to be a\nsmiley shopkeeper all day, all right?\nJust don't think that this is the real\nme.\nAnyway, enough about that... You're\nhere to make some money at my\n#####night market#####, am I right?\n#####Night market?#####Yep!")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 156)])) {
			  case 0:
				printf("######Ah, it's your first time here, isn't it?\nOh well...")
				flw_434:
				printf("######Night is when I do my buying. See,\n#####I buy treasure#####, but that's not to say\nI'll buy just any old thing. I only deal\nin #####specific types of treasure#####.\n######Right. Let's get on with it, shall we?")
				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
				goto flw_495
			  case 1:
				printf("######Why didn't you tell me that from the\nbeginning?")
				goto flw_434
			}
		}
	}
}

void entrypoint_115_20() {
	start()
	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6656), ('next', 57), ('param3', 13)])
		printf("#####TUgh... Nngh...nngh...\nH-help...")
		switch (loadzone_temp_flags[17 /* 0xB 02 */]) {
		  case 0:
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 529), ('param3', 4)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 25), ('param2', 6656), ('next', 536), ('param3', 13)])
		printf("######Ugh... Stupid #####Pipit#####... So much hate\nfor you... For crying out loud...")
	}
}

void entrypoint_115_03() {
	start()
	switch (story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */]) {
	  case 0:
		switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
		  case 0:
			switch (story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */]) {
			  case 0:
				flw_479:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 183)])) {
				  case 0:
					printf("######Oh, it's you, ####.\nI thought you might come by.\nLet's just say a little bug told me...")
					flw_476:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 475), ('param3', 33)])
					printf("Let's see... Tonight I feel like buying:\n###########\n################\n#####################\n#####I'll sell!#####No deal.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 181)])) {
					  case 0:
						flw_472:
						printf("Which do you want to sell me?\n#####################.#####################.#####################.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 1), ('param4', 3), ('param5', 178)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 461), ('param3', 33)])
							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 172)])) {
							  case 0:
								printf("################, eh?\nFor one of those, how many Rupees\nshould I part with? Hmmmm...\nHow about #######?")
								flw_657:
								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 458), ('param3', 12)])
								printf("How many have you got there--#######?\nAnd how many of those are you looking\nto sell?\n#####1.#####5.#####All of them!#####No deal.")
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 166)])) {
								  case 0:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 452), ('param3', 33)])
									flw_452:
									switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 164)])) {
									  case 0:
										printf("######I love a good ################...\nAnd you're selling ####### of 'em, eh?\nHow many Rupees should I throw your\nway... I'm gonna say #######.\n#####OK!#####Never mind.")
										switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 162)])) {
										  case 0:
											printf("OK, here's your money.")
											OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 448), ('param3', 12)])
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 450), ('param3', 33)])
											printf("######Thanks, mantis face!\n\n\n\nI mean that in a good way! I love\nmantises. Well, I'm looking forward\nto seeing more of your bugs,\n####.")
										  case 1:
											flw_473:
											printf("######Well, that's too bad...\n######I guess I'll #bee\" seeing you...")
										}
									  case 1:
										printf("######You don't have that many... So I'll ask\nyou again...")
										goto flw_657
									}
								  case 1:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 452), ('param3', 33)])
									goto flw_452
								  case 2:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 452), ('param3', 33)])
									goto flw_452
								  case 3:
									goto flw_473
								}
							  case 1:
								flw_470:
								printf("######You don't have even one of those!\nYou look like you wouldn't harm a fly,\nbut you're still trying to rip me off?\n\n######Or do you just want to sell me a\ndifferent bug?\n#####Yep!#####No deal.")
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 170)])) {
								  case 0:
									goto flw_472
								  case 1:
									goto flw_473
								}
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 462), ('param3', 33)])
							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 174)])) {
							  case 0:
								printf("################, hmm?\nFor one of those, how many Rupees\nshould I part with? Hmmmm...\nHow about #######?")
								goto flw_657
							  case 1:
								goto flw_470
							}
						  case 2:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 463), ('param3', 33)])
							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 176)])) {
							  case 0:
								printf("################, hmm?\nFor one of those, how many Rupees\nshould I part with? Hmmmm...\nHow about #######?")
								goto flw_657
							  case 1:
								goto flw_470
							}
						}
					  case 1:
						goto flw_473
					}
				  case 1:
					printf("######Hey, ####. Something's\nbugging me today. I mean that in a\ngood way...")
					goto flw_476
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 719), ('param3', 31)])
				printf("##############... Want to hear\nsomething neat? OK, so...earlier in\nthe night, I went back into those\ncaves behind the waterfall.\nI saw some #####Blessed Butterflies #####in this\nempty area. I wonder why they were\nswarming around that spot...\nWeird, right? \nIf you want to see them for yourself,\nyou should go into the caves at night.")
				printf("Oh, right. Let's see what kind of bugs\nyou've got for me today.")
				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
				goto flw_476
			}
		  case 1:
			goto flw_479
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 666), ('param3', 31)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 427), ('param3', 13)])
		printf("######Oh. It's you... ########.\nWhat do you want with me?")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 416), ('param3', 13)])
		printf("################Huh? What am I doing?\n\n\n\n#####################Bugs#####... I'm looking at bugs.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 577), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 418), ('param3', 6)])
		printf("######Bugs are amazing. Even more\namazing than Groose in a lot of ways...\n\n\nOh...#####wait. I'm not saying Groose isn't\nas amazing as a bug.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 417), ('param3', 39)])
		printf("Look, #####I just really like bugs#####... I want to\ncollect all kinds of bugs. Sometimes,\nI even dream about having, like, an\nentire island full of bugs...")
		printf("######...How about this!\n\n\n\n########, here's the plan.\n#####If you find a bug, come sell it to me#####.\nWhen it comes to bugs, Rupees are \nno object.\n#####Sure!#####Er...")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 152)])) {
		  case 0:
			printf("######Mwah hah hah! Now all my\nbug-collecting ambitions will finally\nbe realized...")
			flw_420:
			printf("So if you ever want to sell any bugs,\njust bring them to me. I usually hang\nout here at night...\n\n######I won't just buy any bug, though.\nWhat I buy on any given day just\ndepends on the #####mood##### I'm in.\n\nOh, one other thing... This might bug\nyou a little bit, but I only want to\n#####do these deals at night#####. I have a\nreputation to protect, you know.\n######Got it, ####? I don't mean\nto be a pest, but I'm counting on you.\nI can't stop thinking about bugs...")
			printf("...So let's get to it. Want to sell me\nsomething?")
			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
			goto flw_476
		  case 1:
			printf("######What? I was sure you'd go for that...\nDon't make me sic Groose on you...")
			goto flw_420
		}
	}
}

void entrypoint_115_04() {
	start()
	printf("######Nnngghh snrrrk...\nSNNNNRRRKK...")
}

void entrypoint_115_21() {
	start()
	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
	  case 0:
		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 115), ('param2', 28), ('next', -1), ('param3', 7)])
		  case 1:
			switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
			  case 0:
				switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
				  case 0:
					switch (loadzone_temp_flags[20 /* 0xB 10 */]) {
					  case 0:
						printf("######Hee hee! Thanks, ####.\nBecause of you, I have an amazing new\nboyfriend!\n\nBut I feel kind of bad about #####Cawlin#####,\nyou know?")
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 115), ('param2', 28), ('next', -1), ('param3', 7)])
					}
				  case 1:
					printf("######Thank you for bringing me the letter,\n####.\n\n\n######Sigh... I wonder what #####Pipit##### would think\nif he knew about this...")
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 133), ('param3', 31)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 587), ('param3', 33)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1024), ('next', 73), ('param3', 13)])
				printf("######Sigh... Oh, #####Pipit#####... How can I get you to\nnotice me?")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 74), ('param3', 33)])
				printf("######Ah! ########!\n\n\n\nUhh, what's the matter? Do you, uh...\nneed something?\n#####I wonder if he heard what I was just talking about...?#####\n#####Give the letter.#####Don't give it.")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 30)])) {
				  case 0:
					printf("######Huh? A letter? For me####\n.####\n.####\n.####\n?\nCould it be from #####Pipit#####?!\n#####Here you go!#####Never mind.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 32)])) {
					  case 0:
						printf("######Oh... Thank you. I'll just take that.")
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 3072), ('next', 593), ('param3', 13)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 598), ('param3', 6)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 23), ('param2', 0), ('next', 599), ('param3', 39)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 611), ('param3', 6)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 591), ('param3', 49)])
						printf("######I wonder who it's from?!")
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 81), ('param3', 6)])
						printf("######Whoa...##### #####That's some really terrible\nhandwriting...#####\n\n\n######Anyway, never mind that... Let's see\nwhat it says...")
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', -256), ('next', 665), ('param3', 13)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 104), ('next', 597), ('param3', 24)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 600), ('param3', 6)])
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4608), ('next', 595), ('param3', 13)])
						printf("...#Greetings. My love for you is wider\nthan the horizon and deeper than the\nclouds.\"\n\n#######I would very much like it if you would\ngo out with me.\nYour brave knight,\n#####Cawlin#####\"\n\n######.####\n.####\n.####\n.####\n.####\n.####\n.####\n.####\n.\n\n\n\n######Wow... This #####Cawlin #####guy... Isn't he one\nof #####Groose#####'s flunkies?\n\n\n######And...this... This is a love letter from\nthat #####Cawlin##### kid...right?\n\n\n######Hoo boy...")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 589), ('param3', 39)])
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1792), ('next', 590), ('param3', 13)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 612), ('param3', 6)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 82), ('param3', 16)])
						printf("######So, yeah... I have to say, he really put\nhis heart into it and everything...\n\n\nI don't know... Maybe I should consider\ngoing out with #####Cawlin#####.\n\n\n######...Hah! As if!\n\n\n\n######Sigh... I wonder what #####Pipit##### would think\nif he knew about this...")
						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
					  case 1:
						printf("######What kind of a trick is that?\nStop messing around!")
					}
				  case 1:
					printf("######Huh? You're a strange one, aren't you,\n####?")
				}
			}
		}
	  case 1:
		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
		  case 0:
			printf("######Hey, ####, what do you\nthink about #####Pipit#####?\n\n#####He's nice.#####Why?")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 28)])) {
			  case 0:
				printf("######Yes! Yes, he is! He's kind and caring.\nAnd handsome and wonderful!\n\n\n######Oh dear... I don't know what's come\nover me all of a sudden...\n\n\n######Sorry for bothering you with such an\nawkward question...")
			  case 1:
				printf("######Huh? Oh... Well, you know... I just...\n\n\n\n######Oh, forget about it. I don't even know\nwhat I was thinking asking you a\nstrange question like that. Silly me...")
			}
		  case 1:
			switch (loadzone_temp_flags[15 /* 0x8 80 */]) {
			  case 0:
				printf("######That outfit looks great on you!\n\n\n\n######Not as good as it looks on Pipit,\nthough!")
			  case 1:
				printf("######Ah! #############! \nCongratulations on advancing!\n\n\n######Wow... So this year's knight's uniform\nis dark green, eh? #####Looks neat! \n\n\n####\n#I bet Zelda will be really happy to see\nyou in that...\n\n\n######Oh, and don't worry... I'm sure she's\nfine, wherever she is! She'll definitely\nbe home soon.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', -1), ('param3', 4)])
			}
		}
	}
}

void entrypoint_115_05() {
	start()
	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
	  case 0:
		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
		  case 0:
			switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
			  case 0:
				switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
				  case 0:
					switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 3584), ('next', 105), ('param3', 13)])
						printf("######Finally, I can sleep! Thank you!")
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 3584), ('next', 23), ('param3', 13)])
						printf("######Oh, thank you, thank you! I appreciate\neverything you've done.")
					}
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 123), ('param3', 31)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 160), ('param2', 1), ('next', 124), ('param3', 23)])
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 60)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 19), ('param3', 31)])
						printf("######Is that...? The baby's ###############!\nYou found it!")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 586), ('param3', 47)])
						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 713), ('param3', 15)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 714), ('param3', 17)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 556), ('param3', 6)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 555), ('param3', 39)])
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 3328), ('next', 585), ('param3', 13)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 557), ('param3', 48)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 20), ('param3', 6)])
						printf("Who's a sleepy baby?\nTime for beddy-bye.####x#")
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3584), ('next', 559), ('param3', 13)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 29), ('param2', 0), ('next', 21), ('param3', 39)])
						printf("######Whew. The baby seems to have settled\ndown nicely. I bet the baby will sleep\nwell tonight. Oh! That means I'll\nfinally get a good night's sleep too!\n######Thank you so much! I won't forget\nwhat you did for me.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 715), ('param3', 4)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 125), ('param3', 42)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 716), ('param3', 43)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 30), ('param2', 0), ('next', -1), ('param3', 39)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 18), ('param3', 31)])
						printf("######Ahh...I hope someone finds the \nbaby's ###############...\n\n\n######A #####bird flew away with it#####. It must still\nbe #####somewhere in town#####... ######Sigh.\nIt looks like I won't get any sleep\ntonight, either...")
					}
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 561), ('param3', 31)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 560), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 3072), ('next', 562), ('param3', 13)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 75), ('next', 11), ('param3', 6)])
				printf("#####...####-###########Sigh...####A#")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 565), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3840), ('next', 564), ('param3', 13)])
				printf("Ahhh... Doesn't look like I'll get much\nsleep tonight...again.\n#####Why?#####Are you tired?")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 2)])) {
				  case 0:
					printf("######Sorry to worry you...")
					flw_26:
					printf("######The baby just goes on and on like this\nall night. I haven't slept a wink in...\nAhhh... I don't even know how long.\n\nThe baby usually sleeps like a sack of\nrocks. But that was before we lost\nthe you know what...\n#####No, what?#####Oh, that?")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 8)])) {
					  case 0:
						printf("######The baby's ###############.")
						flw_15:
						printf("######If we had the you know what, then\nthe baby would settle down. But we \nlost it the other day.\n\n#####A bird picked it up #####in its beak and #####flew\noff with it#####. Maybe the bird thought it\nwas food. I don't know...\n\n######Of course, the bird wouldn't have \neaten it, so I think it must still be\n#####somewhere here in town#####. I just don't\nknow where...\n######Sigh... It sure would be nice if\nsomeone would find it for me.")
						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
					  case 1:
						printf("######So you know about it? Yes, the baby's\n###############.")
						goto flw_15
					}
				  case 1:
					printf("######Well, you can see what my nights are\nlike, right?")
					goto flw_26
				}
			}
		  case 1:
			flw_9:
			printf("######Ahhh... This child just won't go to\nsleep for me... What can I do? Ahhh...\n#####That's terrible!#####And your wife?")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 62)])) {
			  case 0:
				printf("######Yeah, it is pretty terrible... But even\nwhen babies cry, they're still really\ncute... If they're yours, I guess.\n\nYou'll understand someday when\nyou've got one of your own!")
			  case 1:
				printf("######Ah, the missus####\n.####\n.####\n. She gets tired from\nrunning the business all day.\n\n\n######I have to let her get some rest\nsometime, right...? Ha ha...")
			}
		}
	  case 1:
		goto flw_9
	}
}

void entrypoint_115_22() {
	start()
	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
	  case 0:
		switch (story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */]) {
		  case 0:
			switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
			  case 0:
				switch (loadzone_temp_flags[20 /* 0xB 10 */]) {
				  case 0:
					printf("######Hey, ####! Thanks to you, \nI found a wonderful girlfriend!\nThank you so much!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 115), ('param2', 27), ('next', -1), ('param3', 7)])
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 3072), ('next', 548), ('param3', 13)])
				printf("######Erm... Hmm...\n\n\n\n######Let's just say you had an interest \nin how that relationship turned out.\nDo you think it would be best to go \nand ask her about it?\n######I mean... That isn't to say that I have\na personal interest here, though.\nI'm just interested in the emotion\nof love...in general...")
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 546), ('param3', 31)])
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 1024), ('next', 92), ('param3', 13)])
			printf("######What's up, ####?")
			printf("######...Huh? #####Karane##### got a love letter?\n\n\n\n######I-I see... That's interesting...\nWow...\n\n\n######Erm... Wh-what do you think she\nintends to do...?\n#####Date him.#####Beats me.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 42)])) {
			  case 0:
				printf("######What?! Th-this is a big problem,\nisn't it?!")
				flw_96:
				printf("######...Oh! I mean, uhh... It's not like\nthere's anything going on between\nme and #####Karane#####, you know?\nWe're just friends...\nSo it's not my business who she goes\nout with. I don't have much to say\nabout it.\n\n######But you know...I do have a duty to\nmake sure that everyone is living up\nto the high ideals of our knight school,\nright?\n######I mean, ideal love is unfettered and\npassionate. Anything less than that\ncan't really be called love at all, you\nknow what I mean? \n######So I should just step in and make sure\nthat she's found a true love that\naspires to the highest ideals of our\nfine educational institution, right?\n######And what about me? I have the right to\nexperience an unfettered and\npassionate love too, don't I?\n\n######You understand, don't you,\n####? I'm not wrong\nabout this, am I?\n#####I don't know.#####You like her?")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 58)])) {
				  case 0:
					printf("######I see... Of course. You've got more\nimportant things to worry about\nthan this right now!")
					flw_122:
					printf("######Well, either way...\n\n\n\n######I don't suppose you'd mind asking her\nwhat her decision is going to be,\nwould you?")
					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
				  case 1:
					printf("######Wha-what?! Don't be ridiculous,\n####!\n\n\n######I don't even understand how you could\nmake such a wild accusation!")
					goto flw_122
				}
			  case 1:
				printf("######So you don't know? Well... That's going\nto bother me until I find out...")
				goto flw_96
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 115), ('param2', 27), ('next', -1), ('param3', 7)])
	}
}

void entrypoint_115_06() {
	start()
	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 256), ('param3', 31)])
		switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
		  case 0:
			printf("######I'll do my best! And someday I'll be\nstrong. Come back soon so I can show\nyou the new me!")
		  case 1:
			switch (bottles[4 0x0004]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 277), ('param3', 32)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 260), ('param3', 13)])
				printf("######I just...whoo...need a breather...\n########, what have you got\nthere? Is that... a #####Stamina Potion#####?\n\nI don't suppose you'd...let me have\nthat, would you?\n#####Take it!#####Sorry...")
				flw_261:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 116)])) {
				  case 0:
					printf("######Really?! Thank you! I owe you one!")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3092), ('param2', 7936), ('next', 271), ('param3', 13)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 270), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 267), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 135), ('next', 265), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 279), ('param3', 33)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 280), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 264), ('param3', 6)])
					printf("######Whoo-yeah! I can feel my muscles\nperking back up already!")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 269), ('param3', 13)])
					printf("######It's just that...at this rate, I don't\nknow if I'll ever get strong and burly.\n#####Try your best!#####Yes, you can!")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 291), ('param3', 13)])
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 120)])) {
					  case 0:
						printf("######Right! That's exactly what I need to do.\nNo more whining! I need to push\nmyself.")
						flw_294:
						printf("######Thank you, ####. \nI'll make you proud. You'll see! I'll be\nsuper burly in no time!\n\n######OK, back to training! Come back soon\nso I can show you the new me!")
						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
					  case 1:
						printf("######Wow... Really? It's great to hear\nyou're so confident in me. Maybe I can\nactually do this...")
						goto flw_294
					}
				  case 1:
					printf("######Oh... Of course... I don't mean to put\nyou out.")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', 3072), ('next', 287), ('param3', 13)])
					printf("######Oh...but don't worry about me...\nI still have some get-up-and-go in\nme... I think... Maybe...")
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 274), ('param3', 32)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 276), ('param3', 13)])
				printf("######Whew...whoo... It's no good...\n\n\n\nIf only I had #####a potion that would give\nme stamina#####, then maybe I could reach\ndown deep for that 110%...")
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 289), ('param3', 13)])
				printf("######...Fat chance, right? I suppose I'll have\nto just put my nose to the grindstone...\nYep, just buckle down my bootstraps\nand all that... Right?\nAnyway, I'll just keep working on this\nfor as long as I can! All on my own,\nI guess... Sigh...")
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 273), ('param3', 31)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 272), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', 6912), ('next', 254), ('param3', 13)])
		printf("######Whew... Let me catch my breath...\n\n\n\n######Hey... ########! Oh!\nWhat am I doing? I'm training!\n\n\nI can't even lift a single barrel...\nPathetic, I know! That's why I want\nto get stronger.\n\nI'm a bit embarrassed about it, though,\nso I do it at night when no one's\naround to laugh at me...\n\n######But it's not going so well. I'm just too\ntired. I was actually about ready to\nthrow in the towel...")
		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
		switch (bottles[4 0x0004]) {
		  case 0:
			printf("######Oh! ########, what have you\ngot there? That's not... It's not a\n#####Stamina Potion#####, is it?\n\nI don't suppose you would mind letting\nme have that, would you?\n#####Take it!#####No way.")
			goto flw_261
		  case 1:
			printf("Ahh...if only there were #####a potion that\nwould give me stamina#####, then I could\ndrink that and maybe find that last\nlittle bit of strength I need...")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 285), ('param3', 13)])
			printf("######...Fat chance, right? I suppose I'll have\nto just put my nose to the grindstone...\nYep, just buckle down my bootstraps\nand all that... Right?\nAnyway, I'll just keep working on this\nfor as long as I can! All on my own,\nI guess... Sigh...")
		}
	}
}

void entrypoint_115_23() {
	start()
	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
	  case 0:
		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
		  case 0:
			switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
			  case 0:
				flw_534:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 115), ('param2', 24), ('next', -1), ('param3', 7)])
			  case 1:
				printf("######What now, ####?!\nTonight my head is swimming\nwith thoughts of Karane!\n\nIf you need to talk to me about\nsomething, it can wait until\ntomorrow. Now get lost!")
			}
		  case 1:
			goto flw_534
		}
	  case 1:
		printf("######Heh heh heh... I'm not afraid of\n#####Groose#####! His room is mine now!")
	}
}

void entrypoint_115_07() {
	start()
	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 302), ('param3', 31)])
		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
		  case 0:
			printf("##############! You're going to be\nshocked by how strong I am!\nCome back and see me soon!")
		  case 1:
			switch (bottles[4 0x0004]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 331), ('param3', 32)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 305), ('param3', 13)])
				printf("######Whoo... I can't seem to catch my\nbreath...\n\n\nHey, ####, I wonder...\nWould you mind sharing some \n#####Stamina Potion##### with me?\n#####Take some!#####Sorry.")
				flw_306:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 128)])) {
				  case 0:
					printf("######Really? Wow, thanks! I'll gladly take\nit, then.")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3092), ('param2', 7936), ('next', 312), ('param3', 13)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 311), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 310), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 135), ('next', 309), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 334), ('param3', 33)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 335), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 345), ('param3', 6)])
					printf("######Whoo-hoo! That's the stuff! It's like a\nrefreshing splash of ENERGY!")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 346), ('param3', 13)])
					printf("######...Sometimes I worry, though. All this\ntraining, and no results! How long do I\nneed to train before I start to get\nstronger?\nWhat do you think, ####?\nHow many push-ups do you think I\nneed to do to get strong?\n#####About 1,000!#####Not about numbers.")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3073), ('param2', 2048), ('next', 349), ('param3', 13)])
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 138)])) {
					  case 0:
						printf("#####SUlp... That many? Really?\n\n\n\n######OK, then... I guess there really is no\ngain unless there is also pain. So much\npain...")
						flw_352:
						printf("######I guess that makes sense. Now that I\nknow that, I'll definitely start getting\nstronger!\n\n######Come back soon so you can see how\nI'm doing!")
						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
					  case 1:
						printf("######It's not about numbers? ...Of course!\n\n\n\n######You mean I should just keep at it until\nI've forgotten how many I've done,\nright?")
						goto flw_352
					}
				  case 1:
					printf("######Of course, of course... Sorry, I was\nbeing foolish and presumptuous.")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 343), ('param3', 13)])
					printf("It's OK. I'll be fine! I'll just keep at it\non my own.")
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 329), ('param3', 32)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', -256), ('next', 303), ('param3', 13)])
				printf("######Whew...whoo... It's no good...\n\n\n\nIf only I had #####a potion that would give\nme stamina#####, then maybe I could reach\ndown deep for that 110%...")
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 341), ('param3', 13)])
				printf("######No, no... I can't keep asking you for\nfavors like that! I'll just keep working\nat it on my own.")
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 328), ('param3', 31)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 327), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3088), ('param2', 6912), ('next', 296), ('param3', 13)])
		printf("######Oh...whoo...I'm sweating up a storm.\nGood evening, ####!\n\n\n######I've been training hard ever since we\nlast spoke, but I still feel so sluggish...\nMaybe I've just run out of energy.")
		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
		switch (bottles[4 0x0004]) {
		  case 0:
			printf("######Ah! ########, is that...\nIs that a #####Stamina Potion##### you're \ncarrying?\n\nWould you mind if I had some?\n#####Take some!#####Sorry.")
			goto flw_306
		  case 1:
			printf("Hey, ####. Do you think\nyou could give me some more\n#####Stamina Potion#####?")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3079), ('param2', -256), ('next', 339), ('param3', 13)])
			printf("######No, no... I can't keep asking you for\nfavors like that! I'll just keep working\nat it on my own.")
		}
	}
}

void entrypoint_115_24() {
	start()
	flw_58:
	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
	  case 0:
		switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
		  case 0:
			printf("")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 686), ('param3', 31)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 687), ('param3', 47)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 356), ('next', 689), ('param3', 15)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 690), ('param3', 16)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 830), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 688), ('param3', 33)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 568), ('param3', 48)])
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3072), ('next', 59), ('param3', 13)])
			printf("######Hey, ####! Did you hand\nover that letter like I asked?\n#####Actually...#####Huh?")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 22)])) {
			  case 0:
				printf("######Wh-what did you just say?! You gave it\nto that weirdo in the restroom?!")
				flw_64:
				printf("######Didn't I specifically tell you NOT to\ngive it to the weirdo in the restroom?!\nSeriously! I said it like five times!\nI know I did!\n######You fool! How could you?! Anyone who\nblocks the path of true love deserves\nto be kicked by a bird!\n\nI hate you, ####!")
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 7936), ('next', 683), ('param3', 13)])
				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 14), ('param2', 0), ('next', 691), ('param3', 14)])
				printf("######Uwahhhhh!!!")
				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 12), ('param2', 256), ('next', 698), ('param3', 15)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 696), ('param3', 6)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 28), ('param2', 0), ('next', 695), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 1024), ('next', 693), ('param3', 13)])
				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 12), ('param2', 0), ('next', 65), ('param3', 14)])
				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
			  case 1:
				printf("######Y... You... Are you out of your mind?!\n\n\n\n######Seriously?! You gave it to that creep\nin the restroom? Really?! You gave\nit to that restroom weirdo?!")
				goto flw_64
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 113), ('param3', 31)])
		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
		  case 0:
			switch (story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 6912), ('next', 544), ('param3', 13)])
				printf("######Ahhh...so #####Karane##### finally knows how\nI feel about her...\n\n\n###########What should I do...?\nMy heart is pounding...")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 24), ('param2', 6912), ('next', 542), ('param3', 13)])
				printf("######What?! You actually did it?!\nYou gave the letter to #####Karane#####...?!\n\n\n######Oh no. OH NO. What now?! What do\nI do? Maybe I should go see what she\nthought of the letter...\n###########Ahh, but...this is so embarrassing...")
				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 40), ('param3', 13)])
			printf("######Get it straight, ####.\nI need you to give the letter to the cute\nupperclassman with the #####round hat#####.\n\n######And don't even think about giving it to\nthat #####weirdo in the restroom#####! Not even\nby mistake! Don't you DARE!")
		}
	}
}

void entrypoint_115_25() {
	start()
	switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
	  case 0:
		switch (story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 53), ('param3', 9), ('param4', 2), ('param5', 108)])) {
			  case 0:
				printf("Hrrrnnnnghhh...!")
			  case 1:
				printf("3,985...3,986...\n3,987...3,988...")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 53), ('param2', 0), ('next', -1), ('param3', 28)])
			}
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 53), ('param3', 9), ('param4', 2), ('param5', 104)])) {
			  case 0:
				printf("Snrrrrrk... Hrrmphh...")
			  case 1:
				printf("#####55...56...57...")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 53), ('param2', 0), ('next', -1), ('param3', 28)])
			}
		}
	  case 1:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 53), ('param3', 9), ('param4', 2), ('param5', 100)])) {
		  case 0:
			printf("Nnghh... Snrrrk... Hrmmph...")
		  case 1:
			printf("#####5...6...7...")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 53), ('param2', 0), ('next', -1), ('param3', 28)])
		}
	}
}

void entrypoint_115_08() {
	start()
	switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
	  case 0:
		switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
		  case 0:
			printf("######I could just keep going and going!\nNext, I'm going to train so hard that\nI can lift a barrel with one finger.")
		  case 1:
			printf("######Phew! Not a bad warm-up...")
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 315), ('param3', 31)])
		printf("######Phew! Well, that was a nice warm-up!\n\n\n\n######...Hey, ####! I was just\nhoping you'd come by. I wanted to ask\nyou something.\n\n######The other day I tried lifting some\nbarrels, and I was able to do it with\none arm!\n\n######Do you think that means I've got\nenough muscle? What do you think,\n####? Do I look strong?\n#####Too strong!#####For sure.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 132)])) {
		  case 0:
			printf("######Huh? Aww, you're just saying that.\nBut it's still nice to hear it.")
			flw_320:
			printf("######It's all thanks to you,\n####.\n\n\n######I would have gotten discouraged if\nyou hadn't come by to cheer me on.\nYou gave me motivation!\n\n######Thank you so much, ####!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 316), ('param3', 4)])
			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
		  case 1:
			printf("######Really? Thanks! I'm so happy.")
			goto flw_320
		}
	}
}

void entrypoint_115_09() {
	start()
	switch (story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */]) {
	  case 0:
		switch (story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 11), ('param3', 9), ('param4', 2), ('param5', 277)])) {
			  case 0:
				printf("######Hey, ####, thanks for\ntaking care of my sister like that.\nI won't forget what you did.")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 115), ('param2', 26), ('next', -1), ('param3', 7)])
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 731), ('param3', 31)])
			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
			  case 0:
				printf("##############! My sister made\nit home safely! ####\n#Thank goodness... \nI was so worried about her.\n\n######Thanks so much for your help,\n####!")
				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 732), ('param3', 28)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
			  case 1:
				printf("##############! My sister is safe!\n\n\n\n####\n#I'm so relieved! I was getting so\nworried there. All these worst-case\nscenarios kept popping into my head.\n\nWhat? You're the one who gave my\nsister the bird medicine?#####\n\n\n######Thank you so much! I don't have much\nto give you to repay you, but please\ntake this with my gratitude!")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 241)])) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 20), ('param4', 2), ('param5', 243)])) {
					  case 0:
						printf("######Oh, that's a shame. I wanted to\ngive you this #####Empty Bottle#####, but it looks\nlike your pouch is full and you're also\nout of room at the Item Check...\nBut I'll hang on to it for you. If you can\nget rid of something from your pouch\nor make some room at the Item Check,\ncome see me later and it's all yours.")
					  case 1:
						flw_735:
						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
						give_item(153 0x99);
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 813), ('param3', 28)])
						printf("######It may not look like much, but believe\nme, there's a dozen uses for a fine\nbottle like that. Thanks again!")
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
					}
				  case 1:
					goto flw_735
				}
			}
		}
	  case 1:
		switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 183), ('param3', 31)])
			switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
			  case 0:
				switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
				  case 0:
					switch (bottles[5 0x0005]) {
					  case 0:
						printf("######What's the deal, ####?\nYou need to hurry up and take those\n#########7 #####to my sister!\n\n####\n#I'm counting on you!")
					  case 1:
						printf("######Where did all the #########7\n#####go? You haven't given them to her yet?\n\n\n####\n#To get more #########7#####, just\n#####collect them from mushrooms#####. I'm\ncounting on you, ####.")
					}
				  case 1:
					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
					  case 0:
						printf("######Great--you've made room in your\npouch. Well then, take these!\n\n\n#########\n######They're##### ####7#####.\nThey'll heal the bird's injury.")
						flw_231:
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 98)])) {
						  case 0:
							printf("######But, wait... You're carrying too much.\n######Make some space in your pouch,\nand then come and talk to me.")
							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
						  case 1:
							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
							give_item(55 0x37);
							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
							printf("######If she uses this, it will quickly heal\nthe bird. She should then be able to\nmake her own way home.\n######Take it to my sister!\n######You can keep the #####Empty Bottle #####once\nshe's had a chance to use the stuff\ninside.\n\nI'm counting on you, \n####!")
							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
						}
					  case 1:
						flw_199:
						printf("######What?! You found my sister?!\nHer bird's injured and can't fly?!\n\n\n####\n#That's terrible! In that case, take her\nthis as quick as you can!\n\n\n################These are #########7#####. \nThey will heal the bird's injury.")
						goto flw_231
					}
				}
			  case 1:
				printf("####\n#I'm so worried... I feel just...sick.\nWhat was she thinking?\n\n\nI always made her take a #####bottle#####\nof potion with her...but today I\nforgot...")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 837), ('param3', 33)])
				printf("######My sister said she was curious about\nthat #####colorful island##### that appeared\nrecently, so I suspect she's somewhere\nin the #####south###############western #####sky#####.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 839), ('param3', 17)])
				printf("######Would you please help us look for her,\n####?")
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 177), ('param3', 31)])
			printf("####\n#Ugh... I'm so worried...\nSo worried...\n#####What's wrong?#####Calm down.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 70)])) {
			  case 0:
				printf("######Ahh, ####. \nYou really want to hear about all my\ntroubles? That's kind of you.")
				flw_181:
				printf("######So you see, a short while ago my #####little\nsister #####went out for a quick flight, but\nshe hasn't come home yet.\n\nIt was getting late for her to still be\nout, so I went looking for her\neverywhere... But I couldn't find her.\n\n######I just hope nothing has happened.\n...I'm worried sick thinking about it.")
				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
				  case 0:
					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
					goto flw_199
				  case 1:
					printf("######Hey, ####, would you\nmind helping me look for her?")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 833), ('param3', 33)])
					printf("######She said she was curious about that\n#####colorful island##### that appeared recently,\nso I suspect she's somewhere in the\n#####south###############western #####sky#####.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 835), ('param3', 17)])
					printf("######I'm counting on you,\n####!")
					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
				}
			  case 1:
				printf("######CALM?! How could I be calm at a time\nlike this?! ...I'm sorry. I know I\nshouldn't be yelling at you.\nThat won't help.")
				goto flw_181
			}
		}
	}
}

void entrypoint_115_26() {
	start()
	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
	  case 0:
		printf("######The Isle of the Goddess has...\ndisappeared? I mean, how does\nthat even happen?!\n\n####\n#This can't be good. Something bad is\nabout to happen. I know it. I mean,\nother than the island disappearing...")
		flw_791:
		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
		  case 0:
		  case 1:
			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
			  case 0:
				printf("######Just a while back I bumped into #####Strich#####,\nwho told me he'd found some #####rare bug#####.\nThe guy headed for the thunderhead\nlooking happier than I'd ever seen him.\nLooks like he's setting himself up to\nbomb his exam again...")
			  case 1:
				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
				  case 0:
					printf("######That #####Strich##### guy said he was getting\na bunch of insects together so he could\ncreate Bug Heaven on an island #####inside\nthat thunderhead#####!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 769), ('param3', 31)])
					printf("####\n#Hey, you have a classmate named\n#####Strich#####, right?\n\n\nHe said he'd discovered some kind of\ninsect paradise #####inside that big\nthunderhead#####. That guy really loves\nbugs, doesn't he?\n######I wonder what he intends to do\nwith this insect paradise...")
					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
				}
			}
		}
	  case 1:
		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
		  case 0:
			printf("######Did you hear all that racket just now?\nIt sounded like the island was fixing to\nshake itself to bits. What was all that?")
			goto flw_791
		  case 1:
			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
			  case 0:
				printf("######Were you up to something down in the\nplaza? All of a sudden the whole sky\ngot real dark.")
				goto flw_791
			  case 1:
				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
				  case 0:
					printf("####\n#Doesn't it seem weird that all these\nbutterflies have been gathering here in\nthe plaza? There's nothing I can see\nthat would draw them here.")
					goto flw_791
				  case 1:
					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
					  case 0:
						printf("######Hey, ####! Always in a\nhurry to get somewhere, aren't you?")
						goto flw_791
					  case 1:
						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
						  case 0:
							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
							  case 0:
								printf("######Hey there, ####! Have you\nseen those three troublemakers around\nhere recently? It's been a while since\nI've seen them hanging around.\nMaybe failing the test to get promoted\nto the senior class got them to finally \nbuckle down and study for once.")
							  case 1:
								printf("######Hello, ####! Did I tell you\nI went to see that Fun Fun Island place\nmy sister was talking about?\n\nThe guy I met there was telling me how\nhe dropped his #####party wheel #####below the\nclouds, whatever that is. He looked\npretty broken up about it.\nIf you ask me, he'd best get over it.\nEveryone knows that once something\nfalls below the clouds, it's long gone!")
							}
						  case 1:
							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
							  case 0:
								printf("####\n#Hey! Did you see what's going on?!\nThe Light Tower is shooting a beam of\nlight off into the thunderhead.\n\nIt's almost like the tower is telling us\nto head into that big mass of\nthunderclouds...or something.")
							  case 1:
								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
								  case 0:
									flw_781:
									printf("######Hey there, ####! I haven't\nseen Zelda around lately. Do you know\nwhat happened to her?")
								  case 1:
									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
									  case 0:
										printf("######Hey there, ####!\n\n\n\n####\n#What's that? Something about #####two\n##########sails#####?##### Sorry, but I've got zero interest\nin silly riddles. Why don't you go ask\nthe town #####fortune-teller##### for help?")
									  case 1:
										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
										  case 0:
											goto flw_781
										  case 1:
											printf("######Hey, ####, thanks for\ntaking care of my sister like that.\nI won't forget what you did.")
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void entrypoint_115_27() {
	start()
	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
	  case 0:
		printf("######Can you believe it? The Isle of the\nGoddess fell right out of the sky!\n\n\n#####It breaks my heart to see it missing\nfrom Skyloft...######but, you know, I think\nit was a message from the goddess,\ntelling us to make the most of our lives.")
		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
		  case 0:
			printf("###########Besides, she's not the only goddess in my life...")
		  case 1:
		}
	  case 1:
		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
		  case 0:
			printf("######Hey, ####. Listen to this...\nIt's a confidential piece of information\nthat hasn't been shared with anyone\nbut you.\n######So, I was flying around outside when\nall of a sudden this weird building\npopped out of the bottom half of the\nIsle of the Goddess!\n######Just what's going on here in Skyloft?!")
		  case 1:
			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
			  case 0:
				printf("######Hey, ####! \nYou're looking pretty upbeat lately.\n\n\n######That's the spirit! #####Zelda will be home\nbefore you even know it. Just keep on\nbelieving that while you wait for her\nto come back!")
			  case 1:
				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
				  case 0:
					printf("######Hey, ####!\nHow are you doing?\n\n\n######Huh?! What's this about a Triforce\nhidden by the goddess?\n\n\n######Uhhh, I really don't know anything\nabout that...\n\n\n######If you want to know about that kind\nof stuff, then you should ask one of\nthe instructors.")
				  case 1:
					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
					  case 0:
						printf("######Hey, ####! \nYou're looking pretty upbeat lately.\n\n\n######That's the spirit! #####Zelda will be home\nbefore you even know it. Just keep on\nbelieving that while you wait for her\nto come back!")
					  case 1:
						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
						  case 0:
							printf("######Hey, ####! How are you?\nFeeling a bit better, I hope.\n\n\n######I'm afraid I've got some problems too.\nBut, you know, I try to put on a brave\nface in front of other people.\n\n######If you do that, the unhappiness rolls\noff like water on a Loftwing's back.\nI always try to keep that in mind.")
						  case 1:
							printf("######Hey, ####! You made it!\nFinally in the senior class! That outfit\nsuits you.\n\n######But now's hardly the time to celebrate,\nright? I can't believe Zelda has gone\nmissing.\n\n######You and Zelda are so close... I know\nyou must be worried sick!\n\n\n######I don't know... I just have this feeling\nshe's alive and well somewhere!\nYou've got to believe that and wait\nfor her to come home.")
						}
					}
				}
			}
		}
	}
}

void entrypoint_115_10() {
	start()
	switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 206), ('param3', 31)])
		switch (bottles[5 0x0005]) {
		  case 0:
			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
			  case 0:
				printf("######...Oh, #########7#####! What a relief!\nYou brought the medicine!\n#####Here, take it!#####Sorry, no.")
				flw_208:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 90)])) {
				  case 0:
					flw_210:
					printf("######Thank you! Now I can heal my bird's\ninjury.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 610), ('param3', 47)])
					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 224), ('param3', 15)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 647), ('param3', 33)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 646), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 256), ('next', 234), ('param3', 15)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 235), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', -256), ('next', 608), ('param3', 13)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 236), ('param3', 48)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 233), ('param3', 6)])
					printf("######Now my poor bird should be healthy\nagain in no time!")
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 581), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 609), ('param3', 33)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 0), ('next', 238), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 1280), ('next', 222), ('param3', 13)])
					printf("######I was beginning to think we were\ndoomed...\n\n\nYou've saved my life...and my bird's!\nWe both owe you a big thanks!")
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 223), ('param3', 43)])
					printf("######Here we go! See you back in town!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 582), ('param3', 47)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 613), ('param3', 33)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 617), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 583), ('param3', 17)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 40), ('next', 616), ('param3', 48)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 211), ('param3', 33)])
					story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */] = true;
					story_flags[838 /* us: 805A9B32 0x40, jp: 805ACDB2 0x40 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
				  case 1:
					printf("######You...you monster!")
				}
			  case 1:
				printf("######So you'll give me those Mushroom\nSpores you're carrying? If you could\njust give them to me, my bird would be\nbetter in no time!\n#####Here you go.#####No way.")
				goto flw_208
			}
		  case 1:
			printf("###########My brother has some bird medicine#####.\nPlease go find him!\n\n\nI'll be waiting for you here with\nmy bird.")
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 188), ('param3', 31)])
		printf("######Well! If it isn't ####!\nI'm so glad you're here. ######My bird\ngot injured while I was out for a\nquick flight, and now he can't fly.\n######I somehow managed to make a\ncrash landing here, but now we can't\nget home!\n\n######I can't go home until my bird's better.\n#####I need medicine##### to get him healthy.\nOf course, it can't be human medicine.\nIt has to be #####bird medicine#####.\nHey, ####, ######I really need\nyour help. Will you go get some bird\nmedicine for me?\n#####Of course!#####Sorry.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 78)])) {
		  case 0:
			printf("######Thank you! You're a real lifesaver.")
			flw_192:
			printf("#####My older brother has some bird\nmedicine#####. Just go find him, and he'll\ngive you what I need.\n\nI bet he's probably pacing #####around\nthe plaza in Skyloft#####, waiting for me\nto come home and being worried\nout of his mind.")
			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
			switch (bottles[5 0x0005]) {
			  case 0:
				printf("######So you have the medicine after all!\nWhy didn't you say so? Those\n#####Mushroom Spores##### are just what I need!\n\nIf you could just give them to me,\nmy bird would be better in no time!\nDo you mind if I have them?\n#####Here you go.#####No way.")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 237)])) {
				  case 0:
					goto flw_210
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 4352), ('next', 729), ('param3', 13)])
					printf("No? Oh... Well, I guess there's nothing\nelse I can do but ask you to find my\nbrother and tell him what's happened\nhere. Would you mind?")
				}
			  case 1:
				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
				  case 0:
					printf("Huh? Really? You already spoke to\nhim? Well, that makes things easier.")
					flw_194:
					printf("I'll be waiting for you here with\nmy bird. Hurry back!")
				  case 1:
					goto flw_194
				}
			}
		  case 1:
			printf("######You...you monster!\n\n\n\n######...But you're just joking, right?\nYou must be...")
			goto flw_192
		}
	}
}

void entrypoint_115_28() {
	start()
	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
	  case 0:
		printf("######Did you hear all that noise outside a\nlittle while ago? I wonder what that\nwas all about...")
	  case 1:
		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
		  case 0:
			flw_86:
			printf("######Well, if it isn't ####.\nYou know, you seem to be getting more\nhandsome by the day.\n\nThat knight's uniform really suits you.\nAnd you give off that #reliable guy\"\nvibe too.")
		  case 1:
			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
			  case 0:
				printf("######Whoa, you can already Spiral Charge?!\n\n\n\n######Wow...that's cool, ####!\n###########I mean...#####whatever. I'm sure Pipit can\ndo it, too!")
			  case 1:
				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
				  case 0:
					printf("######Huh, the Triforce?##### What's that\nsupposed to mean?")
				  case 1:
					goto flw_86
				}
			}
		}
	}
}

void entrypoint_115_11() {
	start()
	switch (story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */]) {
	  case 0:
		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
		  case 0:
			printf("######The Isle of the Goddess has\nvanished, ####!\n\n\n######And it was such a great resting spot\nfor the birds...")
		  case 1:
			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
			  case 0:
				printf("######Wow, I've never felt the island shake\nlike it did. What could've happened?")
			  case 1:
				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
				  case 0:
					printf("######Hey, ####.\n\n\n\n######So is it true you learned how to get\nyour Loftwing to pull off that\nlegendary Spiral Charge maneuver?#####\n######That's amazing!")
				  case 1:
					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
					  case 0:
						printf("#####WWhat?! The Triforce?!\nYeah, never heard of it...\n\n\nHave you tried asking the Knight\nAcademy headmaster about it?")
					  case 1:
						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
						  case 0:
							flw_755:
							printf("######Oh, hey, ####. \nWhere's your friend from the \nacademy? You know, Zelda#####.#####.#####.#####\nWas that it?\nI haven't seen you two together at all\nrecently. Did you have a fight or\nsomething?")
						  case 1:
							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
							  case 0:
								printf("######For a moment there, it looked like\nthe sky was shrouded in darkness.\nI wonder if something happened...")
							  case 1:
								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
								  case 0:
									goto flw_755
								  case 1:
									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
									  case 0:
										printf("######Hey, ####.\n\n\n\n#####W#####Two whirling sails#####, you say?\n\n\n\n######You know, those blades on the\n#####windmills #####look kind of like whirling\nsails, don't they? I wonder if that's it...")
									  case 1:
										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
										  case 0:
											goto flw_755
										  case 1:
											printf("######Oh, ####. Thanks for all \nyour help!\n\n\n######My bird is back to full health.\nThank you so much.")
										}
									}
								}
							}
						}
					}
				}
			}
		}
	  case 1:
		printf("######Oh, ####. Thanks for all \nyour help!\n\n\n######My bird is back to full health.\nThank you so much.")
		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
	}
}

void entrypoint_115_12() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 673), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 29), ('param3', 24)])
	printf("Ooooooooh...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 653), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 674), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 106), ('next', 107), ('param3', 24)])
	printf("Oooooh... Somebody...\nPlease, somebody help me...")
	story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
	scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_115_13() {
	start()
	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
	  case 0:
		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 106), ('next', 506), ('param3', 24)])
			printf("######Please forget about the paper...\nGood-bye...")
			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
			flw_507:
			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 505), ('param3', 24)])
			printf("Ahhh... #####Paper#####! You brought me\nsome #####paper#####!\n\n\nI'll open the door... Please come in...")
			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
			goto flw_507
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 502), ('param3', 24)])
		printf("Oooh... #####Paper#####...\n\n\n\nPlease... Somebody bring me #####paper#####...\n#####Bring me some paper#####...\n\n\n#####Any kind of paper at all#####... Ooooh...")
		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
	}
}

void entrypoint_115_14() {
	start()
	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
	  case 0:
		goto flw_58
	  case 1:
		switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 142), ('param3', 13)])
			printf("######You fool! How dare you! This is no\nordinary piece of paper! It's a #####letter#####!\nA very special one at that!\n\n######I put my heart into every word...\nI guess you could say it's sort of like a...\nAll right, fine! It's a love letter!\n\n######And that is why you will not, under any\ncircumstances, EVER allow it to be\nused as toilet paper! Do you hear me?!")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 172), ('param3', 13)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 167), ('param3', 6)])
			printf("So listen up! The person you must give\nit to is a girl... An upperclassman...\nHer name is #####Karane#####.\n\n######You know who I mean, right?\nShe's the one with the #####round hat#####.\nShe's really cute. You know the one.\n\n######And don't you dare...not even by\nmistake...even think of giving it to\nthat #####weirdo in the restroom#####! Swear it!")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 549), ('param3', 13)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 168), ('param3', 6)])
			printf("Here it is. I'm entrusting this letter\nto you. So don't read what's inside!\nDo you hear me?!")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 109), ('next', 165), ('param3', 24)])
			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
			give_item(158 0x9E);
			printf("I'm counting on you,\n####! Get to it!\nIf you don't mess this up, maybe I'll let\nyou be my sidekick!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			switch (loadzone_temp_flags[10 /* 0x8 04 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 3072), ('next', 108), ('param3', 13)])
				printf("######Huh...? What's your problem? Why are\nyou looking at the restroom?")
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 23), ('param2', 6144), ('next', 161), ('param3', 13)])
				printf("What? There's someone in the\nrestroom at night who wants...paper?")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', -1), ('param3', 4)])
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 135), ('param3', 31)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 155), ('param3', 33)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4608), ('next', 34), ('param3', 13)])
				printf("Hmm... Should I give it to her...?\nShould I not give it to her...?")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 672), ('param3', 33)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 20), ('param2', 4889), ('next', 35), ('param3', 13)])
				printf("...Uwah! ########, it's you!\nDon't sneak up on me like that!\n\n\n######I have a serious dilemma on my mind\nright now. And you're distracting me!\n#####Dilemma?#####Can I help?")
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 3072), ('next', 37), ('param3', 13)])
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 12)])) {
				  case 0:
					printf("What? You want to hear about it?\n\n\n\n######Hmph! Normally I would never,\never tell someone like you...\nBut these are dire times...")
					flw_157:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 23), ('param2', 6144), ('next', 39), ('param3', 13)])
					printf("Come to think of it, you might be just\nthe person I need! You seem to be\npretty good with the ladies...\n\n...Ugh. I can't believe I just said that.\nBut whatever! Let's do this!\n########! I have a task for\nyou!")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 5120), ('next', 171), ('param3', 13)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 158), ('param3', 6)])
					printf("So listen up... Your mission is to take\nthis piece of #####paper #####to a certain person!\nIt's a very important piece of #####paper#####!\nMake SURE you deliver it.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', -1), ('param3', 4)])
				  case 1:
					printf("Huh? Really?!\n\n\n\n######Arrgh... Normally, I would never ask\nsomeone like you for help... But these\nare dire times...")
					goto flw_157
				}
			}
		}
	}
}

void entrypoint_115_15() {
	start()
	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 678), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 106), ('next', 42), ('param3', 24)])
		printf("######Please forget about the paper...\nGood-bye...")
		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
		flw_53:
		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 137), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 112), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 111), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 53), ('param3', 6)])
		goto flw_53
	}
}

void entrypoint_115_16() {
	start()
	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
	  case 0:
		printf("######Please forget about the paper...\nGood-bye...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 45), ('param3', 33)])
		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 144), ('param3', 31)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4), ('param2', 1), ('next', 154), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 46), ('param3', 6)])
		printf("Ooooh...##### Paper#####...\nI need #####paper#####...\n\n\nI'm not angry or anything...\n#####I just need some paper#####...\n#####Give letter.#####Don't do it.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 14)])) {
		  case 0:
			printf("######Huh? You're giving me paper?\nI'm so happy...")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 7), ('param2', 0), ('next', 511), ('param3', 13)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 145), ('param3', 6)])
			printf("But...this looks like someone's letter...\nAre you sure I can have this?\n#####Yes.#####No.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 16)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 0), ('next', 711), ('param3', 13)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 109), ('next', 706), ('param3', 24)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 517), ('param3', 33)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 516), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 153), ('param3', 6)])
				printf("######Thank you... I will use it with care...\n\n\n\nBut I'm shy, so don't ask me what I\nwant the paper for...\n\n\nMay we meet again...\nYou kind soul...")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 513), ('param3', 33)])
				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
			  case 1:
				flw_48:
				printf("######Ooooh... Somebody... Paper...")
			}
		  case 1:
			goto flw_48
		}
	}
}

void entrypoint_115_17() {
	start()
	switch (story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 148), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 0), ('next', 149), ('param3', 13)])
		printf("######Ahh... My love... I will always be by\nyour side... Tee hee...")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 527), ('param3', 31)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 152), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 0), ('next', 526), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 151), ('param3', 6)])
		printf("######Ah... You're the one from the\nother day...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 525), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 150), ('param3', 15)])
		printf("######It's good to see you again... Actually,\nthanks to you, I met my true love...\n\n\nYes, him...\n\n\n\n######It all started with that letter that\nyou gave me...\n\n\n######Those beautiful words of affection\ncaused me to fall hopelessly in love...")
		printf("######Ahh, my heart is bursting with thoughts\nof him... I feel so excited, so cheerful,\nso full of life...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 522), ('param3', 42)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 523), ('param3', 43)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 658), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6), ('param2', 0), ('next', 519), ('param3', 13)])
		printf("######Ahh... My love... I will always be by\nyour side... Tee hee...")
		story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
	}
}

void entrypoint_115_18() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1005), ('next', 358), ('param3', 24)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 359), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 18), ('next', 360), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 827), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 30), ('next', 823), ('param3', 47)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 5), ('next', 621), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5121), ('param2', -256), ('next', 361), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 5), ('next', 829), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 828), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 30), ('next', 362), ('param3', 48)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 365), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 356), ('next', 363), ('param3', 15)])
	printf("You're the one who sent the letter,\nright?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 364), ('param3', 16)])
	printf("Y-yes...")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', -256), ('next', 367), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 5), ('next', 368), ('param3', 16)])
	printf("######Tee hee. It was a wonderful love letter.\nThank you!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 369), ('param3', 16)])
	printf("######It wasn't...that...great...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 375), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1301), ('param2', 3072), ('next', 373), ('param3', 13)])
	printf("And, um... Wh-what's your...answer?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 5), ('next', 374), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5131), ('param2', -256), ('next', 372), ('param3', 13)])
	printf("######My answer? Ah...my answer...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 623), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5121), ('param2', 256), ('next', 380), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 274), ('next', 601), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 381), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1288), ('param2', 3328), ('next', 378), ('param3', 13)])
	printf("######Oh, please! Please go out...with me!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', 256), ('next', 602), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 20), ('next', 551), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4609), ('param2', 3074), ('next', 379), ('param3', 13)])
	printf("Wait!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 18), ('next', 384), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 385), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 386), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 388), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4625), ('param2', 3072), ('next', 387), ('param3', 13)])
	printf("I think you should go out with me\ninstead! I mean...er...I want to ask\nyou out!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 648), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4609), ('param2', 256), ('next', 624), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', -256), ('next', 603), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 99), ('next', 389), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1306), ('param2', 6912), ('next', 390), ('param3', 13)])
	printf("######What...? Hey, hold on there!\nWhat are you trying to pull all\nof a sudden?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 99), ('next', 392), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5140), ('param2', 2304), ('next', 393), ('param3', 13)])
	printf("Errr...######\nI want to go out with... Pipit...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 99), ('next', 650), ('param3', 50)])
	printf("######Ha! See that, you fool?! I knew she\nwould choose me! She's been checking\nme out for weeks! Uhh, wait a second...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 20), ('next', 629), ('param3', 17)])
	printf("######Wait... Really?!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1281), ('param2', 0), ('next', 620), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 274), ('next', 395), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 628), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 18), ('next', 397), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 6), ('param2', 18), ('next', 396), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 605), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 99), ('next', 398), ('param3', 50)])
	printf("######Truly? You choose me?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 18), ('next', 399), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5140), ('param2', 2323), ('next', 400), ('param3', 13)])
	printf("Yes! ######I'm so happy. Thank you...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 636), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5121), ('param2', 256), ('next', 635), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1306), ('param2', 7936), ('next', 631), ('param3', 13)])
	printf("######This can't be happening...")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1293), ('param2', 7936), ('next', 633), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 5), ('next', 639), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 638), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 11), ('param2', 261), ('next', 637), ('param3', 15)])
	printf("######Aaaaaghhhh!!!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 99), ('next', 625), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 5), ('next', 407), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 619), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1293), ('param2', 1024), ('next', 618), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 10), ('param2', 5), ('next', 552), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4625), ('param2', 1024), ('next', 401), ('param3', 13)])
	printf("##############!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 100), ('next', 403), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 643), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4616), ('param2', 1024), ('next', 640), ('param3', 13)])
	printf("When you told me about the letter,\nit was at that moment I finally\nrealized. I realized that...I love her.\n\n######I thought to myself, #I can't let anyone\nelse take her from me!\"\n\n\n######If you hadn't told me, I might\nnever have even noticed my own\nfeelings for her.\n\n######I'm so grateful. I don't know how I can\never thank you!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 641), ('param3', 42)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 642), ('param3', 43)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 404), ('param3', 39)])
	story_flags[561 /* us: 805A9B19 0x04, jp: 805ACD99 0x04 */] = true;
	story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
	story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
	story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */] = true;
	story_flags[560 /* us: 805A9B19 0x02, jp: 805ACD99 0x02 */] = true;
	story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
	story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 406), ('param3', 5)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 794), ('param3', 42)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', -1), ('param3', 4)])
}

void entrypoint_115_01() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 3), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 100), ('next', 1), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 2), ('param3', 39)])
	story_flags[203 /* us: 805A9AEF 0x20, jp: 805ACD6F 0x20 */] = true;
	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = false;
	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = false;
}

void entrypoint_115_19() {
	start()
	switch (story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */]) {
	  case 0:
		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
		  case 0:
			switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
			  case 0:
				printf("######Ever since you botched that mission\nwith the letter, I've been having\nnightmares and can't get any sleep!\nIt's just one thing after another!\nWhat is going on?! I wonder if that\nbed is cursed? Maybe it's #####Groose#####'s\nrevenge! You gotta help me,\n####!")
			  case 1:
				printf("######What do you want, ####?!\nI won't forget what you've done to me!\n\n\nAnd ever since you botched that thing\nwith the letter, I've been having\nnightmares and can't get any sleep!\nIt's just one thing after another!\nWhat is going on?! I wonder if that\nbed is cursed? Maybe it's #####Groose#####'s\nrevenge! ######You gotta help me,\n####!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 4)])
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 27), ('param2', 7936), ('next', 102), ('param3', 13)])
			printf("######It's over... It's all over...\n\n\n\n######What do you want, ####?!\nHave you come to laugh at me in my\nmiserable state? Just leave me alone!")
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 685), ('param3', 31)])
		printf("######What do you want, ####?!\nI'm just hurting so bad right now...\n\n\n######I don't know who that was in the\nrestroom, but I'm completely freaked\nout just knowing that they read my\nletter...\nI still can't even believe it! Who exactly\ndid you give it to?!")
	}
}

