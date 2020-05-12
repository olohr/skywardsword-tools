void entrypoint_250_03() {
	start()
	flw_67:
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 65), ('param3', 39)])
	printf("If you take even a single step outside\nthe protective circle you stand in, the\n#####Guardians #####of this realm will wake up\nand pursue you, ######Master.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 66), ('param3', 39)])
	printf("If a #####Guardian #####manages to land even a\nsingle hit on you, your spirit will\nshatter and you will fail the trial.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 70), ('param3', 39)])
	printf("You must collect the #####tears##### scattered\nthroughout this area and fill the\n########## #####without being hit by\nan attack.")
	flw_74:
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 75), ('param3', 39)])
	printf("Was my explanation clear, ######Master?\nDo you want me to explain again?\n#####Explain again.#####I got it.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 20)])) {
	  case 0:
		printf("Which topic do you wish to review?\n\n\n#####The #####?#####Guardians?#####Silent Realm?#####Never mind.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 22)])) {
		  case 0:
			printf("######Understood, Master.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 22), ('next', 90), ('param3', 4)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 250), ('param2', 2), ('next', -1), ('param3', 7)])
		  case 1:
			printf("######Understood, Master.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 250), ('param2', 3), ('next', -1), ('param3', 7)])
		  case 2:
			printf("######Understood, Master.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 94), ('param3', 39)])
			printf("The #####Silent Realm #####is a #####spirit world##### that\nonly the goddess's chosen hero is\nallowed to enter.\n\nYou have separated from your physical\nform and exist in this world as a spirit.\n\n\nThe tasks you perform here test your\nspiritual resolve. You must focus and\ncomplete the trial.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 250), ('param2', 4), ('next', -1), ('param3', 7)])
		  case 3:
			flw_83:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 78), ('param3', 39)])
			printf("######Understood, Master.\n\n\n\nI will be eagerly awaiting your return\nin the outside world.\n\n\nMay the goddess watch over you,\n######Master.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 86), ('param3', 40)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 22), ('next', 80), ('param3', 5)])
			scene_flags[22 'Faron: Silent Realm'][100 /* 0xD 10 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 22), ('next', 82), ('param3', 28)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
		}
	  case 1:
		goto flw_83
	}
}

void entrypoint_250_04() {
	start()
	goto flw_74
}

void entrypoint_250_00() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 15), ('param3', 39)])
	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
	  case 0:
		printf("We're here, ####!\nShow me what you've got!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 17), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 19), ('param3', 40)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		switch (scene_flags[100 /* 0xD 10 */]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 1), ('param3', 9), ('param4', 2), ('param5', 4)])) {
			  case 0:
				printf("######Master ####, I can\nunfortunately confirm that you\nhave failed to pass the trial.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 29), ('param3', 40)])
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 2), ('param3', 9), ('param4', 2), ('param5', 6)])) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 3), ('param3', 9), ('param4', 2), ('param5', 8)])) {
					  case 0:
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 4), ('param3', 9), ('param4', 2), ('param5', 10)])) {
						  case 0:
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 5), ('param3', 9), ('param4', 2), ('param5', 12)])) {
							  case 0:
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 6), ('param3', 9), ('param4', 2), ('param5', 14)])) {
								  case 0:
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 7), ('param3', 9), ('param4', 2), ('param5', 16)])) {
									  case 0:
										printf("######Master, in addition to the #####Guardians#####\nwho will attack you, there are also two\ntypes of #####Watchers #####that search for\nintruders #####on the ground and in the sky#####.\nThe two types of Watchers exhibit\ndramatically different behavior, so be\nsure you understand how to avoid\ndetection by both.")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 22), ('next', 51), ('param3', 29)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 22), ('next', 52), ('param3', 29)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 22), ('next', 39), ('param3', 29)])
										flw_39:
										printf("Collect all the #####tears##### within the Silent\nRealm. I shall await your return here.")
										flw_56:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 37), ('param3', 40)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
									  case 1:
										printf("The locations of #####tears #####that you have\npreviously collected will be #####marked\non the map#####, so make good use of that.\n\nConfirm the locations of all 15 tears\nfirst to increase your chances of\nsuccessfully completing the trial.")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 22), ('next', 39), ('param3', 28)])
										goto flw_39
									}
								  case 1:
									printf("I suggest using smart tactics to your\nadvantage. Try #####leaving easy-to-collect\ntears #####for when you are being pursued.")
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 22), ('next', 39), ('param3', 28)])
									goto flw_39
								}
							  case 1:
								printf("######Master, the chances of your not being\nthe chosen one are increasing...\n\n\nRepeated attempts at this trial have\nscattered your concentration and made\nyour performance erratic. I suggest\nyou rest awhile before trying again.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 22), ('next', 39), ('param3', 28)])
								goto flw_39
							}
						  case 1:
							printf("#####Two types of Watchers #####patrol the\nrealm, looking for intruders. I highly\nsuggest you take caution.\n\nSo long as you do not step into their\nlight, you will remain undetected\nby #####flying Sky Watchers#####.\n\nHowever, the #####Earth Watchers#####, who\n#####hover near the ground#####, will give chase\nif you come too close to them, so #####stay\nalert #####and maintain a safe distance.")
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 22), ('next', 39), ('param3', 28)])
							goto flw_39
						}
					  case 1:
						printf("The locations of #####tears##### you have\ngathered during your trial are\n#####marked on the map#####.\n\nYou will have an easier time\ncompleting your task if you first set\nout to discover the locations of all\n15 tears.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 22), ('next', 39), ('param3', 28)])
						goto flw_39
					}
				  case 1:
					printf("######Master, so long as you have the will and\ndetermination, you can retry a trial\nas many times as you like.\n \nA good strategy is #####to find, but then\ndeliberately not pick up#####, the most-\neasily-accessible ##########tears##### #####until you are\ndiscovered and really need one.\nCollect the 15 #####tears##### and complete the\ntrial. I will await your return in the\noutside world.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 22), ('next', 56), ('param3', 28)])
					goto flw_56
				}
			  case 1:
				printf("######Master ####.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 25), ('param3', 40)])
				printf("When your ############### is filled with\n15 #####tears#####, your spirit will grow and you\nwill be blessed by the goddess with a\nnew power.\n######Master, I will await your return in the\noutside world.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 22), ('next', 56), ('param3', 28)])
				goto flw_56
			}
		  case 1:
			printf("######Master ####.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 22), ('param3', 40)])
			printf("As expected, I cannot follow you into\nthis realm, for this trial calls out to\nyour mind###### alone.\n\nThis is the nature of places known as\n#####Silent Realms#####. They are domains of the\nspirit, accessible only to the goddess's\nchosen hero.\nThis particular trial, #####Farore's Silent\nRealm#####, tests the limits of your #####courage#####.\n\n\n######Your spirit has temporarily separated\nfrom your physical body so that you\nmay undertake this challenge.\n\nTo reach the location of the flames\nthat will enhance your sword, it is\nnecessary for ######you to overcome this\ntrial and undergo spiritual growth.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 20), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 62), ('param2', 1), ('next', 24), ('param3', 40)])
			give_item(17 0x11);
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 4), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 3), ('param3', 40)])
			printf("That is your ###############.\n\n\n\nWhen this vessel is full, it will signify\nyou have successfully completed the\ntrial, allowing your spirit to grow.\n\nThis, in turn, will allow the goddess\nto bless you with a #####new power#####.")
			flw_6:
			printf("To fill the ###############, you need to\nsearch for something known as a\n#########+#####. There are many of \nthem spread across this strange world.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 8), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 11), ('param3', 40)])
			printf("######Master, do you see the glowing\nobject just in front of you?")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 13), ('param3', 39)])
			printf("That is a #########+#####.\nYou will need to collect #####15 #####of them.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 14), ('param3', 40)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 71), ('param3', 6)])
			switch (loadzone_temp_flags[10 /* 0x8 04 */]) {
			  case 0:
				goto flw_74
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 72), ('param3', 39)])
				printf("However, this is not as simple a task\nas it would seem. Your work in this\nrealm is referred to as a #####trial##### for\ngood reason.")
				goto flw_67
			}
		}
	}
}

void entrypoint_250_01() {
	start()
	printf("######Master ####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 61), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 62), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 60), ('param3', 39)])
	printf("The unusual liquid substance that\ncovers that area is known as #####Waking\nWater#####, and it has certain unique\nproperties.\nIf you make contact with Waking\nWater, the #####Guardians will be\nimmediately alerted to your presence#####.\n\nPools of Waking Water are located all\nthroughout the area. I suggest you\nwatch where you step...")
	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_250_02() {
	start()
	goto flw_6
}

