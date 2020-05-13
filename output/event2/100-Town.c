          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf("______You can't go flying at night.\nYou just can't.\n\n\nIf you want to go out flying, tuck\nyourself into bed and sleep until\ntomorrow morning.")
          		  case 1:
/*<177>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 173), ('param3', 31)])
/*<173>*/ 			printf("______What are you doing out here\nso late?!\n\n\n______You what?! You can't seriously think\nyou're going to ride your Loftwing at\nthis time of night, do you?!\n\n______Listen up. Loftwings can't fly at\nnight! They have terrible night vision,\nand only the few who have received\nspecial training can fly in the dark.\n______If you really need to fly, you'll just\nhave to wait for daylight.")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("______You won't find your bird hanging\naround here unless he's enrolling in\nthe academy. You should stick with\nsearching outside for now.\nI'll be asking around for leads too,\nand I'll let you know if I find out\nanything that'll help.")
          			  case 1:
/*< 20>*/ 				printf("______You're not still wandering around\nthe academy, are you?!\n\n\n______What?!_____ Your Loftwing won't come\nwhen you call for it? ______Why would a\nguardian bird not come when it's\ncalled?\nYou know, I've never heard of this\never happening before, so I can't even\ntell you what you're doing wrong...\n\n______But a good senior never hangs an\nunderclassman out to dry. We'll figure\nthis out together!\n\n______You go to the plaza, and ask people\nthere if they know anything. In the\nmeantime, I'll ask around here.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("______If you need to know anything about\nbirds, you just let ol' <b<Pipit>> know!")
          			  case 1:
/*< 18>*/ 				printf("______Morning, Link!\n\n\n\n______So...today's the <r<Wing Ceremony>>.\nAre you ready?\n\n\nAll I'm saying is everyone else is out\npracticing at the plaza, but you seem\npretty...relaxed about the whole thing.\n\n______Of course, that <r<Crimson Loftwing >>of\nyours is something special. I'd feel\npretty confident riding him, too!\n\nMy bird won the last ceremony, but\neven I don't think he could beat that\nred terror of yours...\n\n______Of course, a bird's true speed in a\nrace always comes down to the skill\nof the rider.\n\nI'm something of a bird researcher\naround here. ______So, you know, if you\never find yourself in need of some\nbird expertise, come see ol' <b<Pipit>>. ")
/*< 35>*/ 				scene_flags[0 'Skyloft'][35 /* 0x5 08 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_12() {
/*< 22>*/ 	start()
/*< 26>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*<145>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<146>*/ 			printf("______<b<Pipit>> should be in front of the <r<Sparring\nHall>>. You know, at the back of the\nKnight Academy.")
          		  case 1:
/*< 27>*/ 			printf("______Huh?____( Why do you want to know where\n<b<Groose >>hangs out?\n\n\n______Is he up to no good again?\n\n\n\nI______ have no clue where he hangs out.\n<b<Pipit>> probably does, though.\nYou should talk to him.\n\n______And I think he was looking for you\njust now_____..._____ He should be in front of the\n<r<Sparring Hall>>.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf("______<b<Pipit>> is the one to ask about birds.\nI saw him downstairs a minute ago.\nWhy don't you look for him there?")
          			  case 1:
/*<150>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 148), ('param3', 39)])
/*<148>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 139), ('param3', 33)])
/*<139>*/ 				printf("____\n______Don't men open doors for a lady anymore?\nHow long am I supposed to stand here waiting\nfor a little chivalry?! Ugh...")
/*<151>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 149), ('param3', 39)])
/*<149>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 24), ('param3', 33)])
/*< 24>*/ 				printf("______Oh! It's you, Link... Say,\nyou look all flustered. Did something\nhappen?\n\n______What?! ____(You can't find your Loftwing?\n\n\n\n______Umm_____..._____ I don't know what to tell you.\nI've been here at school the whole time.")
/*<142>*/ 				printf("______<b<Pipit>> is the one to ask about birds.\nI saw him downstairs a minute ago.\nWhy don't you look for him there?")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf("______If you win today's <r<ceremony>>, you'll\nbecome a <r<senior >>like us. Good luck!")
          			  case 1:
/*< 23>*/ 				printf("______Good morning, Link!\nGood luck in the <r<Wing Ceremony\n>>today!\n\n______Just think: if you win today, you'll\nbecome a <r<senior>> like us and you'll be\na very big step closer to graduating as\na <r<knight>>.\n______You'll even get a <r<knight's uniform>> like\nI'm wearing. Something tells me you'll\nbe pretty handsome in it!\n\n______But still not as dreamy as...him...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf("______Look at this thing. Who knows how long\nthis statue has been here?\n\n\nAnd it only has one eye. Poor thing...\nYou probably know this, but you\ncan press (C) to look around! _____")
          }

          void entrypoint_100_30() {
/*<180>*/ 	start()
/*<181>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 30), ('param2', 0), ('next', 183), ('param3', 39)])
/*<183>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 182), ('param3', 39)])
/*<182>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', -1), ('param3', 40)])
          }

          void entrypoint_100_14() {
/*<160>*/ 	start()
/*<165>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<166>*/ 		printf("______Mmm-MMM! Another day, another\ntasty soup!")
          	  case 1:
/*<161>*/ 		printf("______That boy really gets me steamed!\nIt's nearly time for dinner, and he's\nnowhere to be seen! He'd better not\nbe chasing bugs again.")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("______Where are you going with that?\nThat's no use to me there!\n\n\n______Stop fiddling around, and finish what\nyou came to do!")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf("______Ah! ____Link! Thank you\nso much! I'm so happy now...and it's\nall because of you.\n\nMy guy is going out on patrol again\ntonight. It's not even required of\nhim--it's just something he feels he\nhas to do...\n______Just thinking about him makes my\nheart start pounding like I just ran\nup a flight of stairs!")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf("______This letter from Cawlin... I don't know\nwhat to do about it!\n\n\n______What will Pipit think if he finds out\nabout this?")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (loadzone_temp_flags[16 /* 0xB 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf("______You need to talk to me? Just come find\nme sometime during the day tomorrow.")
/*<198>*/ 						loadzone_temp_flags[16 /* 0xB 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf("____\n_What do you think you're doing in a\ngirl's room at this time of night?!\n\n\nI need to take a bath, so get out of\nhere, Link!\n\n\n______Well...I mean I WOULD take a bath if\nwhoever is in there now would hurry\nup and get out. They've been in there\na loooong time...")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf("______I can't believe Zelda fell off her bird\nand then down through the clouds.\nShe's so good at riding her bird...\n\n____\n_You saw a ghost?! Are you sure you\nweren't just in shock and maybe\nimagined it?")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("__________Link!_____")
/*<127>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 128), ('param3', 39)])
/*<128>*/ 	printf("If you're heading over to the plaza,\nthe quickest way is out the door on the\nground floor.\n\n______The exit on the top floor is still locked,\nso you obviously can't get out there.")
/*<130>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 129), ('param3', 39)])
/*<129>*/ 	printf("______What's taking the lunch lady so long?\nI'm going to have a word with her later.")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf("______Listen. As an upperclassman, I've got\nsome advice for you. There's something\nyou should always do before you\ngo somewhere dangerous.\nYou should find a bird statue and <r<send\nyour prayers to the goddess to save\nyour progress>>. Make it part of your\nroutine!\nThe <r<bird statues>> you can pray to are\nmarked on your map. It should be easy\nto find one.")
          		  case 1:
/*< 93>*/ 			printf("______If you're going out to the waterfall,\nremember that there are some\ndangerous things there. Creepy, crawly\nthings. You'll need to carry a <r<sword>>.\n______I think I saw the<b< Knight Commander >>go\ninto the Sparring Hall a while ago.\nYou should go ask him if you can\nborrow one!")
/*< 95>*/ 			scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          		}
          	  case 1:
/*<107>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 74), ('param3', 31)])
/*< 74>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 199), ('param3', 32)])
/*<199>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 20), ('next', 200), ('param3', 47)])
/*<200>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 201), ('param3', 39)])
/*<201>*/ 		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 100), ('next', 203), ('param3', 15)])
/*<203>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 202), ('param3', 16)])
/*<202>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 20), ('next', 72), ('param3', 48)])
/*< 72>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 71>*/ 			printf("______Hey, Link! I was just\nlooking for you.")
          			flw_73:
/*< 73>*/ 			printf("______I heard your Loftwing has gone\nmissing, so I thought I'd join in the\nsearch.\n\n______And get this: when I asked Fledge what\nhe knew, he started acting weird.")
/*< 75>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 133), ('param3', 16)])
/*<133>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 163), ('param3', 39)])
/*<163>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 135), ('param3', 33)])
/*<135>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 100), ('next', 76), ('param3', 17)])
/*< 76>*/ 			printf("______I'm so sorry, Link!\n\n\n\n______I really wanted to tell you, but..._____if\n<b<Groose>> found out I told you...")
/*<204>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 12), ('next', 77), ('param3', 33)])
/*< 77>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 134), ('param3', 16)])
/*<134>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 78), ('param3', 39)])
/*< 78>*/ 			printf("______It sounds like <b<Groose>> forced him to\nkeep quiet about it.")
/*<131>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 12), ('next', 132), ('param3', 17)])
/*<132>*/ 			printf("______Go on!____# Tell him the truth.")
/*< 79>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', -1), ('next', 80), ('param3', 16)])
/*< 80>*/ 			printf("______Just a little while ago, when I was\ncleaning the dining hall, Groose and\nhis buddies came in.\n\n______They didn't notice I was there and\nstarted talking about their <r<plan >><r<to hide\n>>your Loftwing.\n\n______I wanted to warn you,\nLink. But just as I\ntried to sneak away...\n\n______Groose and his gang grabbed me...\n\n\n\n______They said that if I told you, they'd\nmake sure I would never be able to\nride a bird ever again!")
/*< 81>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 82), ('param3', 16)])
/*< 82>*/ 			printf("______It sounds like Groose and his buddies\nhad a plan to capture your bird and\nhide him near a <r<<r<______<r<waterfall>>.\n\n______Well, near a waterfall would mean_____..._____\n____(Quick--let's take a look at your <r<map>>.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 85), ('param3', 30)])
/*< 85>*/ 			printf("That's it! Right there. I think it means\nthe <r<waterfall >>marked here with _____.")
/*< 84>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 86), ('param3', 34)])
/*< 86>*/ 			printf("______You know how to read a map, right?\nPress _____ at any time to see a map of\nthe area._____ ______If you get lost, just press _____!_____")
/*< 88>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', -1), ('next', 89), ('param3', 16)])
/*< 89>*/ 			printf("______Forgive me, Link! I can't\nhelp being such a coward...\nI'm really sorry.")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          		  case 1:
/*<106>*/ 			printf("__________Link! Perfect timing.")
/*<156>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_73
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 50>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 57>*/ 			printf("______If you're talking Loftwings, talk to\n<b<Pipit>>. That guy knows almost\neverything about anything with wings.\n\nYou know Pipit, right? He's one of\nthe top students at the Knight\nAcademy.")
          		  case 1:
/*< 55>*/ 			printf("______What's wrong, Link?______\nWhat?! Your Loftwing is ____2missing?\n\n\n______That's terrible! I was so looking\nforward to seeing that red blur\nstreak through the sky.\n\nNo, no_____..._____I haven't seen him.\n\n\n\n____\n_Hmm_____..._____ Why not check with\nSkyloft's<r< bird expert>>, <b<______Pipit>>?\n______He might be able to help.")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf("____\n_I'm looking forward to seeing your\nLoftwing in action!")
          		  case 1:
/*<  1>*/ 			printf("______Hey, Link!\nHow's it going? The Wing Ceremony's\nabout to begin, right?\n\nRemember when <b<Pipit>> won the last\none right at the last second? It was\nsoooo close. Now, that was a race...\n\n____\n_Hey, your Crimson Loftwing will be\nin the race, right? ____(I'm looking forward\nto seeing what he can do.")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 12), ('next', 205), ('param3', 32)])
/*<205>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3073), ('param2', 256), ('next', 97), ('param3', 13)])
/*< 97>*/ 	printf("___________Hey!_____ ____Link!")
/*<115>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 117), ('param3', 39)])
/*<117>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 12), ('next', 147), ('param3', 33)])
/*<147>*/ 	printf("_____Over here!_____\n\n\n\n__\n___I have some information about\nyour Loftwing. Come over here!")
/*<118>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 98), ('param3', 42)])
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("______Are you talking to me about your\nLoftwing? Right now?\n\n\n______I'm a little busy here, so buzz off!")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf("______The <r<Wing Ceremony >>is starting soon.\nQuit with the dillyin' and dallyin', and\nget your tail over there!")
          		  case 1:
/*<  3>*/ 			printf("______Where in the clouds is that <b<Fledge>> boy?\nHe's supposed to be bringing me\n<r<barrels>>!\n\n______Sometimes I just don't know what's\ngoing on in that boy's head.")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("______Master, there is a high probability\nthat this beam of light will lead us to\nclues as to the whereabouts of the\nthree flames.\nI recommend that you investigate what\nlies at the end of this beam of light.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("______One more thing, Link!")
/*<101>*/ 	printf("______If you're going out to the waterfall,\nremember that there are some\ndangerous things there. Creepy, crawly\nthings. You'll need to carry a <r<sword>>.\n______I think I saw the<b< Knight Commander >>go\ninto the Sparring Hall a while ago.\nYou should go ask him if you can\nborrow one!")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf("______Still got more questions, eh?\n[1]My bird! [2]Groose?")
          			flw_16:
/*< 16>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*< 64>*/ 				printf("______Uh, I think...uh... Well, to be honest,\nI don't really know where they went.")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf("______Oh, <b<Groose >>and his little cronies were\nsaying they were headed down to the\nWing Ceremony.\n\nSo my guess is they might be in town.\nNormally, the fastest way there is just\ndown this path...\n\nBut this gate here still needs some work\nbefore it'll open. Can you go around\nthrough the academy?")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf("______Is something wrong? What's the\nbig hurry?\n\n\nWhat?! Your Loftwing is missing?!\n____2But ______I just <r<saw>> him. <b<Groose's bird >>was\nchasing off after your feathered fella.\n[1]Which way?[2]Where's Groose?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 58), ('param3', 31)])
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf("______I'm still workin' on the gate here, so\nit'll be out of commission for a little\nbit until I finish up.\n[1]Where's Zelda? [2]Ceremony?")
/*<  9>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*< 62>*/ 				printf("______<b<Zelda>>? _____Oh, she was just at the Statue\nof the Goddess with Headmaster\nGaepora.\n\nWhat's the best way up to the big\nstatue? It's time you learn for\nyourself, kid. Just press (C) to take a\nlook around. You can't miss her!_____\nIf your view gets a little off when\nyou're <g<looking around>> using (C),\nyou can always<g< center your view>> with\n(v). Remember that!__________")
          			  case 1:
/*< 61>*/ 				printf("______All set for today's big <r<Wing Ceremony>>?\n\n\n\nIf you come away with a win, you'll\nmove on up to the <r<senior class>>.\nThen after you graduate, you get to\nbe a <r<rescue knight>>.\nThose knights sure do keep order here\nin Skyloft, and I don't have to tell you\nthat it's a pretty big deal to become\none. I'd like to see you make it.")
          			}
          		  case 1:
/*<  5>*/ 			printf("______Mornin', Link. How's\nlife? Did you manage to get even a\nwink of sleep last night?\n\nFigured you might've been tossin' and\nturnin' all night thinkin' about the big\n<r<ceremony>> today.\n\nWhat am I doin'? ____(Oh, just fixin' this\ngate here...\n\n\nIt's been squeaky lately, and we can't\nhave that on the day of the ceremony!\n\n\n______Hey, you haven't already forgotten to\n<r<send your >><r<prayers >>to the goddess this\nmorning, have you?\n\n__\n___Just face the <r<bird statue >>over there,\nand say a short prayer to <r<save>> your\nprogress.\n\n________\n___As you know, those bird statues are all\nover Skyloft. It's about time you get in\nthe habit of stoppin' at a statue every\ntime you run by one.\n______<r<A prayer in time saves nine>>, if you\nknow what I'm sayin'!")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf("___________..._____Do you think you'll make it in time,\nLink?\n\n\n______I'm such a wimp_____..._____ I'm so sorry.")
          	  case 1:
/*<104>*/ 		printf("___________......_____")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf("______Watch your step there! Haven't they\ntaught you at the academy that knights\nmust always be vigilant? Sharpen up,\nor you'll never make it to knighthood!")
          	  case 1:
/*<187>*/ 		printf("______Watch your step there! You can't\nalways depend on knights like me to\nswoop in and save you.")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf("______Awwww! My <b<Sky Stag Beetle>>...\nSo close... ____\n_Oh well. To catch it, I would\nneed a ____G, anyway.\n\nI wish I hadn't thrown out the one I\nbought at <r<Beedle's Airshop>>.\n______Awwww...")
          	  case 1:
/*<110>*/ 		printf("______OK, so to <g<roll>>, first thing you gotta do\nis press (A) to run super fast...\n\n\nWhile you're running, just <r<shake the\nNunchuk>> and BAM! If you hit it just\nright, something will drop down from\nabove. So come on... _____You have to try it!")
          	}
          }

          void entrypoint_100_22() {
/*<178>*/ 	start()
/*<206>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<207>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<208>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_220:
/*<220>*/ 				printf("______I don't hear that voice from the\nrestroom anymore. I wonder who\nit was...")
          			  case 1:
/*<210>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 209), ('param3', 31)])
/*<209>*/ 				printf("______These past few days, I swear I hear\na voice every time I walk past the\n<r<restroom at night>>.\n\nWho in the world is in there? I just\nwish they'd pipe down!")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf("______I haven't seen Groose around recently.\nI wonder how that boy's doing.")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf("______How are things? Now that you're here,\nyou should find yourself a <r<bed >>to lie\ndown in and take a rest.")
          				  case 1:
/*<179>*/ 					printf("______Oh, you're taking off on your journey\nnow? _____Then you probably won't be\neating here for a while!\n\n____\n_Well, take care of yourself!\n\n\n\n______Make sure you come home every now\nand then. Nothing like a good sleep in\nyour own bed.")
          				}
          			}
          		}
          	  case 1:
          		goto flw_222
          	}
          }

          void entrypoint_100_57() {
/*<214>*/ 	start()
/*<215>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<217>*/ 		printf("______Whoa there, trainee! You'll never be\npromoted to full knighthood if you\ncan't learn to keep your wits about you.\n\nOh, and don't let me catch you going\nout flying at night. Only trained\nknights such as myself should be doing\nthat. You take care now!")
          	  case 1:
/*<216>*/ 		printf("______Watch your footing out there! In the\ndark you never know when you might\ntake a wrong step off a ledge.\n\nOh, and don't let me catch you going\nout flying at night. Only trained\nknights such as myself should be doing\nthat. You take care now!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf("___________Hold up, Link!\nHey! Hey, Link!\n\n_____\nCould you help me with something?\nAll you have to do is use (A) to <g<dash >>and\n<g<roll >>into the tree.\n\nJust like I've been doing. Dash, then\n<r<shake the Nunchuk >>when you're in\nfront of the tree to--BAM! Do a<g< roll\n>>right into it! So come on..._____ Pleeeeease?")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf("______I don't hear any voices coming from\nthe restroom anymore.\n\n\nBut now Cawlin has been crying\nhimself to sleep in Groose's room...\nIs there anything we can do?")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf("______I haven't seen Groose around recently.\nI wonder how that boy's doing.")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf("______How are things? Now that you're here,\nyou should find yourself a <r<bed >>to lie\ndown in and take a rest.")
          				  case 1:
/*<170>*/ 					printf("______Even those bratty kids are asleep.\nAhhhh, finally some peace.\n\n\n____\n_So! Do you think you can find Zelda?\nBest of luck to you!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("______I'm gonna shut this! We can't have any\ncreepy apparitions crawlin' in at night.\n\n\nI'll leave that door up on the second\nfloor open, though. Just don't let me\ncatch you going out after dark!\n\nNow I know your cute little friend\nZelda is gone and you want to go rescue\nher, but no honest folk here in Skyloft\ngo skulking around in the night.")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf("______Whooooooooa!_____ You did it! \nA <b<Sky Stag Beetle>>!\n\n\nWait up!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (loadzone_temp_flags[13 /* 0x8 20 */]) {
          	  case 0:
/*<126>*/ 		printf("___________I've had it!\n_____\n\n\n__\n___I'm going to have a word with\nthe headmaster about having you\nexpelled!")
          	  case 1:
/*<121>*/ 		switch (loadzone_temp_flags[12 /* 0x8 10 */]) {
          		  case 0:
/*<124>*/ 			printf("___________Enough already! _____You little brat!\n\n\n\n__\n___Do that again, and you'll be mopping\nsoup stains for a week!")
/*<125>*/ 			loadzone_temp_flags[13 /* 0x8 20 */] = true;
          		  case 1:
/*<122>*/ 			printf("______What do you think you're doing?!\n\n\n\n_______\n___You'd better clean that up!")
/*<123>*/ 			loadzone_temp_flags[12 /* 0x8 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 49>*/ 			printf("______Press _____ to check your <r<map >>and find\nyour way to the Statue of the Goddess.\nLook for your bird there!_____")
          		  case 1:
/*< 47>*/ 			printf("_____WWhat's up, Link? You\nseem to be in a hurry...\n\n\nWhat's this about your bird? Oh, that\nunusual Crimson Loftwing...\n____(Have I seen him?__________ ______I'm sorry. I haven't.\n\n______Why don't you look for him by the\nStatue of the Goddess? You'll have a\ngood view of the whole town from way\nup there.\nJust check your <r<map >>using _____.\nKnowing you, that's the best way to\navoid getting lost...again._____")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("______I dream of playing the part of the\ngoddess at the Wing Ceremony!\nJust to have a romantic ceremony\nwith the handsome, winning knight.\nJust once is all I ask...")
          		  case 1:
/*<  8>*/ 			printf("______Hiya, Link! Nice breeze\ntoday, huh? Perfect for the ceremony!\n\n\n______So who do you think will win today?\nI guess <b<Groose>> is a strong contender,\nbut...\n\n______The winner will get blessed by a village\ngirl chosen to represent the goddess...\n______How romantic!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf("______What's all this? I thought I told <b<Fledge\n>>to carry that! Bah, it's probably for\nthe best... That skinny boy would\nprobably have gotten flattened.\n____\n_Say...don't you have some important\nceremony or some such today? Hmph!\nWell, thanks for the help.")
          	  case 1:
/*<153>*/ 		printf("____\n_Oh? ____Link! You're\ndelivering something for me?\n\n\n______That was supposed to be <b<Fledge's\n>>job...\n\n\n______Anyhow, just bring the <r<barrel>> here.\nYes, here.")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

