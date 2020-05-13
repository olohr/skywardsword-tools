          void entrypoint_460_00() {
/*<  1>*/ 	start()
/*< 38>*/ 	story_flags[351 /* us: 805A9B01 0x20, jp: 805ACD81 0x20 */] = false;
/*< 39>*/ 	story_flags[352 /* us: 805A9B01 0x40, jp: 805ACD81 0x40 */] = false;
/*< 33>*/ 	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = false;
/*< 34>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = false;
/*< 35>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = false;
/*< 36>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = false;
/*< 37>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = false;
          	switch (minigame_related[0]) {
          	  case 0:
/*<  4>*/ 		switch (story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<  8>*/ 				printf("__________Link! Are you here to do\n<r<battle>> or challenge yourself in one\nof the trials in the <r<Silent Realm>>?\n[1]Battle![2]Silent Realm!_____Neither.")
/*< 16>*/ 				switch (choice(3, 1)) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
          					  case 0:
          						flw_17:
/*< 17>*/ 						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 20)])) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf("______Spoken like a little warrior. I like it!")
/*< 40>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = false;
/*< 41>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = false;
/*< 42>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = false;
/*< 43>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = false;
/*< 44>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = false;
/*< 45>*/ 							scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = false;
/*< 46>*/ 							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = false;
/*< 47>*/ 							scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = false;
/*< 48>*/ 							scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = false;
/*< 49>*/ 							scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = false;
/*< 50>*/ 							scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = false;
/*< 51>*/ 							scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = false;
/*<1010>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
          								flw_13:
/*< 13>*/ 								printf("______All right, then...which period of your\njourney would you like to face an\nenemy from?\n[1]The beginning.[2]The middle.[3]Later on._____Never mind.")
/*< 14>*/ 								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 13)])) {
          								  case 0:
          									flw_236:
/*<236>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 41), ('next', -1), ('param3', 7)])
          								  case 1:
          									flw_237:
/*<237>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 42), ('next', -1), ('param3', 7)])
          								  case 2:
/*<262>*/ 									switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          									  case 0:
/*<238>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 43), ('next', -1), ('param3', 7)])
          									  case 1:
/*<263>*/ 										switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          										  case 0:
/*<265>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 44), ('next', -1), ('param3', 7)])
          										  case 1:
/*<264>*/ 											switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          											  case 0:
/*<266>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 45), ('next', -1), ('param3', 7)])
          											  case 1:
/*<267>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 46), ('next', -1), ('param3', 7)])
          											}
          										}
          									}
          								  case 3:
          									flw_15:
/*< 15>*/ 									printf("______What? You're not interested?\nHow dull...\n\n\n______Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
          								}
          							  case 1:
/*<194>*/ 								switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          								  case 0:
          									goto flw_13
          								  case 1:
/*<195>*/ 									printf("______Now then...would you like to face an\nenemy from near the beginning of\nyour journey, or a fairly recent one?\n[1]The beginning.[2]Fairly recent._____Never mind.")
/*<196>*/ 									switch (choice(3, 1)) {
          									  case 0:
          										goto flw_236
          									  case 1:
          										goto flw_237
          									  case 2:
          										goto flw_15
          									}
          								}
          							}
          						  case 1:
/*< 20>*/ 							printf("______...~~~Hey, hold on a second... You look like\nyou're about to fall over! Are you sure\nyou're really ready for this?\n[1]Of course![2-]No...")
/*< 21>*/ 							switch (choice(2, 0)) {
          							  case 0:
          								goto flw_52
          							  case 1:
/*< 22>*/ 								printf("______Right...~~~ No need to knock yourself out\nfighting these enemies here. Might as\nwell save yourself for the real battles,\nI suppose...\n______So don't even sweat it. Just come on\nback when you're back to full strength.\nI'll be waiting!")
          							}
          						}
          					  case 1:
/*< 10>*/ 						printf("______You want to do <r<battle>>? Fantastic!\nI like your moxie.\n\n\nBecause you chose <r<battle>>, I will select\nfrom only the toughest opponents\nyou've ever faced...\n\n______And I will use my power to re-create\nthe same battle, so you can face your\ngreatest enemies once more!\n\nYou're being a good sport, so I'll\nreward you. Do well enough, and I\nmight give you something truly special:\nan absurdly sturdy shield!\nOh, but if you lose...\n\n\n\n______Well, let's just say that this isn't just a\ngame... <r<If you lose, it's all over>>. You\nwon't be going home in one piece!\n\n______Still interested?\n[1]Yes![2-]No, thanks.")
/*< 11>*/ 						switch (choice(2, 0)) {
          						  case 0:
          							goto flw_17
          						  case 1:
/*< 12>*/ 							printf("______What? You're not interested?\nHow dull...\n\n\n______Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
          						}
          					}
          				  case 1:
          					flw_81:
/*< 81>*/ 					switch (story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */]) {
          					  case 0:
          						flw_75:
/*< 75>*/ 						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 49)])) {
          						  case 0:
/*< 77>*/ 							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          							  case 0:
          								flw_464:
/*<464>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 72), ('next', -1), ('param3', 7)])
          							  case 1:
/*<1015>*/ 								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          								  case 0:
          									goto flw_464
          								  case 1:
/*<465>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 74), ('next', -1), ('param3', 7)])
          								}
          							}
          						  case 1:
/*< 76>*/ 							printf("______Hey, hold on a second... You look like\nyou're about to keel over! Are you sure\nyou're really ready for this?\n\nThis isn't worth risking your life for.\nHow about you give it a rest for today?\n\n\nCome back when you've replenished\nthose hearts.")
          						}
          					  case 1:
/*< 72>*/ 						printf("______You want to take a shot at a trial in the\n<r<Silent Realm>>? You got guts, boy!\n\n\n______These <r<Silent Realm>> challenges are the\nsame as all the trials you've seen up\nuntil now, and I'll be re-creating them\nright here.\nBut just finishing the trial won't be\nenough. I'll time how long it takes for\nyou to finish, and if you're fast enough,\nI'll give you a reward.\nHowever..._____if you get hit even once by a\nGuardian, you'll fail the Silent Realm\nchallenge and return here <r<with \nseverely diminished hearts>>.\n______So...are you up to the challenge?\n[1]Yes![2-]Not really.")
/*< 73>*/ 						switch (choice(2, 0)) {
          						  case 0:
          							goto flw_75
          						  case 1:
/*< 74>*/ 							printf("______What? You're not interested?\nHow dull...\n\n\n______Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
          						}
          					}
          				  case 2:
/*< 19>*/ 					printf("______What? You're not interested?\nHow dull...\n\n\n______Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
          				}
          			  case 1:
/*<118>*/ 				printf("______So, Link, tell me... \nAre you ready to have some fun?\n\n\n______We're just going to relive some of the\ngreatest challenges in your young life...\nAre you up for it?\n[1]Bring it on![2-]Maybe not...")
          				flw_5:
/*<  5>*/ 				switch (choice(2, 0)) {
          				  case 0:
/*<120>*/ 					scene_flags[9 'Lanayru Gorge'][113 /* 0xF 02 */] = true;
/*<  6>*/ 					printf("______You're a true hero! That's the spirit.\n\n\n\n______Then if you would permit me, I'll take a\npeek at your past experiences.\n\n\n_____...\n\n\n\n______Indeed. Indeed. You have done some\namazing things, like <r<battling>> fierce\nfoes and overcoming the daunting\ntrials in the Silent Realm.\n______All right, then! Based on those\nexperiences, you can choose one of two\nexciting challenges!\n\n______Which one would you like to try?\nPick whichever one you like.\n[1]Battle![2]Silent Realm!_____Neither.")
/*<  9>*/ 					switch (choice(3, 1)) {
          					  case 0:
          						goto flw_80
          					  case 1:
          						goto flw_81
          					  case 2:
/*< 18>*/ 						printf("______What? You're not interested?\nHow dull...\n\n\n______Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
          					}
          				  case 1:
/*<  7>*/ 					printf("______What? You're not interested?\nHow dull...\n\n\n______Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
          				}
          			}
          		  case 1:
/*< 28>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 2), ('param3', 31)])
/*<  2>*/ 			story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */] = true;
/*<111>*/ 			switch (temp_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<110>*/ 				printf("______Whoa, Link, I told you to\nwait a little while, but you just couldn't\nresist, eh?\n\n______Well I guess there's no sense in waiting\nany longer. Let's get this show started!\n\n\n______Of course, seeing as how you're the\nhero of legend, you don't really have\ntime to just goof off here, right?\n\n______Right. So how about we make this bit\nof fun more meaningful by taking you\nback through some of those challenges\nyou've faced previously?\n______You know, sometimes you've got to step\nbackward to go forward. There's a\nlot you can learn from revisiting\nyour past struggles! Oh ho, yes!\n______So, Link, are you game?\n[1]Yeah![2-]Not really...")
          				goto flw_5
          			  case 1:
/*<  3>*/ 				printf("Finally, ______Link! You really\ndid come back! Glad to see it.\n\n\n______Well then, let's have some fun!\n\n\n\n______Or maybe a hero such as yourself has\nno time for playing around?\n\n\n______Well, what I offer is more than mere\nchild's play! I would have you face\nchallenges that draw upon the many\nhardships you've experienced thus far.\n______Look to the past to understand the\nfuture! That's what I say. And I think\nyou will find that you have much to\ngain in revisiting your own past.\n______So what do you say, Link?\n[1]I'm game![2-]Maybe not.")
          				goto flw_5
          			}
          		}
          	  case 1:
/*<507>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 116), ('param3', 44)])
/*<116>*/ 		story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = false;
/*<689>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 13), ('next', -1), ('param3', 7)])
          	  case 2:
/*<509>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 6), ('next', 115), ('param3', 44)])
/*<115>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
/*< 90>*/ 		switch (story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */]) {
          		  case 0:
/*< 92>*/ 			printf("______Way to go! Looks like you made it back\nin one piece.")
          			flw_94:
/*< 94>*/ 			printf("The time it took to finish this trial was\n_______:_______._______.")
/*<103>*/ 			switch (minigame_related[5]) {
          			  case 0:
/*<108>*/ 				printf("______Amazing, Link!\nThat's a very fast time!\nYou deserve something special.\nHere you go!______")
/*<109>*/ 				give_item(64 0x40);
          				flw_470:
/*<470>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 6), ('param3', 14), ('param4', 2), ('param5', 239)])) {
          				  case 0:
          					flw_91:
/*< 91>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 65)])) {
          					  case 0:
/*< 95>*/ 						printf("______Looks like that was your first time in\na <r<Silent Realm >>trial here! We have to\ncelebrate that with a reward.______")
          						flw_638:
/*<638>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 639), ('param3', 12)])
/*<639>*/ 						rupees += 50;
/*<637>*/ 						printf("Here's 50 Rupees! Go on, then. Take it!")
          						flw_641:
/*<641>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 510), ('param3', 12)])
/*<510>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 6), ('next', 98), ('param3', 45)])
/*< 98>*/ 						printf("_____\nSo what do you say, Link?\nOne more <r<Silent Realm>> trial?\n[1]Yes![2-]No.")
/*< 99>*/ 						switch (choice(2, 0)) {
          						  case 0:
/*<466>*/ 							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          							  case 0:
          								flw_467:
/*<467>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 72), ('next', -1), ('param3', 7)])
          							  case 1:
/*<1017>*/ 								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          								  case 0:
          									goto flw_467
          								  case 1:
/*<468>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 74), ('next', -1), ('param3', 7)])
          								}
          							}
          						  case 1:
/*<100>*/ 							printf("______Boring!_____ Well, if you change your mind,\ncome back and see me.")
/*<652>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          						}
          					  case 1:
/*< 96>*/ 						printf("______Well done. That's a new record!\nI have just the right prize for you.\n______Go on. Take it.")
          						goto flw_638
          					  case 2:
          						goto flw_641
          					}
          				  case 1:
/*<469>*/ 					printf("By the way, if you want my greatest\nprize, you'll have to beat the record:\n<r<_______:_______>>.\n\nIf you want to best that, you're going to\nhave to start training like a champ!")
          					goto flw_91
          				}
          			  case 1:
/*<107>*/ 				printf("______Very impressive time! Here--this is\nyour prize!______")
/*<635>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 636), ('param3', 12)])
/*<636>*/ 				rupees += 100;
/*<634>*/ 				printf("Here's 100 Rupees! Spend it on\nsomething worthwhile!")
          				goto flw_470
          			  case 2:
/*<106>*/ 				printf("______Hmm... Nothing to get excited about..._____\nBut you did your best, so have this.______")
/*<632>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 633), ('param3', 12)])
/*<633>*/ 				rupees += 20;
/*<631>*/ 				printf("Here's 20 Rupees. Don't go spending\nit all at once!")
          				goto flw_470
          			  case 3:
/*<105>*/ 				printf("______Come on, now._____ Are you even trying?\n\n\n\nNext time, put some heart into it! You\nknow, some oomph! I'm sorry to say\nthis is all I can give you this time.______")
/*<629>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 630), ('param3', 12)])
/*<630>*/ 				rupees += 5;
/*<628>*/ 				printf("Here you go. Five Rupees. Hey, don't\ngive me that look!")
          				goto flw_470
          			}
          		  case 1:
/*< 93>*/ 			printf("______Well done, Link! You got\nevery last one of them. You're a\ntrue warrior!")
/*< 97>*/ 			story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */] = true;
          			goto flw_94
          		}
          	  case 3:
/*<114>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
/*<104>*/ 		printf("______Ohhhhh, you really fumbled that one,\nmy friend...\n\n\nAnd failure comes with a price--you're\nleft with a single heart. Better go grab\nsome more and come back later.")
          	}
          }

          void entrypoint_460_52() {
/*<162>*/ 	start()
/*<128>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
/*<129>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<130>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<131>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<133>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 663), ('param3', 33)])
/*<663>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 132), ('param3', 52)])
/*<132>*/ 	changeScene(2, 0) // {'name': 'B200', 'room': 10, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_35() {
/*<417>*/ 	start()
/*<796>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 373)])) {
          	  case 0:
/*<378>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<380>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<382>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<385>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<386>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<387>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<388>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<389>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<390>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<391>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<392>*/ 												switch (scene_flags[125 /* 0xE 20 */]) {
          												  case 0:
/*<400>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<407>*/ 													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 62), ('next', -1), ('param3', 7)])
          												  case 1:
/*<399>*/ 													scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<408>*/ 													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
          												}
          											  case 1:
/*<398>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<405>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          											}
          										  case 1:
/*<397>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<406>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          										}
          									  case 1:
/*<396>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<411>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<395>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<412>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<394>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<409>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<393>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<410>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<384>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<403>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<383>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<404>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<381>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<401>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<379>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<402>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          		}
          	  case 1:
/*<933>*/ 		switch (scene_flags[125 /* 0xE 20 */]) {
          		  case 0:
/*<921>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<931>*/ 				switch (scene_flags[123 /* 0xE 08 */]) {
          				  case 0:
/*<926>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<919>*/ 						switch (scene_flags[115 /* 0xF 08 */]) {
          						  case 0:
/*<932>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*<927>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<930>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<928>*/ 										switch (scene_flags[120 /* 0xE 01 */]) {
          										  case 0:
/*<929>*/ 											switch (scene_flags[121 /* 0xE 02 */]) {
          											  case 0:
/*<923>*/ 												switch (scene_flags[117 /* 0xF 20 */]) {
          												  case 0:
/*<941>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<948>*/ 													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 62), ('next', -1), ('param3', 7)])
          												  case 1:
/*<924>*/ 													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<945>*/ 													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          												}
          											  case 1:
/*<936>*/ 												scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<953>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          											}
          										  case 1:
/*<935>*/ 											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<950>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          										}
          									  case 1:
/*<937>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<952>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<934>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<951>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<939>*/ 								scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<946>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<920>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<943>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<925>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<944>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<938>*/ 					scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<947>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<922>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<942>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<940>*/ 			scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<949>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
          		}
          	  case 2:
/*<966>*/ 		switch (scene_flags[123 /* 0xE 08 */]) {
          		  case 0:
/*<963>*/ 			switch (scene_flags[120 /* 0xE 01 */]) {
          			  case 0:
/*<964>*/ 				switch (scene_flags[121 /* 0xE 02 */]) {
          				  case 0:
/*<968>*/ 					switch (scene_flags[125 /* 0xE 20 */]) {
          					  case 0:
/*<954>*/ 						switch (scene_flags[115 /* 0xF 08 */]) {
          						  case 0:
/*<965>*/ 							switch (scene_flags[122 /* 0xE 04 */]) {
          							  case 0:
/*<962>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<956>*/ 									switch (scene_flags[116 /* 0xF 10 */]) {
          									  case 0:
/*<961>*/ 										switch (scene_flags[118 /* 0xF 40 */]) {
          										  case 0:
/*<967>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<958>*/ 												switch (scene_flags[117 /* 0xF 20 */]) {
          												  case 0:
/*<976>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<983>*/ 													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 62), ('next', -1), ('param3', 7)])
          												  case 1:
/*<959>*/ 													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<980>*/ 													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          												}
          											  case 1:
/*<974>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<981>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          											}
          										  case 1:
/*<960>*/ 											scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<979>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          										}
          									  case 1:
/*<957>*/ 										scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<977>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<969>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<986>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<972>*/ 								scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<987>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<955>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<978>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<975>*/ 						scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<984>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<971>*/ 					scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<988>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<970>*/ 				scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<985>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<973>*/ 			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<982>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          		}
          	}
          }

          void entrypoint_460_53() {
/*<163>*/ 	start()
/*<134>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<135>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<136>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<138>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 662), ('param3', 33)])
/*<662>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 137), ('param3', 52)])
/*<137>*/ 	changeScene(8, 0) // {'name': 'B300', 'room': 0, 'layer': 2, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_01() {
/*<235>*/ 	start()
/*< 23>*/ 	switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
          	  case 0:
          		flw_25:
/*< 25>*/ 		printf("______You all set? You've got a shield on\nand everything? If you're ready,\nwe're going to do this for real!\nAre we ready?\n[1]Let's do this![2-]Maybe not.")
/*< 26>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*< 27>*/ 			printf("______Psych yourself up for this!")
/*< 78>*/ 			story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */] = true;
/*<112>*/ 			story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
/*< 30>*/ 			switch (scene_flags[115 /* 0xF 08 */]) {
          			  case 0:
/*<174>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          			  case 1:
/*< 31>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
/*<173>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          				  case 1:
/*< 32>*/ 					switch (scene_flags[117 /* 0xF 20 */]) {
          					  case 0:
/*<177>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          					  case 1:
/*<178>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<176>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          						  case 1:
/*<182>*/ 							switch (scene_flags[119 /* 0xF 80 */]) {
          							  case 0:
/*<191>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          							  case 1:
/*<179>*/ 								switch (scene_flags[120 /* 0xE 01 */]) {
          								  case 0:
/*<190>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          								  case 1:
/*<180>*/ 									switch (scene_flags[121 /* 0xE 02 */]) {
          									  case 0:
/*<193>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          									  case 1:
/*<181>*/ 										switch (scene_flags[122 /* 0xE 04 */]) {
          										  case 0:
/*<192>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          										  case 1:
/*<183>*/ 											switch (scene_flags[123 /* 0xE 08 */]) {
          											  case 0:
/*<187>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          											  case 1:
/*<184>*/ 												switch (scene_flags[124 /* 0xE 10 */]) {
          												  case 0:
/*<186>*/ 													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          												  case 1:
/*<185>*/ 													switch (scene_flags[125 /* 0xE 20 */]) {
          													  case 0:
/*<189>*/ 														OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
          													  case 1:
/*<188>*/ 														OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 62), ('next', -1), ('param3', 7)])
          													}
          												}
          											}
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			printf("______Oh, so you've changed your mind?_____\nNo scales off my back. If you want to\ntry later, you're welcome to come back\nat any time.\n______If you want to change your shield, just\nequip the one you need and come talk\nto me again.")
          		}
          	  case 1:
/*< 24>*/ 		printf("______Ah!~~~ I forgot to tell you something!\n\n\n\nThe only items you can use in battle are\n<r<items you would have had at the time>>.\nYep, that's it!\n\n______Also, <r<pouch items are prohibited>>!\nI know that sounds really hard, but you\nfought these guys once before, so I've\ngot to keep it interesting.\n______Hmm... Maybe I am being a little bit\nrough on you here. Tell you what...\nI'll let you take the <r<shield you currently\nhave equipped>>.")
          		goto flw_25
          	}
          }

          void entrypoint_460_54() {
/*<164>*/ 	start()
/*<175>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<139>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<140>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<142>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 661), ('param3', 33)])
/*<661>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 665), ('param3', 52)])
/*<665>*/ 	story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = true;
/*<668>*/ 	story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = false;
/*<669>*/ 	story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = false;
/*<670>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<993>*/ 	story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = false;
/*<1005>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = false;
/*<1008>*/ 	story_flags[149 /* us: 805A9AEE 0x80, jp: 805ACD6E 0x80 */] = false;
/*<141>*/ 	changeScene(9, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_71() {
/*<463>*/ 	start()
/*<102>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 4), ('param3', 14), ('param4', 2), ('param5', 70)])) {
          	  case 0:
/*<992>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 101), ('param3', 33)])
/*<101>*/ 		printf("Right, let me see... Your best time for\nthis area is: _______:_______._______.")
          		flw_82:
/*< 82>*/ 		printf("______Then let's get this thing started!\nClose your eyes and concentrate...")
/*< 79>*/ 		story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */] = true;
/*<113>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = true;
/*< 83>*/ 		switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
          		  case 0:
/*< 85>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', -1), ('param3', 33)])
          		  case 1:
/*< 84>*/ 			switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
          			  case 0:
/*< 86>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', -1), ('param3', 33)])
          			  case 1:
/*< 87>*/ 				switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
          				  case 0:
/*< 88>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', -1), ('param3', 33)])
          				  case 1:
/*< 89>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', -1), ('param3', 33)])
          				}
          			}
          		}
          	  case 1:
          		goto flw_82
          	}
          }

          void entrypoint_460_02() {
/*<472>*/ 	start()
/*< 54>*/ 	switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
          	  case 0:
/*< 55>*/ 		printf("______Well done! Spectacular skills on display\nonce again.")
          		flw_57:
/*< 57>*/ 		printf("Here's how long it took you to finish\noff <b<______>>:\n_______:_______._______.")
/*< 53>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 34)])) {
          		  case 0:
/*< 58>*/ 			printf("______Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.______")
          			flw_545:
/*<545>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 546), ('param3', 12)])
/*<546>*/ 			rupees += 50;
/*<544>*/ 			printf("Here's 50 Rupees! Go on, then. Take it!")
          			flw_640:
/*<640>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 508), ('param3', 12)])
/*<508>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 61), ('param3', 45)])
/*< 61>*/ 			switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
          			  case 0:
          				flw_64:
/*< 64>*/ 				printf("Quit now, and you'll get yourself a not-\ntoo-shabby <r<______>>.\n\n\nBut the next win will net you a\nfabulous <r<______>>!\n_____\nWhat'll it be? Do you want to\ncontinue?\n[1]Continue![2-]Quit...")
/*< 65>*/ 				switch (choice(2, 0)) {
          				  case 0:
/*< 70>*/ 					switch (scene_flags[114 /* 0xF 04 */]) {
          					  case 0:
/*< 68>*/ 						printf("______Yeah! That's what I'm talking about!\n\n\n\nThe next battle will be No. _______.\nTo defeat all the enemies, you must\nwin this many more battles: _______.\nSo let's get on with it!")
          						flw_117:
/*<117>*/ 						story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
/*< 71>*/ 						switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          						  case 0:
/*<421>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 35), ('next', -1), ('param3', 7)])
          						  case 1:
/*<418>*/ 							switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          							  case 0:
/*<422>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 34), ('next', -1), ('param3', 7)])
          							  case 1:
/*<419>*/ 								switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          								  case 0:
/*<423>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 33), ('next', -1), ('param3', 7)])
          								  case 1:
/*<420>*/ 									switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          									  case 0:
/*<424>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 32), ('next', -1), ('param3', 7)])
          									  case 1:
/*<425>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 31), ('next', -1), ('param3', 7)])
          									}
          								}
          							}
          						}
          					  case 1:
/*< 67>*/ 						printf("______That's what I'm talking about!\nBut there's one more thing...\n\n\n______For consecutive battles, I get to choose\nwhat opponent comes next. I mean...\nyou didn't really want to have to pick\nan enemy every time, did you?\nNow you get to look forward to finding\nout who your opponent is at the start of\neach battle. But enough chatter. Let's\nget this fight started!")
/*< 69>*/ 						scene_flags[9 'Lanayru Gorge'][114 /* 0xF 04 */] = true;
          						goto flw_117
          					}
          				  case 1:
/*< 66>*/ 					printf("______Right...~~~ No need to knock yourself out\nfighting these enemies here, right?\nMight as well save yourself for the real\nbattles, I suppose...\n______But you battled hard! Just as I\npromised, I'll give you this.")
/*<499>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 12), ('param3', 15), ('param4', 3), ('param5', 259)])) {
          					  case 0:
/*<500>*/ 						switch (minigame_related[13]) {
          						  case 0:
/*<512>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 513), ('param3', 12)])
/*<513>*/ 							rupees += 20;
/*<511>*/ 							printf("Here's 20 Rupees. Don't go spending\nit all at once!")
          							flw_648:
/*<648>*/ 							temp_flags[5 /* 0x1 20 */] = true;
/*<471>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 995), ('param3', 33)])
/*<995>*/ 							printf("______Come back for a battle anytime!\nYou know where to find me.")
          						  case 1:
/*<503>*/ 							give_item(61 0x3D);
          							goto flw_648
          						  case 2:
/*<515>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 516), ('param3', 12)])
/*<516>*/ 							rupees += 100;
/*<514>*/ 							printf("Here's 100 Rupees! Spend it on\nsomething worthwhile!")
          							goto flw_648
          						  case 3:
/*<990>*/ 							switch (story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */]) {
          							  case 0:
/*<518>*/ 								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 519), ('param3', 12)])
/*<519>*/ 								rupees += 200;
/*<517>*/ 								printf("Here's 200 Rupees! Well, look at you\nnow!")
          								goto flw_648
          							  case 1:
/*<989>*/ 								give_item(94 0x5E);
/*<991>*/ 								story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */] = true;
          								goto flw_648
          							}
          						}
          					  case 1:
/*<501>*/ 						switch (minigame_related[14]) {
          						  case 0:
/*<521>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 522), ('param3', 12)])
/*<522>*/ 							rupees += 300;
/*<520>*/ 							printf("Here's 300 Rupees! Go buy something\nnice for yourself!")
          							goto flw_648
          						  case 1:
/*<504>*/ 							give_item(64 0x40);
          							goto flw_648
          						  case 2:
/*<524>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 525), ('param3', 12)])
/*<525>*/ 							rupees += 500;
/*<523>*/ 							printf("Here's 500 Rupees! Must be a fortune\nfor you!")
          							goto flw_648
          						  case 3:
/*<526>*/ 							switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
          							  case 0:
/*<529>*/ 								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 530), ('param3', 12)])
/*<530>*/ 								rupees += 1000;
/*<528>*/ 								printf("Look at this--1,000 Rupees!\nHave you ever seen so much?")
          								goto flw_648
          							  case 1:
/*<1007>*/ 								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 504)])) {
          								  case 0:
/*<997>*/ 									switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 20), ('param4', 2), ('param5', 498)])) {
          									  case 0:
/*<1003>*/ 										OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 1014), ('param3', 12)])
/*<1014>*/ 										printf("______What's this? Your pouch is full, and so\nis your space at the Item Check in\nSkyloft? Then I guess you won't be\ngetting this shield.")
/*<1004>*/ 										rupees += 1000;
/*<1002>*/ 										printf("Ouch! Can't be helped, I guess. Oh, but\nI will give you 1000 Rupees for that\nimpressive performance!______ You'll just\nhave to try for the shield next time.")
          										goto flw_648
          									  case 1:
          										flw_505:
/*<505>*/ 										give_item(125 0x7D);
/*<527>*/ 										story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
          										goto flw_648
          									}
          								  case 1:
          									goto flw_505
          								}
          							}
          						}
          					  case 2:
/*<502>*/ 						switch (minigame_related[15]) {
          						  case 0:
/*<532>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 533), ('param3', 12)])
/*<533>*/ 							rupees += 2000;
/*<531>*/ 							printf("Gah, 2,000 Rupees! It's robbery!")
          							goto flw_648
          						  case 1:
/*<506>*/ 							give_item(64 0x40);
/*<536>*/ 							printf("______Here's your prize!")
/*<534>*/ 							give_item(64 0x40);
/*<537>*/ 							printf("______You've won this fabulous prize!")
/*<535>*/ 							give_item(64 0x40);
          							goto flw_648
          						  case 2:
/*<539>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 540), ('param3', 12)])
/*<540>*/ 							rupees += 3000;
/*<538>*/ 							printf("Whoa, now! You get 3,000 Rupees!\nWhat are you going to spend it all on?!")
          							goto flw_648
          						  case 3:
/*<542>*/ 							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 543), ('param3', 12)])
/*<543>*/ 							rupees += 9900;
/*<541>*/ 							printf("This time you win 9,900 Rupees!\nI think you've pretty much cleaned\nme out!")
          							goto flw_648
          						}
          					}
          				}
          			  case 1:
/*< 62>*/ 				printf("______By the way, Link...what \ndo you think about trying another\nbattle right now?\n\n______I wouldn't ask you if there wasn't\nanother reward on the table. In fact,\nthe more battles you win, the better\nyour reward when you finish! \nAs I mentioned before, I've got lots of\nrewards, including an <r<absurdly\nsturdy shield>>! Makes you want to leap\nright into another fight, doesn't it?\n______However--_____I bet you can see where I'm\ngoing with this--if you fail, that's the\nend of our little game.\n\nAnd keep in mind that <r<your shield\ndurability and hearts >>will carry over\nfrom battle to battle. It makes the\nbattles all the more...exciting!")
/*< 63>*/ 				story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */] = true;
          				goto flw_64
          			}
          		  case 1:
/*< 59>*/ 			printf("______Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.______")
          			goto flw_545
          		  case 2:
/*< 60>*/ 			printf("That was not your finest, I have to say!\nNo new record. Seriously, maybe you\ncould step it up a little bit next time.")
          			goto flw_640
          		}
          	  case 1:
/*< 56>*/ 		printf("______Wow, Link! That was\nincredible. You're quite a warrior!")
          		goto flw_57
          	}
          }

          void entrypoint_460_55() {
/*<165>*/ 	start()
/*<143>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<144>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<146>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 660), ('param3', 33)])
/*<660>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 145), ('param3', 52)])
/*<145>*/ 	changeScene(10, 0) // {'name': 'B101', 'room': 0, 'layer': 2, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_72() {
/*<452>*/ 	start()
/*<444>*/ 	printf("______That's what I wanted to hear, brave\nwarrior! Now choose a Silent Realm\ntrial.\n[1]Faron Woods![2]Eldin Volcano![3]Lanayru Desert!_____Somewhere else.")
          	flw_445:
/*<445>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 230)])) {
          	  case 0:
/*<448>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 446), ('param3', 33)])
/*<446>*/ 		loadzone_temp_flags[0 /* 0x9 01 */] = true;
          		flw_460:
/*<460>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 71), ('next', -1), ('param3', 7)])
          	  case 1:
/*<449>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 447), ('param3', 33)])
/*<447>*/ 		loadzone_temp_flags[1 /* 0x9 02 */] = true;
          		goto flw_460
          	  case 2:
/*<451>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 450), ('param3', 33)])
/*<450>*/ 		loadzone_temp_flags[2 /* 0x9 04 */] = true;
          		goto flw_460
          	  case 3:
/*<457>*/ 		printf("______Somewhere else? Where to, then?\n[1]Skyloft![2]Previous places._____I quit.")
/*<455>*/ 		switch (choice(3, 1)) {
          		  case 0:
/*<456>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 460), ('param3', 33)])
          			goto flw_460
          		  case 1:
/*<458>*/ 			printf("_____\nMake your mind up already!\nWhich place will it be?\n[1]Faron Woods.[2]Eldin Volcano.[3]Lanayru Desert._____More places.")
          			goto flw_445
          		  case 2:
/*<459>*/ 			printf("______What? You're not interested?\nHow dull...\n\n\n______Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
/*<650>*/ 			temp_flags[5 /* 0x1 20 */] = true;
          		}
          	}
          }

          void entrypoint_460_03() {
/*<488>*/ 	start()
/*<489>*/ 	printf("______Congratulations! That's eight victories\nin a row!")
/*<549>*/ 	switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
          	  case 0:
/*<552>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 553), ('param3', 12)])
/*<553>*/ 		rupees += 1000;
/*<551>*/ 		printf("Look at this--1,000 Rupees!\nHave you ever seen so much?")
          		flw_647:
/*<647>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 649), ('param3', 12)])
/*<649>*/ 		temp_flags[5 /* 0x1 20 */] = true;
/*<492>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 996), ('param3', 33)])
/*<996>*/ 		printf("______Come back for a battle anytime!\nYou know where to find me.")
          	  case 1:
/*<1006>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 502)])) {
          		  case 0:
/*<998>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 20), ('param4', 2), ('param5', 500)])) {
          			  case 0:
/*<1000>*/ 				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 1016), ('param3', 12)])
/*<1016>*/ 				printf("______What's this? Your pouch is full, and so\nis your space at the Item Check in\nSkyloft? Then I guess you won't be\ngetting this shield.")
/*<1001>*/ 				rupees += 1000;
/*<999>*/ 				printf("Ouch! Can't be helped, I guess. Oh, but\nI will give you 1000 Rupees for that\nimpressive performance!______ You'll just\nhave to try for the shield next time.")
          				goto flw_647
          			  case 1:
          				flw_547:
/*<547>*/ 				give_item(125 0x7D);
/*<550>*/ 				story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
          				goto flw_647
          			}
          		  case 1:
          			goto flw_547
          		}
          	}
          }

          void entrypoint_460_56() {
/*<166>*/ 	start()
/*<148>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 659), ('param3', 33)])
/*<659>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 147), ('param3', 52)])
/*<147>*/ 	changeScene(11, 0) // {'name': 'B301', 'room': 0, 'layer': 2, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_73() {
/*<453>*/ 	start()
/*<427>*/ 	printf("")
/*<428>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 222)])) {
          	  case 0:
/*<433>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 430), ('param3', 33)])
/*<430>*/ 		loadzone_temp_flags[0 /* 0x9 01 */] = true;
          		flw_461:
/*<461>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 71), ('next', -1), ('param3', 7)])
          	  case 1:
/*<434>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 432), ('param3', 33)])
/*<432>*/ 		loadzone_temp_flags[1 /* 0x9 02 */] = true;
          		goto flw_461
          	  case 2:
/*<437>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 436), ('param3', 33)])
/*<436>*/ 		loadzone_temp_flags[2 /* 0x9 04 */] = true;
          		goto flw_461
          	  case 3:
/*<435>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 461), ('param3', 33)])
          		goto flw_461
          	}
          }

          void entrypoint_460_04() {
/*<490>*/ 	start()
/*<491>*/ 	printf("______Wow! You pulled off nine victories in a\nrow! Who would have thought?")
/*<555>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 556), ('param3', 12)])
/*<556>*/ 	rupees += 2000;
/*<554>*/ 	printf("Gah, 2,000 Rupees! It's robbery!")
          	goto flw_647
          }

          void entrypoint_460_57() {
/*<167>*/ 	start()
/*<150>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 658), ('param3', 33)])
/*<658>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 149), ('param3', 52)])
/*<149>*/ 	changeScene(12, 0) // {'name': 'B201', 'room': 0, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_74() {
/*<454>*/ 	start()
/*<426>*/ 	printf("______That's what I wanted to hear, brave\nwarrior! Now choose a Silent Realm\ntrial.\n[1]Faron Woods![2]Eldin Volcano![3]Lanayru Desert!_____Never mind.")
/*<429>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 226)])) {
          	  case 0:
/*<440>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 438), ('param3', 33)])
/*<438>*/ 		loadzone_temp_flags[0 /* 0x9 01 */] = true;
          		flw_462:
/*<462>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 71), ('next', -1), ('param3', 7)])
          	  case 1:
/*<441>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 439), ('param3', 33)])
/*<439>*/ 		loadzone_temp_flags[1 /* 0x9 02 */] = true;
          		goto flw_462
          	  case 2:
/*<443>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 442), ('param3', 33)])
/*<442>*/ 		loadzone_temp_flags[2 /* 0x9 04 */] = true;
          		goto flw_462
          	  case 3:
/*<431>*/ 		printf("______What? You're not interested?\nHow dull...\n\n\n______Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
/*<651>*/ 		temp_flags[5 /* 0x1 20 */] = true;
          	}
          }

          void entrypoint_460_05() {
/*<493>*/ 	start()
/*<494>*/ 	printf("______You pulled off 10 victories in a row?!\nYou're something else!")
/*<557>*/ 	printf("______Hey! Take this!")
/*<548>*/ 	give_item(64 0x40);
/*<560>*/ 	printf("______Here's your prize!")
/*<558>*/ 	give_item(64 0x40);
/*<561>*/ 	printf("______You've won this fabulous prize!")
/*<559>*/ 	give_item(64 0x40);
          	goto flw_647
          }

          void entrypoint_460_58() {
/*<168>*/ 	start()
/*<152>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 657), ('param3', 33)])
/*<657>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 666), ('param3', 52)])
/*<666>*/ 	story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = true;
/*<671>*/ 	story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = false;
/*<672>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<151>*/ 	changeScene(13, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_06() {
/*<495>*/ 	start()
/*<496>*/ 	printf("______You keep amazing me, you know that?\nEleven victories in a row... I've never\nseen anything like it!")
/*<563>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 564), ('param3', 12)])
/*<564>*/ 	rupees += 3000;
/*<562>*/ 	printf("Whoa, now! You get 3,000 Rupees!\nWhat are you going to spend it all on?!")
          	goto flw_647
          }

          void entrypoint_460_59() {
/*<169>*/ 	start()
/*<154>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 656), ('param3', 33)])
/*<656>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 667), ('param3', 52)])
/*<667>*/ 	story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = true;
/*<674>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<1011>*/ 	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          	  case 0:
/*<1012>*/ 		story_flags[495 /* us: 805A9B13 0x20, jp: 805ACD93 0x20 */] = true;
          		flw_673:
/*<673>*/ 		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = false;
/*<153>*/ 		changeScene(14, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          	  case 1:
/*<1013>*/ 		story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
          		goto flw_673
          	}
          }

          void entrypoint_460_41() {
/*<231>*/ 	start()
/*<197>*/ 	printf("______From the beginning of your journey,\nhuh? In that case, let's see..._____ Here we\ngo! These guys look pretty tough.\nWhich one would you like to face?\n[1]Ghirahim![2]Scaldera![3]Moldarach!_____The Imprisoned!")
/*<198>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 101)])) {
          	  case 0:
/*<199>*/ 		printf("<b<______Ghirahim >>it is! He's that creeeepy guy\nyou fought in <b<Skyview Temple>>.")
/*<203>*/ 		scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
          		flw_228:
/*<228>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
          	  case 1:
/*<201>*/ 		printf("<b<______Scaldera>>, coming right up! It's that\nblazing-hot fireball-looking thing \nfrom the <b<Earth Temple>>.")
/*<204>*/ 		scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
          		goto flw_228
          	  case 2:
/*<202>*/ 		printf("<b<______Moldarach >>it is! This creepy crawly is\nthat big bug you fought in <b<<b<Lanayru<b<\nMining Facility>>.")
/*<205>*/ 		scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
          		goto flw_228
          	  case 3:
/*<200>*/ 		printf("______All right, you'll face <b<the Imprisoned>>!\nIt's that gigantic thing you battled at\nthe <b<Sealed Grounds>>.")
/*<206>*/ 		scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
          		goto flw_228
          	}
          }

          void entrypoint_460_07() {
/*<497>*/ 	start()
/*<498>*/ 	printf("______Twelve battles, twelve victories!\nYou are the real deal... A genuine\nwarrior!")
/*<566>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 567), ('param3', 12)])
/*<567>*/ 	rupees += 9900;
/*<565>*/ 	printf("This time you win 9,900 Rupees!\nI think you've pretty much cleaned\nme out!")
          	goto flw_647
          }

          void entrypoint_460_42() {
/*<232>*/ 	start()
/*<234>*/ 	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          	  case 0:
/*<227>*/ 		printf("______From the middle of your journey, you\nsay? In that case, let's see..._____ Here we\ngo! These guys look pretty tough.\nWhich one would you like to face?\n[1]Koloktos![2]Tentalus![3]Ghirahim!_____The Imprisoned!")
          		flw_207:
/*<207>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 105)])) {
          		  case 0:
/*<208>*/ 			printf("<b<______Koloktos >>it is! It's that six-armed\nmechanized monstrosity you fought\nat the <b<Ancient Cistern>>!")
/*<212>*/ 			scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
          			flw_229:
/*<229>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
          		  case 1:
/*<210>*/ 			printf("<b<______Tentalus >>it is! You might know this\nbeast as the weirdo with one eye\nthat you fought on the <b<Sandship>>.")
/*<213>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
          			goto flw_229
          		  case 2:
/*<211>*/ 			printf("<b<______Ghirahim >>it is! This is the creepy-\nlooking guy you fought in that\nsweltering-hot <b<Fire Sanctuary>>.")
/*<214>*/ 			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
          			goto flw_229
          		  case 3:
/*<209>*/ 			printf("<b<______The Imprisoned >>it is! It's that gigantic,\ndisgusting beast you battled for a\nsecond time at <b<Sealed Grounds>>.")
/*<215>*/ 			scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
          			goto flw_229
          		}
          	  case 1:
/*<226>*/ 		printf("______A fairly recent battle, huh?\nIn that case, let's see..._____ Here we go!\nThese guys look pretty tough. \nWhich one would you like to face?\n[1]Koloktos![2]Tentalus![3]Ghirahim!_____The Imprisoned!")
          		goto flw_207
          	}
          }

          void entrypoint_460_08() {
/*<578>*/ 	start()
/*<569>*/ 	printf("______Well done! Spectacular skills on display\nonce again.")
/*<570>*/ 	printf("Here's how long it took you to finish\noff <b<______>>:\n_______:_______._______.")
/*<568>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 278)])) {
          	  case 0:
/*<571>*/ 		printf("______Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.______")
          		flw_576:
/*<576>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 577), ('param3', 12)])
/*<577>*/ 		rupees += 50;
/*<575>*/ 		printf("Here's 50 Rupees! Go on, then. Take it!")
          		flw_642:
/*<642>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 574), ('param3', 12)])
/*<574>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 623), ('param3', 45)])
/*<623>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 3), ('next', -1), ('param3', 7)])
          	  case 1:
/*<572>*/ 		printf("______Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.______")
          		goto flw_576
          	  case 2:
/*<573>*/ 		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
          		goto flw_642
          	}
          }

          void entrypoint_460_60() {
/*<170>*/ 	start()
/*<156>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 655), ('param3', 33)])
/*<655>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 1009), ('param3', 52)])
/*<1009>*/ 	story_flags[347 /* us: 805A9B01 0x02, jp: 805ACD81 0x02 */] = true;
/*<155>*/ 	changeScene(15, 0) // {'name': 'F403', 'room': 1, 'layer': 0, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_43() {
/*<233>*/ 	start()
/*<216>*/ 	printf("______From later on in your journey, huh?\nIn that case, let's see..._____ Here we go!\nThese guys look pretty tough.\nWhich one would you like to face?\n[1]The Imprisoned![2]Horde battle![3]Ghirahim!_____Demise!")
/*<217>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 109)])) {
          	  case 0:
/*<218>*/ 		printf("<b<______The Imprisoned >>it is! This is the huge\nbeast you battled for a third time at\nthe <b<Sealed Grounds>>.")
/*<222>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_230:
/*<230>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
          	  case 1:
/*<220>*/ 		printf("______Oh-ho, a <b<horde battle>>! You'll face off\nagainst the horde of monsters that\n<b<Ghirahim>> summoned at the <b<Sealed\nGrounds>>.")
/*<223>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_230
          	  case 2:
/*<221>*/ 		printf("<b<______Ghirahim>> it is! He's the creepy guy you\nfought at the <b<Sealed Grounds>>.")
/*<224>*/ 		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
          		goto flw_230
          	  case 3:
/*<219>*/ 		printf("______OK, <b<Demise>> it is! You've fought some\nreal baddies, but this one really makes\nmy scales crawl!")
/*<225>*/ 		scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
          		goto flw_230
          	}
          }

          void entrypoint_460_09() {
/*<589>*/ 	start()
/*<580>*/ 	printf("______Well done! Spectacular skills on display\nonce again.")
/*<581>*/ 	printf("Here's how long it took you to finish\noff <b<______>>:\n_______:_______._______.")
/*<579>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 281)])) {
          	  case 0:
/*<582>*/ 		printf("______Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.______")
          		flw_587:
/*<587>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 588), ('param3', 12)])
/*<588>*/ 		rupees += 50;
/*<586>*/ 		printf("Here's 50 Rupees! Go on, then. Take it!")
          		flw_643:
/*<643>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 585), ('param3', 12)])
/*<585>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 624), ('param3', 45)])
/*<624>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 4), ('next', -1), ('param3', 7)])
          	  case 1:
/*<583>*/ 		printf("______Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.______")
          		goto flw_587
          	  case 2:
/*<584>*/ 		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
          		goto flw_643
          	}
          }

          void entrypoint_460_61() {
/*<171>*/ 	start()
/*<158>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 654), ('param3', 33)])
/*<654>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 691), ('param3', 52)])
/*<691>*/ 	story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = true;
/*<157>*/ 	changeScene(16, 0) // {'name': 'F403', 'room': 1, 'layer': 4, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_44() {
/*<248>*/ 	start()
/*<239>*/ 	printf("______From later on in your journey, huh? \nIn that case, let's see..._____ Here we go!\nThese guys look pretty tough.\nWhich one would you like to face?\n[1]The Imprisoned![2]Horde battle![3]Ghirahim!")
/*<240>*/ 	switch (choice(3, 1)) {
          	  case 0:
/*<241>*/ 		printf("<b<______The Imprisoned >>it is! This is the huge\nbeast you battled for a third time at\nthe <b<Sealed Grounds>>.")
/*<244>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_247:
/*<247>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
          	  case 1:
/*<242>*/ 		printf("______Oh-ho, a <b<horde battle>>! You'll face off\nagainst the horde of monsters that\n<b<Ghirahim>> summoned at the <b<Sealed\nGrounds>>.")
/*<245>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_247
          	  case 2:
/*<243>*/ 		printf("<b<______Ghirahim>> it is! He's the creepy guy you\nfought at the <b<Sealed Grounds>>.")
/*<246>*/ 		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
          		goto flw_247
          	}
          }

          void entrypoint_460_62() {
/*<172>*/ 	start()
/*<160>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 653), ('param3', 33)])
/*<653>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 159), ('param3', 52)])
/*<159>*/ 	changeScene(17, 0) // {'name': 'B400', 'room': 0, 'layer': 1, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_45() {
/*<256>*/ 	start()
/*<249>*/ 	printf("______From later on in your journey, huh?\nIn that case, let's see..._____ Here we go!\nThese guys look pretty tough.\nWhich one would you like to face?\n[1]The Imprisoned![2]Horde battle!")
/*<250>*/ 	switch (choice(2, 0)) {
          	  case 0:
/*<251>*/ 		printf("<b<______The Imprisoned >>it is! This is the huge\nbeast you battled for a third time at\nthe <b<Sealed Grounds>>.")
/*<253>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_255:
/*<255>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
          	  case 1:
/*<252>*/ 		printf("______Oh-ho, a <b<horde battle>>! You'll face off\nagainst the horde of monsters that\n<b<Ghirahim>> summoned at the <b<Sealed\nGrounds>>.")
/*<254>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_255
          	}
          }

          void entrypoint_460_10() {
/*<600>*/ 	start()
/*<591>*/ 	printf("______Well done! Spectacular skills on display\nonce again.")
/*<592>*/ 	printf("Here's how long it took you to finish\noff <b<______>>:\n_______:_______._______.")
/*<590>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 284)])) {
          	  case 0:
/*<593>*/ 		printf("______Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.______")
          		flw_598:
/*<598>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 599), ('param3', 12)])
/*<599>*/ 		rupees += 50;
/*<597>*/ 		printf("Here's 50 Rupees! Go on, then. Take it!")
          		flw_644:
/*<644>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 596), ('param3', 12)])
/*<596>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 625), ('param3', 45)])
/*<625>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 5), ('next', -1), ('param3', 7)])
          	  case 1:
/*<594>*/ 		printf("______Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.______")
          		goto flw_598
          	  case 2:
/*<595>*/ 		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
          		goto flw_644
          	}
          }

          void entrypoint_460_46() {
/*<261>*/ 	start()
/*<257>*/ 	printf("______From later on in your journey, huh?\n..._____It looks like the only opponent you\ncan face right now from the end of \nyour journey is <b<the Imprisoned>>.")
/*<258>*/ 	printf("<b<______The Imprisoned >>it is! This is the huge\nbeast you battled for a third time at\nthe <b<Sealed Grounds>>.")
/*<259>*/ 	scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<260>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
          }

          void entrypoint_460_11() {
/*<611>*/ 	start()
/*<602>*/ 	printf("______Well done! Spectacular skills on display\nonce again.")
/*<603>*/ 	printf("Here's how long it took you to finish\noff <b<______>>:\n_______:_______._______.")
/*<601>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 287)])) {
          	  case 0:
/*<604>*/ 		printf("______Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.______")
          		flw_609:
/*<609>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 610), ('param3', 12)])
/*<610>*/ 		rupees += 50;
/*<608>*/ 		printf("Here's 50 Rupees! Go on, then. Take it!")
          		flw_645:
/*<645>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 607), ('param3', 12)])
/*<607>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 626), ('param3', 45)])
/*<626>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 6), ('next', -1), ('param3', 7)])
          	  case 1:
/*<605>*/ 		printf("______Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.______")
          		goto flw_609
          	  case 2:
/*<606>*/ 		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
          		goto flw_645
          	}
          }

          void entrypoint_460_12() {
/*<622>*/ 	start()
/*<613>*/ 	printf("______Well done! Spectacular skills on display\nonce again.")
/*<614>*/ 	printf("Here's how long it took you to finish\noff <b<______>>:\n_______:_______._______.")
/*<612>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 290)])) {
          	  case 0:
/*<615>*/ 		printf("______Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.______")
          		flw_620:
/*<620>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 621), ('param3', 12)])
/*<621>*/ 		rupees += 50;
/*<619>*/ 		printf("Here's 50 Rupees! Go on, then. Take it!")
          		flw_646:
/*<646>*/ 		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 618), ('param3', 12)])
/*<618>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 627), ('param3', 45)])
/*<627>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 7), ('next', -1), ('param3', 7)])
          	  case 1:
/*<616>*/ 		printf("______Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.______")
          		goto flw_620
          	  case 2:
/*<617>*/ 		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
          		goto flw_646
          	}
          }

          void entrypoint_460_13() {
/*<687>*/ 	start()
/*<675>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<680>*/ 		story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = false;
/*<686>*/ 		story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
          		flw_690:
/*<690>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 14), ('next', -1), ('param3', 7)])
          	  case 1:
/*<676>*/ 		switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          		  case 0:
/*<679>*/ 			story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = false;
/*<684>*/ 			story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = true;
/*<685>*/ 			story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
          			goto flw_690
          		  case 1:
/*<677>*/ 			switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          			  case 0:
/*<678>*/ 				story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = false;
/*<681>*/ 				story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<682>*/ 				story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = true;
/*<683>*/ 				story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
/*<994>*/ 				story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = true;
          				goto flw_690
          			  case 1:
/*<692>*/ 				switch (story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */]) {
          				  case 0:
/*<693>*/ 					story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = false;
          					goto flw_690
          				  case 1:
          					goto flw_690
          				}
          			}
          		}
          	}
          }

          void entrypoint_460_31() {
/*<413>*/ 	start()
/*<694>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 301)])) {
          	  case 0:
/*<268>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<270>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<272>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<275>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<276>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<277>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<278>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<282>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<289>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          								  case 1:
/*<281>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<290>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<280>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<287>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<279>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<288>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<274>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<285>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<273>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<286>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<271>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<283>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<269>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<284>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          		}
          	  case 1:
/*<704>*/ 		switch (scene_flags[120 /* 0xE 01 */]) {
          		  case 0:
/*<702>*/ 			switch (scene_flags[118 /* 0xF 40 */]) {
          			  case 0:
/*<699>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<703>*/ 					switch (scene_flags[119 /* 0xF 80 */]) {
          					  case 0:
/*<705>*/ 						switch (scene_flags[121 /* 0xE 02 */]) {
          						  case 0:
/*<695>*/ 							switch (scene_flags[115 /* 0xF 08 */]) {
          							  case 0:
/*<697>*/ 								switch (scene_flags[116 /* 0xF 10 */]) {
          								  case 0:
/*<709>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<716>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          								  case 1:
/*<698>*/ 									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<710>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<696>*/ 								scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<711>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<708>*/ 							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<717>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<706>*/ 						scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<715>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<700>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<713>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<701>*/ 				scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<712>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<707>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<714>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          		}
          	  case 2:
/*<725>*/ 		switch (scene_flags[118 /* 0xF 40 */]) {
          		  case 0:
/*<726>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<718>*/ 				switch (scene_flags[115 /* 0xF 08 */]) {
          				  case 0:
/*<728>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<720>*/ 						switch (scene_flags[116 /* 0xF 10 */]) {
          						  case 0:
/*<727>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<722>*/ 								switch (scene_flags[117 /* 0xF 20 */]) {
          								  case 0:
/*<732>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<739>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          								  case 1:
/*<723>*/ 									scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<736>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<730>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<737>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<721>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<733>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<731>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<740>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<719>*/ 					scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<734>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<729>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<738>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<724>*/ 			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<735>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          		}
          	}
          }

          void entrypoint_460_14() {
/*<688>*/ 	start()
/*<473>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<477>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 7), ('param3', 14), ('param4', 2), ('param5', 249)])) {
          		  case 0:
/*<487>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 12), ('next', -1), ('param3', 7)])
          		  case 1:
          			flw_482:
/*<482>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 2), ('next', -1), ('param3', 7)])
          		}
          	  case 1:
/*<474>*/ 		switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          		  case 0:
/*<478>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 8), ('param3', 14), ('param4', 2), ('param5', 251)])) {
          			  case 0:
/*<486>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 11), ('next', -1), ('param3', 7)])
          			  case 1:
          				goto flw_482
          			}
          		  case 1:
/*<475>*/ 			switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          			  case 0:
/*<479>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 9), ('param3', 14), ('param4', 2), ('param5', 253)])) {
          				  case 0:
/*<485>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 10), ('next', -1), ('param3', 7)])
          				  case 1:
          					goto flw_482
          				}
          			  case 1:
/*<476>*/ 				switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          				  case 0:
/*<480>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 10), ('param3', 14), ('param4', 2), ('param5', 255)])) {
          					  case 0:
/*<484>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 9), ('next', -1), ('param3', 7)])
          					  case 1:
          						goto flw_482
          					}
          				  case 1:
/*<481>*/ 					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 11), ('param3', 14), ('param4', 2), ('param5', 257)])) {
          					  case 0:
/*<483>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 8), ('next', -1), ('param3', 7)])
          					  case 1:
          						goto flw_482
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_460_32() {
/*<414>*/ 	start()
/*<741>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 332)])) {
          	  case 0:
/*<291>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<293>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<295>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<298>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<299>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<300>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<301>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<302>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<307>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<312>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          									  case 1:
/*<306>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<315>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<305>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<316>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<304>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<313>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<303>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<314>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<297>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<310>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<296>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<311>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<294>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<308>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<292>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<309>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          		}
          	  case 1:
/*<752>*/ 		switch (scene_flags[121 /* 0xE 02 */]) {
          		  case 0:
/*<753>*/ 			switch (scene_flags[122 /* 0xE 04 */]) {
          			  case 0:
/*<751>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<742>*/ 					switch (scene_flags[115 /* 0xF 08 */]) {
          					  case 0:
/*<746>*/ 						switch (scene_flags[117 /* 0xF 20 */]) {
          						  case 0:
/*<749>*/ 							switch (scene_flags[118 /* 0xF 40 */]) {
          							  case 0:
/*<744>*/ 								switch (scene_flags[116 /* 0xF 10 */]) {
          								  case 0:
/*<750>*/ 									switch (scene_flags[119 /* 0xF 80 */]) {
          									  case 0:
/*<758>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<763>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          									  case 1:
/*<754>*/ 										scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<765>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<745>*/ 									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<759>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<748>*/ 								scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<761>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<747>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<762>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<743>*/ 						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<760>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<755>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<764>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<757>*/ 				scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<766>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<756>*/ 			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<767>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          		}
          	  case 2:
/*<775>*/ 		switch (scene_flags[118 /* 0xF 40 */]) {
          		  case 0:
/*<770>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<777>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<778>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<772>*/ 						switch (scene_flags[117 /* 0xF 20 */]) {
          						  case 0:
/*<776>*/ 							switch (scene_flags[119 /* 0xF 80 */]) {
          							  case 0:
/*<779>*/ 								switch (scene_flags[122 /* 0xE 04 */]) {
          								  case 0:
/*<768>*/ 									switch (scene_flags[115 /* 0xF 08 */]) {
          									  case 0:
/*<784>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<789>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          									  case 1:
/*<769>*/ 										scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<786>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<783>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<792>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<780>*/ 								scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<791>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<773>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<788>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<782>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<793>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<781>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<790>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<771>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<785>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<774>*/ 			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<787>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          		}
          	}
          }

          void entrypoint_460_33() {
/*<415>*/ 	start()
/*<794>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 367)])) {
          	  case 0:
/*<317>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<319>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<321>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<324>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<325>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<326>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<327>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<328>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<329>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<335>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<340>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          										  case 1:
/*<334>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<341>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          										}
          									  case 1:
/*<333>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<344>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<332>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<345>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<331>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<342>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<330>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<343>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<323>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<338>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<322>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<339>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<320>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<336>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<318>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<337>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          		}
          	  case 1:
/*<809>*/ 		switch (scene_flags[123 /* 0xE 08 */]) {
          		  case 0:
/*<799>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<801>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<797>*/ 					switch (scene_flags[115 /* 0xF 08 */]) {
          					  case 0:
/*<804>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<807>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<805>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<808>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<806>*/ 										switch (scene_flags[120 /* 0xE 01 */]) {
          										  case 0:
/*<815>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<820>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          										  case 1:
/*<811>*/ 											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<822>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          										}
          									  case 1:
/*<813>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<824>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<810>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<823>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<812>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<825>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<803>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<818>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<798>*/ 						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<817>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<802>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<819>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<800>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<816>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<814>*/ 			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<821>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          		}
          	  case 2:
/*<835>*/ 		switch (scene_flags[120 /* 0xE 01 */]) {
          		  case 0:
/*<826>*/ 			switch (scene_flags[115 /* 0xF 08 */]) {
          			  case 0:
/*<830>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<838>*/ 					switch (scene_flags[123 /* 0xE 08 */]) {
          					  case 0:
/*<828>*/ 						switch (scene_flags[116 /* 0xF 10 */]) {
          						  case 0:
/*<836>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<834>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<833>*/ 									switch (scene_flags[118 /* 0xF 40 */]) {
          									  case 0:
/*<837>*/ 										switch (scene_flags[122 /* 0xE 04 */]) {
          										  case 0:
/*<844>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<849>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          										  case 1:
/*<842>*/ 											scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<853>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          										}
          									  case 1:
/*<832>*/ 										scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<847>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<839>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<852>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<841>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<854>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<829>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<845>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<843>*/ 						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<850>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<831>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<848>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<827>*/ 				scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<846>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<840>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<851>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          		}
          	}
          }

          void entrypoint_460_51() {
/*<161>*/ 	start()
/*<121>*/ 	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = true;
/*<122>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
/*<123>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<124>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<125>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<127>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 664), ('param3', 33)])
/*<664>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 126), ('param3', 52)])
/*<126>*/ 	changeScene(7, 0) // {'name': 'B100', 'room': 0, 'layer': 5, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_34() {
/*<416>*/ 	start()
/*<795>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 370)])) {
          	  case 0:
/*<346>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<348>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<350>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<353>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<354>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<355>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<356>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<357>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<358>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<359>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<366>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<373>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
          											  case 1:
/*<365>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<371>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          											}
          										  case 1:
/*<364>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<372>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          										}
          									  case 1:
/*<363>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<376>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<362>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<377>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<361>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<374>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<360>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<375>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<352>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<369>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<351>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<370>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<349>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<367>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<347>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<368>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          		}
          	  case 1:
/*<857>*/ 		switch (scene_flags[116 /* 0xF 10 */]) {
          		  case 0:
/*<863>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<864>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<867>*/ 					switch (scene_flags[123 /* 0xE 08 */]) {
          					  case 0:
/*<862>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<865>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<866>*/ 								switch (scene_flags[122 /* 0xE 04 */]) {
          								  case 0:
/*<868>*/ 									switch (scene_flags[124 /* 0xE 10 */]) {
          									  case 0:
/*<855>*/ 										switch (scene_flags[115 /* 0xF 08 */]) {
          										  case 0:
/*<859>*/ 											switch (scene_flags[117 /* 0xF 20 */]) {
          											  case 0:
/*<875>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<882>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
          											  case 1:
/*<860>*/ 												scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<879>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          											}
          										  case 1:
/*<856>*/ 											scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<877>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          										}
          									  case 1:
/*<874>*/ 										scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<880>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<872>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<885>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<871>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<886>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<861>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<878>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<873>*/ 						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<881>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<870>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<883>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<869>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<884>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<858>*/ 			scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<876>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          		}
          	  case 2:
/*<887>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<895>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<896>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<897>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<894>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<891>*/ 							switch (scene_flags[117 /* 0xF 20 */]) {
          							  case 0:
/*<900>*/ 								switch (scene_flags[124 /* 0xE 10 */]) {
          								  case 0:
/*<899>*/ 									switch (scene_flags[123 /* 0xE 08 */]) {
          									  case 0:
/*<889>*/ 										switch (scene_flags[116 /* 0xF 10 */]) {
          										  case 0:
/*<898>*/ 											switch (scene_flags[122 /* 0xE 04 */]) {
          											  case 0:
/*<907>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<914>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
          											  case 1:
/*<904>*/ 												scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<917>*/ 												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
          											}
          										  case 1:
/*<890>*/ 											scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<908>*/ 											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
          										}
          									  case 1:
/*<905>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<913>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
          									}
          								  case 1:
/*<906>*/ 									scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<912>*/ 									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
          								}
          							  case 1:
/*<892>*/ 								scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<911>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
          							}
          						  case 1:
/*<893>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<910>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
          						}
          					  case 1:
/*<903>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<918>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
          					}
          				  case 1:
/*<902>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<915>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
          				}
          			  case 1:
/*<901>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<916>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
          			}
          		  case 1:
/*<888>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<909>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
          		}
          	}
          }

