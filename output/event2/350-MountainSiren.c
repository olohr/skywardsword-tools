void entrypoint_350_00() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 13), ('param3', 39)])
	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
	  case 0:
		printf("We're here, ####!\nShow me what you've got!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 14), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 16), ('param3', 40)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		switch (scene_flags[102 /* 0xD 40 */]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 1), ('param3', 9), ('param4', 2), ('param5', 6)])) {
			  case 0:
				printf("######Master ####, I can\nunfortunately confirm that you\nhave failed to pass the trial.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 22), ('param3', 40)])
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 2), ('param3', 9), ('param4', 2), ('param5', 8)])) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 3), ('param3', 9), ('param4', 2), ('param5', 10)])) {
					  case 0:
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 4), ('param3', 9), ('param4', 2), ('param5', 12)])) {
						  case 0:
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 5), ('param3', 9), ('param4', 2), ('param5', 14)])) {
							  case 0:
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 6), ('param3', 9), ('param4', 2), ('param5', 16)])) {
								  case 0:
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 7), ('param3', 9), ('param4', 2), ('param5', 18)])) {
									  case 0:
										printf("######Master, in addition to the #####Guardians#####\nwho will attack you, there are also two\ntypes of #####Watchers #####that search for\nintruders #####on the ground and in the sky#####.\nThe two types of Watchers exhibit\ndramatically different behavior, so be\nsure you understand how to avoid\ndetection by both.")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 23), ('next', 44), ('param3', 29)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 23), ('next', 45), ('param3', 29)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 23), ('next', 32), ('param3', 29)])
										flw_32:
										printf("Collect all the #####tears##### within the Silent\nRealm. I shall await your return here.")
										flw_49:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 30), ('param3', 40)])
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
									  case 1:
										printf("The locations of #####tears #####that you have\npreviously collected will be #####marked\non the map#####, so make good use of that.\n\nConfirm the locations of all 15 tears\nfirst to increase your chances of\nsuccessfully completing the trial.")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 23), ('next', 32), ('param3', 28)])
										goto flw_32
									}
								  case 1:
									printf("I suggest using smart tactics to your\nadvantage. Try #####leaving easy-to-collect\ntears #####for when you are being pursued.")
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 23), ('next', 32), ('param3', 28)])
									goto flw_32
								}
							  case 1:
								printf("######Master, the chances of your not being\nthe chosen one are increasing...\n\n\nRepeated attempts at this trial have\nscattered your concentration and made\nyour performance erratic. I suggest\nyou rest awhile before trying again.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 23), ('next', 32), ('param3', 28)])
								goto flw_32
							}
						  case 1:
							printf("#####Two types of Watchers #####patrol the\nrealm, looking for intruders. I highly\nsuggest you take caution.\n\nSo long as you do not step into their\nlight, you will remain undetected\nby #####flying Sky Watchers#####.\n\nHowever, the #####Earth Watchers#####, who\n#####hover near the ground#####, will give chase\nif you come too close to them, so #####stay\nalert #####and maintain a safe distance.")
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 23), ('next', 32), ('param3', 28)])
							goto flw_32
						}
					  case 1:
						printf("The locations of #####tears##### you have\ngathered during your trial are\n#####marked on the map#####.\n\nYou will have an easier time\ncompleting your task if you\nfirst set out to discover the\nlocations of all 15 tears.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 23), ('next', 32), ('param3', 28)])
						goto flw_32
					}
				  case 1:
					printf("######Master, so long as you have the will and\ndetermination, you can retry a trial\nas many times as you like.\n\nA good strategy is #####to find, but then\ndeliberately not pick up#####, the most-\neasily-accessible ##########tears##### #####until you are\ndiscovered and really need one.\nCollect the 15 #####tears##### and complete the\ntrial. I will await your return in the\noutside world.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 23), ('next', 49), ('param3', 28)])
					goto flw_49
				}
			  case 1:
				printf("######Master ####...")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 18), ('param3', 40)])
				printf("When your ############### is filled with\n15 #####tears#####, your spirit will grow and you\nwill be blessed by the goddess with a\nnew power.\n######Master, I will await your return in the\noutside world.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 23), ('next', 49), ('param3', 28)])
				goto flw_49
			}
		  case 1:
			printf("######Master ####...")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 2), ('param3', 40)])
			printf("You stand within #####Din's Silent Realm#####,\nthe third trial. It will test the limits of\nyour #####power#####.\n\nTo locate the last flame that will\nenhance your sword, you must first\ncomplete this final challenge and\nachieve spiritual growth once again.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 7), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 62), ('param2', 1), ('next', 11), ('param3', 40)])
			give_item(17 0x11);
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 9), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 6), ('param3', 40)])
			printf("When your vessel is full, your spirit\nwill grow and you will be entrusted\nwith a #####new power #####by the goddess.\n\nDo you have any questions?\n#####Yes!#####No.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 2)])) {
			  case 0:
				printf("Which topic do you wish to review?\n\n\n#####The #####?#####Guardians?#####Waking Water?#####Never mind.")
				flw_51:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 20)])) {
				  case 0:
					printf("Yes, ######Master.\n\n\n\nTo fill the ###############, you need to\nlocate and collect every #########, \n#####scattered across this Silent Realm.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 58), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 56), ('param3', 40)])
					printf("######Master, do you see the glowing\nobject a ways in front of you?")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 54), ('param3', 39)])
					printf("That is a #########,#####.\nYou will need to collect #####15 #####of them.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 1), ('next', 53), ('param3', 40)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 77), ('param3', 6)])
					flw_77:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 78), ('param3', 39)])
					printf("Do you have any further questions?\n\n#####The #####?#####Guardians?#####Waking Water?#####Never mind.")
					goto flw_51
				  case 1:
					printf("######Understood, Master.\nAllow me to explain.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 66), ('param3', 39)])
					printf("If you take even a single step outside\nthe protective circle you stand in, the\n#####Guardians #####of this realm will wake up\nand pursue you, ######Master.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 65), ('param3', 39)])
					printf("If a #####Guardian #####manages to land even a\nsingle hit on you, your spirit will\nshatter and you will fail the trial.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 61), ('param3', 39)])
					printf("You must collect the #####tears##### scattered\nthroughout this area and fill the\n########## #####without\nbeing hit by an attack.")
					goto flw_77
				  case 2:
					printf("######Understood, Master.\nAllow me to explain.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 69), ('param3', 39)])
					printf("The unusual liquid substance that\ncovers that area is known as #####Waking\nWater#####, and it has certain unique\nproperties.\nIf you make contact with Waking\nWater, the #####Guardians will be\nimmediately alerted to your presence#####.\n\nPools of Waking Water are located all\nthroughout the area. I suggest you\nwatch where you step...")
					goto flw_77
				  case 3:
					flw_70:
					printf("Understood, ######Master.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 72), ('param3', 39)])
					printf("######Master, I await your return in the\noutside world.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 75), ('param3', 40)])
					scene_flags[23 'Eldin: Silent Realm'][102 /* 0xD 40 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 23), ('next', 76), ('param3', 28)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
				}
			  case 1:
				goto flw_70
			}
		}
	}
}

