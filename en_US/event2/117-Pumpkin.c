          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x1153Oh no. You've done it now!\nThere's no escaping this one!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01I hear this chandelier is here 'cause of\nall your hard work.\n\n\n\x0E\x01\x09\x04\x00\x300You aren't just doing it to try and\nimpress Kina, are you?")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01So all that talk about monsters and\ndemons was just superstition, right?!\n\n\n\x0E\x01\x09\x04\x00\x300That old guy was just talking nonsense!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Listen to this!\n\n\n\nThe old guy over there says he saw a\ndemon!\n\n\n\x0E\x01\x09\x04\n\x300He's obviously trying to get Kina's\nattention, but he won't get anywhere\nusing creepy lines like that!")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x1104Don't tell me you believe in\nsuperstitious hogwash like\ndemons now, do you?\n\n\x0E\x01\x09\x04\n\x300Hold on! Are you trying to get Kina\nto look your way too?!")
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
/*<292>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x803I am so grateful that you brought \nthis lovely guy to help me!\n\n\nI'm going to ask him to help with all\nkinds of things! \x0E\x01\x09\x04\x13\x800Thank~~ you~~ very,~~ very,~~\nvery ~~much!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Hooo yeah! I'm gonna show you how\nit's done!")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x04So what will it be?\n[1]Harp.[2]Soup.[3-]Nothing.")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x1000Great! You can entertain my customers\nand put a smile on Kina's face!")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x700Oh, sorry, but Kina only does \nperformances at night.\n\n\nCome on back at night, OK?")
          			}
          		  case 1:
/*<315>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 316), ('param3', 12)])
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1004I'm impressed that a young man like\nyourself can appreciate the refined\ntaste!\n\nJust <r<10 Rupees >>a bottle. Interested?\n[1]Fill 'er up![2-]No, thanks.")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 322), ('param3', 42)])
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf(/* textboxtype: 1, unk: 0 */ "The soup is meant to be enjoyed hot!\nJust so you know, it'll be cold in just\nfive minutes.")
          					  case 1:
/*<321>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x700You don't have an \x0E\x02\x01\x02?!\n\n\n\nIt's mighty hard to drink soup when\nyou've got nothing to drink from!\nCome see me again when you've found\nan \x0E\x02\x01\x02!")
          					}
          				  case 1:
/*<319>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x700Looks like you don't have enough\nmoney. Maybe next time, then?")
          				}
          			  case 1:
/*<323>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xA00Come on! Make your mind up,\nwill you?!")
          			}
          		  case 2:
/*<313>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1000I get it. Well, even if there's nothing in\nparticular you need, I hope you'll take\nsome time to sit back and relax!\n\n\x0E\x01\x09\x04\x00\x700Oh, and don't forget to stop and\nsay hello to Kina now, you hear?")
          		}
          	  case 1:
/*<309>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link! What do you \nthink of this new chandelier?\n\n\n\x0E\x01\x09\x04\x0B\x1100Let me tell you, this beauty set me back\nquite a bit!")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x1006You...think I spent too much on it?!\n\n\n\n\x0E\x01\x09\x04\x08\x09Don't be a wet blanket! It's thanks to\nyour hard work that I was able to buy\nsuch a stunner of a chandelier!\n\x0E\x01\x09\x04\x0C\x900So don't break it!")
/*<311>*/ 		printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x08\x700Anyway, what can I do for you? If it's\nwork you're after, I'm sure I can find\nsomething for you to do. Just for\nold times' sake!\n\x0E\x01\x09\x04\x0E\x700And, of course, I'll pay you for it this\ntime. Want to make some money\nplaying your harp for us? Or maybe\nyou just want some soup?\n[1]Play harp.[2]Soup.[3-]I'm busy.")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 27), ('next', 142), ('param3', 32)])
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x701Hey, so I guess he's going to be helping\nwith the pumpkin patch!")
/*<127>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 122), ('param3', 16)])
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B09\x702Seriously! I could plow the patch\nmuch faster than that mole guy out\nthere!")
/*<128>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 27), ('next', 177), ('param3', 16)])
/*<177>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 22), ('param2', 2048), ('next', 123), ('param3', 13)])
/*<123>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08What? Seriously? I'm so happy!")
/*<178>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 129), ('param3', 13)])
/*<129>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 124), ('param3', 16)])
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1B07\x705Hahaha! For Kina, I'd do anything!\nWhether that's on a pumpkin patch\nor inside a burning house!")
/*<130>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 27), ('next', 179), ('param3', 16)])
/*<179>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 2048), ('next', 125), ('param3', 13)])
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A00\x09Hehe! Well then I look forward to\ngetting your help out there!")
/*<180>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', -256), ('next', 143), ('param3', 13)])
/*<143>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 144), ('param3', 16)])
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0 */ "You're all so sweet!\x0E\x01\x09\x04\x07\x703")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Yay! You found someone, didn't you?!")
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x705Wait a second... This isn't a person...\n\n\n\n\x0E\x01\x09\x04\x07\x700Ah, so you're saying that this mole\nis going to plow the patch for me?")
          }

          void entrypoint_117_25() {
/*<394>*/ 	start()
          	flw_34:
/*< 34>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 90>*/ 		switch (scene_flags[6 /* 0x1 40 */]) {
          		  case 0:
/*<200>*/ 			switch (loadzone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<201>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x703Great! Glad to have you. I know you're\nthe guy for the job!\n[1]Let's do it![2-]Never mind.")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x809I knew you wouldn't let me down!\x0E\x01\x05\x04\x1E\x00")
          					flw_87:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x700The trick to carrying several pumpkins\nat once is <r<to walk slowly>>!\n\n\nIf they start to lean right, move right. \nIf they start to lean left, move left. \nTake your time, and keep your balance!\n\n\x0E\x01\x09\x04\x01\x700But if you panic and start to rush,\nwell, you're going to drop them.\n\x0E\x01\x04\x02\x14So... Good luck!")
/*<  2>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1606Really?! I thought for sure you'd be\nwilling to lend a hand.")
          						  case 1:
/*<514>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1611Ugh... Are you always this boring?")
          						}
          					  case 1:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1606Really?! I'm telling Father about this!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x808I hope I can count on you when it comes\ntime to harvest the pumpkins again.\n\x0E\x01\x06\x02\xFBCDYou\x0E\x01\x06\x02Í strong\x0E\x01\x06\x02Í knight, you!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x700Oh! Perfect timing! How do you\nfeel about breaking a sweat with some\nhonest work?\n\n\x0E\x01\x09\x04\x07\x700Think you can help carry pumpkins\nto the storage shed? I'll pay you.\n[1]Sure![2-]No, thanks.")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x703OK, then! I'll show you where you\nneed to carry the pumpkins!")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf(/* textboxtype: 1, unk: 0 */ "See that storage shed up ahead?\nCarry the pumpkins there.")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FNow that the pumpkins have been\nharvested, the field needs to be plowed\nbefore we can plant new seeds!\n\nIf I could only find someone who\nwas good at plowing...")
/*<396>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x700I've got a favor to ask of you. See,\nthere were some pumpkins that I\nwasn't able to pick, but...\n\n\x0E\x01\x09\x04\x07\x700Do you think you can help me get those\nin the storage shed? Don't worry--I'll\npay you for your efforts this time.\n[1]Sure![2-]No way.")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh? So you're willing to help us pick\npumpkins, are you?\n\n\n[1]I'm in![2-]Nah...")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 91), ('param3', 31)])
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x701Oh...and your next job has been\ndecided! Looks like you'll be <r<helping\nwith the pumpkin harvest>>!\n\n\x0E\x01\x09\x04\x07\x700What a relief! Do you have any idea\nhow heavy those pumpkins are?\n\n\n\x0E\x01\x09\x04\x01\x1600Oh yeah? You think this is going to be\na piece of pumpkin cake, do you?\n\n\n\x0E\x01\x09\x04\x01\x700Heh heh... Let's make this interesting.\nHow about you <r<carry five pumpkins >>at\nonce?\n\n\x0E\x01\x09\x04\x07\x1600You better take it slow, or you'll\nrisk dropping them. Just get out there\nand haul those pumpkins!\n[1]Let's do it![2-]I'm busy.")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 390), ('param3', 12)])
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x809I knew you would come through for me!\nSomehow you carried them all.\nYou're the one I can trust to get the\njob done!\n\x0E\x01\x09\x04\x07\x800Here's 50 Rupees for your hard work.")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x800Thank~~~ you~~~ very~~~ much! I hope you'll\nstop in again soon.")
/*<393>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 498), ('param3', 12)])
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			loadzone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x809I just knew you would come through.\nYou managed to carry them all!\n\n\n\x0E\x01\x09\x04\x01\x700I guess that means you're done carrying\npumpkins!\n\n\n\x0E\x01\x09\x04\x19\x800Thank~~~ you~~~ very~~~ much~~~!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1611Awww, you dropped them! You can't\nbe careless like that...\n\n\n\x0E\x01\x09\x04\x07\x700If you want to try again, come on\nover here.")
/*<199>*/ 		loadzone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Hah... Nothing better than a dirty\nday's work to make a guy feel alive!\n\n\n\x0E\x01\x09\x04\x0C\xD00Especially when I see that girl. Makes\nall the tiredness just melt away!\n\n\n\x0E\x01\x09\x04\x01\x900Say\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\nhave you seen the way she's\nbeen eyeing me?\n\n\n\x0E\x01\x09\x04\x0C\xD00I think maybe that girl's fallen for me!\n\n\n\n\x0E\x01\x09\x04\x09\xD0BLemme tell you, it makes me want to \nwork even harder tomorrow!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nC'mon! Are you seriously trying to get\nme to work on a field all day?!\n\n\nIs that why you hauled me all the way\nup here into the sky?")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 74), ('param3', 12)])
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x1004I'm impressed that a young man like\nyourself can appreciate the refined\ntaste!\n\nJust <r<10 Rupees >>a bottle. Interested?\n[1]Fill 'er up![2-]No, thanks.")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0 */ "It's about time! Take this!")
/*<530>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 117), ('param3', 42)])
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf(/* textboxtype: 1, unk: 0 */ "The soup is meant to be enjoyed hot!\nJust so you know, it'll be cold in just\nfive minutes.")
          				  case 1:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x700You don't have an \x0E\x02\x01\x02?!\n\n\n\nIt's mighty hard to drink soup when\nyou've got nothing to drink from!\nCome see me again when you've found\nan \x0E\x02\x01\x02!")
          				}
          			  case 1:
/*<114>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x700Looks like you don't have enough\nmoney. Maybe next time, then?")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x705I get it. Sure. This place is good for\nmore than just drinking soup. You can\nalso meet some colorful folks here.\nMake yourself at home!\nBut don't break anything or make a\nmess of my pub.\n\n\n\x0E\x01\x09\x04\x08\x700Especially my special-ordered,\ncustom-made chandelier hanging from\nthe ceiling!\n\n\x0E\x01\x09\x04\x00\x900I don't want to see you shaking it!\nDon't even look at it sideways.\nAm I clear?")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x905I see. Well, I guess you'll just have to\nwork off the cost of that chandelier.\n\n\n\x0E\x01\x09\x04\x00\x700Give me some time and come back\nand see me. Got that?")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x905I see. Well, I guess you'll just have to\nwork off the cost of that chandelier.\n\n\n\x0E\x01\x09\x04\x00\x700Give me some time and come back\nand see me. Got that?")
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
/*<134>*/ 	start()
/*<136>*/ 	switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          	  case 0:
/*<138>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<140>*/ 			switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x70FIs there really someone who would\nhelp me out?\n\n\n\x0E\x01\x09\x04\x07\x700Well, I'll try to keep my hopes up and\njust wait here patiently until they\nshow up.")
          			  case 1:
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FNow that the pumpkins have been\nharvested, the field needs to be plowed\nbefore we can plant new seeds!\n\nIf I could only find someone who\nwas good at plowing...")
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x701Are you looking to help out with \npumpkin picking?\n\n\n\x0E\x01\x09\x04\x07\x700It's kind of late to be harvesting now...\nHow about you come back tomorrow\nmorning? Me and the patch will\nbe waiting!")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh! It's the knight who broke the\nchandelier! Still working it off, huh?\n\n\n\x0E\x01\x09\x04\x01\x700Oh, hey...\x0E\x01\x04\x02\x1EFather said he had some\nmore work for you.\n\n\n\x0E\x01\x09\x04\x07\x700You better go talk to him and find out\nwhat he has in mind.")
          		  case 1:
/*<424>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh, look! It's the brave knight who\nslayed the chandelier! Still working it\noff, eh?")
          		}
          	}
          }

          void entrypoint_117_27() {
/*<448>*/ 	start()
/*<456>*/ 	set_camera(30, 0)
/*<450>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 26), ('next', 452), ('param3', 32)])
/*<452>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 282), ('next', 453), ('param3', 15)])
/*<453>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 26), ('next', 451), ('param3', 14)])
/*<451>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', -1), ('next', 473), ('param3', 16)])
/*<473>*/ 	switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<472>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A00\x01Don't just sit there! I suggest you get\na move on and find my father, or else!\n\n\n\x0E\x01\x09\x04\x1A1A\x800You're going to be in big trouble!")
          		flw_454:
/*<454>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 282), ('next', 539), ('param3', 14)])
/*<539>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 455), ('param3', 40)])
/*<455>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 26), ('next', -1), ('param3', 15)])
          	  case 1:
/*<449>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A00\x01Welcome! This is the <r<Lumpy Pumpkin>>,\nhome of the finest pumpkin\nsoup in the big, wide sky!\n\n\x0E\x01\x09\x04\x1A1A\x800There isn't much to do here but take\na load off, relax, and enjoy yourself!")
          		goto flw_454
          	}
          }

          void entrypoint_117_10() {
/*<  6>*/ 	start()
/*<118>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
/*<214>*/ 		entrypoint_117_11();
          	  case 1:
          		flw_520:
/*<520>*/ 		scene_flags[21 'The Sky'][33 /* 0x5 02 */] = true;
/*< 12>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          			  case 0:
/*<308>*/ 				entrypoint_117_24();
          			  case 1:
/*< 14>*/ 				switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          				  case 0:
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EI think you've done enough work to\nmake up for breaking my chandelier.\nYou're off the hook, kid. I'd even say\nyou did a good job!\nI thought you might give up partway\nthrough, but you stuck it out.\n\n\n\x0E\x01\x09\x04\x00\x1000I hope you'll come back and see \nus again, but as a customer next time!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x01Hey! So you're saying that you'll \nplay one more time for Kina?\n[1]I'm in![2]Explain![3-]No way.")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EGreat! I was hoping you'd say that.")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 26), ('next', 294), ('param3', 32)])
/*<294>*/ 										OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 26), ('next', 295), ('param3', 15)])
/*<295>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 26), ('next', 261), ('param3', 16)])
/*<261>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x02All right then! Hey! Kina!")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 297), ('param3', 16)])
/*<297>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A00\x08Yes, Father! What is it?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 26), ('next', 299), ('param3', 50)])
/*<299>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 26), ('next', 262), ('param3', 17)])
/*<262>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xB00This kid is going to accompany you\nwhile you sing! Now how about letting\nyour Pops hear that beautiful voice of\nyours, eh?!")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 100), ('next', 263), ('param3', 16)])
/*<263>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Of course! Let's do it, kid.")
/*<246>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          									  case 1:
/*<545>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EUgh... I'll explain one more time.")
          										flw_265:
/*<265>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x700Customers will start waving their arms\nas Kina sings her song, so you can just\nfollow them if you need a guide to the\nrhythm you should be playing.\n\x0E\x01\x09\x04\x0F\x700Pick a customer whose movements are\neasy for you to follow, and strum with\nthem to stay on the right tempo.\n\nDon't worry about the direction of your\nstrumming. Just make sure you're not\nplaying too fast or too slow, and use\nnice, big, sweeping motions to strum!\n\x0E\x01\x09\x04\x08\x700When the customers stop moving,\nit's your chance to freestyle a little bit\nand play however you like!\n\nIt's all about playing to the rhythm!\nGot it?\n[1]OK![2-]Huh?")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf(/* textboxtype: 1, unk: 0 */ "What's wrong? Did you not understand \nwhat I said? Listen up!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Fair enough. Rest up and come back\nwhen you're ready to play!")
          									}
          								  case 1:
/*<519>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, it's you! \x0E\x01\x04\x02\x1EOh, I know that look.\nYou're fixing to play that harp of\nyours, aren't you?\n\nSorry, but we have to prepare the stage\nduring the day.\n\n\nCome back after nightfall!")
          								}
          							  case 1:
/*<604>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 517), ('param3', 31)])
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4096), ('next', 19), ('param3', 13)])
/*< 19>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ahh! You came! Let me see... What was\nit that I wanted you to do next...?\n\n\n\x0E\x01\x09\x04\x0D\x700Hey! What's that?! That's a strange-\nlooking instrument you have there...\n\n\n\x0E\x01\x09\x04\x00\x1100Oh yes! You might just be surprised\nto hear that Kina is actually quite\nthe singer!\n\n\x0E\x01\x09\x04\x00\x700It wasn't that long ago that she would\nsing for our customers!\n\n\n\x0E\x01\x09\x04\x08\x00But she had to stop because her\npartner quit.\n\n\nThink you'd be willing to do a quick\nduet with Kina?\n[1]Of course![2-]Nah...")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x100EGreat! That's what I want to hear!\n\n\n\n\x0E\x01\x09\x04\x0D\xA00But make sure you put your heart into\nit! I won't stand for anything but\nyour best.")
          										goto flw_265
          									  case 1:
/*<198>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 55), ('param3', 13)])
/*< 55>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Why do I waste my time... Don't you\nfeel even a little bad about what\nyou did?")
          									}
          								  case 1:
/*<518>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh, it's you! What should I have you\nwork on next?\n\n\n\x0E\x01\x09\x04\x00\x700Oh yeah, you've got that interesting-\nlooking instrument...\n\n\n\x0E\x01\x09\x04\x0B\x1000I got it! I've got the perfect job for you!\n\n\n\n\x0E\x01\x09\x04\x00\x700But that job can only be done at night.\n\n\n\nWait until nightfall and come back \nand see me, all right?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06I haven't figured out your next job yet!\nCome back later.\n\n\nOr are you interested in buying some\npumpkin soup and helping out our\nprofits a bit?\n[1]In that case...[2-]No, thanks.")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x100EImpressive! You're done harvesting\nall those pumpkins!\n\n\n\x0E\x01\x09\x04\x00\x700But don't celebrate yet. You've still got\na ways to go before you've paid off that\nfancy chandelier!\n\n\x0E\x01\x09\x04\x08\x00Give me some time to think about what\nI need you to work on next. Just come\nback and see me.")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2321), ('next', 50), ('param3', 13)])
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Go on out and talk with Kina. I need\nyou to help her with the pumpkin\nharvest!")
/*<196>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 1792), ('next', 195), ('param3', 13)])
/*<195>*/ 								printf(/* textboxtype: 1, unk: 0 */ "Oh, but...you can only work on the\npatch during the day!\n\n\nThere's no telling what will happen\nunder the night sky!")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 192), ('param3', 31)])
/*<192>*/ 									OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4110), ('next', 563), ('param3', 13)])
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Oh! You're here just in time.\nJust in time for another job, that is!\n\n\nYour next job is to <r<help pick the\npumpkins>>! And I don't want to hear\nany moaning or complaining.\n[1]Fine...[2-]No way!")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\x704This should be an easy one for you.\nKina spends her afternoons picking\npumpkins in the patch out back.\n\nCarry those to the storage shed.\n<b<Kina>> can give you the details!")
/*<133>*/ 											printf(/* textboxtype: 1, unk: 0 */ "Oh, but...you can only work on the\npatch during the day!\n\n\nThere's no telling what will happen\nunder the night sky!")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 48), ('param3', 13)])
/*< 48>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x11Why do I waste my time... Don't you\nfeel even a little bad about what\nyou did?")
          										}
          									  case 1:
/*< 20>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Oh! Looks like you were able to deliver\nthe soup to Eagus safely!\n\n\n\x0E\x01\x09\x04\x0C\x700I'll subtract your wages from the bill\nfor the chandelier.\n\n\n\x0E\x01\x09\x04\x0F\x900And if you think that we're even, you\nbetter think again!\n\n\nNext, I need you to <r<help harvest the\npumpkins>>! And I'm not taking no for\nan answer!\n[1]Fine...[2-]No way!")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Huh? What's wrong? I'm still thinking\nabout what I need you to work on next!\n\n\nWhy? Because you still need to pay off\nthat fancy chandelier!\n\n\nWell, are you going to add to our\nprofits and buy some pumpkin soup?\n[1]Sure.[2-]No, thanks.")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x100EAh, I see you've delivered the soup to\nEagus!\n\n\nI'll subtract your pay from the bill for\nthe chandelier...\n\n\n\x0E\x01\x09\x04\x08\x700But you're not done yet! I'm already\nscheming about what I need you\nto do next.\n\nI'm gonna need some time to think\nabout this, though, so come back and\nsee me later.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01That soup will be cold in<r< five minutes>>!\nNow get on your way and deliver that\nsoup to the Knight Commander!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Hey! Did you not hear a thing I said?\nYou let the soup get cold!\n\n\nI can't believe this... I'll fill it up again.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 29), ('param3', 42)])
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf(/* textboxtype: 1, unk: 0 */ "But you'll have to pay me for it!\nThat'll be <r<10 rupees>>!")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 158), ('param3', 13)])
/*<158>*/ 												printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0DWhat?! You don't have 10 Rupees?!\nWell...what can I do? You're off the\nhook...but just this once!")
          											}
          										  case 1:
/*<191>*/ 											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 46), ('param3', 13)])
/*< 46>*/ 											printf(/* textboxtype: 1, unk: 0 */ "Hey! You haven't got an \x0E\x02\x01\x02!\n\n\n\nYou need an \x0E\x02\x01\x02 if you want\nto carry soup! Go get yourself one and\ncome back here.")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07What's that? You don't have any\n\x0E\x02\x01\x02Ã?\n\n\n\x0E\x01\x09\x04\x0D\xA00Don't tell me you drank it!\n\n\n\nI guess there's nothing to be done\nabout it now. Here--take some more!")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07What's that? You don't have any\n\x0E\x02\x01\x02Ã?!\n\n\n\x0E\x01\x09\x04\x0D\xA00Don't tell me that you drank it!\nAnyhow, guess I'll just have to fill\nthat bottle up again.")
/*<555>*/ 											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2304), ('next', 554), ('param3', 13)])
/*<554>*/ 											printf(/* textboxtype: 1, unk: 0 */ "Hey! You haven't got an \x0E\x02\x01\x02!\n\n\n\nYou need an \x0E\x02\x01\x02 if you want\nto carry soup! Go get yourself one and\ncome back here.")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh, I see you brought an \x0E\x02\x01\x02\nwith you like I asked. Great!")
          										flw_189:
/*<189>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4100), ('next', 22), ('param3', 13)])
/*< 22>*/ 										printf(/* textboxtype: 1, unk: 0 */ "All right, then! Here's the\n<y<\x0E\x02\x01\x02Ã>>!\n\n\n\x0E\x01\x09\x04\x00\x700Deliver that to the Knight Commander!")
/*<533>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 30), ('param3', 42)])
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x700Listen up, kid. The Knight Commander\nhates cold soup!\n\n\nSo you're gonna take this hot soup over\nto him.\n\n\nI'd say you've got to deliver it in <r<less\nthan five>><r< minutes >>or the soup will\nget cold!")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2309), ('next', 591), ('param3', 13)])
/*<591>*/ 										printf(/* textboxtype: 1, unk: 0 */ "Hey! You haven't got an \x0E\x02\x01\x02!\n\n\n\nYou need an \x0E\x02\x01\x02 if you want\nto carry soup! Go get yourself one and\ncome back here.")
          									}
          								  case 1:
/*<602>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 155), ('param3', 31)])
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2317), ('next', 154), ('param3', 13)])
/*<154>*/ 										printf(/* textboxtype: 1, unk: 0 */ "So are you ready to start paying\noff that chandelier?\n[1]Yep![2-]Uh...")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4110), ('next', 76), ('param3', 13)])
/*< 76>*/ 											printf(/* textboxtype: 1, unk: 0 */ "That's right! And I'm going to hold\nyou to that!\n\n\n\x0E\x01\x09\x04\x00\x700Let's not waste any time putting you\nto work. I need you to deliver my\nfamous soup to <r<Eagus>>, <r<Skyloft's\nKnight Commander>>!\n\x0E\x01\x09\x04\x08\x700The Knight Commander is a regular\nhere. He says he can't get his day\nstarted without a bowl of my soup!\n\nWhat do you say? Are you ready to\ndeliver some soup to the Knight\nCommander?\n[1]Yep![2-]Wait...")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2309), ('next', 44), ('param3', 13)])
/*< 44>*/ 													printf(/* textboxtype: 1, unk: 0 */ "Hey! You haven't got an \x0E\x02\x01\x02!\n\n\n\nYou need an \x0E\x02\x01\x02 if you want\nto carry soup! Go get yourself one and\ncome back here.")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xA0DHey! A man's word is his honor!\nI need you to deliver this soup to\nthe Knight Commander! Got it?\n[1]Got it![2-]Wait...")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2321), ('next', 23), ('param3', 13)])
/*< 23>*/ 											printf(/* textboxtype: 1, unk: 0 */ "WHAT DID YOU JUST SAY?! You got\nsome nerve coming in here, busting up\nmy chandelier and thinking you can\nget away with it!")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2317), ('next', 21), ('param3', 13)])
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0 */ "What is wrong with you?! Just look\nat what you've done!\n\n\nYou broke my fancy, custom-ordered\nchandelier!\n\n\nYou're going to be working for me\nfor free until you pay off every single\nRupee that chandelier cost me!\nGot that?\nAre you ready to own up to your\nresponsibility?\n[1]Of course![2-]No way.")
          										goto flw_75
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*<559>*/ 			switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<557>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Welcome! Can I interest you in a\nlittle <r<pumpkin soup >>pick-me-up?\n[1]Just a little.[2-]I'll pass.")
          				flw_558:
/*<558>*/ 				loadzone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Welcome to every bird rider's favorite\nrest stop, the Lumpy Pumpkin!\n\n\nThis is the one and only place you can\nenjoy some of our famous <r<pumpkin\n<r<sou<r<>><r<p>>!\n\nWhat do you think? Want to try a bit\nand see what all the buzz is about?\n[1]Just a little.[2-]I'll pass.")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 26), ('next', 151), ('param3', 32)])
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01I don't understand that Kina. If she\nwas having trouble tending to the\npumpkin patch on her own, she could\nhave just asked me for help!")
/*<148>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 425), ('param3', 16)])
/*<425>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A00\x03Oh, but that's asking too much.\nCustomers shouldn't be made to\nwork in the pumpkin patch!")
/*<181>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6657), ('param2', -256), ('next', 149), ('param3', 13)])
/*<149>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 26), ('next', 426), ('param3', 16)])
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02It's fine! I'll be a lot more reliable and\nhardworking than that shady-looking\nmole man you got here now!")
/*<150>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 182), ('param3', 16)])
/*<182>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6675), ('param2', 2048), ('next', 146), ('param3', 13)])
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A00\x09Hehe! Well then I look forward to\ngetting your help out there!")
/*<183>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6657), ('param2', -256), ('next', 152), ('param3', 13)])
/*<152>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 427), ('param3', 16)])
/*<427>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x705Hah! I'm happy to do it. After all,\nI live to see that smile!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Hey, hard worker. You've gotten a lot\ndone for us.\n\n\nYou're always welcome here, as a \nhandyman or a customer!\n\n\nIf you're itching to do some work like\nyou did before, that's just fine with me!\nI'll even pay you for it this time.")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Hey, don't just sit there! Haven't you\ngot something to do right about now?")
          		  case 1:
/*<458>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Hey, why are you just sitting there?\n\n\n\n\x0E\x01\x09\x04\x0D\x700Well, I guess we all have to sit and\nponder things once in a while. Good\nfor the noggin, I always say.\n\n\x0E\x01\x09\x04\x00\x1000So relax! Take your time, thinker!")
          		}
          	}
          }

          void entrypoint_117_11() {
/*<213>*/ 	start()
/*<211>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*<216>*/ 		entrypoint_117_12();
          	  case 1:
/*<208>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*<212>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04The place where I offer soup to <b<Levias\n>>is inside the thunderhead cloud, on an\nisland with an everlasting <r<rainbow>>.<pling> \n\n\x0E\x01\x09\x04\x00\x700Oh, you'll know it when you see it.\nGood luck!")
          		  case 1:
/*<209>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 459), ('param3', 31)])
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\x90DHey! What are you thinking?! I go to\nthe trouble of making that soup, and\nyou change your mind before you\ndeliver it?\n\x0E\x01\x09\x04\n\x00That robot of yours brought it all\nback here!\n[1]Sorry![2]Try again!")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\x900Fine, I'll whip up another batch.\nBut only because it's for Levias!")
/*<463>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 23), ('next', 464), ('param3', 32)])
/*<464>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 471), ('param3', 32)])
          					flw_471:
/*<471>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1013), ('next', 470), ('param3', 24)])
/*<470>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x900You wait right here! I'm getting\ninspired to fire up some soup like I've\nnever souped before!")
/*<340>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 223), ('param3', 16)])
/*<223>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 228), ('param3', 47)])
/*<228>*/ 					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 256), ('next', 229), ('param3', 15)])
/*<229>*/ 					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 356), ('next', 230), ('param3', 15)])
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 4096), ('next', 523), ('param3', 13)])
/*<523>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 108), ('next', 524), ('param3', 24)])
/*<524>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 224), ('param3', 6)])
/*<224>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 547), ('param3', 48)])
/*<547>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 548), ('param3', 6)])
/*<548>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 8), ('next', 217), ('param3', 24)])
/*<217>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x1009Voilà! Here it is!\n\n\n\n\x0E\x01\x09\x04\x0F\x1100I've been cooking this stuff for well\nover 10 years, and I have to say this is\nthe best batch of <y<pumpkin soup >>I have\never created!")
/*<382>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 23), ('next', 218), ('param3', 33)])
/*<218>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 315), ('param2', 0), ('next', 525), ('param3', 51)])
/*<525>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 256), ('next', 219), ('param3', 13)])
/*<219>*/ 					printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Master, I will signal for the robot.")
/*<336>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 23), ('next', 536), ('param3', 17)])
/*<536>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 3), ('next', 344), ('param3', 33)])
/*<344>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 337), ('param3', 6)])
/*<337>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 23), ('next', 345), ('param3', 17)])
/*<345>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 341), ('param3', 6)])
/*<341>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 23), ('next', 220), ('param3', 17)])
/*<220>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dMiss Fi! I'm heeeeere, bzzzrt!")
/*<225>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 23), ('next', 221), ('param3', 33)])
/*<221>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x12\x04\x00dOh, this is another heavy load...\nBut don't worry! I can carry anything!\n\n\nI'll be waiting outside. I can take you\nwherever you need to go as soon as\nyou're ready, zizzat!")
/*<226>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 23), ('next', 343), ('param3', 33)])
/*<343>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 231), ('param3', 36)])
/*<231>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 342), ('param3', 16)])
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04The place where I offer soup to <b<Levias\n>>is inside the thunderhead cloud, on an\nisland with an everlasting <r<rainbow>>.<pling> \n\n\x0E\x01\x09\x04\x00\x700Oh, you'll know it when you see it.\nGood luck!")
/*<210>*/ 					story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = true;
/*<385>*/ 					story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */] = true;
/*<467>*/ 					story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<232>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          				  case 1:
          					goto flw_462
          				}
          			  case 1:
/*<521>*/ 				switch (scene_flags[33 /* 0x5 02 */]) {
          				  case 0:
/*<203>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01What's the matter? You look like\nyou've got something mighty\nserious on your mind.\n[1]Actually...[2-]Really?")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xD04<b<Levias>>\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í What about him?\n\n\n\n\x0E\x01\x09\x04\x00\x700Sure, I know Levias well, but I wasn't\naware anything was wrong...\n\n\n\x0E\x01\x09\x04\x08\x700Every year I offer him an entire\nbasin full of my <r<pumpkin soup>>!\n\n\nBut lately a huge thunderhead has\nbeen brewing there, and I haven't yet\nmade this year's offering. I tell you,\nI feel horrible about it!")
/*<227>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 23), ('next', 339), ('param3', 32)])
/*<339>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 207), ('param3', 32)])
/*<207>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0D\xD08You say you'll deliver a pot of my soup\nto Levias?\n\n\n\x0E\x01\x09\x04\x00\x700\x0E\x01\x06\x02\xFDCDHuh. \x0E\x01\x06\x02ÍI don't know how you plan to fly\ninto that huge thunderhead brewing\nout there, but...\n\n\x0E\x01\x09\x04\x0B\x1000If that's the case, I'm going to do\neverything I can to make Levias the\nbest batch of soup ever!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05Oh! I guess it was nothing, then.\nIf that's the case, why don't you kick up\nyour boots and stay awhile?")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04If that's the case, how about doing\nsome more work to pay off that\nchandelier?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Welcome to the Lumpy Pumpkin!\nThis here's every bird rider's favorite\nrest stop.\n\nOf course, this is the only place you can\ndrink our famous homemade pumpkin\nsoup!\n\nJudging from the look on your face,\nI'd say you've got something stewing\nin your mind.\n[1]Actually...[2-]Really?")
          					goto flw_204
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_46() {
/*<399>*/ 	start()
/*<403>*/ 	switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<404>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Oh, now I've done it...\n\n\n\nI knew better than to get greedy!")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf(/* textboxtype: 1, unk: 0 */ "<b<Jakamar>> is pretty good at fixing stuff.\n\n\n\nI'll bet he can fix Skyloft's windmill\ntoo!")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf(/* textboxtype: 1, unk: 0 */ "<b<Sparrot >>hasn't been seen hanging\naround the bazaar lately...\n\n\nIt's a shame. His predictions were\nso accurate it was spooky!")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf(/* textboxtype: 1, unk: 0 */ "With all of her jobs, <b<Kina>> has a lot\non her plate.\n\n\nIf only there was someone who was\nreally good at digging holes...")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Have you seen <b<Owlan>>'s collection of\nplants?\n\n\nI wonder if he's made any new\ndiscoveries lately?")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Say, I wonder how Dodoh's doing.\nHave you heard anything?\n\n\nI know he was working hard to make\na place where we can all have some\nfun and blow off some steam.")
          						  case 1:
/*<416>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Wow! I didn't know people were\nskydiving over the Lumpy Pumpkin!\n\n\nI heard there are colorful critters that\nsometimes accompany you when you\nskydive.\n\nI wonder if something good happens\nwhen they appear? Seems only right.")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_29() {
/*<476>*/ 	start()
/*<486>*/ 	set_camera(31, 0)
/*<477>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 26), ('next', 484), ('param3', 32)])
/*<484>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 282), ('next', 485), ('param3', 15)])
/*<485>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 26), ('next', 478), ('param3', 14)])
/*<478>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', -1), ('next', 483), ('param3', 16)])
/*<483>*/ 	switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<482>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A00\x01Don't just sit there! I suggest you get\na move on and find my father, or else!\n\n\n\x0E\x01\x09\x04\x1A1A\x800You're going to be in big trouble!")
          		flw_480:
/*<480>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 282), ('next', 481), ('param3', 14)])
/*<481>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 26), ('next', -1), ('param3', 15)])
          	  case 1:
/*<479>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A00\x01Welcome! This is the <r<Lumpy Pumpkin>>,\nhome of the finest pumpkin\nsoup in the big, wide sky!\n\n\x0E\x01\x09\x04\x1A1A\x800There isn't much to do here but take\na load off, relax, and enjoy yourself!")
          		goto flw_480
          	}
          }

          void entrypoint_117_12() {
/*<215>*/ 	start()
          	goto flw_520
          }

          void entrypoint_117_47() {
/*<405>*/ 	start()
/*<407>*/ 	switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<408>*/ 		printf(/* textboxtype: 1, unk: 0 */ "What? Is something wrong?")
          	  case 1:
/*<406>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Oh yeahhh... There's nowhere else\nI'd rather be at night!")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x704What were you thinking? You scared\na year off my life!\n\n\n\x0E\x01\x09\x04\n\x700What did you want again? I lost my\ntrain of thought...")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04It's nice having a bigger chandelier\nand all, but I think the thing's a bit\ntoo bright for my eyes.")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xC04What?! Are you telling me you moved \nthe gravestone?!\n\n\n\x0E\x01\x09\x04\n\xF00And did you see the monster?!\nWhat?! Weren't you scared?\n\n\nYou can't fool me! I bet you were\nscared stiff!")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01What?! Didn't you hear me the first\ntime?\n\n\n[1]Nighttime?[2]Cemetery?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x704Yeah. If you want to wait till <r<night>>,\nreturn to Skyloft and <g<rest in a bed>>.\n\n\nSkyloft becomes a completely different\nplace at night...\n\n\n\x0E\x01\x09\x04\n\xF00I don't think you should go, though. \nAnd it's not my fault if something bad\nhappens to ya. Nope.")
          						  case 1:
/*< 67>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x704Well, you see... It was the dead of\nnight. I hit the <r<gravestone closest to\nthe tree>>. The <r<impact >>made the\ngravestone light right up!\nAfter that, I went to inspect the lit-up\ngravestone. When I <r<pushed against the\ngravestone>>, the door to the storage\nshed next to it opened all on its own...\nAnd that's when I saw it! I saw the\nmonster! It lives in the storage shed!\n\n\n\x0E\x01\x09\x04\n\xF00I'm serious! You shouldn't go in\nthere! If you do, don't say I didn't\nwarn ya!")
          						}
          					  case 1:
/*<606>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 42), ('param3', 31)])
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x704You have that gullible look that says\nyou might take an old man's ramblings\nseriously. So tell me... Do you believe\nin the Skyloft monster?\nI shouldn't even call it a monster!\nIt's a demon, I tell ya! But no one\ncan say fer sure because no one's\nseen it and lived to tell the tale!\n\x0E\x01\x09\x04\x0B\x700Wha-huh? You wanna know how\ncome I'm tellin' the tale if nobody\nwho's seen it is left alive? Is that it?\n[1]Yep.[2-]Not at all!")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xF00Yeah, well...I saw it, but I was able to\nescape by the seat of my pants. I was\nsaved by my catlike reflexes, I tell ya!\n\n\x0E\x01\x09\x04\x0B\x700Any regular person wouldn't have\nlived long enough to scream!")
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x700Anyway, I saw the thing, I tell ya!\n\n\n\nThere's a great big tree in the\ncemetery. I walked by that tree in the\n<r<middle of the night >>and...\n\nI saw it <r<hit>> the <r<gravestone nearest the\ntree>>, and the gravestone lit up!\n\n\nIt <r<pushed the gravestone>>, and the door\nto the storage shed opened up all by\nitself...\n\nThe monster then went into the shed,\nand then...it closed the door behind\nitself, which was unexpectedly polite\nfor a demon...\n\x0E\x01\x09\x04\x0B\x700It was the most terrifying thing these\nold eyes have ever seen! If you're\nsmart, you'll stay clear of the <r<cemetery\nin the middle of the night>>!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Well I will keep going if you stop\ninterrupting me like that!")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x01You believe me, don't ya?!\n[1]Believe what?[2]Sure![3-]No chance.")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x703There's a fiendish demon living in\nSkyloft!\n\n\nI'm tellin' ya, I came this close to\ngetting eaten by that evil beast!\n\n\n\x0E\x01\x09\x04\x0B\x700You look like you've gotten a little\nknight training, but you'd better keep\nyour guard up, or he'll take a bite out\nof you too!")
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE04I know, right?! You're a good kid!")
          				  case 2:
/*< 61>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\xF03Hey, now.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14.\x0E\x01\x04\x02\x14 What's with you kids today\nand all your disrespectin' and whatnot!\nI swear...")
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
/*<285>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Well, good luck, Mr. \x0E\x01\x04\x02\nMole\x0E\x01\x04\x02\n Man!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hooo boy! It's been too long since I \nheard Kina sing like that. I might have\nfallen in love with her all over again!")
          	  case 1:
/*<422>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, did you know this?\n\n\n\n<b<Kina>> will sometimes get on that stage\nand sing a song or two for us.\n\n\n\x0E\x01\x09\x04\x09\x700If there was a lovely melody playing,\nI bet she couldn't help but sing along.")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Yep! Kina's singing is the best I've\never heard! There's nothing like it.\nIt's the opposite of my wife's warbly\nvoice...")
          	  case 1:
/*<401>*/ 		switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x704What were you thinking? You scared\na year off my life!\n\n\n\x0E\x01\x09\x04\n\x700What did you want again? I lost my\ntrain of thought...")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Kina's singing voice is beautiful!\n\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.But her music partner quit recently,\nand so I haven't heard her sing in a\nwhile.\nI really wish I could hear her voice\nagain.")
          			  case 1:
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04You really shouldn't wander around \nSkyloft at night! If there's something\nyou want to talk to me about, do it\nduring the day.")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x05What?! But you... Well...I suppose...\nI guess I could at least give it a try.")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Hey! So what d'ya think?!")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12\x0E\x01\x08\x02\x2CDWHY WOULD YOU DO\nTHAT?!\n\n\n\x0E\x01\x08\x02ÍGet down and come here this instant!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	loadzone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Wow! Look at that! That's amazing!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2321), ('next', 272), ('param3', 13)])
/*<272>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Hey now!\n\n\n\nYou don't think you can come in here\nand break my chandelier and just\nget away with it, do you?!")
/*<278>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Hah... Ya think? Well, it was nothin'\nreally.\n\n\nRootin' around in the dirt is child's\nplay for us Mogmas!")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2321), ('next', 279), ('param3', 13)])
/*<279>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Hey now!\n\n\n\nYou don't think you can come in here\nand break my chandelier and just\nget away with it, do you?!")
/*<282>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nWow! One more time! Please?!\nAgain! Again!")
          }

          void entrypoint_117_01() {
          	start()
/*< 82>*/ 	switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          	  case 0:
/*< 93>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          			  case 0:
/*< 95>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 96>*/ 					switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          						  case 0:
/*<506>*/ 							switch (temp_flags[17 /* 0x3 02 */]) {
          							  case 0:
/*<100>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x808The fields are in good hands...er,\nclaws? He can easily do the work of a\nhundred people! I'm so lucky to have\nhim around.")
          							  case 1:
/*<510>*/ 								switch (loadzone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x808Teehee! Ever since the mole man came,\nwork on the patch has been going like a\ndream!\n\nWe can grow way more pumpkins now!")
/*<511>*/ 									loadzone_temp_flags[7 /* 0x1 80 */] = true;
          									goto flw_388
          								}
          							}
          						  case 1:
/*<607>*/ 							switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          							  case 0:
/*<608>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 31)])
          							  case 1:
/*<598>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 234), ('param3', 31)])
/*<234>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\xE0FI sure hope you can find someone to\nplow the patch soon...")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 236), ('param3', 51)])
/*<236>*/ 									printf(/* textboxtype: 2, unk: 0 */ "Your <pling><r<dowsing >>ability is not currently\nset to locate the individual this person\nseeks.\n\nDo you wish to set your <pling><r<dowsing >>ability\nto locate a <r<person who will plow the\npumpkin patch>>?\n[1]Yes![2-]Not now.")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 15), ('next', 576), ('param3', 56)])
/*<576>*/ 										printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Understood, Master.\n\n\n\nYour <pling><r<dowsing >>ability has been set to\nlocate the type of person she is\ncurrently looking for.")
          										flw_245:
/*<245>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          									  case 1:
/*<238>*/ 										printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Understood, Master. I will cancel your\ncurrent <pling>dowsing target.")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 99), ('param3', 31)])
/*< 99>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh! Thanks for helping me carry the\npumpkins the other day.\n\n\nThanks to you, we're ready to plant the\nnew seeds!\n\n\n\x0E\x01\x09\x04\x01\x100\x0E\x01\x04\x02\x1EThe only thing is, plowing the patch so\nthat it's ready to be planted\n\x0E\x01\x09\x04\x0B\xE00is hard work!\n\n\x0E\x01\x09\x04\x07\x700If only there was someone who was\nreally good at plowing the field...\n[1]I know someone![2-]No idea...")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x809Really?! If that's the case, I'd love to\nask this person to help me out.\n\n\x0E\x01\x09\x04\x01\x700\nIf you find this person, please tell them\nto come find me right away! OK?")
/*<120>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 119), ('param3', 51)])
/*<119>*/ 							printf(/* textboxtype: 2, unk: 0 */ "I calculate a 90% chance that this\nrequest is in some way connected to\n<y<Gratitude Crystals>>.\n\nYour <pling><r<dowsing >>ability can be calibrated\nto locate the person who will plow the\npumpkin patch for this girl.\n\nHowever, if you are searching for\nanother object that someone has\nasked you to find, that target will be\nremoved when you switch to this target.\nDo you wish to set your dowsing target\nas <r<a person to plow the pumpkin\npatch>>?\n[1]Yes![2-]Not yet.")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Understood, Master. I will set your\ndowsing target to find an <r<individual\nwho can plow the pumpkin patch>>.")
/*<565>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<566>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<567>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<568>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<569>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<570>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<574>*/ 								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 15), ('next', 572), ('param3', 56)])
          								flw_572:
/*<572>*/ 								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 571), ('param3', 36)])
/*<571>*/ 								story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */] = true;
/*<597>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 573), ('param3', 16)])
/*<573>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x70FIs there really someone who would\nhelp me out?\n\n\n\x0E\x01\x09\x04\x07\x700Well, I'll try to keep my hopes up and\njust wait here patiently until they\nshow up.")
          							  case 1:
/*<596>*/ 								printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x05Understood, Master. Should you wish\nto assign the person in question as a\ndowsing target, talk to this girl again.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1611Oh, come on! Are you telling me you're\nOK with a cute girl like me working the\nfield all by herself?! Some chivalrous\nknight you are!")
          						}
          					}
          				  case 1:
          					flw_387:
/*<387>*/ 					entrypoint_117_25();
          				}
          			  case 1:
          				goto flw_387
          			}
          		  case 1:
          			goto flw_387
          		}
          	  case 1:
/*< 84>*/ 		switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          		  case 0:
          			goto flw_34
          		  case 1:
