void entrypoint_123_06() {
	start()
	switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
	  case 0:
		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
		  case 0:
			switch (story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */]) {
			  case 0:
				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
				  case 0:
					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
					  case 0:
						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
						  case 0:
							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
							  case 0:
								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
								  case 0:
									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
									  case 0:
										printf("######Hello, darling! I'll store anything you\nwant me to here.\n#####Great!#####No, thanks.")
										flw_273:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 6), ('next', -1), ('param3', 7)])
									  case 1:
										printf("######Welcome, darling!\n\n\n\nI'm happy to hold on to anything my\nprecious darling needs me to!\nAnything at all!\n#####Great!#####No, thanks.")
										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
										goto flw_273
									}
								  case 1:
									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
									  case 0:
										printf("######Welcome, ####. Do you\nhave something to deposit with me, the\nwoman who got over her broken heart\nand is getting prettier by the day?\n#####Yes, please!#####No, thanks.")
										flw_272:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 6), ('next', -1), ('param3', 7)])
									  case 1:
										printf("######Oh... Welcome, ####.\n\n\n\nSorry for acting so crazy the other day.\nI thought long and hard about it, and\nI'm completely over it now.\n\nThere's an old saying that women grow\nmore beautiful after their heart's been\nbroken. I think I know what that\nmeans now...\nAnd I fully intend to make myself\nmore and more beautiful every day.\n\n\nNo regrets, OK?\n\n\n\nSo...where were we? Anything to\ndeposit today?\n#####Yes, please!#####No, thanks.")
										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
										goto flw_272
									}
								}
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 81), ('param3', 31)])
								printf("######Hello, darling!\n\n\n\n######Umm... I, uhh... #####I want you to visit me\nat my house tonight#####. I have something\nI need to say.\n\n######My house is just next to the bazaar.\nYou'll definitely come, right?\nI'll be waiting!")
								flw_79:
								printf("Oh, and do you have something you\nwant to pick up or have me store?\n#####Yes, please!#####No, thanks.")
								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 6), ('next', -1), ('param3', 7)])
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 78), ('param3', 31)])
							printf("######Hello, darling!\n\n\n\n######Umm... I, uhh... #####I want you to visit me\nat my house tonight#####. I have something\nI need to say.\n\n######My house is just next to the bazaar.\nYou'll definitely come, right?\nI'll be waiting!")
							goto flw_79
						}
					  case 1:
						flw_267:
						printf("######Welcome, my #####darling#####! I've been waiting\nfor you! You can trust me with\nanything! Errr, your stuff, I mean...\n\nAnything you want me to hold on to?\nOr anything you want to pick up?\n#####Yes, please.#####No, thanks.")
						flw_270:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 6), ('next', -1), ('param3', 7)])
					}
				  case 1:
					goto flw_267
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 20480), ('next', 61), ('param3', 13)])
				printf("######...Oh.")
				printf("######You... You came to see me!\nI'm so happy!\n#####...#####That's right.")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 32)])) {
				  case 0:
					printf("######Don't stare at me like that.\nYou're making me blush, #####darling#####!")
					flw_66:
					printf("######Lately, when I think about you, my\nhead gets all fuzzy, my heart races,\nI get short of breath, and I feel all\ndizzy...\nYou don't think... Could this be...\n\n\n\n#####Sounds bad.#####Yep, it's love.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 34)])) {
					  case 0:
						printf("######Oh, you're such a tease...")
						flw_70:
						printf("######Whoops. Kinda forgot myself there.\nBack to work!\n\n\n######Now where was I? Oh yeah, I was going\nto ask you if you wanted me to\ntake care of you forever...\n#####Yes, please.#####...")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 36)])) {
						  case 0:
							printf("######Really...? That makes me so happy...")
							flw_72:
							printf("######Oh no! I am SO sorry! I need to learn\nhow to keep these delirious dreams\nin check.\n\n######...No, wait... Ahh! I mean, are there\nsome items you want me to check?\n#####Darling#####?\n#####Please!#####No, thanks.")
							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
							goto flw_270
						  case 1:
							goto flw_72
						}
					  case 1:
						printf("######Aaaah! I can't believe you just said it\nout loud! It's so embarrassing!")
						goto flw_70
					}
				  case 1:
					printf("######You...make me so happy... I think I'm\ngoing to keel over...")
					goto flw_66
				}
			}
		  case 1:
			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
			  case 0:
				printf("######Oh. You're back. I'll hold on to\nanything of yours you want me to.\n\n\nSomething in your pouch today that\nyou want to deposit? Or something\nyou want to pick up?\n#####Yes, please!#####No, thanks.")
				flw_60:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 6), ('next', -1), ('param3', 7)])
			  case 1:
				printf("Hello. Welcome to the Item Check...\n######Oh.")
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 57), ('param3', 6)])
				printf("Oh. I, uhh... W-welcome...\n#####What's wrong?#####You seem different.")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 30)])) {
				  case 0:
					printf("####\n#Um... Nothing... There's nothing\nwrong...")
					flw_76:
					printf("It's not like #Oh, hey, that guy's back!\nI'm so happy!\" or anything like that...\n\n\nBut...if you think about how often\nwe meet, you have to admit that our\nrelationship has gone beyond employee\nand customer, you know?\n######Oh no... I didn't mean to... What am\nI saying?!\n\n\nPlease forget everything I just said.\nOK?\n\n\n######OK, get it together... Be professional...\nDo you have anything you want me to\nhold on to?\n#####Yes, please.#####No, thanks.")
					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
					goto flw_60
				  case 1:
					printf("####\n#I... I do? I don't think I do...\nMaybe you're mistaken?")
					goto flw_76
				}
			}
		}
	  case 1:
		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
		  case 0:
			printf("######Oh. Hey. This is the Item Check.\nBut I bet you're here just to check me\nout, right? Well don't make a habit of\nit, OK?\nAnyway, you need to grab something?\nOr drop something off?\n#####Yes, please!#####No, thanks.")
			flw_263:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 112), ('param2', 6), ('next', -1), ('param3', 7)])
		  case 1:
			printf("######Hey. Welcome to the Item Check.\n...Oh, it's you again...\n\n\nYou've been coming by a lot recently.\nYou're pretty much the only one who\ncomes by regularly, actually...\n\n######Hey...wait a second...\n\n\n\nI don't suppose...\n\n\n\nYou don't come by here just to see me,\ndo you?\n\n\n#####Uhh, no.#####Yes, it's true.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 28)])) {
			  case 0:
				printf("######Oh... Right...\n\n\n\nWell, of course. That wouldn't even\nmake sense, right?\n\n\n####\n#Oh, it's no big deal that you don't.\nNot at all.")
				flw_53:
				printf("######...Oh! I almost forgot. I still have a\njob to do. Do you have something\nfor me to hold on to?\n#####Yes, please.#####No, thanks.")
				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
				goto flw_263
			  case 1:
				printf("######What?! Really?\n\n\n\nYeah, right... You think I'm going to\nfall for that old line?\n\n\n####\n#But...if it were true, that might be\nkind of nice...")
				goto flw_53
			}
		}
	}
}

