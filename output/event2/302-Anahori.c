          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 15), ('param4', 3), ('param5', 9)])) {
          	  case 0:
/*< 82>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3585), ('next', 16), ('param3', 13)])
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf("Welcome!")
/*<156>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 53), ('param3', 13)])
          			flw_53:
/*< 53>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 27)])) {
          			  case 0:
/*< 84>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 54), ('param3', 13)])
/*< 54>*/ 				printf("Here's how it works: you go on and dig\nup ALL the Rupees you can! Well,\nuntil you dig your mitts into a\nspicy little bomb...\nWould you like to... ______Oh, I'm sorry,\nbut you don't look so good. Why not\ncome back when you have some\nmore hearts?")
/*<118>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 119), ('param3', 39)])
/*<119>*/ 				printf("If you like, use the seat over there\nand take a load off.")
          			  case 1:
/*< 83>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 6), ('next', 1), ('param3', 13)])
/*<  1>*/ 				printf("Do you like money? How about\nexplosions? Well, dig up some Rupees\nbefore you hit a bomb in a suspenseful\ngame of <b<Thrill Digger>>! Want to try it?\n[1]Beginner![2]Intermediate![3]Expert!_____No, thanks.")
          				flw_85:
/*< 85>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 3), ('param3', 13)])
/*<  3>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 0)])) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 87), ('param3', 12)])
/*< 87>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 59), ('param3', 13)])
/*< 59>*/ 						printf("It's <r<30 Rupees >>to play. Want to give\nit a go?\n[1]You bet![2-]Nope.")
/*< 88>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 37), ('param3', 13)])
/*< 37>*/ 						switch (choice(2, 0)) {
          						  case 0:
/*<110>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 109), ('param3', 23)])
/*<109>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 37)])) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 34), ('param3', 13)])
/*< 34>*/ 								printf("Hope you dig up lots of Rupees!\nJust be careful what you're poking\ndown in the dirt. Could go KA-BOOM!\nSo uh...good luck!")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 33)])
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 35), ('param3', 13)])
/*< 35>*/ 								printf("You haven't got enough Rupees.\nSave some up and then come back!")
          							}
          						  case 1:
/*< 75>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 38), ('param3', 12)])
/*< 38>*/ 							printf("So which course will it be?\n[1]Beginner.[2]Intermediate.[3]Expert._____None.")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf("The Beginner course has less spots to\nburrow into, but it's great for\nfirst-timers!")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 91), ('param3', 12)])
/*< 91>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 22), ('param3', 13)])
/*< 22>*/ 						printf("It'll cost you <r<50 Rupees >>a go.\nInterested?\n[1]Sure.[2-]Nope.")
/*< 92>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 31), ('param3', 13)])
/*< 31>*/ 						switch (choice(2, 0)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 27), ('param3', 13)])
/*< 27>*/ 								printf("Hope you dig up lots of Rupees!\nJust be careful what you're poking\ndown in the dirt. Could go KA-BOOM!\nSo uh...good luck!")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 45), ('param3', 33)])
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 29), ('param3', 13)])
/*< 29>*/ 								printf("You haven't got enough Rupees.\nSave some up and then come back!")
          							}
          						  case 1:
/*< 77>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 32), ('param3', 12)])
/*< 32>*/ 							printf("So which course will it be?\n[1]Beginner.[2]Intermediate.[3]Expert._____None.")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf("The Intermediate course has plenty of\nspots to sink your mitts into, but watch\nout for <y<Rupoors>>.")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 93), ('param3', 12)])
/*< 93>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 23), ('param3', 13)])
/*< 23>*/ 						printf("Each round costs <r<70 Rupees>>. Do you\ndare to try?\n[1]Sure.[2-]Nope.")
/*< 94>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 24), ('param3', 13)])
/*< 24>*/ 						switch (choice(2, 0)) {
          						  case 0:
/*<113>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 70), ('next', 112), ('param3', 23)])
/*<112>*/ 							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 39)])) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 6), ('param3', 13)])
/*<  6>*/ 								printf("Hope you dig up lots of Rupees!\nJust be careful what you're poking\ndown in the dirt. Could go KA-BOOM!\nSo uh...good luck!")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 46), ('param3', 33)])
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 13), ('param3', 13)])
/*< 13>*/ 								printf("You haven't got enough Rupees.\nSave some up and then come back!")
          							}
          						  case 1:
/*< 79>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 25), ('param3', 12)])
/*< 25>*/ 							printf("So which course will it be?\n[1]Beginner.[2]Intermediate.[3]Expert._____None.")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf("The Expert course has more bombs,\nsure, but more valuable Rupees too.\nIt could be highly profitable...\nor highly explosive.")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5379), ('next', 5), ('param3', 13)])
/*<  5>*/ 					printf("Come back soon!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf("Hello there! Thanks for stopping by.\nFirst time here, am I right?")
/*<155>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 154), ('param3', 13)])
/*<154>*/ 			printf("The name's <b<Tubert>>. Nice to meet you! \nI run this little game I like to call\n<r<Thrill Digger>>!")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 72), ('param3', 44)])
/*< 72>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 20), ('param3', 12)])
/*< 20>*/ 		printf("Here's your grand Rupee total: <r<_______>>!")
/*< 71>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 39), ('param3', 33)])
/*< 39>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 2), ('param3', 15), ('param4', 3), ('param5', 20)])) {
          		  case 0:
/*<104>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4628), ('next', 7), ('param3', 13)])
/*<  7>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 4)])) {
          			  case 0:
/*< 11>*/ 				printf("You didn't dig up even a single Rupee?\nNot a one? You poor little digger...")
          				flw_103:
/*<103>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 81), ('param3', 13)])
/*< 81>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 108), ('param3', 12)])
/*<108>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 50), ('param3', 45)])
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 29)])) {
          					  case 0:
/*<105>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 56), ('param3', 13)])
/*< 56>*/ 						printf("You look a bit tired out. Why not rest\nup until you get a few hearts back?")
/*<116>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 117), ('param3', 39)])
/*<117>*/ 						printf("There's a stool over there. It ain't\nexactly lined with satin pillows, but\ngo ahead and take a load off.")
          					  case 1:
/*<  2>*/ 						printf("You should try again. How about\nanother go?\n[1]Beginner.[2]Intermediate.[3]Expert._____I'm done.")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf("Here's a useful tip: <r<low-value Rupees \n>>have only <r<a few bad spots >>nearby, \nso you can relax a little.\n\nBut the <r<higher the value of the Rupee>>,\nthe <r<more bad spots >>are nearby.\nBe careful of the spaces surrounding\na valuable Rupee!\nIf your first burrow digs up a bomb..._____\nyou'll just have to admit defeat and\ntry again. But don't let it get to you!")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf("Looks like you took a heavy loss.\nYep. Well, I'm sorry, my friend.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf("You didn't quite turn a profit.\nChalk that up to bad luck, I say.")
          				flw_102:
/*<102>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 80), ('param3', 13)])
/*< 80>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 12)])
/*<107>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 45)])
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf("You broke even! No loss. No gain.\nAt least you had yourself some fun, eh?\nAnd you got to see an explosion!")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 4), ('param3', 14), ('param4', 2), ('param5', 23)])) {
          			  case 0:
/*<100>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4363), ('next', 10), ('param3', 13)])
/*< 10>*/ 				printf("You made a small profit. Nice digging!")
          				goto flw_102
          			  case 1:
/*<101>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4364), ('next', 40), ('param3', 13)])
/*< 40>*/ 				printf("Wow, you made yourself a fortune!\nCongratulations!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 73), ('param3', 44)])
/*< 73>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 159), ('param3', 12)])
/*<159>*/ 		printf("Let's see how many Rupees you\nmanaged to dig up...")
/*< 70>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 99), ('param3', 33)])
/*< 99>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6415), ('next', 41), ('param3', 13)])
/*< 41>*/ 		printf("Well, I'm just stupefied! You dug up all\nthe Rupees! Listen--you earned this\nprize. Take it!")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("Thank you very much for your\nparticipation in <r<Thrill Digger>>.\n\n\nHere's a helpful tip: <r<low-value\nRupees >>have only <r<a few bad\nspots >>nearby, so you can relax a\nlittle.\nBut the <r<higher the value of the\n>><r<Rupee>>, the <r<more bad spots >>are\nnearby, so watch it.\nSee you again soon!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("I wish you'd hurry up about it.\nYour time's almost up...")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf("Sorry. There's a time limit here,\nand you just hit it. Time's up!")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf("______Ah, you're taking a break? Too much\nsuspense for you?\n\n\nWell then, will you take a load off and\nchat with me a bit?[1]OK.[2-]Not now.")
/*<120>*/ 	switch (choice(2, 0)) {
          	  case 0:
/*<122>*/ 		printf("______Oh, yes! OK, OK...is there anything\nyou want to ask me?______[1]Who are you?[2]Are you floating?[3]Is it too bright for you?_____Nothing.______")
          		flw_123:
/*<123>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 43)])) {
          		  case 0:
/*<125>*/ 			switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
          			  case 0:
/*<127>*/ 				printf("______My name is <b<Tubert>>! I run this game I\nlike to call <r<Thrill Digger>>! Yep, I'm kind\nof important around here.\n\nYou could even call me <b<Mr. Tubert>>.\nYou know, ______if you want to. Thanks, kid.")
          				flw_128:
/*<128>*/ 				printf("______So what do you want to ask me next?[1]Who are you?[2]Are you floating?[3]Is it too bright for you?_____Nothing.")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf("______My name is <b<Tubert>>! I run this game I\nlike to call <r<Thrill Digger>>! Yep, I'm kind\nof important around here.\n\nYou could even call me <b<Mr. Tubert>>.\nYou know, ______if you want to. Thanks, kid.\n\n\n______I want everyone to get their hands on\nplenty of Rupees, so I made up this\n<b<Thrill Digger>> thing!\n\n______The sad thing is all my <b<Mogma>> friends\nthink Rupees are easy to find. They\nnever come and play...\n\n______So that's why I need you to step up and\nbecome not just a repeat customer,\nbut my only customer!")
          					flw_124:
/*<124>*/ 					loadzone_temp_flags[0 /* 0x9 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf("______My name is <b<Tubert>>! I run this game I\nlike to call <r<Thrill Digger>>! Yep, I'm kind\nof important around here.\n\nYou could even call me <b<Mr. Tubert>>.\nYou know, ______if you want to. Thanks, kid.\n\n\n______I want everyone to get their claws on\nplenty of Rupees, so I made up this\n<b<Thrill Digger>> thing!\n\n______The sad thing is there's been a <r<scary-\nred-monster>> infestation in these parts\nlately, and it's been bad for business.\nAlmost nobody comes to play!\n______Some days I wish someone would\njust demolish______ those ugly <r<towers >>with\na bang and send them scampering\naway.")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
          			  case 0:
/*<131>*/ 				printf("______I'm not floating, no. I just want\ncustomers to see my cute little <r<paws>>,\nso I'm standing on my tail.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 148), ('param3', 39)])
/*<148>*/ 				printf("______No, I'm not floating. I'm standing on\nmy tail.")
/*<152>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 149), ('param3', 39)])
/*<149>*/ 				printf("_____\nI don't need to tell you that my <r<paws\n>>are my best feature. ")
/*<153>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 150), ('param3', 39)])
/*<150>*/ 				printf("______I like to give all my customers a chance\nto admire them. That's why I stand on\nmy tail--it does wonders for sales!")
/*<129>*/ 				loadzone_temp_flags[1 /* 0x9 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
          			  case 0:
/*<135>*/ 				printf("______No, it's not too bright. I just wear these\nto look cool.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 134), ('param3', 39)])
/*<134>*/ 				printf("______You mean my glasses? Looking dapper,\neh? The round frames make me\nlook even more fashionable!")
/*<146>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 143), ('param3', 39)])
/*<143>*/ 				printf("______And I'm plenty proud of my fine\n<r<mustache>> too! Cute and curly,\nall the way. I groom it every day!\nWait. That rhymed, didn't it?")
/*<147>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 144), ('param3', 39)])
/*<144>*/ 				printf("______But it's only to be expected. I can't have\nmy customers upset by my looks!")
/*<132>*/ 				loadzone_temp_flags[2 /* 0x9 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
          			  case 0:
/*<138>*/ 				switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
          				  case 0:
/*<136>*/ 					switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf("______Really? That's a shame. Well, take\na nice break. <b<Thrill Digger >>is waiting\nfor you whenever you're in the mood\nto poke around for Rupees and bombs!")
          						  case 1:
/*<141>*/ 							printf("______Really? What a shame...\n\n\n\n______But thanks for asking all those\ngreat questions! Actually, here,\nlet me tell you something.\n\n______You see the shining stone sticking out\nof the wall? That's pure <r<Rupee Ore>>!\nIt's also why there are so many Rupees\nto dig up here.\nIf you sling something at it, it'll <r<pop\n>>right out.______ Go on and give it a try!")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf("______Oh...that's too bad. Anyway, once\nyou've rested up, I hope you'll consider\ngiving <b<Thrill Digger >>a try.")
          	}
          }

