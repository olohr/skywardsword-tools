          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x02Hey, Link! Did you find\nany clues about Zelda? I know you\ncan find her. Don't give up!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09Hey, Link! Just make sure\nyou come back and see me.")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x811Zelda fell from her bird... I can't\nbelieve it...\n\n\nShe's such a good rider, you know?\n\n\n\n\x0E\x01\x09\x04\x00\xE00Since I'm pretty much the worst rider\naround, all I can do is hope she's OK.")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x811That's pretty serious,\nLink.\x0E\x01\x04\x02\x19 Hope you find\nyour bird soon\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x708Hey, what's wrong, Link?\n\n\n\n\x0E\x01\x09\x04\x07\xC00You...don't know where your bird is?\n\x0E\x01\x04\x02\x19What are you talking about,\nLink?\n\nYou called it, but\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Íit didn't even come\nto you?\n\n\n\x0E\x01\x09\x04\x01\x800\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02ÍSo that means...\x0E\x01\x04\x02\x19\n\x0E\x01\x08\x02\xFFCDOh... I knew it...\n\n\n\x0E\x01\x09\x04\x08\x807Huh? \x0E\x01\x04\x02\x19Oh, uh, nothing.\x0E\x01\x04\x02\x19 Really, I was,\nuh...\x0E\x01\x04\x02\x14talking to myself. You know, like\nI do...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09I have to hang back and watch the\nacademy today. Good luck with the\n<r<ceremony>>, Link!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x809I'm not like you, Link.\nI fail at everything I try.\n\n\nThat's why I'm still here practicing\n<g<picking up >>barrels with (A).\n\n\n\x0E\x01\x09\x04\x07\xE00I guess it's not all bad. At least I'm\ngetting paid.")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Good morning, Link!\nToday's the big <r<Wing Ceremony>>,\nright?\n\n\x0E\x01\x09\x04\x01\x800I wanted to fly too, but I\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í I didn't\nmake the cut, so I'm stuck back here at\nthe academy.\n\n\x0E\x01\x09\x04\x07\x800Plus, I've got to move these <r<barrels\n>>over to the kitchen.\n\n\n\x0E\x01\x09\x04\x01\x800I was hoping to at least be able to\ncheer you on, Link, but...\n\x0E\x01\x09\x04\x07\xA00I guess that's the way it goes.\x0E\x01\x04\x02\x14\nGo out there and wow them, buddy!")
/*< 26>*/ 								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_114_20() {
/*< 55>*/ 	start()
/*< 77>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 84), ('param3', 12)])
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x02Want to try again? It'll cost you\nanother <r<20 Rupees>>.\n[1]Yep! [2]Rules?[3-]Nah.")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0AAll right! Let's get started. Show me\nhow it's done, Link!")
/*< 71>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x811Can't afford it, huh? Must be rough\nnot having enough Rupees to play\na little game, huh, Link?")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x200I'll toss pumpkins for <r<90 seconds>>!\nYou get 10 points for every pumpkin\nyou hit.\n\n\x0E\x01\x09\x04\x00\xA00The more pumpkins you hit in a row,\nthe more points you get. Don't miss!")
/*< 69>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 64), ('param3', 12)])
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x200Oh, and one more thing. It will cost you\n20 Rupees a try.\n\n\n\x0E\x01\x09\x04\x08\xA00Playing for free is no fun, right?\nSo what do you say? You want to\ngive it a shot for <r<20 Rupees>>?\n[1]Sure! [2-]No, thanks.")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x811OK, Link. I know how\nbusy you are.\n\n\nYou've got the whole \x201Csave Zelda\"\nmission going on and stuff. \x0E\x01\x04\x02\n\nSorry for bugging you.")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x09\x04\x00\x02Hey, Link! How's\neverything going?\n\n\nYou want to try shooting some\npumpkins? One go around will cost\nyou <r<20 Rupees>>!\n[1]Yep![2]Rules?[3-]No, thanks.")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 76), ('param3', 31)])
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x202Hey, Link!\n\n\n\nI've pretty much maxed out on push-\nups. Wonder what exercise I can pick\nup next...\n\n\x0E\x01\x09\x04\x00\x207Whoa! \x0E\x01\x04\x02\x1EThat's one sweet bow you've\ngot there, Link!\n\n\nBet you're a total natural with it, too.\n[1]Yep. [2]Uh...")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xAFFYou're amazing, Link!\n\n\n\n\x0E\x01\x09\x04\x01\x200Even if I work my way up to 3,000\npush-ups, I'll never be as cool as you.")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA00I've got it! Why don't you show\nme how good you are with\nyour bow?\n\nI'm going to toss some pumpkins into\nthe air, OK?\n\n\n\x0E\x01\x09\x04\x00\x200You show me how good you are by\nfilling them full of arrows!\n\n\n\x0E\x01\x09\x04\x07\xA00Throwing the pumpkins in the air will\ngive me a good workout too!\nTwo birds with one stone!\n[1]OK! [2-]No, thanks.")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x811OK, Link. I know how\nbusy you are.\n\n\nYou've got the whole \x201Csave Zelda\"\nmission going on and stuff. \x0E\x01\x04\x02\n\nSorry for bugging you.")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xA09Why are you blushing? You know\nit's true!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x501Hey, Link! The Isle of the \nGoddess vanished! What's going on?\n\n\n\x0E\x01\x09\x04\x00\x800Oh\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Íso you already know everything,\nhuh, Link?\n\n\n\x0E\x01\x09\x04\x00\x200It must have something to do with\nfinding Zelda. I get it. I'm done being\nsurprised by this stuff. You just make\nsure you find Zelda, OK?")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 78), ('param3', 44)])
/*< 78>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 92>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 28), ('param2', 9472), ('next', 79), ('param3', 13)])
/*< 79>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12You scored \x0E\x02\x03\x06\x00\x00Í \x0E\x03\x04\x02\x2CD.\n\n\n\nJust not feeling it today, huh,\nLink? Sorry, but you\ndon't get a prize with that score.\n\n\x0E\x01\x09\x04\x07\x200The easiest way to hit a pumpkin is\nto lead it. You know, put the cursor a\nlittle ahead of it as it's flying.\n\nDo that, and I bet you can score\n<r<150 points >>or so.\n\n\n\x0E\x01\x09\x04\x01\xA00Not that I'm giving you advice or\nanything. I mean, I know you know\nwhat you're doing.")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA00Drop by when you want to try again!")
          			flw_91:
/*< 91>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 103), ('param3', 45)])
/*<103>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*< 93>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 80), ('param3', 13)])
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Wow, \x0E\x01\x09\x04\x00\x0B\x0E\x02\x03\x06\x00\x00Í \x0E\x03\x04\x02\x2CD! Nice job,\nLink!\n\n\nIt's not the best score ever, but you\nwere pretty smooth, Link!\n\n\nNext time, I want you to aim for at\nleast <r<400 points>>!\n\n\n\x0E\x01\x09\x04\x07\xA00Anyway, here's 50 Rupees I've earned\nfrom doing chores for the grumpy\nkitchen lady.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 81), ('param3', 13)])
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BWow, \x0E\x02\x03\x06\x00\x00Í \x0E\x03\x04\x02\x2CD! That's great,\nLink!\n\n\nYou're good at everything you do,\nLink.\n\n\n\x0E\x01\x09\x04\x07\xA00Here's your prize!")
/*<106>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 88), ('param3', 42)])
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA00It would be great to see you hit <r<600\npoints>> and set a record next time.\nGive it your best shot!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 30), ('param2', 9984), ('next', 97), ('param3', 13)])
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BYou got \x0E\x02\x03\x06\x00\x00Í \x0E\x03\x04\x02\x2CD! That's beyond\namazing, Link!\n\n\n\x0E\x01\x09\x04\x07\xA00The pride of the Knight Academy is\ntruly riding on your shoulders,\nLink! Here, take this!")
/*<105>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 89), ('param3', 42)])
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BYou got \x0E\x02\x03\x06\x00\x00Í \x0E\x03\x04\x02\x2CD! That's beyond\namazing, Link!\n\n\nThe hopes of the Knight Academy are\ntruly riding on your shoulders,\nLink!\n\n\x0E\x01\x09\x04\x07\xA00Take this<r< symbol of friendship\n>>between you and me,\nLink!")
/*<104>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 99), ('param3', 42)])
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x1CD\x0E\x03\x01\x00Link!\x0E\x01\x0D\x02\x1906")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', -1), ('next', 37), ('param3', 16)])
/*< 37>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x800\x0E\x01\x08\x02\xFFCDHey,\x0E\x01\x04\x02\x14 umm... I should probably tell you...\n\n\n\n\x0E\x01\x09\x04\x07\x800Ah, forget it. Never mind.\x0E\x01\x04\x02\x14\nSorry...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\xA0BThanks! That was a huge help,\nLink!\n\n\n\x0E\x01\x09\x04\x00\x209I know it's not much, but here's half of\nthe pay the old lady offered me to\ndo that.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 44), ('param3', 12)])
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x09I have to hang back and watch the\nacademy today. Good luck with the\n<r<ceremony>>, Link!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x203I need you to carry one of these <r<barrels>>\nover to the old lady who works in the\nkitchen.\n\nPress (A) to pick up a barrel, then press\n(A) again to <g<put it down >>at your feet.\n\n\n\x0E\x01\x09\x04\x01\x200If you <g<hold the Wii Remote up and\nswing it>>, you can <g<throw >>whatever you're\ncarrying.\n\nYou can <g<roll >>small items like pots by\n<g<holding the Wii Remote down >>and\n<g<swinging >>it.\n\n\x0E\x01\x09\x04\xC07\x200But we'll get in huge trouble if any of\nthese barrels break, so don't even think\nabout throwing or rolling them.")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x200If you forget any of this, just <g<press >><g<(2)>>.\x0E\x01\x11\x02\x5CD\n\n\n\nThat'll bring up an explanation of\nactions available to you at that moment\nin time. Pretty handy, huh?")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Aww, thanks. I didn't think you had\ntime to help me out,\nLink.\n[1]No problem![2-]I'm busy...")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xA0BReally? Thanks! OK, so...")
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x203I need you to carry one of these <r<barrels>>\nover to the old lady who works in the\nkitchen.\n\nPress (A) to pick up a barrel, then press\n(A) again to <g<put it down >>at your feet.\n\n\n\x0E\x01\x09\x04\x01\x200If you <g<hold the Wii Remote up and\nswing it>>, you can <g<throw >>whatever you're\ncarrying.\n\nYou can <g<roll >>small items like pots by\n<g<holding the Wii Remote down >>and\n<g<swinging >>it.\n\n\x0E\x01\x09\x04\xC07\x200But we'll get in huge trouble if any of\nthese barrels break, so don't even think\nabout throwing or rolling them.")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x200If you forget any of this, just <g<press >><g<(2)>>.\x0E\x01\x11\x02\x5CD\n\n\n\nThat'll bring up an explanation of\nactions available to you at that moment\nin time. Pretty handy, huh?")
/*<  8>*/ 				loadzone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x19Oh, right\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02ÍYou've got today's\nWing Ceremony to think about!\nYou can leave that there.")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x201\x0E\x03\x01\x00Link!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 100), ('next', 25), ('param3', 15)])
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 0), ('next', 22), ('param3', 14)])
/*< 22>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 20), ('param3', 16)])
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x07\x1800That green uniform looks so...\nadventurous! You sure look like a\nknight now.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x200The headmaster said you're heading\nout to look for Zelda.\n\n\n\x0E\x01\x09\x04\x00\x1700You're really something else. I could\nnever imagine myself doing what\nyou're about to do.\n\n\x0E\x01\n\x04\x05ÍI put a lot of work into making this!\nYou should take it with you.")
/*< 51>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 4096), ('next', 52), ('param3', 13)])
/*< 52>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 50), ('param3', 6)])
/*< 50>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 16), ('param3', 42)])
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0 */ "It's an<r< Adventure Pouch>>. It's for...\nadventures. It's neat because you can\nfit <r<four>> things in it that you'll need\non your big journey.\nYou can buy all kinds of stuff at the\nbazaar that you can put in this pouch.\nYou should go look!\n\n\x0E\x01\x09\x04\x07\xA09You could buy some <y<potions >>and a\n<y<shield>>. They'd fit in the pouch, and they\nmight come in handy on an adventure.")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x03\x01\x00Link! \x0E\x01\x09\x04\x01\xC00I just know you'll\nfind Zelda for us.")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0 */ "")
          }