void entrypoint_123_07() {
	start()
	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
	  case 0:
		switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
		  case 0:
			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
			  case 0:
				switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
				  case 0:
					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
					  case 0:
						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
						  case 0:
							switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
							  case 0:
								printf("######I'm glad you told me how you feel,\ndarling. See you soon at the shop!")
							  case 1:
								printf("######Darling! I told you that we need to\nkeep our relationship secret! If you\ncome over too often, my dad will\ncatch on to us!\nWhat could you possibly want this late?\n#####Need to talk!#####Nothing.#####Deposit items!")
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 1), ('param4', 3), ('param5', 70)])) {
								  case 0:
									printf("######I'd love to talk forever with you,\nbut my father is staring at us!\nWe can talk another time!")
								  case 1:
									printf("######Well, aren't you the strong and\ndomineering type? But that's\njust how I like you, my darling!")
								  case 2:
									printf("Well, if that's all you wanted, couldn't\nyou have just come to visit me at the\nItem Check during the day?\n\n######Or are you trying to tell me that that's\nall I am to you?")
								}
							}
						  case 1:
							switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
							  case 0:
								printf("######I'm strong. I'll get over you. Please let\nme be alone with the cold night now...")
							  case 1:
								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
								  case 0:
									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
									  case 0:
										printf("######I don't know why, but my father\nhas been in a great mood lately...\n\n\nDoes he even realize that his only\ndaughter has just had her heart\nbroken for the very first time?\nHow annoying...")
									  case 1:
										printf("######I know I said I'd get over it, but...\nSometimes at night, I feel this pain in\nmy chest... I guess that's why they call\nit a broken heart...")
									}
								  case 1:
									printf("######Oh, ####... \nI never knew it would hurt so much...\nto have my heart broken...######")
								}
							}
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 224), ('param3', 31)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 225), ('param3', 47)])
						OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 230), ('param3', 15)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 226), ('param3', 6)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 227), ('param3', 17)])
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3840), ('next', 229), ('param3', 13)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 228), ('param3', 39)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 223), ('param3', 48)])
						printf("##############... You came to see\nme. Thank you.\n\n\n######The truth is...there's something I'm\njust dying to get off my chest,\n####.\n\nI'm just going to ask you something\npoint-blank, OK?")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 297), ('param3', 39)])
						printf("What do you think about me?\n\n\n#####I like you.#####You store items.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 130)])) {
						  case 0:
							printf("######You do? Really?! You're not lying?!\n#####Really!#####Lying, actually...")
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 132)])) {
							  case 0:
								flw_302:
								printf("######I'm so happy! I feel like I'm in a dream.\nI have to hear it again just to be sure!\n\n\n######Do you really, really, really like me?\n\n\n\n#####I do!#####Uh, sorry...")
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 136)])) {
								  case 0:
									printf("######You're not lying, are you? I don't know\nwhat I'd do if I found out you're lying!\n\n\n#####It's true!#####I'm lying.")
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 142)])) {
									  case 0:
										flw_309:
										printf("######...Thank you! I love you so much,\ndarling! I'm sorry I doubted you and\nput you through all that questioning!")
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 317), ('param3', 6)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 321), ('param3', 39)])
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 320), ('param3', 6)])
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3840), ('next', 319), ('param3', 13)])
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 314), ('param3', 6)])
										printf("######...But I understand your true feelings.\nBetter than you know.\n\n\nYou're saying that you cannot give\nyourself over to love just yet...\nThat you have much more important\nthings to do right now.\n######You have some kind of serious job you\nhave to attend to first, right?\n\n\n######If you weren't off on an adventure,\nyou probably wouldn't need to come\nby the Item Check so often.\n\nAnd that's why I won't ask any more of\nyou. I'll just watch over you, protecting\nyou from afar, keeping a vigilant eye\non your items.\n######And when your important work is done,\nwe'll tell my dad we're in love!\n\n\n######Until then, we'll keep our love secret!\nDarling, I... I'll see you again at the\nItem Check.")
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 315), ('param3', 43)])
										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
										flw_333:
										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 335), ('param3', 4)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
									  case 1:
										flw_310:
										printf("######...I understand. That's your answer...\n\n\n\nI'm sorry for causing you trouble...")
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 328), ('param3', 6)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 331), ('param3', 39)])
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3840), ('next', 330), ('param3', 13)])
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 332), ('param3', 6)])
										printf("######...Don't. I don't need your sympathy.\n\n\n\nI'm fine. I'll get over you quickly...\n\n\n\n######The next time we meet, I'll greet\nyou as I would any old customer...")
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 324), ('param3', 32)])
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 322), ('param3', 6)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 101), ('next', 325), ('param3', 17)])
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 5120), ('next', 326), ('param3', 13)])
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 327), ('param3', 6)])
										printf("But tonight I want to be alone...\n\n\n\nGoodnight...my darling.")
										goto flw_333
									}
								  case 1:
									flw_307:
									printf("######No way...\n\n\n\n######You have no feelings for me? All I am\nto you is some girl who stores your\nitems? You really think that?\n#####Actually, I like you!#####Yep.")
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 140)])) {
									  case 0:
										goto flw_309
									  case 1:
										goto flw_310
									}
								}
							  case 1:
								flw_303:
								printf("######Are you serious?! How could you do\nthat to me?!\n\n\n######Oh, wait... I see what's going on here...\nYou're just too shy to admit your true\nfeelings, aren't you?\n#####Yep, I'm shy!#####No...")
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 138)])) {
								  case 0:
									printf("######What? So you really do like me?\n\n\n\n#####I like you!#####I'm...sorry.")
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 144)])) {
									  case 0:
										goto flw_309
									  case 1:
										goto flw_310
									}
								  case 1:
									goto flw_307
								}
							}
						  case 1:
							printf("######...Huh?\n\n\n\n######M-maybe I didn't ask you the right\nway...\n\n\n######OK. Let me think here... What am I\nto you?\n#####Someone I like!#####A shopkeeper.")
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 134)])) {
							  case 0:
								goto flw_302
							  case 1:
								goto flw_303
							}
						}
					}
				  case 1:
					printf("######Hello, #####darling#####! Welcome...\n\n\n\nYou've come to see me at home...\nI'm so happy!")
				}
			  case 1:
				printf("######Oh, hello! You decided to come see me\nat home...\n\n\nYou're not trying to tell me I'm your\nspecial someone, are you?")
			}
		  case 1:
			printf("######No matter how much you may miss me,\nI don't make it a habit of having\ncustomers come around my house when\nI'm off the clock, you know?\n######Or am I being too self-conscious?")
		}
	  case 1:
		printf("######Sigh... Isn't there anyone special out\nthere for me? I wonder... I wish I could\nfind someone to share a beautiful love\nwith...\n######Uhh... Hey, buddy, do you mind?\nDo you always just walk into people's\nhouses without asking permission?")
	}
}

