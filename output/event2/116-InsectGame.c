          void entrypoint_116_01() {
          	start()
/*< 13>*/ 	switch (minigame_related[1]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          		  case 0:
/*< 25>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
          				flw_5:
/*<  5>*/ 				switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          				  case 0:
/*< 57>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 115), ('param3', 12)])
/*<115>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 114), ('param3', 23)])
/*<114>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 64)])) {
          					  case 0:
/*<  4>*/ 						printf("______You ready to start catching some\nbugs? Maybe you'll get bitten by the\nbug-catching fever, just like me.\nOr maybe you'll just get bitten...\nAnyway, it's <r<20 Rupees >>for the Bug\nBeginner level or <r<50 >>for the Bug\nWrangler level. What do you say?\n[1]Bug Beginner![2]Bug Wrangler!_____No, thanks.")
          						flw_1:
/*<  1>*/ 						switch (choice(3, 1)) {
          						  case 0:
/*<102>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 56)])) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf("______I'm going to be timing you while you're\nin the course. If you get a decent time,\nI'll give you a prize!\n\n______In the Bug Beginner course, I will show\nyou pictures of five different bugs.\nCatch one of each to finish! Got it?\nOK, get ready!")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          								  case 1:
/*< 97>*/ 									printf("______Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf("______Think you can go bug catching with\nso few <r<hearts>>? You're not taking this\nseriously. It's not looking good for you.\n\n______Come back once you get some\nmore hearts.")
          							}
          						  case 1:
/*<103>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 58)])) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf("______I'm going to be timing you while you're\nin the course. If you get a decent time,\nI'll give you a prize!\n\n______In the Bug Wrangler course, you will\nneed to catch a total of 10 bugs that\nI specify from among eight different\ntypes. Got all that? OK, get ready!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', -1), ('param3', 33)])
          								  case 1:
/*< 94>*/ 									printf("______Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf("______Well, I guess that means you never\nwere a real bug lover.")
          						}
          					  case 1:
/*<116>*/ 						printf("______WHAT?! You don't even have a\n<r<Bug Net>>?! I don't believe this.\n\n\n______You've never experienced the passion,\nthrill, and joy of bug hunting? I feel\nsorry for you.\n\n______You can buy a Bug Net at <r<Beedle's\nAirshop>>, so do yourself a favor and go\nthere right now and get one!")
          					}
          				  case 1:
/*< 56>*/ 					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 7), ('param3', 12)])
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf("__________Link? I wasn't expecting\nto see you here.\n\n\n______I flew into this thick fog and ended up\non this island.\n\n\n______But once I got here, I looked around\nand realized...this is some kind of\ninsect paradise!\n\n______So I decided to go after my dream and\nraise a bunch of bugs here. Now I can\nspend my days catching all the bugs\nI want!\n______You want to try catching some bugs?\nI'll release a few for you, so why don't\nyou give it a shot?")
/*<112>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 111), ('param3', 23)])
/*<111>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 62)])) {
          					  case 0:
/*<110>*/ 						printf("______I have come up with two levels for my\nbug-catching competition: an easy\n<r<Bug Beginner >>level and a <r<Bug Wrangler\n>>level for real bug masters like me.\n______Since you aren't a bug lover, I'll\ncharge you <r<20 Rupees >>for the Bug\nBeginner level and <r<50 >>for the Bug\nWrangler level. Do you want in on this?\n[1]Bug Beginner![2]Bug Wrangler!_____No, thanks.")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf("______WHAT?! You don't even have a\n<r<Bug Net>>?! I don't believe this.\n\n\n______You've never experienced the passion,\nthrill, and joy of bug hunting? I feel\nsorry for you.\n\n______You can buy a Bug Net at <r<Beedle's\nAirshop>>, so do yourself a favor and go\nthere right now and get one!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("______Heh heh heh... You've come to take\nback the <b<Horned Colossus Beetle>>, eh?\n[1]Of course![2-]Nope.")
          					flw_50:
/*< 50>*/ 					switch (choice(2, 0)) {
          					  case 0:
/*< 58>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 36), ('param3', 12)])
/*< 36>*/ 						printf("And because this is still business,\nI'll be taking <r<10 Rupees >>from you...\n[1]OK...[2-]No, thanks.")
/*< 53>*/ 						switch (choice(2, 0)) {
          						  case 0:
/*< 38>*/ 							switch (has_rupees(10)) {
          							  case 0:
/*<105>*/ 								switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 60)])) {
          								  case 0:
/*<118>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 117), ('param3', 23)])
/*<117>*/ 									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 66)])) {
          									  case 0:
/*< 40>*/ 										rupees += -10;
/*< 41>*/ 										printf("______Well then, go get 10 insects of my\nchoosing!\n\n\n______I'll be timing you. You've got to get\n10 insects <r<within three minutes>>.\n\n\n______If you somehow do it, I'll give the\n<b<Horned Colossus Beetle>> back.\n\n\nAll right then, get set!")
/*< 37>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', -1), ('param3', 33)])
          									  case 1:
/*<119>*/ 										printf("______Hold on! Just hold it. You still don't\nhave a <y<Bug Net>>! Why am I wasting my\ntime with you?\n\n______Come back when you finally get around\nto buying one!")
          									}
          								  case 1:
/*<106>*/ 									printf("______Think you can go bug catching with\nso few <r<hearts>>? You're not taking this\nseriously. It's not looking good for you.\n\n______Come back once you get some\nmore hearts.")
          								}
          							  case 1:
/*< 39>*/ 								printf("______Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf("______Oh, so are you hoping to become part\nof my collection too?\n\n\n______I mean, you are an annoying gnat...\nheh heh heh.______")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 28), ('param3', 31)])
/*< 28>*/ 					printf("______Heh heh heh heh. Well well, it's\nLink! How's life?\n\n\n______Oh, you think I look happy? Heh heh...\nWell, I guess I can't help it.\n\n\nI mean, I did discover an insanely rare\ninsect, after all.\n[1]Tell me![2]Who cares?")
/*< 29>*/ 					switch (choice(2, 0)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf("______You want to know more, huh?\n\n\n\nWell..._____ ______Let's just say I managed to land\na legendary <b<Horned Colossus Beetle>>.<b<\n\n\n>>______It's pretty much a miracle that I found\nit! I can't stop laughing or smiling.\nI'm so happy, my face hurts!")
/*< 54>*/ 						printf("______What?! You're saying this is Beedle's\npet bug?! The same Beedle who flies\naround in that shack selling his junk?\n[1]Give it back![2]Poor Beedle...")
/*< 33>*/ 						switch (choice(2, 0)) {
          						  case 0:
/*< 35>*/ 							printf("______So you really think a sob story like\nthat is going to work on me?\nWhat a joke.\n\n______I found this bug, and it's all mine!")
          							flw_51:
/*< 51>*/ 							printf("_____..._____I suppose it would be kind of mean\nto keep someone's favorite pet bug.\n\n\n______But at the same time, I don't feel so\nbad that I'm just going to give it\nright back...\n\n______How about this?\n\n\n\n______If you can pull off a time in my game\nthat makes even me admit you are\nthe master of bug catching, I'll give\nthis little guy back.\n______So, what's it going to be? Are you up\nfor the challenge?\n\n\n[1]You're on![2-]Not now.")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf("______Do you have any idea how much\nthis bug is worth?\n\n\n______With this bad boy in my collection,\nmy credibility in the bug-catching\ncommunity will skyrocket! I'll be\na bug-catching celebrity!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf("______I see... You really are a snake\nin the grass...")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf("______Hey! You're not thinking about quitting\nthis round of bug catching, are you?\n[1]I quit![2-]Continue.")
/*< 17>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*< 14>*/ 			printf("______So you really are quitting... I guess you\ndon't appreciate bugs like I do.")
/*< 18>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', -1), ('param3', 33)])
          		  case 1:
/*< 16>*/ 			printf("I know, right? Time flies when you're\ncatching bugs!")
          		}
          	  case 2:
/*< 19>*/ 		printf("______Uhh...don't you think you're taking\ntoo long?\n\n\n______I know you're not done yet, but I'm\ncalling it. Time's up!")
/*< 23>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
          	  case 3:
/*< 99>*/ 		printf("______Easy now! You were about to make a\nbeeline for a quick death there!\n\n\n______Don't forget that bugs can fight back!\nI knew you were in over your head\nthere, so I had to stop the game.")
/*<100>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
          	}
          }

          void entrypoint_116_02() {
/*<  8>*/ 	start()
/*<128>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 61), ('param3', 42)])
/*< 61>*/ 	switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          	  case 0:
          		flw_9:
/*<  9>*/ 		switch (minigame_related[0]) {
          		  case 0:
/*< 20>*/ 			switch (minigame_related[2]) {
          			  case 0:
/*< 44>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 10), ('param3', 44)])
/*< 10>*/ 				printf("______That's it--time's up! Umm...you've still\ngot A LOT of improving to do.\n\n\n______For starters, shoot for getting your\ntime <r<under five minutes>>. Just keep on\npracticing.\n\n______Oh, at night, I buy bugs back in my\nroom in Skyloft. You should come by\nand sell me any beauties you find.")
/*< 45>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			  case 1:
/*< 21>*/ 				printf("______It's pretty sad that you can't see just\nhow fun catching bugs can be.\n\n\n______But come back when you change\nyour mind!")
          			  case 2:
/*< 22>*/ 				printf("______Sorry, I don't do refunds!\n\n\n\n______Better luck next time. Heh heh heh.")
          			  case 3:
/*<101>*/ 				printf("______Heh heh heh... Who would have thought\nyou'd get so into bug catching that\nyou'd put your own life at risk?!\n\n______Sorry, I don't do refunds! Come back\nlater when you have more hearts.")
          			}
          		  case 1:
/*< 79>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 77), ('param3', 44)])
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf("______Time's up! That was pretty decent,\nI have to admit.\n\n\n______Your times will get even better if you\nremember where the bugs live. Next\ntime, shoot for <r<under three minutes>>.")
/*< 59>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 120), ('param3', 12)])
/*<120>*/ 				printf("______All right, here's some money. You\nget <r<80 Rupees>>!")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			  case 1:
/*< 11>*/ 				printf("______OK, you're done! Huh. I guess I\nshould've expected this kind of time\nfrom you.\n\n______You know, sometimes the same type of\nbug is a lot easier to catch in just a\ndifferent place. Make sure you look\naround for the right spot.")
/*<122>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 121), ('param3', 12)])
/*<121>*/ 				printf("______Next time, try for <r<under three minutes>>.\nOh, and I guess I should throw you\na little money. Here's <r<30 Rupees>>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			}
          		  case 2:
/*< 88>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 87), ('param3', 44)])
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf("______OK! Time! Hey... This is incredible!\n\n\n\n______I think you might be in the running for\nsecond place as the best bug catcher\nafter me. You should aim for <r<under two\nminutes>>.\nDo that, and a prize package of <r<five\nfabulous bugs>> is yours to take home!")
/*< 82>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 129), ('param3', 45)])
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf("______Take good care of them for me...")
          			  case 1:
/*< 60>*/ 				printf("______That's it--time's up! Whoa...\nI'm impressed. You might just be a\nnatural at this!\n\n______Don't get full of yourself, though.\nYou're still not good enough to win\nany of my rare insects.")
/*<124>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 123), ('param3', 12)])
/*<123>*/ 				printf("Next time, pull out all the stops and\ntry to finish in <r<less than two minutes>>.\n\n\nOh, and your prize this time is \n<r<50 Rupees>>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			}
          		  case 3:
/*< 90>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 89), ('param3', 44)])
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf("______OK, time's up! ...Th-this is amazing!\n\n\n\n______I don't have any choice. I'm forced to\nadmit you're one of the all-time greats\nof bug catching! I bow down to your\nbug-wrangling skills.\n______Let me give you your prize! You get\na set of insects... <r<Five>> rare ones at that!")
/*< 85>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 131), ('param3', 45)])
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf("______Take good care of them for me...")
          			  case 1:
/*< 43>*/ 				printf("______Stop! Stop! Time's up! That was just... \nincredible!\n\n\n______Oh, but let me just remind you that you\nwere doing the Bug Beginner level\nof difficulty.\n\n______Next time, try Bug Wrangler! As a\nprize, here are <r<five>> of my absolute\nfavorite <r<bugs>>!")
/*< 48>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 132), ('param3', 45)])
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf("______Take good care of them for me...")
          			}
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          		  case 0:
/*< 63>*/ 			switch (minigame_related[0]) {
          			  case 0:
/*< 73>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 15), ('param4', 3), ('param5', 43)])) {
          				  case 0:
          					flw_65:
/*< 65>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 64), ('param3', 44)])
          					flw_64:
/*< 64>*/ 					printf("______Phew...\n\n\n\n______Sorry, but I won't be able to give the\n<b<Horned Colossus Beetle>> back!\n\n\n______Not with that kind of time. At the very\nleast, you're going to have to finish in\nless than three minutes... Come on!\nLet's see some hustle!")
/*< 66>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          				  case 1:
          					goto flw_64
          				  case 2:
          					goto flw_64
          				}
          			  case 1:
          				goto flw_65
          			  case 2:
          				flw_72:
/*< 72>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 71), ('param3', 44)])
/*< 71>*/ 				printf("OK, you're done!\n______Heh heh heh... Who would have thought\nit would be so easy for you to break the\nrecord time!")
/*< 67>*/ 				printf("______OK, OK... As I promised, here's the\n<b<Horned Colossus Beetle>>.\n\n\n______I have to admit, you're a pretty tough\ncompetitor. I guess I won't be able to\n<r<bug >>you anymore.\n\n______Heh heh heh...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf("______Make sure to tell Beedle that, bug\nlover to bug lover, I feel sort of bad\nfor causing him so much stress.")
/*< 70>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

