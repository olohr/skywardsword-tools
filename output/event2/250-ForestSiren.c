          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 65), ('param3', 39)])
/*< 65>*/ 	printf("If you take even a single step outside\nthe protective circle you stand in, the\n<r<Guardians >>of this realm will wake up\nand pursue you, ______Master.")
/*< 68>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 66), ('param3', 39)])
/*< 66>*/ 	printf("If a <r<Guardian >>manages to land even a\nsingle hit on you, your spirit will\nshatter and you will fail the trial.")
/*< 69>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 70), ('param3', 39)])
/*< 70>*/ 	printf("You must collect the <y<tears>> scattered\nthroughout this area and fill the\n<y<_____ >>without being hit by\nan attack.")
          	flw_74:
/*< 74>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 75), ('param3', 39)])
/*< 75>*/ 	printf("Was my explanation clear, ______Master?\nDo you want me to explain again?\n[1]Explain again.[2-]I got it.")
/*< 76>*/ 	switch (choice(2, 0)) {
          	  case 0:
/*< 77>*/ 		printf("Which topic do you wish to review?\n\n\n[1]The _____?[2]Guardians?[3]Silent Realm?_____Never mind.")
/*< 92>*/ 		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 22)])) {
          		  case 0:
/*< 84>*/ 			printf("______Understood, Master.")
/*< 87>*/ 			loadzone_temp_flags[10 /* 0x8 04 */] = true;
/*< 90>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 250), ('param2', 2), ('next', -1), ('param3', 7)])
          		  case 1:
/*< 85>*/ 			printf("______Understood, Master.")
/*< 91>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 250), ('param2', 3), ('next', -1), ('param3', 7)])
          		  case 2:
/*< 93>*/ 			printf("______Understood, Master.")
/*< 95>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 94), ('param3', 39)])
/*< 94>*/ 			printf("The <b<Silent Realm >>is a <r<spirit world>> that\nonly the goddess's chosen hero is\nallowed to enter.\n\nYou have separated from your physical\nform and exist in this world as a spirit.\n\n\nThe tasks you perform here test your\nspiritual resolve. You must focus and\ncomplete the trial.")
/*< 97>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 250), ('param2', 4), ('next', -1), ('param3', 7)])
          		  case 3:
          			flw_83:
/*< 83>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 78), ('param3', 39)])
/*< 78>*/ 			printf("______Understood, Master.\n\n\n\nI will be eagerly awaiting your return\nin the outside world.\n\n\nMay the goddess watch over you,\n______Master.")
/*< 79>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 86), ('param3', 40)])
/*< 86>*/ 			loadzone_temp_flags[10 /* 0x8 04 */] = false;
/*< 80>*/ 			scene_flags[22 'Faron: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 81>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*< 82>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          		}
          	  case 1:
          		goto flw_83
          	}
          }

          void entrypoint_250_04() {
/*< 96>*/ 	start()
          	goto flw_74
          }

          void entrypoint_250_00() {
          	start()
/*< 23>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 15), ('param3', 39)])
/*< 15>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 16>*/ 		printf("We're here, Link!\nShow me what you've got!")
/*< 18>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 17), ('param3', 39)])
/*< 17>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 19), ('param3', 40)])
/*< 19>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf("______Master Link, I can\nunfortunately confirm that you\nhave failed to pass the trial.")
/*< 55>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 29), ('param3', 40)])
/*< 29>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 31>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 34>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 40>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 41>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 42>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 46>*/ 										printf("______Master, in addition to the <r<Guardians>>\nwho will attack you, there are also two\ntypes of <r<Watchers >>that search for\nintruders <r<on the ground and in the sky>>.\nThe two types of Watchers exhibit\ndramatically different behavior, so be\nsure you understand how to avoid\ndetection by both.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf("Collect all the <y<tears>> within the Silent\nRealm. I shall await your return here.")
          										flw_56:
/*< 56>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 37), ('param3', 40)])
/*< 37>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          									  case 1:
/*< 43>*/ 										printf("The locations of <y<tears >>that you have\npreviously collected will be <r<marked\non the map>>, so make good use of that.\n\nConfirm the locations of all 15 tears\nfirst to increase your chances of\nsuccessfully completing the trial.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf("I suggest using smart tactics to your\nadvantage. Try <r<leaving easy-to-collect\ntears >>for when you are being pursued.")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf("______Master, the chances of your not being\nthe chosen one are increasing...\n\n\nRepeated attempts at this trial have\nscattered your concentration and made\nyour performance erratic. I suggest\nyou rest awhile before trying again.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf("<r<Two types of Watchers >>patrol the\nrealm, looking for intruders. I highly\nsuggest you take caution.\n\nSo long as you do not step into their\nlight, you will remain undetected\nby <r<flying Sky Watchers>>.\n\nHowever, the <r<Earth Watchers>>, who\n<r<hover near the ground>>, will give chase\nif you come too close to them, so <r<stay\nalert >>and maintain a safe distance.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf("The locations of <y<tears>> you have\ngathered during your trial are\n<r<marked on the map>>.\n\nYou will have an easier time\ncompleting your task if you first set\nout to discover the locations of all\n15 tears.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf("______Master, so long as you have the will and\ndetermination, you can retry a trial\nas many times as you like.\n \nA good strategy is <r<to find, but then\ndeliberately not pick up>>, the most-\neasily-accessible <y<<y<tears<y< >>until you are\ndiscovered and really need one.\nCollect the 15 <y<tears>> and complete the\ntrial. I will await your return in the\noutside world.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf("______Master Link.")
/*< 54>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 25), ('param3', 40)])
/*< 25>*/ 				printf("When your <y<_____>> is filled with\n15 <r<tears>>, your spirit will grow and you\nwill be blessed by the goddess with a\nnew power.\n______Master, I will await your return in the\noutside world.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf("______Master Link.")
/*< 21>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 22), ('param3', 40)])
/*< 22>*/ 			printf("As expected, I cannot follow you into\nthis realm, for this trial calls out to\nyour mind______ alone.\n\nThis is the nature of places known as\n<b<Silent Realms>>. They are domains of the\nspirit, accessible only to the goddess's\nchosen hero.\nThis particular trial, <b<Farore's Silent\nRealm>>, tests the limits of your <r<courage>>.\n\n\n______Your spirit has temporarily separated\nfrom your physical body so that you\nmay undertake this challenge.\n\nTo reach the location of the flames\nthat will enhance your sword, it is\nnecessary for ______you to overcome this\ntrial and undergo spiritual growth.")
/*< 10>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 20), ('param3', 39)])
/*< 20>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 62), ('param2', 1), ('next', 24), ('param3', 40)])
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 4), ('param3', 39)])
/*<  4>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 3), ('param3', 40)])
/*<  3>*/ 			printf("That is your <y<_____>>.\n\n\n\nWhen this vessel is full, it will signify\nyou have successfully completed the\ntrial, allowing your spirit to grow.\n\nThis, in turn, will allow the goddess\nto bless you with a <r<new power>>.")
          			flw_6:
/*<  6>*/ 			printf("To fill the <y<_____>>, you need to\nsearch for something known as a\n<y<____+>>. There are many of \nthem spread across this strange world.")
/*<  7>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 8), ('param3', 39)])
/*<  8>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 11), ('param3', 40)])
/*< 11>*/ 			printf("______Master, do you see the glowing\nobject just in front of you?")
/*< 12>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 13), ('param3', 39)])
/*< 13>*/ 			printf("That is a <y<____+>>.\nYou will need to collect <r<15 >>of them.")
/*<  9>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 14), ('param3', 40)])
/*< 14>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 71), ('param3', 6)])
/*< 71>*/ 			switch (loadzone_temp_flags[10 /* 0x8 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 72), ('param3', 39)])
/*< 72>*/ 				printf("However, this is not as simple a task\nas it would seem. Your work in this\nrealm is referred to as a <r<trial>> for\ngood reason.")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf("______Master Link.")
/*< 59>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 61), ('param3', 40)])
/*< 61>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 62), ('param3', 6)])
/*< 62>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 60), ('param3', 39)])
/*< 60>*/ 	printf("The unusual liquid substance that\ncovers that area is known as <r<Waking\nWater>>, and it has certain unique\nproperties.\nIf you make contact with Waking\nWater, the <r<Guardians will be\nimmediately alerted to your presence>>.\n\nPools of Waking Water are located all\nthroughout the area. I suggest you\nwatch where you step...")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