void entrypoint_123_08() {
	start()
	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
	  case 0:
		printf("######Thank you so much, ####!\n\n\n\n####\n#My home is sparkling clean again!\nIt feels so much better when the\nplace isn't under a blanket of dust.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 190), ('param3', 33)])
		flw_190:
		printf("######...I can't let you go without your\nreward. Watch out--there's some big\nmoney coming... BAM, #####20 Rupees#####!####\n#")
		give_item(4 0x04);
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 192), ('param3', 12)])
		printf("######If the place gets dusty again, I might\nneed you to come back and tidy it up\nfor me. But I'll pay you again, OK?")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 429), ('param3', 12)])
		printf("####\n#Oh...one more thing.\nDon't tell Pipit about this.\n\n\n######He'll only get angry at me for spending\nmoney on something he thinks I should\nbe doing myself. You can keep a secret,\nright?")
		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 196), ('param3', 5)])
		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		printf("######Thank you so much, ####!\n\n\n\n####\n#My home is sparkling clean again!\nIt feels so much better when the\nplace isn't under a blanket of dust.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 186), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 198), ('param3', 43)])
		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
		goto flw_190
	}
}

void entrypoint_123_09() {
	start()
	printf("######Oh, it's so nice to have someone who's\ngoing to do some cleaning around here,\n####.\n\nWhen all the dust is gone, I'll give you\nsome money, so make sure you talk to\nme afterward, OK?\n\n######Or are you already done?\n#####All done!#####Not quite.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 107)])) {
	  case 0:
		printf("#####\nWell, that's too bad... Oh well.\nLet me know if you can help out\nnext time, OK?")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 206), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 207), ('param3', 5)])
		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
	  case 1:
		printf("####\n#Oh, well then by all means, please\ncontinue. I'd start with the floor, as\nit could really use some work...\n\nThere's probably still some dust around\nthe #####window#####, the #####shelves#####, and the #####bed##### as\nwell. You have to keep a sharp eye out\nto get all of it!")
	}
}

