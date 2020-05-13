void entrypoint_121_02() {
	start()
	printf("######No, I beg you! Stop! That chest is not to\nbe opened, under any circumstance!\nThere's something unspeakable inside!\n#####What?#####I want to open it.")
	switch (choice(2, 0)) {
	  case 0:
		flw_106:
		printf("######That chest contains the infamous evil\nof the dreaded #####Cursed Medal#####.\n\n\nIf you carry that medal with you, you'll\nfind more Rupees than ever before!\n######You'll even have better chances of\ndiscovering treasure!\n######You'll... You'll... Oh, don't make me\nsay it!\n#####Sounds handy!#####Say...what?")
		switch (choice(2, 0)) {
		  case 0:
			printf("######Now that you mention it, that does\nsound pretty enticing, but...")
			flw_107:
			printf("######It gets worse! Far, far worse...\n\n\n\n######Any poor soul who holds that medal\nwill find himself #####unable to open his\npouch#####!\n\nNo matter how badly you want to use\nyour potions or shields, they will be\ndenied to you! Can you imagine a\nmore gruesome fate?\n######Please, push any thought of this chest\nout of your mind forever! You must\nnever think of it again.")
			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
		  case 1:
			goto flw_107
		}
	  case 1:
		printf("######I said NO!")
		goto flw_106
	}
}

void entrypoint_121_20() {
	start()
	printf("######Stop! Please! I beg of you...\ndon't hurt me!\n\n\nOh goodness, I know how bad this must\nlook to you right now, but I assure you I\nmean no harm! We were just playing\nthe scream-as-loud-as-you-can game!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 2560), ('next', 114), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 4), ('param3', 33)])
	printf("######Isn't that a fun game...? Oh, dear...\nPerhaps an explanation is in order! \n\n\nMy name is #####Batreaux#####, and I am a\nmonster who resides here in this\nhumble dwelling below Skyloft.\n\nBut please allow me to correct one\npopular misconception. While I'm\ncertainly a monster, I wouldn't dream\nof terrorizing the people of this town!\nYou see, this adorable little girl is the\nonly one who didn't let loose a blood-\ncurdling scream at the sight of me!\n\nSince she began to visit me here, I've\nfelt positively jubilant! You see, my\nheart's only wish is to become friends\nwith the lovely people of Skyloft.\nBut as you can surely imagine, it has\nproven quite difficult to break the ice\nwhen they are struck with paralyzing\nfear at the mere sight of me!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 7), ('param2', 2048), ('next', 72), ('param3', 13)])
	printf("I assure you, nothing would fill my\nheart with joy more than to be friends\nwith the fine people of this town.\n\nBut as soon as I try to approach any of\nthem and extend my claw in friendship,\nthey run and scream as though they've\nseen a walking nightmare!\nOh, right... Silly me. I've gotten ahead\nof myself! You see, there is an old tale\namong my monstrous kin that goes\nas follows...")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 3077), ('next', 73), ('param3', 13)])
	printf("It seems that when humans make other\nhumans happy, the happy humans\nproduce a substance known as a\n#####Gratitude Crystal#####.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 2572), ('next', 74), ('param3', 13)])
	printf("#####Gratitude Crystals##### are quite amazing!\nJust looking at them and knowing there\nwas such gratitude in the world could\nturn me from a monster into a human!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 3072), ('next', 115), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 10), ('param3', 33)])
	printf("######Oh goodness, nothing would delight me\nmore than to become a human!\n\n\nFrom the moment I laid my regrettably\ndemonic eyes on you, I could tell\nyou had a gentle and generous heart.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 7), ('param2', 2048), ('next', 116), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 80), ('param3', 33)])
	printf("Won't you please gather #####Gratitude\nCrystals #####and show them to me?\n#####Sure!#####Nope.")
	switch (choice(2, 0)) {
	  case 0:
		flw_82:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 3086), ('next', 117), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 8), ('param3', 33)])
		printf("Truly?! You'll help me?")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 113), ('param3', 33)])
		printf("I've heard that you can obtain pure\n#####Gratitude##### #####Crystals##### by helping people\nsolve their troubles!")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 2572), ('next', 83), ('param3', 13)])
		printf("They could also be merely lying about\nhere in Skyloft or elsewhere among the\nclouds...anywhere you find people!\n\nI'm sure someone with a heart as pure\nand genuine as yours will be able to see\nthem.\n\nPlease, solve some troubles and gather\nme all the #####Gratitude Crystals #####you\ncan find!")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 3079), ('next', 85), ('param3', 13)])
		printf("Any help you can provide will be dearly\nappreciated. I promise your assistance\nwill not go unrewarded!")
		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
		scene_flags[0 'Skyloft'][78 /* 0x8 40 */] = true;
		switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
		  case 0:
			story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
			flw_167:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			goto flw_167
		}
	  case 1:
		flw_81:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 2572), ('next', 6), ('param3', 13)])
		printf("Please, gentle sir! I beg you. Do not\nmake me bend my wings and grovel.\n#####OK, fine.#####No chance!")
		switch (choice(2, 0)) {
		  case 0:
			goto flw_82
		  case 1:
			goto flw_81
		}
	}
}

