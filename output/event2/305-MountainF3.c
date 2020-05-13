          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
          		  case 0:
/*< 49>*/ 			printf("______What is this? You have another\nquestion for me?\n[1]<b<Water Dragon>>?[2]<b<Thunder Dragon>>?[3]Volcano?_____Not really.")
          			flw_42:
/*< 42>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 10)])) {
          			  case 0:
/*< 45>*/ 				printf("______Yes... The <b<Water Dragon>>. You see,\nthe goddess gave the Water Dragon\nthe power to protect the woods.\n\n______That power is strong, but the will of the\ndragon is even stronger. ...You may\nwant to be careful with that one, lest\nyou be eaten like an appetizer.\n______Ha ha ha ha!")
          				flw_48:
/*< 48>*/ 				loadzone_temp_flags[0 /* 0x9 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf("______Yes, yes... The <b<Thunder Dragon>>.\nThe goddess gave the Thunder Dragon\nthe power to protect the desert.\n\nThis dragon possesses a <r<legendary\nshield>>. It is truly one of its most prized\ntreasures.\n\n______It is said that the Thunder Dragon\ndelights in testing those with promise\nin the hopes of someday finding a\nworthy recipient for the shield.\nBut the dragon is a wily one. And his\ntest is not as simple as it may appear!\n\n\n______Ha ha ha ha!")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf("______Yes... This mountain was not always\nsuch a dangerous and unforgiving\nplace.\n\n______There was a time when those above-\nground and those below lived together\nin harmony by the blessing of the\ngreat mountain.\n______The desolation that you see now is all\nthat remains to remind us of those\nglorious days...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf("______Yes... You see the path before you,\nthen. Go. Follow it.")
          			}
          		  case 1:
/*< 41>*/ 			printf("______Yes... You appear as if summoned!\n\n\n\n______Young hero, do you wish to ask a\nquestion of me?\n[1]<b<Water Dragon>>?[2]<b<Thunder Dragon>>?[3]Volcano?_____No, thanks.")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 32), ('param3', 39)])
/*< 32>*/ 				printf("I'm afraid that eruption was caused by\nan explosion of my power. It looks like\nyou were caught up in it. My apologies.\n\nThe skies above this land should clear\nsoon...\n\n\nYou should go.")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 27), ('param3', 39)])
/*< 27>*/ 				printf("I'm afraid that eruption was caused by\nan explosion of my power. It looks like\nyou were caught up in it. My apologies.\n\nThe skies above this land should clear\nsoon...\n\n\nYou should go.")
/*< 28>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 29>*/ 				changeScene(4, 0) // 
          			}
          		  case 1:
          			goto flw_57
          		}
          	}
          }

          void entrypoint_305_02() {
/*<  1>*/ 	start()
/*< 50>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 2), ('param3', 16)])
/*<  2>*/ 	printf("______Ta-DAH! I'm here to save the day!")
/*<  3>*/ 	printf("______Heyyyy! Long time no see!\n\n\n\n______Huh? Don't tell me ya forgot my ugly\nmug!\n\n\n______I'm Plats, the Mogma you helped \nin the northern temple!\n\n\n______I saw them draggin' you off\nunconscious, so I tailed 'em!")
/*<  4>*/ 	printf("______You're pretty fearless, eh?\nWhat are you up to now?\n[1]Well...[2]Searching.")
/*<  6>*/ 	switch (choice(2, 0)) {
          	  case 0:
/*<  5>*/ 		printf("______Th-the dragon? You mean the\ndragon-god thing?\n\n\nUhh, yeah... I heard a rumor that a big\ndragon-god lives in this mountain...\n\n\n______You really like those fantasy stories,\neh, pal?\n\n\n______Hmm? Why am I here, you ask?\n\n\n\n______I just heard a rumor that some bad\nguys were gettin' together on this\nmountain!\n\nHeh heh heh... And everyone knows\nthat when bad guys get together,\nthey'll be fightin' over some loot.")
          		flw_17:
/*< 17>*/ 		printf("______Don't you gotta take care of your own\nbusiness first?\n\n\nHaven't ya noticed? They swiped all\nyour stuff!\n\n\n______While you were out, they shook you\ndown good, pal! You're gonna want to\nget your stuff back before ya go and\ntry anything else.\n______I can get you started. I stole these back\nfor ya...")
/*< 23>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 27), ('param2', 7167), ('next', 11), ('param3', 13)])
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf("______Time for me to tunnel out, pal!\nYou got your work cut out for you!\n\n\n______Good luck out there!")
/*< 16>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', -1), ('next', -1), ('param3', 13)])
          	  case 1:
/*<  7>*/ 		printf("______...Haha! I know why you're really here!\nYou heard the rumor about the baddies\nand their treasure too, didn't ya, pal?\n\n______Heh heh heh! You know what I'm\ntalkin' about! The rumor that some\nbad guys are havin' a little get-\ntogether on this mountain.\n______And everybody knows that where\nthere's bad guys, there's treasure!\nThat's just the way of the world.")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 21), ('param3', 46)])
/*< 21>*/ 		printf("_____\nAnd I probably don't even need to say\nthis again... But seriously, pal, don't\nlet them bad guys see ya, y'hear?\n\n______They ain't gonna do nothin' nice if they\ncatch you! So don't do anything heroic\nand get yourself caught!\n\nGot it?\n[1]OK, already...[2]...")
/*< 51>*/ 		switch (choice(2, 0)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf("...\n\n\n\n______Ahh... You know, I really worry about\nya, pal. It's a weakness of mine!\n\n\n______OK, tell you what...I'm gonna show you\nsomething good! Open up your map!")
/*< 12>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 19), ('param3', 30)])
/*< 19>*/ 			printf("______I feel just terrible for you, pal...\nHere, let me do one more thing for ya!\nOl' Plats here's gonna show ya what's\nin all the treasure chests!\n...Ta-dahh!")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 20), ('param3', 34)])
/*< 20>*/ 			printf("______After all, none of it looked like stuff\nI'd really want anyhow...\n\n\n______But if some of them things are yours,\nI'll bet you're gonna want to get 'em\nback, right?")
/*< 22>*/ 			printf("______All right then, I'm going back to\nrummage around for treasure!\n\n\nSee ya later!")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', -1), ('next', -1), ('param3', 13)])
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf("______Heyyyy!")
/*< 18>*/ 		printf("______Whaddya thinkin'? You shouldn't be\nout here in the open with no way to\ndefend yourself...\n\nThis place is crawlin' with thugs!\n\n\n\n______Well, just be careful they don't spot\nya while you're sneakin' around!")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 62), ('param3', 33)])
/*< 62>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 36), ('param3', 16)])
/*< 36>*/ 		printf("Huff...\n\n\n\nA little while ago, all them bad guys\nstarted disappearing... Then I noticed\nthey were all gathering up ahead...\nThey must have something good...")
          	  case 1:
/*< 55>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 26), ('param3', 39)])
/*< 26>*/ 		printf("Wheeeeeeze... So hot...\n\n\n\nOne of the most amazing treasures\nof the world, just up ahead...")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', -1), ('next', -1), ('param3', 42)])
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("Thank you, ______Master Link.\n\n\n\nPlease excuse me for leaving your side\nduring this brief trouble with the\nvolcanic eruption.\n\nWhile I was here, I detected a strong\nsource of power emanating from the\narea on the far right.\n\nSigns indicate a 60% chance that the\ndragon who knows a verse from the\n<b<Song of the Hero >>dwells there.\n\nPlease reacquire the rest of your gear\nand continue your search for the\ndragon.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf("Hey there, friend. Do you want a hint?\nI've got new ones to show!\n[1]Show me![2-]No, thanks.")
          		flw_66:
/*< 66>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf("I gotcha. Then I wish ya luck!")
          		}
          	  case 1:
/*< 65>*/ 		printf("Pst! Hey, boy oh boy, have I got some\ngreat hints for you. Want to see one?\n[1]Show me![2-]No, thanks.")
/*< 70>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_66
          	}
          }

          void entrypoint_305_07() {
/*< 72>*/ 	start()
/*< 77>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 79>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf("Pst! Hey, boy oh boy, have I got some\ngreat hints for you. Want to see one?\n[1]Show me![2-]No, thanks.")
          			flw_74:
/*< 74>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf("I gotcha. Then I wish ya luck!")
          			}
          		  case 1:
/*< 80>*/ 			printf("Hiya, friend.____\n So, I don't have any new\nhints to show you, but I'll gladly let you\nlook over all the hints that are\ncurrently available. Want a peek?\n[1]Show me![2-]No, thanks.")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf("Pst! Hey, boy oh boy, have I got some\ngreat hints for you. Want to see one?\n[1]Show me![2-]No, thanks.")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