void entrypoint_123_10() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 139), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 219), ('param3', 39)])
	flw_219:
	switch (loadzone_temp_flags[8 /* 0x8 01 */]) {
	  case 0:
		printf("Hold on there, ####.\nI've got your reward for cleaning the\nplace. Just come on over here.")
	  case 1:
		printf("######Oh. Hi there, ####. \nAre you still working on cleaning the\nplace?\n\nOr are you done for today?\n#####All done!#####Almost...")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 85)])) {
		  case 0:
			printf("#####\nWell, that's too bad... Oh well.\nLet me know if you can help out\nnext time, OK?")
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 137), ('param3', 15)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 138), ('param3', 33)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 150), ('param3', 5)])
			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
			flw_140:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			printf("####\n#Oh, well then by all means, please\ncontinue. I'd start with the floor, as\nit could really use some work...\n\nThere's probably still some dust around\nthe #####window#####, the #####shelves#####, and the #####bed##### as\nwell. You have to keep a sharp eye out\nto get all of it!")
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 140), ('param3', 15)])
			goto flw_140
		}
	}
}

void entrypoint_123_11() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 147), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 142), ('param3', 39)])
	switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
	  case 0:
		flw_164:
		switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
		  case 0:
			goto flw_219
		  case 1:
			printf("######Leaving already, ####?\n\n\n\nIf you see Pipit out on patrol, make\nsure you wave and say hello!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 163), ('param3', 4)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
		}
	  case 1:
		switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
		  case 0:
			story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = false;
			goto flw_164
		  case 1:
			goto flw_164
		}
	}
}