void entrypoint_121_03() {
	start()
	switch (story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */]) {
	  case 0:
		printf("######When I figured out that my very\npresence in Skyloft was causing trouble\nfor its good citizens, it was quite a\nmost unpleasant shock.\nBut now I can put that all behind me!\nI feel like I'm finally an ordinary\nresident of Skyloft. Thank you!")
	  case 1:
		printf("######Good evening, ####!\nI thought I'd take a refreshing stroll\naround town, and to my surprise \nthere's not a monster to be seen.\nYou don't suppose their disappearance\nhas something to do with me becoming\nhuman, do you?\n#####Could be!#####No way.")
		switch (choice(2, 0)) {
		  case 0:
			printf("######Goodness, I suppose you are right...")
			flw_157:
			printf("######There's no denying that when I was a\ndemon, I must have radiated a fiendish\npower into my surroundings.\n\nNow that I'm human, it seems that\nmost-unpleasant aura has completely\nfaded from this place, like an\nodious aroma in the wind!\n######And goodness me, I couldn't be more\nelated! Now everyone can finally live\nin peace, and it's all thanks to you.")
			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
		  case 1:
			printf("######Please, there's no reason to hide your\ndoubts from me.")
			goto flw_157
		}
	}
}

void entrypoint_121_30() {
	start()
	switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
	  case 0:
		printf("######Ah! Oh dear...now you've done it!\nYou opened it, didn't you?!\n\n\nHuman desire is an insatiable,\nfearsome thing...even to a demon!\nBut then again, I suppose it's also\nwhat makes your kind so intriguing...\nIf your pouch won't open, fear not.\nThat will only happen while you're\ncarrying that medal.\n\nIf you leave it at an #####Item Check#####, you'll\nbe able to open your pouch once again.")
	  case 1:
		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
		  case 0:
			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
			flw_13:
			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
			  case 0:
				switch (scene_flags[79 /* 0x8 80 */]) {
				  case 0:
					printf("####\n#Oh, thank you so much! Now I can\nfinally walk the streets of Skyloft\nwithout fear of eliciting screams!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 3072), ('next', 17), ('param3', 13)])
					printf("######Well? Were you surprised? I bet for a\nmoment there you could not recognize\nwho was standing before you!")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 3072), ('next', 97), ('param3', 13)])
					printf("It's quite understandable, really.\nEverything is so new and different,\nI don't even feel like myself!")
					scene_flags[0 'Skyloft'][79 /* 0x8 80 */] = true;
				}
			  case 1:
				switch (scene_flags[70 /* 0x9 40 */]) {
				  case 0:
					switch (scene_flags[71 /* 0x9 80 */]) {
					  case 0:
						switch (scene_flags[72 /* 0x8 01 */]) {
						  case 0:
							switch (scene_flags[73 /* 0x8 02 */]) {
							  case 0:
								switch (scene_flags[74 /* 0x8 04 */]) {
								  case 0:
									switch (scene_flags[75 /* 0x8 08 */]) {
									  case 0:
										switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 6), ('param3', 14), ('param4', 2), ('param5', 18)])) {
										  case 0:
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 3083), ('next', 36), ('param3', 13)])
											printf("Oh, my! You've gathered #####80##### #####Gratitude\nCrystals#####! If I'm not mistaken, that's all\nthe Gratitude Crystals in the whole\nwonderful world!\n######Thank you! Thank you ever so much!\n\n\n\nPlease accept this final gift with all\nof my gratitude.")
											flw_166:
											OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 37), ('param3', 12)])
											give_item(111 0x6F);
											printf("This is an embarrassingly small token\nof my gratitude, but I hope it will be\nuseful to you.")
											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 3072), ('next', 15), ('param3', 13)])
											printf("Oh, dear... With this, I now have all the\n#####Gratitude Crystals##### I require to\nbecome human!\n\n######I wonder if I'll really be able to make\nthe transformation... My heart is\naflutter!")
											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
										  case 1:
											printf("######Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore #####Gratitude Crystals#####!\n\nNext, come and see me when you've\ngathered #####80 #####of them!")
										}
									  case 1:
										switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 5), ('param3', 14), ('param4', 2), ('param5', 16)])) {
										  case 0:
											printf("######Oh! You've gathered quite a lot of\n#####Gratitude Crystals#####, haven't you?\nHow magnificent!\n\n######Please take this as a token of this\ndemon's deepest appreciation!")
											flw_127:
											OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 161), ('param3', 12)])
											give_item(33 0x21);
											printf("######But that's not all I want you to have.\nGoodness, no. I have so much more\nthanks to give!\n\n######Here, take this too!")
											give_item(33 0x21);
											printf("I only require a few more #####Gratitude\nCrystals##### to become human. Please\nhelp this needy demon a bit more...")
											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
											switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 6), ('param3', 14), ('param4', 2), ('param5', 60)])) {
											  case 0:
												printf("######Oh, you're back! And it does appear \nyou've gathered more #####Gratitude\nCrystals#####!\n\nOh, my! You've gathered #####80##### #####Gratitude\nCrystals#####! If I'm not mistaken, that's all\nthe Gratitude Crystals in the whole\nwonderful world!\n######Thank you! Thank you ever so much!\n\n\n\nPlease accept this final gift with all\nof my gratitude.")
												goto flw_166
											  case 1:
												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
											}
										  case 1:
											printf("######Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore #####Gratitude Crystals#####!\n\nNext, come and see me when you've\ngathered #####70 #####of them!")
										}
									}
								  case 1:
									switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 4), ('param3', 14), ('param4', 2), ('param5', 14)])) {
									  case 0:
										printf("######Oh! You've gathered quite a lot of\n#####Gratitude Crystals#####, haven't you?\nHow magnificent!\n\n######Please take this as a token of this\ndemon's deepest appreciation!")
										flw_165:
										OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 27), ('param3', 12)])
										give_item(110 0x6E);
										printf("I only require a few more #####Gratitude\nCrystals##### to become human. Please\nhelp this needy demon a bit more...")
										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
										switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 5), ('param3', 14), ('param4', 2), ('param5', 58)])) {
										  case 0:
											printf("######Oh gracious me! That is a prodigious\nquantity of #####Gratitude Crystals##### you've\nbrought for me!\n\n######This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
											goto flw_127
										  case 1:
											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
										}
									  case 1:
										printf("######Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore #####Gratitude Crystals#####!\n\nNext, come and see me when you've\ngathered #####50 #####of them!")
									}
								}
							  case 1:
								switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 14), ('param4', 2), ('param5', 12)])) {
								  case 0:
									printf("######Oh! You've gathered quite a lot of\n#####Gratitude Crystals#####, haven't you?\nHow magnificent!\n\n######Please take this as a token of this\ndemon's deepest appreciation!")
									flw_164:
									OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 49), ('param3', 12)])
									give_item(33 0x21);
									printf("You have made such magnificent\nprogress gathering #####Gratitude Crystals#####.\n\n\nPlease just continue helping me a bit\nlonger...")
									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
									switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 4), ('param3', 14), ('param4', 2), ('param5', 56)])) {
									  case 0:
										printf("######Oh gracious me! That is a prodigious\nquantity of #####Gratitude Crystals##### you've\nbrought for me!\n\n######This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
										goto flw_165
									  case 1:
										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
									}
								  case 1:
									printf("######Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore #####Gratitude Crystals#####!\n\nNext, come and see me when you've\ngathered #####40 #####of them!")
								}
							}
						  case 1:
							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 2), ('param3', 14), ('param4', 2), ('param5', 10)])) {
							  case 0:
								printf("######Oh! You've gathered quite a lot of\n#####Gratitude Crystals#####, haven't you?\nHow magnificent!\n\n######Please take this as a token of this\ndemon's deepest appreciation!")
								flw_24:
								give_item(109 0x6D);
								printf("You have made such magnificent\nprogress gathering #####Gratitude Crystals#####.\n\n\nPlease just continue helping me a bit\nlonger...")
								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
								switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 14), ('param4', 2), ('param5', 54)])) {
								  case 0:
									printf("######Oh gracious me! That is a prodigious\nquantity of #####Gratitude Crystals##### you've\nbrought for me!\n\n######This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
									goto flw_164
								  case 1:
									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
								}
							  case 1:
								printf("######Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore #####Gratitude Crystals#####!\n\nNext, come and see me when you've\ngathered #####30 #####of them!")
							}
						}
					  case 1:
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 8)])) {
						  case 0:
							printf("######Oh! You've gathered quite a lot of\n#####Gratitude Crystals#####, haven't you?\nHow magnificent!\n\n######Please take this as a token of this\ndemon's deepest appreciation!")
							flw_42:
							give_item(94 0x5E);
							printf("I'm still going to need more #####Gratitude\nCrystals##### to become a human.\n\n\nPlease, won't you aid a poor,\nunfortunate demon in need?")
							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 2), ('param3', 14), ('param4', 2), ('param5', 52)])) {
							  case 0:
								printf("######Oh gracious me! That is a prodigious\nquantity of #####Gratitude Crystals##### you've\nbrought for me!\n\n######This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
								goto flw_24
							  case 1:
							}
						  case 1:
							printf("######Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore #####Gratitude Crystals#####!\n\nNext, come and see me when you've\ngathered #####10 #####of them!")
						}
					}
				  case 1:
					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 32)])) {
					  case 0:
						printf("######Oh! You've gathered quite a lot of\n#####Gratitude Crystals#####, haven't you?\nHow magnificent!\n\n######Please take this as a token of this\ndemon's deepest appreciation!")
						give_item(108 0x6C);
						printf("I'm still going to need more #####Gratitude\nCrystals##### to become a human.\n\n\nPlease, won't you aid a poor,\nunfortunate demon in need?")
						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 50)])) {
						  case 0:
							printf("######Oh gracious me! That is a prodigious\nquantity of #####Gratitude Crystals##### you've\nbrought for me!\n\n######This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
							goto flw_42
						  case 1:
						}
					  case 1:
						switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
						  case 0:
							flw_122:
							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
							  case 0:
								printf("######Oh, dear, I want to be a human so\nbadly it pains me! Please hurry along\nand gather some #####Gratitude Crystals#####...\n\nJust come and show me #####five #####to start\nwith. If you do a great kindness for\nsomeone, you may even get several\nat once!")
							  case 1:
								printf("######That dear girl should be back home\nsafe and sound by tomorrow morning.\nGive her parents my warmest regards\nwhen you see them.\nOh, and good luck gathering the\n#####Gratitude Crystals #####I require. To start,\nplease bring me #####five##### if you can!\nThat would be so splendid!\nIf you do a great kindness for someone,\nyou may even find several at once!")
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 48), ('param2', 1), ('next', 128), ('param3', 23)])
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 46)])) {
							  case 0:
								printf("######Magnificent! Yes, that is truly a\n#####Gratitude Crystal#####!##### That did not take\nyou long at all.\n\nAs a start, can you please bring me\n#####five##### of them?\n\n\nIf you do a great kindness for someone,\nyou may even get several of them at\nonce!")
								loadzone_temp_flags[1 /* 0x9 02 */] = true;
							  case 1:
								goto flw_122
							}
						}
					}
				}
			}
		  case 1:
			goto flw_13
		}
	}
}