/*<540>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*< 85>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh! It's the knight who broke the\nchandelier! Still working it off, huh?\n\n\n\x0E\x01\x09\x04\x01\x700Oh, hey...\x0E\x01\x04\x02\x1EFather said he had some\nmore work for you.\n\n\n\x0E\x01\x09\x04\x07\x700You better go talk to him and find out\nwhat he has in mind.")
          			  case 1:
/*<541>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Oh, look! It's the brave knight who\nslayed the chandelier! Still working it\noff, eh?\n\n\x0E\x01\x09\x04\x01\x700Say, it's almost pumpkin-picking\nseason...\x0E\x01\x04\x02\x1E\n\n\n\x0E\x01\x09\x04\x07\x700I wonder how I'm going to lift all those\nheavy pumpkins this year...")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0COh yeah! Here I go!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 359), ('param3', 40)])
/*<359>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 361), ('param3', 6)])
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 358), ('param3', 40)])
/*<358>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x13\x809I just knew you would come through.\nYou managed to carry them all!\n\n\n\x0E\x01\x09\x04\x01\x700I guess that means you're done carrying\npumpkins!\n\n\n\x0E\x01\x09\x04\x19\x800Thank~~~ you~~~ very~~~ much~~~!")
          	  case 1:
/*< 33>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1611Awww, you dropped them! You can't\nbe careless like that...\n\n\n\x0E\x01\x09\x04\x07\x700If you want to try again, come on\nover here.")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 102), ('next', 527), ('param3', 32)])
/*<527>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 102), ('next', 363), ('param3', 17)])
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 366), ('param3', 40)])
/*<366>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 368), ('param3', 6)])
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 365), ('param3', 40)])
/*<365>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x1611Awww, you dropped them! You can't\nbe careless like that...\n\n\n\x0E\x01\x09\x04\x07\x700If you want to try again, come on\nover here.")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1604Don't even pretend that was an\naccident! I put signs up there to\nwarn people to be careful of the\nchandelier and everything!\n\x0E\x01\x09\x04\x1A\x1600Well I wash my hands of the whole\nthing! Don't be surprised if my dad\ngives you a royal chewing out!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Well, well... Welcome!\n\n\n\nMy father told me! He said that you\nhave to work to pay off the chandelier!\n\n\n\x0E\x01\x09\x04\x1A\x800It won't be easy, but I know you can\ndo it.")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A\x1000What?! Something happened to\nLevias? \n\n\nYou know, Father used to deliver his\npumpkin soup to Levias every year.\nMaybe you should talk to him?")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x10\x1604Don't even pretend that was an\naccident! I put signs up there to\nwarn people to be careful of the\nchandelier and everything!\n\x0E\x01\x09\x04\x1A\x1600Well I wash my hands of the whole\nthing! Don't be surprised if my dad\ngives you a royal chewing out!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Well, well... Welcome! I can see from\nyour handsome outfit there that you're\na Skyloft knight!\n\n\x0E\x01\x09\x04\x1A\x800I hope you'll make yourself at home!\n\n\n\n\x0E\x01\x09\x04\x0D\x700Have the Rupees sitting on top of\nthe chandelier caught your eye?\n\n\n\x0E\x01\x09\x04\x10\x00Don't go thinking that you can get\nthose down, you hear?\n\n\nYou might think that you could knock\nthe Rupees down by bumping\nsomething and making the chandelier\nshake, but...\n\x0E\x01\x09\x04\x1A\x1600Don't even\x0E\x01\x06\x02\xFCCD think\x0E\x01\x06\x02Í about it!\nAre we clear?")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey there!\n\n\n\nWelcome to the Lumpy Pumpkin!\nSit back and relax! \x0E\x01\x04\x02\x1EAre you OK?\nYou look flustered.")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 372), ('param3', 40)])
/*<372>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 374), ('param3', 6)])
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 371), ('param3', 40)])
/*<371>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf(/* textboxtype: 1, unk: 0 */ "I brought the old Mogma, zzzrt!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1411Huh... I thought it would sound a lot\nbetter when you played it, just 'cause\nthat's such a pretty little instrument\nyou have there...\n\x0E\x01\x09\x04\x01\x1600The customers didn't seem impressed,\neither...")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x17\x1411I...guess you could call that playing...\nSort of...\n\n\n\x0E\x01\x09\x04\x01\x1600To tell the truth, I found your\n\x201Cperformance\" a little lacking.")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x16\x1309You're much better than I expected!\nI think I underestimated you.\n\x0E\x01\x09\x04\x07\x700I hope we have a chance to\nentertain the customers again!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x15\xD0AThat wasn't just amazing... That\nblew my socks right off! Your harp\nplaying was even more impressive than\nmy voice!\n\x0E\x01\x09\x04\x07\x800You've got yourself a fan! I hope I'll\nhave a chance to hear you play again\nsometime.")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 102), ('next', 529), ('param3', 32)])
/*<529>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 102), ('next', 376), ('param3', 17)])
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 379), ('param3', 40)])
/*<379>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 381), ('param3', 6)])
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 378), ('param3', 40)])
/*<378>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Send my best to Fi, bzzzzzzat!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\n\x90DAnd what was that?! Your horrible\n\x201Cmusic\" made even Kina's\nperformance look bad!\n\n\x0E\x01\x09\x04\x0D\x00You listen here. I'm not paying you for\nthat little stunt. Got that?!")
          		  case 1:
/*<600>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10I hate to tell you this, but you need to\nwork on your playing. I'm not shelling\nout hard-earned Rupees for a sloppy\nperformance like that.")
          		  case 2:
/*<333>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EThat was all right, I suppose. Though\nyou could really make Kina smile if\nyou played just a bit better.\n\n\x0E\x01\x09\x04\x0E\x700I'll give you <r<20 Rupees >>for that\nperformance. Go on, take it.")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x100C\x0E\x03\x01\x00Link, that was fantastic!\n\x0E\x01\x09\x04\x0C\x700I'm giving you <r<50 Rupees>> for that\nperformance!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0F\xA0DWhat in the blue sky was that?!\nIs that your sad little idea of what \nmusic is?!\n\n\x0E\x01\x09\x04\n\x900What?! Don't look at me like you think\nwe're even now! You're crazy! I'm not\npaying you for that. You're gonna have\nto try again later!")
          		  case 1:
/*<601>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x10I can't say it knocked my socks off, but\nyou know, for a first try, you did good\nenough!")
          			flw_258:
/*<258>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x700With this, I say we're even! You don't\nhave to work for me anymore.\nGreat job!\n\n\x0E\x01\x09\x04\x0E\x1100You know, I'm going to buy a new\nchandelier to replace that old one!\nIt really fancied up the place.\n\n\x0E\x01\x09\x04\x0D\x700Considering all the hard work you put\nin around here, I feel like I should\ngive you a little something. Take this!")
/*<534>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 305), ('param3', 42)])
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x700Maybe you can swing by later. Yep,\nas a customer next time.")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EImpressive! I'd say you passed.")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x100CWow... Even I got a little dust in my\neye there during your performance!\nI didn't think you had it in you.")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x80COh no... You've gone and made a\nterrible mess of things, haven't you?\n\n\n\x0E\x01\x09\x04\x00\x100Well, now you're going to be in a world\nof trouble!")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link. If you catch a\nbunch of bugs and you have more than\nyou know what to do with, I'll be happy\nto take some off your hands.\n\x0E\x01\x09\x04\x12\x00But rather than do it here, come by\nmy room in the academy...")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (loadzone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x12\x01Flying through the holes in the rocks\nmakes flying so much faster. But it's an\nexperts-only kind of thing.\n\n\x0E\x01\x09\x04\x03\x104You're more likely to smack into the\nrock and have the opposite effect.\nHeh heh heh...\n")
          				  case 1:
/*<580>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link. Wanna hear \nsome worthwhile information?\n\n\nEver come across those<r< big rocks with\nholes >>while you're out flying?\n\n\nWell, there's a mysterious power or\nvortex or something in them. If you\nfly through it, you'll get a <r<temporary>>\nboost of speed.\n\x0E\x01\x09\x04\x12\x00Skilled bird riders use this trick to\nget across that big sky quickly.")
/*<582>*/ 					loadzone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hey, Link!\n\n\n\n\x0E\x01\x09\x04\x12\x00I didn't think I'd see you here.\nBet you're wondering what I'm \ndoing here.\n[1]Yep.[2]Not really.")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x03\x104I think I mentioned this before, but\nman, I am really into bugs.\n\n\nThat's why I'm out collecting insects\nwherever I think I'll find them.\n\n\n\x0E\x01\x09\x04\x04\x100If you have a Bug Net too, you should\ntry catching some. Heh heh heh...\nIf you don't have one, you can pick\none up at Beedle's Airshop.\n\x0E\x01\x09\x04\x12\x100I'm sure that sweaty shopkeeper is\nflying around Skyloft now...")
          				  case 1:
/*<447>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x04\x805Not really...?\n\n\n\n\x0E\x01\x09\x04\x04\x100I always knew you weren't a bug lover\nlike me...")
          				}
          			}
          		}
          	}
          }