void entrypoint_123_12() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 215), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 216), ('param3', 39)])
	printf("######Oh my! There's no more dust in my\nhome! Thank you, ####!\n\n\n####\n#You've brightened my day. Come over\nhere, and let me pay you.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 221), ('param3', 5)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 218), ('param3', 4)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_123_13() {
	start()
	printf("######That was a very valuable item,\nso you're going to have to pay me\n#####30 Rupees or so#####! And I didn't just\nmake that number up!")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 170)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 24), ('next', 384), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 174)])) {
		  case 0:
			flw_385:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -24), ('next', 400), ('param3', 8)])
			flw_400:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 14), ('next', -1), ('param3', 7)])
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 385), ('param3', 4)])
			goto flw_385
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 26), ('next', 388), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 176)])) {
		  case 0:
			flw_389:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -26), ('next', 400), ('param3', 8)])
			goto flw_400
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 389), ('param3', 4)])
			goto flw_389
		}
	  case 2:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 29), ('next', 392), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 178)])) {
		  case 0:
			flw_393:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -29), ('next', 400), ('param3', 8)])
			goto flw_400
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 393), ('param3', 4)])
			goto flw_393
		}
	  case 3:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 38), ('next', 396), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 180)])) {
		  case 0:
			flw_397:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -38), ('next', 400), ('param3', 8)])
			goto flw_400
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 397), ('param3', 4)])
			goto flw_397
		}
	}
}

void entrypoint_123_14() {
	start()
	flw_246:
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 247), ('param3', 5)])
	switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
	  case 0:
		flw_248:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 248), ('param3', 4)])
		goto flw_248
	}
}

void entrypoint_123_15() {
	start()
	printf("######That was a pretty expensive item,\nso you're going to have to pay me\n#####about 20 Rupees#####! And I didn't just\nmake that number up!")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 154)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 17), ('next', 356), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 152)])) {
		  case 0:
			flw_355:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -17), ('next', 342), ('param3', 8)])
			flw_342:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 14), ('next', -1), ('param3', 7)])
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 355), ('param3', 4)])
			goto flw_355
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 19), ('next', 352), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 150)])) {
		  case 0:
			flw_351:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -19), ('next', 342), ('param3', 8)])
			goto flw_342
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 351), ('param3', 4)])
			goto flw_351
		}
	  case 2:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 22), ('next', 348), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 148)])) {
		  case 0:
			flw_347:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -22), ('next', 342), ('param3', 8)])
			goto flw_342
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 347), ('param3', 4)])
			goto flw_347
		}
	  case 3:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 23), ('next', 344), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 146)])) {
		  case 0:
			flw_343:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -23), ('next', 342), ('param3', 8)])
			goto flw_342
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 343), ('param3', 4)])
			goto flw_343
		}
	}
}

void entrypoint_123_16() {
	start()
	printf("######That was a pretty nice item,\nso you're going to have to pay me\n#####roughly 10 Rupees#####! And no...I didn't\njust make that number up!")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 158)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 7), ('next', 364), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 162)])) {
		  case 0:
			flw_365:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -7), ('next', 380), ('param3', 8)])
			flw_380:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 14), ('next', -1), ('param3', 7)])
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 365), ('param3', 4)])
			goto flw_365
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 8), ('next', 368), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 164)])) {
		  case 0:
			flw_369:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -8), ('next', 380), ('param3', 8)])
			goto flw_380
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 369), ('param3', 4)])
			goto flw_369
		}
	  case 2:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 11), ('next', 372), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 166)])) {
		  case 0:
			flw_373:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -11), ('next', 380), ('param3', 8)])
			goto flw_380
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 373), ('param3', 4)])
			goto flw_373
		}
	  case 3:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 13), ('next', 376), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 168)])) {
		  case 0:
			flw_377:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -13), ('next', 380), ('param3', 8)])
			goto flw_380
		  case 1:
			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 377), ('param3', 4)])
			goto flw_377
		}
	}
}

