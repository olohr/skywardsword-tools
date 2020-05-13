          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf("______Hey, Link! Did you find\nany clues about Zelda? I know you\ncan find her. Don't give up!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf("______Hey, Link! Just make sure\nyou come back and see me.")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf("______Zelda fell from her bird... I can't\nbelieve it...\n\n\nShe's such a good rider, you know?\n\n\n\n______Since I'm pretty much the worst rider\naround, all I can do is hope she's OK.")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf("______That's pretty serious,\nLink._____ Hope you find\nyour bird soon_____..._____")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf("______Hey, what's wrong, Link?\n\n\n\n______You...don't know where your bird is?\n_____What are you talking about,\nLink?\n\nYou called it, but_____..._____it didn't even come\nto you?\n\n\n___________..._____So that means..._____\n_____Oh... I knew it...\n\n\n______Huh? _____Oh, uh, nothing._____ Really, I was,\nuh..._____talking to myself. You know, like\nI do...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf("______I have to hang back and watch the\nacademy today. Good luck with the\n<r<ceremony>>, Link!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf("______I'm not like you, Link.\nI fail at everything I try.\n\n\nThat's why I'm still here practicing\n<g<picking up >>barrels with (A).\n\n\n______I guess it's not all bad. At least I'm\ngetting paid.")
          							  case 1:
/*<  3>*/ 								printf("______Good morning, Link!\nToday's the big <r<Wing Ceremony>>,\nright?\n\n______I wanted to fly too, but I_____..._____ I didn't\nmake the cut, so I'm stuck back here at\nthe academy.\n\n______Plus, I've got to move these <r<barrels\n>>over to the kitchen.\n\n\n______I was hoping to at least be able to\ncheer you on, Link, but...\n______I guess that's the way it goes._____\nGo out there and wow them, buddy!")
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
/*< 77>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 33)])) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 84), ('param3', 12)])
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf("______Want to try again? It'll cost you\nanother <r<20 Rupees>>.\n[1]Yep! [2]Rules?[3-]Nah.")
          					flw_74:
/*< 74>*/ 					switch (choice(3, 1)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf("______All right! Let's get started. Show me\nhow it's done, Link!")
/*< 71>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf("______Can't afford it, huh? Must be rough\nnot having enough Rupees to play\na little game, huh, Link?")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf("______I'll toss pumpkins for <r<90 seconds>>!\nYou get 10 points for every pumpkin\nyou hit.\n\n______The more pumpkins you hit in a row,\nthe more points you get. Don't miss!")
/*< 69>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 64), ('param3', 12)])
/*< 64>*/ 						printf("______Oh, and one more thing. It will cost you\n20 Rupees a try.\n\n\n______Playing for free is no fun, right?\nSo what do you say? You want to\ngive it a shot for <r<20 Rupees>>?\n[1]Sure! [2-]No, thanks.")
/*< 65>*/ 						switch (choice(2, 0)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf("______OK, Link. I know how\nbusy you are.\n\n\nYou've got the whole _save Zelda\"\nmission going on and stuff. ____\n\nSorry for bugging you.")
          					}
          				  case 1:
/*< 73>*/ 					printf("______Hey, Link! How's\neverything going?\n\n\nYou want to try shooting some\npumpkins? One go around will cost\nyou <r<20 Rupees>>!\n[1]Yep![2]Rules?[3-]No, thanks.")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 76), ('param3', 31)])
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf("______Hey, Link!\n\n\n\nI've pretty much maxed out on push-\nups. Wonder what exercise I can pick\nup next...\n\n______Whoa! _____That's one sweet bow you've\ngot there, Link!\n\n\nBet you're a total natural with it, too.\n[1]Yep. [2]Uh...")
/*< 58>*/ 				switch (choice(2, 0)) {
          				  case 0:
/*< 57>*/ 					printf("______You're amazing, Link!\n\n\n\n______Even if I work my way up to 3,000\npush-ups, I'll never be as cool as you.")
          					flw_59:
/*< 59>*/ 					printf("______I've got it! Why don't you show\nme how good you are with\nyour bow?\n\nI'm going to toss some pumpkins into\nthe air, OK?\n\n\n______You show me how good you are by\nfilling them full of arrows!\n\n\n______Throwing the pumpkins in the air will\ngive me a good workout too!\nTwo birds with one stone!\n[1]OK! [2-]No, thanks.")
/*< 61>*/ 					switch (choice(2, 0)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf("______OK, Link. I know how\nbusy you are.\n\n\nYou've got the whole _save Zelda\"\nmission going on and stuff. ____\n\nSorry for bugging you.")
          					}
          				  case 1:
/*< 60>*/ 					printf("______Why are you blushing? You know\nit's true!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf("______Hey, Link! The Isle of the \nGoddess vanished! What's going on?\n\n\n______Oh_____..._____so you already know everything,\nhuh, Link?\n\n\n______It must have something to do with\nfinding Zelda. I get it. I'm done being\nsurprised by this stuff. You just make\nsure you find Zelda, OK?")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 78), ('param3', 44)])
/*< 78>*/ 		switch (minigame_related[0]) {
          		  case 0:
/*< 92>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 28), ('param2', 9472), ('next', 79), ('param3', 13)])
/*< 79>*/ 			printf("______You scored _______ _____.\n\n\n\nJust not feeling it today, huh,\nLink? Sorry, but you\ndon't get a prize with that score.\n\n______The easiest way to hit a pumpkin is\nto lead it. You know, put the cursor a\nlittle ahead of it as it's flying.\n\nDo that, and I bet you can score\n<r<150 points >>or so.\n\n\n______Not that I'm giving you advice or\nanything. I mean, I know you know\nwhat you're doing.")
          			flw_86:
/*< 86>*/ 			printf("______Drop by when you want to try again!")
          			flw_91:
/*< 91>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 103), ('param3', 45)])
/*<103>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*< 93>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 80), ('param3', 13)])
/*< 80>*/ 			printf("Wow, _____________ _____! Nice job,\nLink!\n\n\nIt's not the best score ever, but you\nwere pretty smooth, Link!\n\n\nNext time, I want you to aim for at\nleast <r<400 points>>!\n\n\n______Anyway, here's 50 Rupees I've earned\nfrom doing chores for the grumpy\nkitchen lady.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 29), ('param2', 9728), ('next', 81), ('param3', 13)])
/*< 81>*/ 			printf("______Wow, _______ _____! That's great,\nLink!\n\n\nYou're good at everything you do,\nLink.\n\n\n______Here's your prize!")
/*<106>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 88), ('param3', 42)])
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf("______It would be great to see you hit <r<600\npoints>> and set a record next time.\nGive it your best shot!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 30), ('param2', 9984), ('next', 97), ('param3', 13)])
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf("______You got _______ _____! That's beyond\namazing, Link!\n\n\n______The pride of the Knight Academy is\ntruly riding on your shoulders,\nLink! Here, take this!")
/*<105>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 89), ('param3', 42)])
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf("______You got _______ _____! That's beyond\namazing, Link!\n\n\nThe hopes of the Knight Academy are\ntruly riding on your shoulders,\nLink!\n\n______Take this<r< symbol of friendship\n>>between you and me,\nLink!")
/*<104>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 99), ('param3', 42)])
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("_______________Link!_____")
/*< 39>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 38), ('param3', 39)])
/*< 38>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', -1), ('next', 37), ('param3', 16)])
/*< 37>*/ 	printf("___________Hey,_____ umm... I should probably tell you...\n\n\n\n______Ah, forget it. Never mind._____\nSorry...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf("______Thanks! That was a huge help,\nLink!\n\n\n______I know it's not much, but here's half of\nthe pay the old lady offered me to\ndo that.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 44), ('param3', 12)])
/*< 44>*/ 		printf("______I have to hang back and watch the\nacademy today. Good luck with the\n<r<ceremony>>, Link!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
          		  case 0:
/*< 46>*/ 			printf("______I need you to carry one of these <r<barrels>>\nover to the old lady who works in the\nkitchen.\n\nPress (A) to pick up a barrel, then press\n(A) again to <g<put it down >>at your feet.\n\n\n______If you <g<hold the Wii Remote up and\nswing it>>, you can <g<throw >>whatever you're\ncarrying.\n\nYou can <g<roll >>small items like pots by\n<g<holding the Wii Remote down >>and\n<g<swinging >>it.\n\n______But we'll get in huge trouble if any of\nthese barrels break, so don't even think\nabout throwing or rolling them.")
/*<114>*/ 			printf("______If you forget any of this, just <g<press >><g<_____>>._____\n\n\n\nThat'll bring up an explanation of\nactions available to you at that moment\nin time. Pretty handy, huh?")
          		  case 1:
/*< 33>*/ 			printf("______Aww, thanks. I didn't think you had\ntime to help me out,\nLink.\n[1]No problem![2-]I'm busy...")
/*< 34>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*< 35>*/ 				printf("______Really? Thanks! OK, so...")
/*<  9>*/ 				printf("______I need you to carry one of these <r<barrels>>\nover to the old lady who works in the\nkitchen.\n\nPress (A) to pick up a barrel, then press\n(A) again to <g<put it down >>at your feet.\n\n\n______If you <g<hold the Wii Remote up and\nswing it>>, you can <g<throw >>whatever you're\ncarrying.\n\nYou can <g<roll >>small items like pots by\n<g<holding the Wii Remote down >>and\n<g<swinging >>it.\n\n______But we'll get in huge trouble if any of\nthese barrels break, so don't even think\nabout throwing or rolling them.")
/*<113>*/ 				printf("______If you forget any of this, just <g<press >><g<_____>>._____\n\n\n\nThat'll bring up an explanation of\nactions available to you at that moment\nin time. Pretty handy, huh?")
/*<  8>*/ 				loadzone_temp_flags[11 /* 0x8 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf("______Oh, right_____... _____You've got today's\nWing Ceremony to think about!\nYou can leave that there.")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("__________Link!")
/*< 23>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 18), ('param3', 39)])
/*< 18>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 100), ('next', 25), ('param3', 15)])
/*< 25>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 17), ('param3', 39)])
/*< 17>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 0), ('next', 22), ('param3', 14)])
/*< 22>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 20), ('param3', 16)])
/*< 20>*/ 	printf("______That green uniform looks so...\nadventurous! You sure look like a\nknight now.")
/*<111>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 112), ('param3', 39)])
/*<112>*/ 	printf("______The headmaster said you're heading\nout to look for Zelda.\n\n\n______You're really something else. I could\nnever imagine myself doing what\nyou're about to do.\n\n__\n___I put a lot of work into making this!\nYou should take it with you.")
/*< 51>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 4096), ('next', 52), ('param3', 13)])
/*< 52>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 50), ('param3', 6)])
/*< 50>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 16), ('param3', 42)])
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf("It's an<r< Adventure Pouch>>. It's for...\nadventures. It's neat because you can\nfit <r<four>> things in it that you'll need\non your big journey.\nYou can buy all kinds of stuff at the\nbazaar that you can put in this pouch.\nYou should go look!\n\n______You could buy some <y<potions >>and a\n<y<shield>>. They'd fit in the pouch, and they\nmight come in handy on an adventure.")
/*< 24>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 21), ('param3', 39)])
/*< 21>*/ 	printf("____Link! ______I just know you'll\nfind Zelda for us.")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("")
          }

