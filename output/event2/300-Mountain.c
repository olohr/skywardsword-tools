          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf("I just know your friend's waiting on\nyou. That's why ya can't ever, ever\ngive up!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf("______Hey, you! Long time no see. Thanks\nfor helping me earlier.\n\n\nSpeaking of helping, did you find that\nfriend you were looking for?\n[1]Sure did![2]Not yet...")
/*<225>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*<227>*/ 			printf("______You did? Heyyy, that's great news!_____\nHuh? You haven't rescued her?\n\n\n______Don't look so glum, pal. I'm sure you'll\nfigure it out and save her.\nNever give up!")
          		  case 1:
/*<226>*/ 			printf("______Oh, really? You think those red creeps\nmight have...gulp...you know?_____\n\n\n______What? You know she's still alive?\nThen everything's gonna be fine!\nStop with the sad face, will ya?\n\n______You give up, she's done for. That's why\nya can't ever, ever crawl into your\ntunnel defeated. Ya hear me?")
          		}
          	}
          }

          void entrypoint_300_07() {
/*<324>*/ 	start()
/*<325>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 326), ('param3', 33)])
/*<326>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 327), ('param3', 17)])
/*<327>*/ 	switch (loadzone_temp_flags[16 /* 0xB 01 */]) {
          	  case 0:
          		flw_329:
/*<329>*/ 		printf("______Hey! No running away! Take care of\nthese creeps, will ya?")
          		flw_334:
/*<334>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
          	  case 1:
/*<333>*/ 		switch (loadzone_temp_flags[18 /* 0xB 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf("______Hey, you! You've really got those guys'\nattention. And it looks like they're\nspoiling for a fight.\n\n______Take one for the rest of us and chase\n'em outta here, will you?")
/*<330>*/ 			loadzone_temp_flags[16 /* 0xB 01 */] = true;
          			goto flw_334
          		}
          	}
          }

          void entrypoint_300_08() {
/*< 20>*/ 	start()
/*< 56>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 57), ('param3', 32)])
/*< 57>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', -1), ('next', 338), ('param3', 16)])
/*<338>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 155), ('param3', 33)])
/*<155>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 59), ('param3', 17)])
/*< 59>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 339), ('param3', 39)])
/*<339>*/ 	switch (scene_flags[27 /* 0x2 08 */]) {
          	  case 0:
/*<341>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4114), ('param2', 3590), ('next', 340), ('param3', 13)])
/*<340>*/ 		printf("Gyaah! Sneak attack! Hey, where'd all\nthe lava go? Now the road's open\nagain! You won't get away with this!")
          	  case 1:
/*<166>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4114), ('param2', 3590), ('next', 58), ('param3', 13)])
/*< 58>*/ 		printf("Gyaah! Sneak attack!\n\n\n\nWait... You ain't one of those red guys.\n~~~______Don't creep up on me like that!\nAlmost had to tackle ya there.\n\n______Didn't mean to yell at ya, but those red\njerks moved in and have been stinking\nup our turf, ya know?")
/*< 61>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 60), ('param3', 39)])
/*< 60>*/ 		printf("They came up through that hole back\nthere, so I sunk the road leading to it\nin lava. That'll stop more of 'em\nfrom moving in, I'd say.")
/*< 63>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 62), ('param3', 39)])
/*< 62>*/ 		printf("Of course, we can tunnel underneath\nit, so it's no sweat for us.\n______Pretty clever, right?")
/*<167>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', -1), ('next', 65), ('param3', 13)])
/*< 65>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 64), ('param3', 39)])
/*< 64>*/ 		printf("So stay away from the plug that's\nholding back the lava. It'll do more\nthan singe your brows off. Bye now!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf("______Just curious, but...what do ya think\nthose red guys eat, anyway?")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Oh, hey! Sometimes these<r< red, blobby\nthings >>will pop out too. Disgusting!\nBe careful not to let 'em grab you.")
          	  case 1:
/*<303>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 2559), ('next', 350), ('param3', 13)])
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf("Whoa! You scared me silly! ___________You can't\njust start digging right above my head,\nyou know?\n\n______But I get where you're coming from.\nYou never know what you're going to\nfind when you dig. That's what makes\nit so impossible to stop!\n<r<______Rupees >>are the most common thing\nyou'll dig up, but you might get some\n<r<Eldin Ore >>as well!\n\n______Used to be plenty of hearts buried down\nhere too, but weirdly enough I haven't\nseen any recently. Go figure.\n\n______Anyhow, if you run across a hole and\nyou've got the time, dig, dig, dig!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf("Whoa! You scared me silly! ___________You can't\njust start digging right above my head,\nyou know?\n\n______But I get where you're coming from.\nYou never know what you're going to\nfind when you dig, so it's impossible to\nstop!\n<r<______Rupees >>are the most common treasure\nyou'll dig up, but sometimes you might\neven score <r<Eldin Ore>> or some <r<hearts>>!\n\nSo if you run across a hole and you've\ngot the time, dig, dig, dig!")
          			goto flw_75
          		}
          	}
          }

          void entrypoint_300_26() {
/*<230>*/ 	start()
/*<231>*/ 	switch (scene_flags[44 /* 0x4 10 */]) {
          	  case 0:
/*<234>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<238>*/ 			switch (scene_flags[75 /* 0x8 08 */]) {
          			  case 0:
          				flw_236:
/*<236>*/ 				printf("______You can find caves aboveground\nand belowground. I bet you can sniff\nout thin walls wherever you go!")
          			  case 1:
/*<235>*/ 				printf("______Huh? It was right there all along?\nNice work, greenie.")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf("Around here, you can find little\npockets or caves hidden behind thin,\ncracked walls. Who knows what\nyou might find in those places...")
          			  case 1:
/*<244>*/ 				printf("______You're looking pretty chipper, pal.\nYou come back to do some treasure\nhunting?\n\n______You may already know this, but <b<Eldin\nVolcano >>is riddled with hidden\ncaves.\n\n______You can find 'em by checking around\nfor thin, cracked walls.\n\n\nYou can find all kinds of things in these\ncaves. It's mostly <y<Rupees>>, sure, but ya\nnever know. ______If you get the itch for loot,\nyou should try some cave hunting.")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf("______I got a hunch there's one around here\nsomewhere...")
          		  case 1:
/*<232>*/ 			printf("______You're looking pretty chipper, pal.\n\n\n\n______You come back here to do some\ntreasure hunting this time? In that\ncase, I'll let you in on a little secret.\n\n______<b<Eldin Volcano >>is riddled with hidden\ncaves. You can find 'em by checking\naround for thin walls with cracks.\n\nYou can find all kinds of things in these\ncaves. It's mostly <y<Rupees>>, but ya never\nknow. ______I got a hunch there's one right\naround here somewhere...")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf("______Long-lost ruins in the heart of a\nvolcano... Heh... Now that's a tale to\nget any <b<treasure hunter>>'s heart\npumping!")
          	  case 1:
/*<246>*/ 		printf("______Hey, you! I hope you're taking good\ncare of my <y<Bomb Bag>>.\n\n\n______By the way, you ever been to the\nheart of <b<Eldin Volcano>>?\n\n\n______It's so hot down there it'll burn the\nclothes right off your back. POOF!\nYour average traveler will be dead in\nminutes.\n______But if you survive... Well, rumor has it\nthere are amazing ruins overflowing\nwith piles and mountains of treasure.\n\n______Course, it's nothing for my people\nto just tunnel right in there, ya know?\nYeah... I may have to make the effort\nsometime in the near future.")
/*<247>*/ 		scene_flags[4 'Eldin Volcano'][77 /* 0x8 20 */] = true;
          	}
          }

          void entrypoint_300_10() {
/*< 23>*/ 	start()
/*<278>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1000), ('next', 81), ('param3', 24)])
/*< 81>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 147), ('param3', 32)])
/*<147>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 17), ('next', 277), ('param3', 32)])
/*<277>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 16), ('next', 82), ('param3', 33)])
/*< 82>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 250), ('param3', 16)])
/*<250>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 258), ('param3', 39)])
/*<258>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 298), ('param3', 6)])
/*<298>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 16), ('next', 168), ('param3', 33)])
/*<168>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', 3340), ('next', 24), ('param3', 13)])
/*< 24>*/ 	printf("Hmm... I'm sure they buried it around\nhere someplace, but I can't find it.")
/*< 83>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 25), ('param3', 16)])
/*< 25>*/ 	printf("Yo, <b<Ledd>>! This is the place, ain't it?\nSo what is it they buried again?")
/*< 84>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 170), ('param3', 16)])
/*<170>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4351), ('param2', -245), ('next', 26), ('param3', 13)])
/*< 26>*/ 	printf("A <r<key>>! <r<K-E-Y>>, <r<KEY>>!")
/*<148>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 0), ('next', 259), ('param3', 39)])
/*<259>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 149), ('param3', 6)])
/*<149>*/ 	printf("They busted up the <r<key to that door >>and\nhid the pieces all over the place.\n\n\nI'm telling you, one of the <r<five pieces >>is\nburied right around here.")
/*<260>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 251), ('param3', 6)])
/*<251>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 85), ('param3', 39)])
/*< 85>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 169), ('param3', 16)])
/*<169>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4373), ('param2', 3330), ('next', 27), ('param3', 13)])
/*< 27>*/ 	printf("Hey, that reminds me... That<r< strange\nblonde girl in the weird clothes >>______got\ntaken away too.")
/*<252>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 86), ('param3', 39)])
/*< 86>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 28), ('param3', 16)])
/*< 28>*/ 	printf("______That's right! I bet they got something\nreally valuable stashed in there.\n\n\n______And that blonde girl they took is\nprobably part of their master plan too.\nI'm telling you, I can smell the riches\nfrom here!")
/*<253>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 23), ('param2', 0), ('next', 87), ('param3', 39)])
/*< 87>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 171), ('param3', 16)])
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4607), ('param2', -254), ('next', 29), ('param3', 13)])
/*< 29>*/ 	printf("So what're you saying we do once we\nfind all the pieces to the key?")
/*< 88>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 30), ('param3', 16)])
/*< 30>*/ 	printf("______Whaddya think, igneous? We sneak\ninside and take all the treasure we\ncan carry!")
/*<151>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4097), ('param2', -1), ('next', 89), ('param3', 13)])
/*< 89>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 16), ('next', 172), ('param3', 16)])
/*<172>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4371), ('param2', 4103), ('next', 31), ('param3', 13)])
/*< 31>*/ 	printf("Hey...~~~ Why are we so worried about a\nkey when we can just dig our way in?")
/*<262>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 254), ('param3', 6)])
/*<254>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 90), ('param3', 39)])
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 173), ('param3', 16)])
/*<173>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4097), ('param2', 511), ('next', 174), ('param3', 13)])
/*<174>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4353), ('param2', 511), ('next', 32), ('param3', 13)])
/*< 32>*/ 	printf("What? Um..._____")
/*<255>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 33), ('param3', 39)])
/*< 33>*/ 	printf("Just sayin'._____")
/*<256>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 23), ('param2', 0), ('next', 91), ('param3', 39)])
/*< 91>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 17), ('next', 175), ('param3', 16)])
/*<175>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4117), ('param2', -1), ('next', 261), ('param3', 13)])
/*<261>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 34), ('param3', 6)])
/*< 34>*/ 	printf("You ain't as dumb as you look!")
/*<257>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 145), ('param3', 6)])
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 345), ('param3', 6)])
/*<345>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf("____K_______Master, this is <b<Eldin Volcano>>. It is an\nactive volcano rich with the power\nof the earth.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("______Master Link, I require\nyour confirmation on critical\ninformation obtained from that\n<b<Mogma >>conversation.\nThe<r< oddly garbed figure >>taken deeper\ninto the region must be...\n[1]Zelda! [2]Woman in black?")
/*< 37>*/ 	switch (choice(2, 0)) {
          	  case 0:
/*< 38>*/ 		printf("______My calculations agree, Master. \nThere is a 90% probability the figure in\nquestion was indeed Zelda.")
          		flw_92:
/*< 92>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 66), ('param3', 39)])
/*< 66>*/ 		printf("Additionally, I calculate there is a 95%\nprobability that the key to this door is\nmade of the same material composition\nas this mechanism that bars it. ")
/*< 93>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 94), ('param3', 39)])
/*< 94>*/ 		printf("I have detected objects of the same\nmaterial in the surrounding area.\n\n\nAscertaining the location of these\nobjects will aid in our search for\n<r<Zelda>>. I have registered them as\n<r<dowsing >>targets.______")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 2), ('next', 344), ('param3', 56)])
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf("The woman in black? The probability\nof your assessment being correct\nis..._____10%. _____Rounded up.\n\nI conclude the subject was likely\n<r<Zelda>>.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf("____Z_Approximately 65% of the region is\ncovered by lava. It is inhabited by a\nlarge number of creatures that thrive\nin the extreme heat and direct flame.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf("You listening? You've gotta remember\nthis. There are <r<no bad holes >>around a\n_____green Rupee>>.\n\nA _____blue Rupee >>will have <r<one or two bad\nholes >>around it, and a<r+< red Rupee >>will\nhave <r<three or four>>.\n\nA ____\nsilver Rupee>> will be surrounded by\n<r<five or six bad holes>> and a _____gold Rupee\n>>by <r<seven or eight>>. Those are the rules!\n\nThe only thing standing between you\nand being filthy rich is luck. ______Here's\nhoping you're luckier than you look.\nHeh heh.")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2059), ('next', 53), ('param3', 13)])
/*< 53>*/ 			printf("What? You looking to buy what I'm\nselling?")
/*<308>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 309), ('param3', 12)])
/*<309>*/ 			printf("______Secret information on <r<Thrill Digger\n>>can be yours for only <r<20 Rupees>>.\n[1]Tell me![2-]Nah...")
          			flw_44:
/*< 44>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 2057), ('next', 45), ('param3', 13)])
/*< 45>*/ 					printf("Heh, heh... That's the spirit! Now\nyou've got to promise me this stays\nbetween the two of us. You gotta keep\nyour trap shut. Got it?")
/*<305>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 306), ('param3', 12)])
/*<306>*/ 					printf("______The color of the Rupee you dig up will\ntell you how many bad holes are\naround you.\n\n______Like if you dig up a_____ green Rupee>>, there\nare <r<no bad holes >>around it!\n\n\nA _____blue Rupee >>will have <r<one or two bad\nholes>>. A<r+< red Rupee >>will have<r< three or\nfour>>, and a ____\nsilver Rupee>> has got <r<five or\nsix>>.\nIf you're lucky enough to dig up a rare\n_____gold Rupee>>, there will be <r<seven or eight\nbad holes >>nearby. There are almost no\ngood holes!")
/*<178>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', -245), ('next', 54), ('param3', 13)])
/*< 54>*/ 					printf("What do you think? Makes planning\nwhere to dig a bit easier, don't it?\n\n\n______But at the end of the day, it comes down\nto luck. YOUR luck. So just do the\nbest you can, and cross your fingers\nor something.")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf("C'mon, pal! You ain't got enough\nRupees.\n\n\n______Unless you bring me exactly\n<r<20 Rupees>>, I'm not telling you a thing.")
          				}
          			  case 1:
/*<177>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 49), ('param3', 13)])
/*< 49>*/ 				printf("Why you gotta be such a Rupee\npincher? Fortune's knocking at your\ndoor, pal.\n\n______All right, it's your call. You change\nyour mind, come see me. The info\nwill cost you <r<20 Rupees>>.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf("Hey, you! You're gonna try your mitts\nat <b<Tubert's >><r<Thrill Digger >>game, right?\n\n\n______Pssst. You want some <r<top-secret info>>?\nIt's guaranteed to make you rich!\n______R-____\nI-____\nC-____\nH____\n.\n\nNow since you'll be lining your pockets\nwith Rupees, it's only fair I get a little\npiece of the pie. And I want my pie\nnow, thank you.")
/*<304>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 307), ('param3', 12)])
/*<307>*/ 			printf("______I've got a super-discount price just\nfor you, buddy. How does <r<20 Rupees\n>>sound?\n[1]Deal![2-]No, thanks.")
          			goto flw_44
          		}
          	}
          }

          void entrypoint_300_13() {
/*< 67>*/ 	start()
/*<297>*/ 	loadzone_temp_flags[1 /* 0x9 02 */] = true;
/*<205>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 505), ('param2', 5), ('next', 204), ('param3', 23)])
/*<204>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 36)])) {
          	  case 0:
          		flw_207:
/*<207>*/ 		printf("Master, I am detecting <r<extremely high\ntemperatures>> from the area directly\nahead.\n\nYou will not survive this environment\nwith your current ______heart total.\nI recommend you turn back.")
          		flw_296:
/*<296>*/ 		loadzone_temp_flags[1 /* 0x9 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf("______Master, I am detecting<r< extremely high\ntemperatures>> from the area ahead.\nYou will not survive this environment\nwith your ______heart total.\nAdditionally, <r<dowsing >>results do not\nsupport this path. Please reconfirm\nthe correct direction to proceed.")
/*<208>*/ 			loadzone_temp_flags[2 /* 0x9 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf("____Z_Please exercise caution with flammable\nmaterials such as <r<wood >>and <r<fabric>>.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf("I'm pretty sure the getup was blackish.\nBesides that, I don't remember much.")
          	  case 1:
/*<153>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 2065), ('next', 70), ('param3', 13)])
/*< 70>*/ 		printf("Huh? Another stranger? And you're\nnot one of those red creeps, either.\nI swear this neighborhood's getting\ncrummier every day...")
/*< 77>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 78), ('param3', 39)])
/*< 78>*/ 		printf("Huh? Oh, nothing, just talking to\nmyself. Hey, I saw this <r<funny-dressed\ncharacter >>go into that hole over there.")
/*< 79>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 154), ('param3', 39)])
/*<154>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3342), ('next', 80), ('param3', 13)])
/*< 80>*/ 		printf("It might be the friend you're looking\nfor? You want to know what this\nkook was wearing?")
/*<349>*/ 		printf("______Let's see..._____ Yeah, I'm pretty sure the\ngetup was <r<blackish>>. Other than that, I\ndon't remember much.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf("____K_In the event you catch on fire, I highly\nrecommend you extinguish the flames\nby performing a<g< forward roll>> or a <g<spin\nattack>>.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf("The one that went running through\nhere looked kinda like you.\n\n\nI don't think he was dressed in green,\nthough.")
          	  case 1:
/*< 97>*/ 		printf("______Huh? You're looking for a friend?\nNOT treasure?\n\n\n______So that must have been your pal that\npassed by earlier, <r<sprinting by >>without\nso much as a glance in this direction.______\n\nIt was sorta a blur of movement, so I\ndidn't get a real good look, but I knew\nit wasn't one of those red creeps.\n\nYour pal must have gone straight up\nhere, so why don't you follow?")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf("______Master, the abilities of your sword have\nincreased. It is now possible to <r<dowse\n>>for <y<Rupees>>.\n\nI have registered <y<Rupees >>as a viable\n<r<dowsing>> target. ______Use this exciting new\nfeature as you deem necessary.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 20), ('next', -1), ('param3', 56)])
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf("There are loads of these red, blue, and\ngreen stones called <y<Rupees >>around\nhere. Sometimes you can even find\n<r<silver >>and<r< gold >>ones too.\nAnd while they ain't technically\ntreasure, you can also find these tough\n<r<crystals>>. I bet you could <r<use them to\nmake stuff>>.")
          		  case 1:
/*<101>*/ 			printf("Us <b<Mogmas >>have claimed this territory\nto search around for riches. We're\nwhat you'd call <b<treasure hunters>>.\n\nThere are loads of these red, blue, and\ngreen stones called <y<Rupees >>around\nhere. Sometimes you can even find\n<r<silver >>and<r< gold >>ones too.\nAnd while they ain't technically\ntreasure, you can also find these tough\n<r<mineral chunks>>. I bet you could <r<use 'em\nto make stuff>>.\nSince you're here and all, you might as\nwell look around, right?")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf("______Huh? You're looking for a friend?\nNOT treasure?\n\n\n______So that must have been your pal that\npassed by earlier, <r<sprinting by >>without\nso much as a glance in this direction.______\n\nIt was sorta a blur of movement, so I\ndidn't get a real good look, but I knew\nit wasn't one of those red creeps.\n\nYour pal must have gone straight up\nhere, so why don't you follow?")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
          		  case 0:
/*<289>*/ 			printf("Wonder where the next treasure might\nbe... Gotta remember not to forget\nabout the whole digging thing.")
          		  case 1:
/*<287>*/ 			printf("Hey, you! Did ya make it to the ruins?\n\n\n\n______I decided it wasn't worth the trouble.\nBoy, was my partner steamed!\n\n\n______He kept shouting, _All you had to do\nwas dig your way in! How hard could it\nbe?\" ~~~He's right too. Digging would\nhave made it easy. Heh heh...")
/*<288>*/ 			loadzone_temp_flags[2 /* 0x9 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
          		  case 0:
/*<294>*/ 			printf("Wonder where my search for riches\nwill lead me next... A <b<treasure hunter's\njourney never ends>>. Heh heh...")
          		  case 1:
/*<292>*/ 			printf("______Hey, you. Hope you're taking good care\nof my <y<Bomb Bag>>.\n\n\n______I was nice enough to give it to you, so\nbe sure you put it to good use.\nOh, and don't burn a hole in it!")
/*<293>*/ 			loadzone_temp_flags[2 /* 0x9 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3589), ('next', 123), ('param3', 13)])
/*<123>*/ 	printf("Whoa! Now there's a green one!")
/*<182>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -256), ('next', 181), ('param3', 13)])
/*<181>*/ 	printf("One of your people just came charging\nthrough here. <r<Dressed all in black>>!\nThat a friend of yours?______")
/*<125>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 152), ('param3', 39)])
/*<152>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 126), ('param3', 13)])
/*<126>*/ 	printf("See that up ahead? That's what we call\na drop-dead dead end, but this\ncharacter danced right over it.")
/*<127>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 128), ('param3', 39)])
/*<128>*/ 	printf("Seriously? Jumping over a gap like\nthat? ~~~My jaw hit the dirt.")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf("The mountains ahead are crawling with\nthose red troublemakers, but...\n\n\nI got a feeling that shady so-and-so is\ngonna zip right on by 'em.\n\n\nCan you imagine treasure hunting with\nsomeone who could do that? ______You got\nyourself some good friends, don'tcha?")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf("______Master, I require your confirmation.\nYou are currently attempting to\nascertain the location of <r<Zelda>>.\n\nAre you familiar with how to use\n<r<dowsing >>to search for Zelda?\n[1]Of course! [2]I forgot...")
/*<279>*/ 	switch (choice(2, 0)) {
          	  case 0:
/*<280>*/ 		printf("______Of course you do. My apologies. Please\ncontinue your search for Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf("______Understood, Master. To begin <r<dowsing>>,\npress and hold (C)._____\n\n\nUse the Wii Remote to select a dowsing\ntarget. You will be able to sense the\ntarget through the tip of your sword.\n\nThe closer you get to the target, the\n<r<stronger the sword's reaction will\nbecome>>. You will be alerted with a\nvibration and audible cue.\nYou may also use the <r<cursor >>to gauge\nan accurate direction of the target's\nlocation.\n\nPlease select Zelda as your dowsing\ntarget and commence your search.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf("Zelda is ahead... _____Hurry.")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 156), ('param3', 39)])
/*<156>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 108), ('param3', 13)])
/*<108>*/ 	printf("Grrr... Those creeps just shimmied on\nin and took over our territory.")
/*<319>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 106), ('param3', 33)])
/*<106>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 115), ('param3', 39)])
/*<115>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 157), ('param3', 17)])
/*<157>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3590), ('next', 3), ('param3', 13)])
/*<  3>*/ 	printf("Yeow! What're you doing? Don't be\nsneakin' up on me like that!\n\n\nHuh? You're looking for your friend?______\nCan't help you there. ______Nobody's come\nthrough here, so...__\n___\n\nMaybe they went up the mountain\nfrom over thataway.")
/*<105>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 158), ('param3', 39)])
/*<158>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 55), ('param3', 13)])
/*< 55>*/ 	printf("Ahh... _____Wish someone would chase these\nclowns outta here.")
/*<104>*/ 	scene_flags[4 'Eldin Volcano'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_300_03() {
/*<  4>*/ 	start()
/*<336>*/ 	switch (loadzone_temp_flags[19 /* 0xB 08 */]) {
          	  case 0:
/*<337>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 314), ('param3', 39)])
          		flw_314:
/*<314>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 346), ('param3', 40)])
/*<346>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 256), ('next', 313), ('param3', 13)])
/*<313>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 320), ('param3', 14)])
/*<320>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 263), ('param3', 33)])
/*<263>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 150), ('param3', 17)])
/*<150>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 2056), ('next', 5), ('param3', 13)])
/*<  5>*/ 		printf("You're one tough customer! Thanks for\nall your help!\n\n\n______I don't blame you for not knowing\nthis, but us <b<Mogmas >>always honor our\ndebts. Let me give you something to\nprove it. Any special requests?\n[1]A way forward.[2]Rupees!")
/*<132>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*<133>*/ 			printf("Oh, right. You're trying to find your\nfriend, aren'tcha?\n\n\n______In that case, take these things!\nThey're something pretty special, if I\nsay so myself.")
/*<316>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 6), ('param3', 42)])
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf("With these, you should be able to get to\nthe top of that ledge right behind me.__\n___\nJust try digging in that hole below the\nledge. You're in for a surprise!")
/*<109>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 137), ('param3', 39)])
          			flw_137:
/*<137>*/ 			printf("I just hope your friend hasn't been\ncaptured by those red guys. Here's\nhoping everything's OK.")
/*<318>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<159>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 3599), ('next', 134), ('param3', 13)])
/*<134>*/ 			printf("Huh? Rupees? Is that really what\nyou're after?\n\n\n___________I mean, it's his reward and all, but...really?\nJust Rupees? Seems like a waste of a reward\nopportunity to me. And I don't even have any.\n_____Oh wait, I know. I got something good instead.\n______So, hey...uh...~~~I don't exactly have any\nRupees on me...\n\n\n______But I got something better! Didn't you\nsay you were looking for a friend?\nWell, I got something that can help you\nreach this friend... Take these instead!")
/*<317>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 135), ('param3', 42)])
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf("With these, you should be able to get to\nthe top of that ledge right behind me.__\n___\nJust try digging in that hole below the\nledge. You're in for a surprise!")
/*<138>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 160), ('param3', 39)])
/*<160>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 2048), ('next', 139), ('param3', 13)])
/*<139>*/ 			printf("_____It's not like I'm using these things, you know?\nAnd they're WAY better than Rupees!")
/*<161>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 137), ('param3', 13)])
          			goto flw_137
          		}
          	  case 1:
/*<315>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 314), ('param3', 39)])
          		goto flw_314
          	}
          }

          void entrypoint_300_20() {
/*<140>*/ 	start()
/*<144>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 16), ('next', 322), ('param3', 32)])
/*<322>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 16), ('next', 352), ('param3', 33)])
/*<352>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 16), ('next', 143), ('param3', 33)])
/*<143>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 272), ('next', 142), ('param3', 15)])
/*<142>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 183), ('param3', 39)])
/*<183>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 1799), ('next', 141), ('param3', 13)])
/*<141>*/ 	printf("Whoa... ~~~You took out every last one\nof 'em...~~~")
/*<335>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 323), ('param3', 33)])
/*<323>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 14), ('param3', 17)])
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf("Hey, I'm hoping you find your friend\nall in one piece!")
          	  case 1:
/*<110>*/ 		switch (loadzone_temp_flags[17 /* 0xB 02 */]) {
          		  case 0:
/*<111>*/ 			switch (loadzone_temp_flags[18 /* 0xB 04 */]) {
          			  case 0:
/*<113>*/ 				printf("When that creep in the <r<blue hat >>blows\nhis horn, it starts a bad-guy stampede.\nWhat're you gonna do about it?")
          			  case 1:
/*<331>*/ 				switch (loadzone_temp_flags[16 /* 0xB 01 */]) {
          				  case 0:
/*<332>*/ 					printf("______You got those creeps all worked up, so\nnow you've got to take care of 'em!\n\n\n______But they keep using that <r<horn to call\nin reinforcements>>. They just keep\ncoming and coming!\n\nI bet the horn blower in the<r< blue hat>>______\nis the leader.")
          					flw_114:
/*<114>*/ 					loadzone_temp_flags[18 /* 0xB 04 */] = true;
          				  case 1:
/*<112>*/ 					printf("______What's that? You really sent those\ncreeps packing?\n\n\n______Well, seems like they're extra mad at\nyou, so... Guess it's only natural that\nyou had to handle things.\n\n______But did you notice when you start\nwhittling 'em down, they call in\nreinforcements with that <r<horn>>?\nThat ain't a fair fight, if you ask me.\nI bet the horn blower in the <r<blue cap>>______\nis the leader.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf("Now there's an idea! Why don'tcha\nmake yourself useful and get rid of\n'em? ______Yeah, like that's gonna happen...")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf("I'm stating the obvious here, but you\ncan <g<pick up and put down >><y<bomb flowers\n>>with (A), the same way you do with jars.\n\nWhen you're holding something,\n<g<point up and swing >>the Wii Remote\ndown to throw it.\n\nTo roll it, <g<point down and swing >>the\nWii Remote up.\n\n\nGo on and practice a bit with those\n<y<bomb flowers >>over there.")
          		  case 1:
/*<195>*/ 			printf("______You, uh...know you don't have\na <y<Bomb Bag>>, don'tcha?\n\n\n______Without a <y<Bomb Bag>>, you can't safely\ncarry <y<bomb flowers >>with you when\nyou're out and about. You won't find a\n<b<Mogma >>without one.\n______What?_____ Why are you staring at me\nlike that?\n\n\n______No! No way, no how. You are not\ngetting my bag. You'll have to be\nsatisfied with blowing up stuff\nright around here.")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf("______Huh? Who're you supposed to be?\nNever seen you around here before...\n\n\nWhoa, hold it right there! ______Are you a\nfriend of those red creeps?\n[1]No way! [2]Red creeps?")
/*<186>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*<187>*/ 			printf("______You're not, huh? ~~~Well, you don't look\nlike 'em, that's for sure. You're not\nTHAT ugly.\n\n______So what then? You here to pick\n<y<bomb flowers>> ?\n[1]Bomb what?[2]Yep.")
          			flw_189:
/*<189>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*<190>*/ 				printf("______<y<Bomb flowers>>. You're joking, right?\n__\n___Those are them growing right over\nthere.")
/*<201>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', -1), ('next', 198), ('param3', 39)])
/*<198>*/ 				printf("You pick one with (A), and the fuse\nlights. A few seconds later...BOOM!\nYou don't wanna stop and sniff this\nflower. Dangerous plants, believe me.\n______But once you learn to use them, they're\na powerful weapon. Us <b<Mogmas >>are\ncrazy about 'em!\n\n______You can <g<toss>> and <g<roll >>them the same\nway you do jars. See what you can do\nwith those <y<bomb flowers >>over there.\n\n_____Um...~~~___________ Huh? You do know <g<how to roll\nand throw >>stuff, right?\n[1]Uh-huh.[2]Not really...")
          				flw_283:
/*<283>*/ 				switch (choice(2, 0)) {
          				  case 0:
/*<284>*/ 					printf("______Of course you do! You use the\nWii Remote. <g<Point it up and swing it\nforward >>to <g<throw >>things. <g<Point it down\nand swing it forward >>to<g< roll >>'em.\nI mean, hey, everyone knows that!")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf("______Don't know any of this stuff, huh?~~~\nNo worries, pal. I gotcha covered with\nall the info you need.\n\n______When you've got a <y<bomb flower>>, point\nthe Wii Remote<g< up>>!\n\n\nThe trajectory of the bomb will show\nup for ya, so all ya do is line it up with\nyour target and<g< swing it down >>to\nchuck it!\nA trajectory guide will also show up if\nyou point the Wii Remote <g<down>>.\n<g<Swing it up >>to roll the bomb along that\nguideline!\n______To reach places up <r<high>>, it's best to\nthrow bombs, but to <r<cover distances >>or\n<r<pass through narrow spaces>>, rolling is\ndefinitely the way to go.")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf("______That's what I figured. You can pick\nsome pretty powerful ones in this area.\n\n\n________\n___Look! There are some right over there!\nTake as many as you want.")
/*<200>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', -1), ('next', 199), ('param3', 39)])
/*<199>*/ 				printf("I'm sure you already know this, but\nonce you pick a flower with (A), the\nfuse starts burning. Then it'll blow up\nin just a couple of seconds.\nYou can also<g< toss>> or <g<roll >>them, just\nlike you can with some other stuff.\nYou should practice.\n\n_____Um...~~~___________huh? You do know <g<how to roll\n>>stuff, right?\n[1]Yep.[2]Not really...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf("______Yeah, monsters carrying big blades?\nThey're crawling all over the place.\nCan't believe you haven't run into any\nof 'em.\n______But if you don't know 'em, I guess\nyou're not pals.\n\n\nSo what is it then? You here to pick\n<y<bomb flowers>>?\n[1]Bomb what?[2]Yep.")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 17), ('next', 210), ('param3', 32)])
/*<210>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 162), ('param3', 33)])
/*<162>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 3075), ('next', 11), ('param3', 13)])
/*< 11>*/ 	printf("Hey! Hey! HEY! Y-you mess with our\nturf and you're gonna...pay?")
/*<211>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 17), ('next', 302), ('param3', 33)])
/*<302>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4361), ('param2', 2062), ('next', 117), ('param3', 13)])
/*<117>*/ 	printf("Whoa! You're not...~~~ Yo, <b<Ledd>>, I don't\nthink this is one of those red creeps.")
/*<212>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 118), ('param3', 33)])
/*<118>*/ 	printf("______Y-y-yeah, I think you're right...\nNo reason to scare the hair off us,\nthough!\n\n______Sorry 'bout that, pal. These monsters\nshowing up and messing with our\nturf has got me on edge.\n\n______They show up here, and I'm gonna\nknock the red clean out of 'em!\nThat's what I'm doing here.\nYeah, me, <b<Ledd>>.")
/*<213>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 17), ('next', 164), ('param3', 33)])
/*<164>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4372), ('param2', 4629), ('next', 119), ('param3', 13)])
/*<119>*/ 	printf("_____Yeah, whatever, Mr. Too Scared to Dig in\nthe Dark.")
/*<165>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 4353), ('param2', -1), ('next', 214), ('param3', 13)])
/*<214>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 163), ('param3', 33)])
/*<163>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 120), ('param3', 13)])
/*<120>*/ 	printf("Anyway, if you're looking for treasure,\nyou should stay clear of those red guys.")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf("______Master, I am detecting<r< extremely high\ntemperatures >>from the area directly\nahead.\n\nI calculate a 95% chance your clothing\nwill immediately combust upon\nentrance. Please proceed with caution. \n\nYou may be able to pass through safely\nif you<g< run>>. I recommend confirming\nyour direction by <r<dowsing >>before\nmaking the attempt.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("______You, the goddess's chosen hero...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (loadzone_temp_flags[16 /* 0xB 01 */]) {
          		  case 0:
/*<301>*/ 			printf("Do me a favor, will ya? Try not to go\ncrazy and<g< roll around >>all over the\nplace. Dust bunnies, ya know?")
          		  case 1:
/*<218>*/ 			printf("Back again, huh? Don't mind me or\nanything--it's just MY HOUSE!\n\n\n______What? What do you mean I didn't have\nto tunnel all the way up here?\n\n\n______Look, I know it's a run-down, dirty\nhovel, but it's MINE! And I want to\nknow who's dropping by my dirty hovel.\n\n______Oh, and just 'cause you're all rested\ndoesn't mean you can <g<roll around\n>>and bust the place up!")
/*<300>*/ 			loadzone_temp_flags[16 /* 0xB 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf("Hey! Welcome to my place! Make\nyourself at home.\n\n\n______What? Of course this is my house!\n\n\n\n______OK, OK, those red creeps built it,\nbut..._____ They split, right? So what's\nthe harm?\n\n______Us <b<Mogmas >>live in the ground, so we\ndon't have what you would call\n_houses.\" ______I just wanted to see what it\nfelt like to say _Welcome to my place!\"")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