void entrypoint_123_00() {
	start()
	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 49), ('param2', 1), ('next', 6), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 6)])) {
		  case 0:
			switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
			  case 0:
				switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
				  case 0:
					switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
					  case 0:
						switch (story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */]) {
						  case 0:
							flw_19:
							switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
							  case 0:
								printf("######Welcome, ####.\n\n\n\nIf my house gets dirty again, you'll be\nthe first to know!")
							  case 1:
								switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
								  case 0:
									switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 109)])) {
									  case 0:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 8), ('next', -1), ('param3', 7)])
									  case 1:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 9), ('next', -1), ('param3', 7)])
									}
								  case 1:
									switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
									  case 0:
										printf("######Do you think you could do some light\ncleaning for me? I've always hated\ncleaning...\n\n####\n#I'll give you some money, OK?\n#####Sure!#####No, sorry.")
										flw_126:
										switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 83)])) {
										  case 0:
											printf("######Oh, that makes me so happy! I knew\nyou wouldn't leave me to a life of dirt,\n####.\n\n######So I'll just leave you to it, then!")
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 149), ('param3', 33)])
											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 4)])
										  case 1:
											printf("######Oh...####, I was sure\nyou'd help me out!")
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', -1), ('param3', 4)])
										}
									  case 1:
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 2304), ('next', 21), ('param3', 13)])
										printf("######Welcome, ####.\n\n\n\n######My house is all dusty again. Do you\nmind cleaning it? I'll give you some\npocket money...\n#####Sure!#####No, sorry.")
										goto flw_126
									}
								}
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 45), ('param3', 13)])
							printf("######Hi there, ####.\n\n\n\n######Pipit is really angry with me...\n\n\n\n####\n#He said I shouldn't be spending our\nmoney on a housekeeper.\n\n\n######...\n\n\n\n######But...you're not exactly a housekeeper,\nare you, ####?\nThat makes it OK, doesn't it?\n\n######Anyway, that's good enough for me.\nAs far as I'm concerned, I'll pay you to\nclean my house anytime it gets dusty.")
							story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */] = true;
						}
					  case 1:
						goto flw_19
					}
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 120), ('param3', 31)])
					switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
					  case 0:
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 105)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 8), ('next', -1), ('param3', 7)])
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 9), ('next', -1), ('param3', 7)])
						}
					  case 1:
						switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
						  case 0:
							printf("######Do you think you could do some light\ncleaning for me? I've always hated\ncleaning...\n\n####\n#I'll give you some money, OK?\n#####Sure!#####No, sorry.")
							flw_2:
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 2)])) {
							  case 0:
								printf("####\n#You will?! Great! I knew you wouldn't\nleave me to sit in this dusty house,\n####.\n\n######What's that? ...A broom? You know,\nI don't even remember where we keep\nthe crazy thing...\n#####...Or if we ever owned one...\n######Most of the time I just wait for a good\nstrong wind to come along and #####blow the\ndust away#####.\n\n######So look, I don't really care how you get\nthe job done--I just want you to #####blow it\nall away #####for me.\n\n######So I'll just leave you to it, then!")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 148), ('param3', 33)])
								story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 122), ('param3', 4)])
								flw_122:
								switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
								  case 0:
									flw_121:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', -1), ('param3', 4)])
								  case 1:
									story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */] = true;
									goto flw_121
								}
							  case 1:
								printf("######Oh...####, I was sure\nyou'd help me out!")
								goto flw_122
							}
						  case 1:
							printf("######Ahh, ####. Welcome.\n\n\n\n######Do you think you could do some light\ncleaning for me? I've always hated\ncleaning...\n\n####\n#I'll even pay you...OK?\n\n\n\n#####Sure!#####Sorry, no.")
							goto flw_2
						}
					}
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 275), ('param3', 31)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 2304), ('next', 11), ('param3', 13)])
				printf("######Ahh, ####. Welcome.\n\n\n\n######So here's the thing, ####.\nMy house is terribly dirty...\n\n\n######Pipit is always telling me to do some\ndusting around here, but I just can't\nbring myself to do it.\n\n######That's why I wanted to ask you if you\nwouldn't mind cleaning it for me.\nI'll even pay you, ####.\n#####I'm on it!#####Nah...")
				goto flw_2
			}
		  case 1:
			flw_17:
			switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
			  case 0:
				printf("######How's my Pipit doing at school?\n\n\n\nHe's a real go-getter, unlike myself,\nso I'm sure I have no reason to worry.\n#####Such a mess!#####...")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 101)])) {
				  case 0:
					printf("######Oh, you're right... This place is filthy\nagain. It keeps doing that!\n\n\n####\n#It's just that I hate cleaning, you know.\nIt would be great if someone would\nclean the place up for me...")
				  case 1:
					printf("######Oh, what's wrong? You just made a\nface like you wanted to say something.")
				}
			  case 1:
				printf("######Ahh, ####. Welcome.\n\n\n\n####\n#How's my Pipit doing at school?")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', -1), ('param3', 4)])
			}
		}
	  case 1:
		goto flw_17
	}
}