void entrypoint_121_00() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 35), ('next', 18), ('param3', 32)])
	printf("######It's...aghh!####<#")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 119), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 68), ('param3', 6)])
	printf("###########Graaauuugh!######")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 71), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 35), ('param2', -1), ('next', 88), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8969), ('param2', 3072), ('next', 89), ('param3', 13)])
	printf("#####...###########Well? How do I look, my dear\nfriend ####?")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8968), ('param2', 2560), ('next', 91), ('param3', 13)])
	printf("...Oh, you needn't even say it. I can\ntell from the look of sheer\nastonishment on your face.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8970), ('param2', 3072), ('next', 93), ('param3', 13)])
	printf("My appearance has changed so\ndramatically you've been struck\nspeechless, haven't you?")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8969), ('param2', 3072), ('next', 19), ('param3', 13)])
	printf("Allow me to tell you this...there's\nsimply no word in your language to\ndescribe how grateful I am for your\nhelp. I am deeply touched!\nFrom now on, I plan to live happily\nwith everyone else. Not as a monster...\nbut as any other person.")
	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
}

void entrypoint_121_01() {
	start()
	switch (temp_flags[12 /* 0x0 10 */]) {
	  case 0:
		printf("######Look how bright and cheery this place\nis! Such a flurry of color and activity--\nit's positively bustling! I could spend\nall day here just taking it in.")
	  case 1:
		printf("######Oh, good day, ####!\nI simply can't thank you enough for all\nyour help! I'm overjoyed!\n\nFor so long, I wondered what it would\nbe like to casually stroll through the\nbazaar, and here I am!\n\n######And look around... The best part is\nnobody is screaming in horror!")
		temp_flags[12 /* 0x0 10 */] = true;
	}
}

