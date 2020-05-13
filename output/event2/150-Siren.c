void entrypoint_150_00() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 29), ('param3', 39)])
	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
	  case 0:
		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
		printf("Here we are, ####!\nShow me what you got!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 30), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 32), ('param3', 40)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		switch (scene_flags[101 /* 0xD 20 */]) {
		  case 0:
			switch (temp_flags[1 /* 0x1 02 */]) {
			  case 0:
				printf("######Master ####, I can\nunfortunately confirm that you\nhave failed to pass the trial.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 6), ('param3', 40)])
				switch (temp_flags[2 /* 0x1 04 */]) {
				  case 0:
					switch (temp_flags[3 /* 0x1 08 */]) {
					  case 0:
						switch (temp_flags[4 /* 0x1 10 */]) {
						  case 0:
							switch (temp_flags[5 /* 0x1 20 */]) {
							  case 0:
								switch (temp_flags[6 /* 0x1 40 */]) {
								  case 0:
									switch (temp_flags[7 /* 0x1 80 */]) {
									  case 0:
										printf("######Master, in addition to the #####Guardians#####\nwho will attack you, there are also two\ntypes of #####Watchers #####that search for\nintruders #####on the ground and in the sky#####.\nThe two types of Watchers exhibit\ndramatically different behavior, so be\nsure you understand how to avoid\ndetection by both.")
										temp_flags[5 /* 0x1 20 */] = false;
										temp_flags[6 /* 0x1 40 */] = false;
										temp_flags[7 /* 0x1 80 */] = false;
										flw_40:
										printf("Collect all the #####tears##### within the Silent\nRealm. I shall await your return here.")
										flw_57:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 38), ('param3', 40)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
									  case 1:
										printf("The locations of #####tears #####that you have\npreviously collected will be #####marked\non the map#####, so make good use of that.\n\nConfirm the locations of all 15 tears\nfirst to increase your chances of\nsuccessfully completing the trial.")
										temp_flags[7 /* 0x1 80 */] = true;
										goto flw_40
									}
								  case 1:
									printf("I suggest using smart tactics to your\nadvantage. Try #####leaving easy-to-collect\ntears #####for when you are being pursued.")
									temp_flags[6 /* 0x1 40 */] = true;
									goto flw_40
								}
							  case 1:
								printf("######Master, the chances of your not being\nthe chosen hero are increasing...\n\n\nRepeated attempts at this trial have\nscattered your concentration and made\nyour performance erratic. I suggest\nyou rest awhile before trying again.")
								temp_flags[5 /* 0x1 20 */] = true;
								goto flw_40
							}
						  case 1:
							printf("#####Two types of Watchers #####patrol the\nrealm, looking for intruders. I highly\nsuggest you take caution.\n\nSo long as you do not step into their\nlight, you will remain undetected\nby #####flying Sky Watchers#####.\n\nHowever, the #####Earth Watchers#####, who\n#####hover near the ground#####, will give chase\nif you come too close to them, so #####stay\nalert #####and maintain a safe distance.")
							temp_flags[4 /* 0x1 10 */] = true;
							goto flw_40
						}
					  case 1:
						printf("The locations of #####tears##### you have\ngathered during your trial are\n#####marked on the map#####.\n\nYou will have an easier time\ncompleting your task if you first\nset out to discover the locations\nof all 15 tears.")
						temp_flags[3 /* 0x1 08 */] = true;
						goto flw_40
					}
				  case 1:
					printf("######Master, so long as you have the will and\ndetermination, you can retry a trial\nas many times as you like.\n\nA good strategy is #####to find, but then\ndeliberately not pick up#####, the most-\neasily-accessible ##########tears##### #####until you are\ndiscovered and really need one.\nCollect the 15 #####tears##### and complete the\ntrial. I will await your return in the\noutside world.")
					temp_flags[2 /* 0x1 04 */] = true;
					goto flw_57
				}
			  case 1:
				printf("######Master ####.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 2), ('param3', 40)])
				printf("When your ############### is filled with\n15 #####tears#####, your spirit will grow and you\nwill be blessed by the goddess with\na new power.\n######Master, I await your return in the\noutside world.")
				temp_flags[1 /* 0x1 02 */] = true;
				goto flw_57
			}
		  case 1:
			printf("######Master ####.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 33), ('param3', 40)])
			printf("You have entered the last of the trials,\nthe #####Goddess's Silent Realm#####.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 25), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 62), ('param2', 1), ('next', 13), ('param3', 40)])
			give_item(17 0x11);
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 15), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 26), ('param3', 40)])
			printf("When you have filled the ##########\n#####once more, you shall finally be \nrecognized as the true hero of legend.\n\nOnly then will you be shown the door\nthat will lead you to the #####Triforce#####.\n######Master, I wish you success in this trial.\n\nDo you have any questions before you\nface the task ahead of you?\n#####Yes.#####No.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 10)])) {
			  case 0:
				printf("Which topic do you wish to review?\n\n\n#####The #####?#####Guardians?#####Waking Water?#####Never mind.")
				flw_59:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 20)])) {
				  case 0:
					printf("Yes, ######Master.\n\n\n\nTo fill the ###############, you need to\nlocate and collect the #########.s\n#####scattered across this Silent Realm.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 23), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 21), ('param3', 40)])
					printf("######Master, do you see the glowing\nobject a ways in front of you?")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 19), ('param3', 39)])
					printf("That is a #########.#####.\nYou will need to collect #####15 #####of them.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 18), ('param3', 40)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 71), ('param3', 6)])
					flw_71:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 60), ('param3', 39)])
					printf("Do you have any further questions?\n\n#####The #####?#####Guardians?#####Waking Water?#####Never mind.")
					goto flw_59
				  case 1:
					printf("######Understood, Master.\nAllow me to explain.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 67), ('param3', 39)])
					printf("If you take even a single step outside\nthe protective circle you stand in, the\n#####Guardians #####of this realm will wake up\nand pursue you, ######Master.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 66), ('param3', 39)])
					printf("If a #####Guardian #####manages to land even a\nsingle hit on you, your spirit will\nshatter and you will fail the trial.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 62), ('param3', 39)])
					printf("You must collect the #####tears##### scattered\nthroughout this area and fill the\n########## #####without\nbeing hit by an attack.")
					goto flw_71
				  case 2:
					printf("######Understood, Master.\nAllow me to explain.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 69), ('param3', 39)])
					printf("The unusual liquid substance that\ncovers that area is known as Waking\nWater, and it has certain unique\nproperties.\nIf you make contact with Waking\nWater, the #####Guardians will be\nimmediately alerted to your presence#####.\n\nPools of Waking Water are located all\nthroughout the area. I suggest you\nwatch where you step...")
					goto flw_71
				  case 3:
					flw_78:
					printf("######Understood, Master.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 75), ('param3', 39)])
					printf("######Master, I await your return in the\noutside world.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 74), ('param3', 40)])
					scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
					scene_flags[25 'Skyloft: Silent Realm'][101 /* 0xD 20 */] = true;
					temp_flags[1 /* 0x1 02 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
				}
			  case 1:
				goto flw_78
			}
		}
	}
}