void entrypoint_123_01() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1014), ('next', 23), ('param3', 24)])
	printf("We've been over this, Mom!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 282), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 24), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 172), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 169), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 24), ('param2', 100), ('next', 25), ('param3', 14)])
	printf("Calm down, Pipit. Don't get so mad...")
	printf("How could I not be mad?!\n\n\n\nIt's been obvious lately that you've\nbeen #####giving someone Rupees #####to\nclean the house!\n\nI gave you that money so you could buy\nsome bread!\n\n\nIf you keep spending money like this,\nI won't have any money to go to the\nKnight Academy!\n\nI didn't take that job patrolling just so\nyou could live a life of luxury!\n\n\nYou've got to stop doing this!")
	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 28), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 18), ('next', 286), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 33), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 90), ('next', 32), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 25), ('param2', 274), ('next', 171), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 100), ('next', 281), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 283), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 170), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 173), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4609), ('param2', 3072), ('next', 27), ('param3', 13)])
	printf("Oh... Hey there, ####...\nWhat could you want at this hour?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 183), ('param3', 39)])
	printf("######You...didn't hear any of that, did you?\nThere's no way you heard, right?\n#####Heard what?#####Sorry...")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 91)])) {
	  case 0:
		printf("######Nothing... It's nothing.\n\n\n\n######Anyway, I've got to get back out on\npatrol! You take care of yourself when\nyou're out walking the streets!")
		flw_181:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 30), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 26), ('param2', 18), ('next', 31), ('param3', 14)])
		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		printf("######Oh... You heard!\n\n\n\n######It's true. I'm working the night patrol\nto earn some money!\n\n\n######But don't look at me like that!\nYou're not exactly Mr. Perfect either,\nare you, Mr. Eavesdropper!\n\n######Maybe we should just forget about\neverything that happened here tonight!")
		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
		goto flw_181
	}
}

