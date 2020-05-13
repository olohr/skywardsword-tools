          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 9), ('param3', 39)])
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf("We're here, Link!\nShow me what you've got!")
/*< 12>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 11), ('param3', 39)])
/*< 11>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 13), ('param3', 40)])
/*< 13>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf("______Master Link, I can\nunfortunately confirm that you\nhave failed to pass the trial.")
/*< 48>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 22), ('param3', 40)])
/*< 22>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 24>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 27>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 33>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 34>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 35>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 39>*/ 										printf("______Master, in addition to the <r<Guardians>>\nwho will attack you, there are also two\ntypes of <r<Watchers >>that search for\nintruders <r<on the ground and in the sky>>.\nThe two types of Watchers exhibit\ndramatically different behavior, so be\nsure you understand how to avoid\ndetection by both.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("Collect all the <y<tears>> within the Silent\nRealm. I shall await your return here.")
          										flw_49:
/*< 49>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 30), ('param3', 40)])
/*< 30>*/ 										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          									  case 1:
/*< 36>*/ 										printf("The locations of <y<tears >>that you have\npreviously collected will be <r<marked\non the map>>, so make good use of that.\n\nConfirm the locations of all 15 tears\nfirst to increase your chances of\nsuccessfully completing the trial.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf("I suggest using smart tactics to your\nadvantage. Try <r<leaving easy-to-collect\ntears >>for when you are being pursued.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf("______Master, the chances of your not being\nthe chosen one are increasing...\n\n\nRepeated attempts at this trial have\nscattered your concentration and made\nyour performance erratic. I suggest\nyou rest awhile before trying again.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf("<r<Two types of Watchers >>patrol the\nrealm, looking for intruders. I highly\nsuggest you take caution.\n\nSo long as you do not step into their\nlight, you will remain undetected\nby <r<flying Sky Watchers>>.\n\nHowever, the <r<Earth Watchers>>, who\n<r<hover near the ground>>, will give chase\nif you come too close to them, so <r<stay\nalert >>and maintain a safe distance.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("The locations of <y<tears>> you have\ngathered during your trial are\n<r<marked on the map>>.\n\nYou will have an easier time\ncompleting your task if you\nfirst set out to discover the\nlocations of all 15 tears.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("______Master, so long as you have the will and\ndetermination, you can retry a trial\nas many times as you like.\n \nA good strategy is <r<to find, but then\ndeliberately not pick up>>, the most-\neasily-accessible <y<<y<tears<y< >>until you are\ndiscovered and really need one.\nCollect the 15 <y<tears>> and complete the\ntrial. I will await your return in the\noutside world.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("______Master Link.")
/*< 46>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 18), ('param3', 40)])
/*< 18>*/ 				printf("When your <y<_____>> is filled with\n15 <r<tears>>, your spirit will grow and you\nwill be blessed by the goddess with a\nnew power.\n______Master, I will await your return in the\noutside world.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf("______Master Link.")
/*< 15>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 14), ('param3', 40)])
/*< 14>*/ 			printf("As you know by now, I cannot follow\nyou. The trial calls out to your mind______\nalone, as it is in every <b<Silent Realm>>.\n\nThis is the second trial, known as\n<b<Nayru's Silent Realm>>. It will test\nyour <r<wisdom>>, ______Master.\n\nYou must overcome this trial to find\nthe flames that will enhance your\nsword.")
/*< 17>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 6), ('param3', 39)])
/*<  6>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 62), ('param2', 1), ('next', 2), ('param3', 40)])
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 4), ('param3', 39)])
/*<  4>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 8), ('param3', 40)])
/*<  8>*/ 			printf("When your vessel is full, your spirit\nwill grow and you will be entrusted\nwith a <r<new power >>by the goddess.\n\nDo you have any questions?\n[1]Yes![2-]No.")
/*<  3>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*< 50>*/ 				printf("Which topic do you wish to review?\n\n\n[1]The _____?[2]Guardians?[3]Waking Water?[4-]Never mind.")
          				flw_51:
/*< 51>*/ 				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 20)])) {
          				  case 0:
/*< 58>*/ 					printf("Yes, ______Master.\n\n\n\nTo fill the <y<_____>>, you need to\nlocate and collect every <y<____-\n>>scattered across this Silent Realm.")
/*< 52>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 53), ('param3', 39)])
/*< 53>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 55), ('param3', 40)])
/*< 55>*/ 					printf("______Master, do you see the glowing\nobject just in front of you?")
/*< 56>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 59), ('param3', 39)])
/*< 59>*/ 					printf("That is a <y<____->>.\nYou will need to collect <r<15 >>of them.")
/*< 54>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 57), ('param3', 40)])
/*< 57>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 77), ('param3', 6)])
          					flw_77:
/*< 77>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 78), ('param3', 39)])
/*< 78>*/ 					printf("Do you have any further questions?\n\n[1]The _____?[2]Guardians?[3]Waking Water?[4-]Never mind.")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("However, this is not as simple a task\nas it would seem. Your work in this\nrealm is referred to as a <r<trial>> for\ngood reason.")
/*< 61>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 64), ('param3', 39)])
/*< 64>*/ 					printf("If you take even a single step outside\nthe protective circle you stand in, the\n<r<Guardians >>of this realm will wake up\nand pursue you, ______Master.")
/*< 62>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 65), ('param3', 39)])
/*< 65>*/ 					printf("If a <r<Guardian >>manages to land even\none attack on you, your spirit will\nshatter and you will fail the trial.")
/*< 63>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 66), ('param3', 39)])
/*< 66>*/ 					printf("You must collect the <y<tears>> scattered\nthroughout this area and fill the\n<y<_____ >>without\nbeing hit by an attack.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf("However, this is not as simple a task\nas it would seem. Your work in this\nrealm is referred to as a <r<trial>> for\ngood reason.")
/*< 68>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 69), ('param3', 39)])
/*< 69>*/ 					printf("The unusual liquid substance that\ncovers that area is known as Waking\nWater, and it has certain unique\nproperties.\nIf you make contact with Waking\nWater, the <r<Guardians will be\nimmediately alerted to your presence>>.\n\nPools of Waking Water are located all\nthroughout the area. I suggest you\nwatch where you step...")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("Yes, ______Master.")
/*< 71>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 72), ('param3', 39)])
/*< 72>*/ 					printf("______Master, I will await your return in the\noutside world.")
/*< 73>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 75), ('param3', 40)])
/*< 75>*/ 					scene_flags[24 'Lanayru: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 76>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 74>*/ 					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

