          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (loadzone_temp_flags[5 /* 0x9 20 */]) {
          		  case 0:
/*<126>*/ 			printf("______Want me to explain the rules one more\ntime? I know it's awfully complicated\nfor a fun little guy like you!\n[1]OK...[2-]Nah.")
/*<127>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*< 30>*/ 				printf("______Heyyyyy, then! Let me tell you all\nabout the rules!\n\n\n______First thing you need to know is you'll be\nshot out of a CANNON! You'll fly\nwaaaaay up there. Don't cry, little\nboy--it's perfectly, mostly safe!\nYour goal is to dive onto a cheery,\ncolorful rotating board. Land on a\nhappy, little colored space, and you'll\nwin Rupees based on the color.\n______BUT! If you land on the gray space--\nI call that the <r<LOSER SPACE>>--then I\nget to reach in and take a handful of\nyour Rupees! Isn't that FUN?!\n______You can risk everything to win big here\nat Fun Fun Island, but it's a game of\n<r<luck >>so, uh...don't come crying to me if\nyou land on the <r<loser space>>! HAWHAW!")
/*<129>*/ 				printf("______When you're diving, superfun <r<Fortune\nRings >>and <r<Dodoh Balls >>will appear like\nMAGIC!\n\n______If you can pass through one of those\n<r<Fortune Rings>>, you'll increase the\nawesome Rupee score multiplier!\nOOOOOoooh!\nAnd the more rings you pass through,\nthe slower the wheel will spin, making\nit easier to land on your target and\nWIN!\n______But hitting one of those <r<Dodoh Balls>>\nwill reset your multiplier and turn\nyour smile upside down!\n\n______Oh, and you <r<can't use >>your Sailcloth\nwhile you're diving. Did you get all\nthat, little guy?")
          			  case 1:
/*<128>*/ 				printf("______Hurry up and jump into the cannon!")
          			}
          		  case 1:
/*< 75>*/ 			switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          			  case 0:
          				flw_77:
/*< 77>*/ 				switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          				  case 0:
/*< 79>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 84), ('param3', 12)])
/*< 84>*/ 					switch (loadzone_temp_flags[6 /* 0x9 40 */]) {
          					  case 0:
/*< 85>*/ 						printf("______Want to play again, little guy?!\nOOOoooooooh, you're hooked!\n\n\nIt'll be <r<20 Rupees>>. What do you say?\n[1]Yes![2]Rules, please._____No way.")
          						flw_33:
/*< 33>*/ 						switch (choice(3, 1)) {
          						  case 0:
/*< 76>*/ 							switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          							  case 0:
/*<  6>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 10>*/ 									rupees += -20;
          									flw_82:
/*< 82>*/ 									loadzone_temp_flags[5 /* 0x9 20 */] = true;
/*<  5>*/ 									printf("______RIGHTO! There's a brave little guy!\nOnce you're ready, hop into the cannon \nin the center of the island and plug\nyour ears! I'll prepare the cannon!")
/*<144>*/ 									switch (loadzone_temp_flags[8 /* 0x8 01 */]) {
          									  case 0:
/*<145>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', -1), ('param3', 33)])
          									  case 1:
/*<146>*/ 										loadzone_temp_flags[8 /* 0x8 01 */] = true;
/*< 80>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 3), ('param3', 39)])
/*<  3>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 81), ('param3', 33)])
/*< 81>*/ 										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 80), ('next', -1), ('param3', 6)])
          									}
          								  case 1:
/*<  7>*/ 									printf("~~~______You don't have enough Rupees. I can't\nhelp you have FUN if you can't help\nme get rich, little boy!\n\n______Come back when you've got the 20\nRupees, and we'll try this again!")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf("______Heyyyyy, then! Let me tell you all\nabout the rules!\n\n\n______First thing you need to know is you'll be\nshot out of a CANNON! You'll fly\nwaaaaay up there. Don't cry, little\nboy--it's perfectly, mostly safe!\nYour goal is to dive onto a cheery,\ncolorful rotating board. Land on a\nhappy, little colored space, and you'll\nwin Rupees based on the color.\n______BUT! If you land on the gray space--\nI call that the <r<LOSER SPACE>>--then I\nget to reach in and take a handful of\nyour Rupees! Isn't that FUN?!\n______You can risk everything to win big here\nat Fun Fun Island, but it's a game of\n<r<luck >>so, uh...don't come crying to me if\nyou land on the <r<loser space>>! HAWHAW!")
/*< 35>*/ 							printf("______When you're diving, superfun <r<Fortune\nRings >>and <r<Dodoh Balls >>will appear like\nMAGIC!\n\n______If you can pass through one of those\n<r<Fortune Rings>>, you'll increase the\nawesome Rupee score multiplier!\nOOOOOoooh!\nAnd the more rings you pass through,\nthe slower the wheel will spin, making\nit easier to land on your target and\nWIN!\n______But hitting one of those <r<Dodoh Balls>>\nwill reset your multiplier and turn\nyour smile upside down!\n\n______Oh, and you <r<can't use >>your Sailcloth\nwhile you're diving. Did you get all\nthat, little guy?")
          						  case 2:
/*< 36>*/ 							printf("______OOOOOooh! What's this?! This little\nboy's a scaredy-bird?! Is he scared of\nthe widdle cannon?")
          						}
          					  case 1:
/*<  9>*/ 						printf("______YAHAWWWWW! The boy is BACK!\nHow about a little skydiving? I'm just\nitching to shoot YOU out of a cannon!\n\n______Oh, but you're going to have to pay this\ntime. It'll be <r<20 Rupees>>. Well?!\n[1]I'm in![2]Rules, please._____No way.")
/*< 83>*/ 						loadzone_temp_flags[6 /* 0x9 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf("______YAHOOOEY! Step right up, young\nman! Feel like taking a little dive?\n\n\nAs my way of saying thanks for finding\nmy party wheel, your first blast is\non the house! It's FUN for FREE!\n[1]Yes![2]Rules, please._____No, thanks.")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf("______You joyful little man, I owe you\neverything for finding my wheel!\n\n\nAnd my dream of creating my very\nown, VERY SMILEY <b<Fun Fun>> <b<Island\n>>has been realized for all to enjoy and\nlaugh about and laugh at!\nNormally I'd charge 20 Rupees to play, \nbut since I owe you, I'll let you play\nyour first game for free! FREE is\nso much more fun than PAY!")
/*<  8>*/ 					printf("______Heyyyyy, then! Let me tell you all\nabout the rules!\n\n\n______First thing you need to know is you'll be\nshot out of a CANNON! You'll fly\nwaaaaay up there. Don't cry, little\nboy--it's perfectly, mostly safe!\nYour goal is to dive onto a cheery,\ncolorful rotating board. Land on a\nhappy, little colored space, and you'll\nwin Rupees based on the color.\n______BUT! If you land on the gray space--\nI call that the <r<LOSER SPACE>>--then I\nget to reach in and take a handful of\nyour Rupees! Isn't that FUN?!\n______You can risk everything to win big here\nat Fun Fun Island, but it's a game of\n<r<luck >>so, uh...don't come crying to me if\nyou land on the <r<loser space>>! HAWHAW!")
/*< 22>*/ 					printf("______When you're diving, superfun <r<Fortune\nRings >>and <r<Dodoh Balls >>will appear like\nMAGIC!\n\n______If you can pass through one of those\n<r<Fortune Rings>>, you'll increase the\nawesome Rupee score multiplier!\nOOOOOoooh!\nAnd the more rings you pass through,\nthe slower the wheel will spin, making\nit easier to land on your target and\nWIN!\n______But hitting one of those <r<Dodoh Balls>>\nwill reset your multiplier and turn\nyour smile upside down!\n\n______Oh, and you <r<can't use >>your Sailcloth\nwhile you're diving. Did you get all\nthat, little guy?")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf("______Sounds like FUN, right?! Want to give\nit a try?!\n[1]Sure![2-]Maybe later.")
/*<  2>*/ 					switch (choice(2, 0)) {
          					  case 0:
/*<130>*/ 						printf("______Want me to explain the rules one more\ntime? I know it's awfully complicated\nfor a fun little guy like you!\n[1]OK...[2-]Nah.")
/*<131>*/ 						switch (choice(2, 0)) {
          						  case 0:
/*<132>*/ 							printf("______Heyyyyy, then! Let me tell you all\nabout the rules!\n\n\n______First thing you need to know is you'll be\nshot out of a CANNON! You'll fly\nwaaaaay up there. Don't cry, little\nboy--it's perfectly, mostly safe!\nYour goal is to dive onto a cheery,\ncolorful rotating board. Land on a\nhappy, little colored space, and you'll\nwin Rupees based on the color.\n______BUT! If you land on the gray space--\nI call that the <r<LOSER SPACE>>--then I\nget to reach in and take a handful of\nyour Rupees! Isn't that FUN?!\n______You can risk everything to win big here\nat Fun Fun Island, but it's a game of\n<r<luck >>so, uh...don't come crying to me if\nyou land on the <r<loser space>>! HAWHAW!")
/*<133>*/ 							printf("______When you're diving, superfun <r<Fortune\nRings >>and <r<Dodoh Balls >>will appear like\nMAGIC!\n\n______If you can pass through one of those\n<r<Fortune Rings>>, you'll increase the\nawesome Rupee score multiplier!\nOOOOOoooh!\nAnd the more rings you pass through,\nthe slower the wheel will spin, making\nit easier to land on your target and\nWIN!\n______But hitting one of those <r<Dodoh Balls>>\nwill reset your multiplier and turn\nyour smile upside down!\n\n______Oh, and you <r<can't use >>your Sailcloth\nwhile you're diving. Did you get all\nthat, little guy?")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf("______OOOOOooh! What's this?! This little\nboy's a scaredy-bird?! Is he scared of\nthe widdle cannon?")
          					}
          				}
          			}
          		}
          	  case 1:
/*< 38>*/ 		switch (story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */]) {
          		  case 0:
/*< 40>*/ 			switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          			  case 0:
/*<151>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 91), ('param3', 31)])
/*< 91>*/ 				switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("____\n_Ugh... It would be so amazing if\nsomeone were to find it. Just think\nof the smiles on the children's faces...\n\nI'm not getting my hopes up, though...")
          				  case 1:
/*<105>*/ 					printf("______Hello there, young man. You think\nyou can find my party wheel?\n\n\nNo? I didn't think so...")
/*<101>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 92), ('param3', 51)])
/*< 92>*/ 					printf("Your <r<______dowsing >>ability is not currently\ncalibrated to search for the <r<party\nwheel >>that this person is seeking.\n\n______Do you want to calibrate your <r<dowsing\n>>ability to search for this <r<party\nwheel>>?\n[1]Yes.[2-]No.")
/*< 93>*/ 					switch (choice(2, 0)) {
          					  case 0:
/*< 94>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 17), ('next', 134), ('param3', 56)])
/*<134>*/ 						printf("______Understood, Master.\n\n\n\nYour ______<r<dowsing >>ability is now set to\ndetect the <r<party wheel>> this man\nis after.")
/*<147>*/ 						printf("There is a 90% chance that the item \nwill have landed in <b<Lanayru Desert >>if it\nfell in this vicinity. I recommend that\nyou investigate the desert.")
          						flw_102:
/*<102>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          					  case 1:
/*<100>*/ 						printf("______Understood, Master. Your ______dowsing\nability will not be set to find this item.")
          						goto flw_102
          					}
          				}
          			  case 1:
/*< 44>*/ 				switch (story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */]) {
          				  case 0:
/*<103>*/ 					switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          					  case 0:
/*< 49>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 113), ('param3', 31)])
/*<113>*/ 						switch (temp_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<114>*/ 							printf("______Oh...it's nothing, really. I don't want to\nbother you with my shattered dream.\n\n\nIt was just a silly decoration I used\nto pin on to my back, ____\nbut still...____\n\nIt was MY silly decoration...\n[1]I'll find it![2-]It's gone.")
          							flw_54:
/*< 54>*/ 							switch (choice(2, 0)) {
          							  case 0:
/*< 55>*/ 								printf("How am I supposed to go get something\nthat fell below the clouds?\nThat's impossible!")
/*< 56>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 57), ('param3', 51)])
/*< 57>*/ 								printf("Your ______<r<dowsing>> ability can be calibrated\nto locate the item that this person\nseeks.\n\nHowever, if you are searching for\nanother object that someone has\nasked you to find, that target will be\nremoved when you switch to this target.\nDo you wish to set the<r< party wheel >>as\nyour <r<dowsing>> target?\n[1]Yes.[2-]Not now.")
/*<109>*/ 								switch (choice(2, 0)) {
          								  case 0:
/*<110>*/ 									printf("______Understood, Master. I will calibrate\nyour <r<dowsing>> ability so that you can\nassign the <r<party wheel>> as a dowsing\ntarget.")
/*<136>*/ 									story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 									story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 									story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 									story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 									story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 									story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 									OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 17), ('next', 143), ('param3', 56)])
/*<143>*/ 									printf("There is a 90% chance that the item \nwill have landed in <b<Lanayru Desert >>if it\nfell in this vicinity. I recommend that\nyou investigate the desert.")
          									flw_58:
/*< 58>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 45), ('param3', 36)])
/*< 45>*/ 									story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 59), ('param3', 50)])
/*< 59>*/ 									printf("____\n_Ugh... It would be so amazing if\nsomeone were to find it. Just think\nof the smiles on the children's faces...\n\nI'm not getting my hopes up, though...")
          								  case 1:
/*<111>*/ 									printf("Yes, ______Master. To set the dowsing target,\nplease speak to this person again.")
          									goto flw_58
          								}
          							  case 1:
          								flw_52:
/*< 52>*/ 								printf("______Without it, I can't help make people\nhappy. The smile factory is shut down.\n\n\n____\n_You know...but what can I do?")
/*<112>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          							}
          						  case 1:
/*< 50>*/ 							printf("______Urrrrrghhh... What am I going to do?!\nIt's no use! It's all over...\n[1]What's wrong?[2-] Uh...")
/*< 51>*/ 							switch (choice(2, 0)) {
          							  case 0:
/*< 53>*/ 								printf("You see, the party wheel that I\npinned to my back flew off the island\nand fell down somewhere below\nthe clouds.\nWithout my party wheel, there's just\nno way I can make this island a place\nwhere people come to have fun!\n\n____\n_What can I do? It fell down below the\nclouds, so I guess I should just give up\non it.\n[1]Look for it![2-]Give up.")
          								goto flw_54
          							  case 1:
          								goto flw_52
          							}
          						}
          					  case 1:
          						flw_41:
/*< 41>*/ 						printf("______Urggggggh... My superwacky party\nwheel of fun fell off the island,\nway down below the clouds...\n\nWithout that, there's just no way...\nThe dream of fun is dead. I can't bring\nmyself to do anything without it.\nThe laughter has turned to tears.")
          					}
          				  case 1:
          					goto flw_41
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf("______<b<FUN FUN>><b< ISLAND>>! Smells like fun\nand danger already, doesn't it?!\nI'm still getting the place ready, but I\nhope you'll come visit again later!")
          			  case 1:
/*< 39>*/ 				printf("______YAHOOOEY! Step right up, boy!\n\n\n\n______Oh. I bet you're wondering what I'm\ndoing here...\n[1]A little.[2-]Nah.")
/*< 46>*/ 				switch (choice(2, 0)) {
          				  case 0:
/*< 48>*/ 					printf("______Just the answer I was looking for!\nWhat a smart little guy you are!\n\n\n______I'm hoping to make this island a FUN\nplace where everyone can come and be\nhappy...\n\nWhat's it called, you ask? Or even\nif you didn't ask?_____ I call it...\n<b<FUN FUN ISLAND>>!\n\n______I'm still getting the place set up, so\nhopefully you'll visit again later! You\nmight like what you find! Especially if\nyou like FUN and COLORS!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf("______Well, that's not fun at all.\n\n\n\n______I'm doing everything I can to make \npeople's dreams come true...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_110_02() {
/*< 21>*/ 	start()
/*< 88>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 31), ('param3', 44)])
/*< 31>*/ 	loadzone_temp_flags[5 /* 0x9 20 */] = false;
/*< 26>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 14), ('param3', 12)])
/*< 14>*/ 	switch (minigame_related[0]) {
          	  case 0:
/*<115>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6912), ('next', 117), ('param3', 13)])
/*<117>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 15), ('param3', 6)])
/*< 15>*/ 		printf("______OOOOOoooooh! Too bad, sooooo SAD.\nYou landed on a Loser Space.\n\n\nThat means I snag a grand Rupee total\nof <r<_______>>! Heeeeheeee!")
/*< 25>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 89), ('param3', 33)])
          		flw_89:
/*< 89>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 125), ('param3', 45)])
/*<125>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<116>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6912), ('next', 118), ('param3', 13)])
/*<118>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 16), ('param3', 6)])
/*< 16>*/ 		printf("______Oh gee, look at this! How SAD. You've\nearned yourself a fun, imaginary stack\nof <r<0 Rupees>>. Don't give up, little guy!\nCome see me again real soon!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5888), ('next', 121), ('param3', 13)])
/*<121>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 85), ('next', 17), ('param3', 6)])
/*< 17>*/ 		printf("______WHOA-HO-HO! Look at this nice little\nspace you landed on!\n\n\n______So you landed on a _______-Rupee spot, and\nyour multiplier is _______! That means you\nwalk away with a grand Rupee total\nof <r<_______>>!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf("Here's your big bag o' winnings...\n_______ _____!")
/*< 32>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 90), ('param3', 33)])
/*< 90>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 124), ('param3', 45)])
/*<124>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*< 27>*/ 			printf("______I've got a special prize for special\npeople who can pass through five rings\nwithout touching a Dodoh Ball...and\nthen land on a 50-Rupee space!\n______Here's hoping you've got the stomach to\ngive Dodoh's High Dive another whirl!")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 5120), ('next', 122), ('param3', 13)])
/*<122>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 130), ('next', 24), ('param3', 6)])
/*< 24>*/ 		printf("______WHOOOPIDDY DOO! You landed on a\n50-Rupee space!\n\n\nYour multiplier is _______, so that means\nyou win <r<<r<_______<r< Rupees>>! Wowza!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 10)])) {
          			  case 0:
/*< 20>*/ 				printf("You passed through all of the Fortune\nRings! Guess which little guy gets\na special prize! Go on, GUESS!")
/*< 87>*/ 				scene_flags[21 'The Sky'][19 /* 0x3 08 */] = true;
/*<148>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 489), ('param2', 3), ('next', 149), ('param3', 23)])
/*<149>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 65)])) {
          				  case 0:
/*<150>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 19), ('param3', 12)])
          					flw_19:
/*< 19>*/ 					give_item(94 0x5E);
          					goto flw_23
          				  case 1:
          					goto flw_19
          				}
          			  case 1:
/*< 28>*/ 				printf("______I've got a special prize for special\npeople who can pass through five rings\nwithout touching a Dodoh Ball...and\nthen land on a 50-Rupee space!\n______Here's hoping you've got the stomach to\ngive Dodoh's High Dive another whirl!")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
          	  case 0:
/*< 66>*/ 		printf("______Thank you SO MUCH! Now I can\nrealize my dream of opening\n<b<Fun Fun Island>>!\n\n______WOOOYAH! I'M SO HAPPY!")
/*< 67>*/ 		printf("And I'll let you be my first customer,\nyoung man! Thank you so much!\nIt's going to be so much FUN!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          	  case 1:
/*< 63>*/ 		switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
          		  case 0:
/*< 65>*/ 			printf("______YAHOOOOOOOEY! My party wheel!")
/*< 72>*/ 			loadzone_temp_flags[1 /* 0x9 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf("______IS THIS...?! IS THIS...?!?!\n\n\n\nIT IS! IT IS!")
/*< 64>*/ 			loadzone_temp_flags[0 /* 0x9 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf("_____dHere's your wheel thing, bzzzrrrt!")
/*< 70>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 69), ('param3', 33)])
/*< 69>*/ 	printf("_____dIf you want something else, zzrrrrt,\njust let me know.")
          }