void entrypoint_123_02() {
	start()
	switch (loadzone_temp_flags[16 /* 0xB 01 */]) {
	  case 0:
		printf("######Hmm...##### Recently the monsters that\nusually roam the town at night are\nnowhere to be seen.\n\n######I wonder what's going on... Not that\nI'm complaining or anything!\nPeaceful nights are the best.")
	  case 1:
		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
		  case 0:
			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1025), ('next', 41), ('param3', 13)])
				printf("Hey, ####! It can be\ndangerous out here at night, so be\ncareful.\n\n######Oh, and about that thing the other\nnight... We agreed to keep that secret,\nright?!")
				flw_431:
				switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', -1), ('param3', 4)])
				  case 1:
				}
			  case 1:
				switch (scene_flags[76 /* 0x8 10 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4376), ('next', 39), ('param3', 13)])
					printf("####You...weren't supposed to see that\nwhole spectacle, ####. \nHow embarrassing...\n\n######I feel so ashamed of my mother\nsometimes. She's just so lazy\nsometimes. I don't know what to do.\n\n######But I'll be fine. You don't need to\nworry about me.\n\n\n######I still haven't worked out who did the\ncleaning for my mother, though...\n\n\n######Who do they think they are, getting\ninvolved in our business like that?")
					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1025), ('next', 162), ('param3', 13)])
					printf("Hey, ####. I'm protecting\nthe peace in Skyloft!\n\n\n######Let's make this a safe place to live,\nwhere we all can live in peace!\n\n\n######Umm...##### Why are you looking at me so\nsuspiciously?")
					goto flw_431
				}
			}
		  case 1:
			switch (loadzone_temp_flags[4 /* 0x9 10 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1029), ('next', 160), ('param3', 13)])
				printf("########! One day you'll\nunderstand what it is to be a knight!\nDon't you worry.")
				goto flw_431
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1025), ('next', 42), ('param3', 13)])
				printf("Hey, ####! It's dangerous\nout at night, so be careful!\n\n\n######This area is my patrol route.\n\n\n\n######At night, monsters get really active\naround here!\n\n\nIt's the duty of a knight to protect the\npublic from any danger!\n#####How admirable!#####Duty or job?")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 93)])) {
				  case 0:
					printf("######Admirable?! Nonsense! It's the bare\nminimum of what people expect from\nus! We are knights in training, and this\nis what knights do!\nThat's the Pipit way! All I need are\nthe smiles of the people I protect as\nmy payment!\n\n######This is what it means to be a knight.\n######I'm sure you'll understand how that\nfeels one day too, ####!")
					flw_158:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 4)])
				  case 1:
					printf("##############! For shame! Why did\nyou decide to become a knight,\nanyway?\n\nFor the money?! How could you be\nswayed by the temptation of material\ngain? Do you have no honor?!\n\n######That's the Pipit way! More than money,\nI love seeing people happy and safe.\nThat's what being a knight is all about!")
					goto flw_158
				}
			}
		}
	}
}

void entrypoint_123_03() {
	start()
	switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 768), ('next', 254), ('param3', 13)])
		printf("######You broke my antique!\n\n\n\nNext time that happens, we're going to\nhave words!")
	  case 1:
		printf("######I love to collect antiques, you know?\nAll the things you see in my house\nare very old and valuable.\n\nMake sure you don't break anything!")
	}
}

void entrypoint_123_04() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 31), ('next', 278), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 100), ('next', 249), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 7945), ('param2', 768), ('next', 233), ('param3', 13)])
	printf("#####\nNooo! How could you?!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 100), ('next', 242), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 336), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 8), ('next', 232), ('param3', 24)])
	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
	  case 0:
		switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
		  case 0:
			printf("######YOU! Did I do something horrible to\nyou in a past life?! Why are you\npunishing me like this?!")
			flw_401:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 1), ('next', 402), ('param3', 23)])
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 182)])) {
			  case 0:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 117)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 13), ('next', -1), ('param3', 7)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 15), ('next', -1), ('param3', 7)])
				  case 2:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 123), ('param2', 16), ('next', -1), ('param3', 7)])
				}
			  case 1:
				switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
				  case 0:
					printf("...Look, I already know you don't have\neven a single Rupee to your name...\nSO STOP BREAKING THINGS!\n\nGet out of here!")
					goto flw_246
				  case 1:
					printf("...But you don't even have a single\nRupee on you!\n\n\nSo you think you can just wander \nabout, penniless, destroying people's\nthings and laughing in their faces when\nthey ask for money in return?!\nThe nerve! I don't even want your\nmoney anymore. Just get out of my\nsight!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 246), ('param3', 4)])
					goto flw_246
				}
			}
		  case 1:
			printf("######You broke my precious antique!")
			goto flw_401
		}
	  case 1:
		printf("######You broke my antique!\n\n\n\nThat's it! You break it, you buy it!\n\n\n\n######Let me see now... That was a very\nexpensive antique, so #####about##### #####20 Rupees\n#####should suffice!\n\n######What's that look for? Oh, you think I'm\njust making that number up?\n\n\n######That's ridiculous! I know the value of\nevery item in my possession, and I\nintend to be compensated in full!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 1), ('next', 420), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 186)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 18), ('next', 424), ('param3', 23)])
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 188)])) {
			  case 0:
				flw_425:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -18), ('next', 234), ('param3', 8)])
				printf("######Next time that happens, we're going to\nhave words!")
				flw_235:
				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 243), ('param3', 4)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 248), ('param3', 5)])
				goto flw_248
			  case 1:
				printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 425), ('param3', 4)])
				goto flw_425
			}
		  case 1:
			printf("...But you don't even have a single\nRupee on you!\n\n\nSo you think you can just wander \nabout, penniless, destroying people's\nthings and laughing in their faces when\nthey ask for money in return?!\nThe nerve! I don't even want your\nmoney anymore. Just get out of my\nsight!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 235), ('param3', 4)])
			goto flw_235
		}
	}
}

void entrypoint_123_05() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 43), ('next', 292), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 291), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 100), ('next', 287), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 43), ('param2', 99), ('next', 259), ('param3', 50)])
	printf("")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 43), ('next', 288), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 285), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 43), ('next', 293), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 103), ('next', 289), ('param3', 24)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 260), ('param3', 6)])
	changeScene(0, 0) // 
}

