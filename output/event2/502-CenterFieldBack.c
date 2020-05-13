void entrypoint_502_06() {
	start()
	switch (story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */]) {
	  case 0:
		story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */] = true;
		flw_73:
		loadzone_temp_flags[4 /* 0x9 10 */] = true;
	  case 1:
		story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */] = true;
		goto flw_73
	}
}

void entrypoint_502_07() {
	start()
	switch (story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */]) {
	  case 0:
		printf("You gotta get out there and whale on\nDemise until he cries like a creepy\nlittle baby!\n\n######I'm counting on you, \n####! We all are!")
	  case 1:
		printf("######Phew! That was WAY too close back\nthere. I got a serious sweat going!\n\n\n######Can you imagine what would've\nhappened if I hadn't pulled off one of\nmy famous Groose maneuvers to\ncatch #####Zelda#####?\n######I'll stay here and make sure she's\nprotected, so don't worry about her\none bit. Just get out there and clobber\nthat Demise creep!\n######I'm counting on you,\n####! We all are!")
		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
	}
}

void entrypoint_502_08() {
	start()
	printf("######Master ####, have you\nfinished with your preparations for\nthe battle ahead?\n#####All ready!#####Not yet...")
	switch (choice(2, 0)) {
	  case 0:
		printf("######Yes, Master. Let us proceed to the\nbattle at once.")
		changeScene(11, 0) // 
	  case 1:
		printf("######Understood, Master. Return when you\nare fully prepared for the fight ahead.")
	}
}

void entrypoint_502_09() {
	start()
	printf("######Master ####, do you wish\nto retreat temporarily in order to\nresupply yourself for the final battle?\n#####Yes!#####I'm fine.")
	switch (choice(2, 0)) {
	  case 0:
		printf("######Understood, Master. Please return\nhere when your preparations are\ncomplete.")
		changeScene(10, 0) // 
	  case 1:
		printf("######Understood, Master.")
	}
}

void entrypoint_502_01() {
	start()
	switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
	  case 0:
		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
		  case 0:
			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
			  case 0:
				printf("######You've yet to complete the great \nmission entrusted to you.\n\n\nFor Zelda, who still waits in everlasting\nslumber, you must fulfill the destiny\nthat is only yours to complete.")
			  case 1:
				switch (scene_flags[37 /* 0x5 20 */]) {
				  case 0:
					switch (scene_flags[103 /* 0xD 80 */]) {
					  case 0:
						printf("######I sense great vitality in this sprout.\nWith any luck, it shall grow into a stout\ntree that will live on for millennia.")
					  case 1:
						printf("######Ah, you've planted a seedling!\n\n\n\nI sense great vitality in this sprout.\nWith any luck, it shall grow into a stout\ntree that will live on for millennia.")
						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
					}
				  case 1:
					switch (scene_flags[102 /* 0xD 40 */]) {
					  case 0:
						printf("######A tree that grows strong for thousands\nof years... If only I could find the\n#####seedling##### of such a tree...")
					  case 1:
						printf("#####.#####.#####.######Hmm...\n\n\n#####What's up?#####See you later.")
						switch (choice(2, 0)) {
						  case 0:
							printf("######Oh, it's a matter of no great concern...")
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 58), ('param3', 32)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 38), ('param3', 6)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 101), ('next', 39), ('param3', 17)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 59), ('param3', 17)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 40), ('param3', 6)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 41), ('param3', 39)])
							printf("Do you see that sunny patch of earth\nover there?\n\n\nI thought it might be nice to plant a\ntree of some sort there.\n\n\nI imagine it would please #####Zelda##### greatly\nto see a great tree welcoming her\nback when she wakes from her slumber.")
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 61), ('param3', 6)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 42), ('param3', 39)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 43), ('param3', 17)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 44), ('param3', 17)])
							printf("Sadly, it's a rare tree that grows strong\nfor thousands of years on end. If only\nI could find the #####seedling##### of such a\nhearty specimen...")
							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
						  case 1:
							printf("Hmm...")
						}
					}
				}
			}
		  case 1:
			switch (scene_flags[101 /* 0xD 20 */]) {
			  case 0:
				flw_28:
				printf("#####\nDo not fear for #####Zelda#####. I will watch\nover her here. Go now and fulfill\nyour destiny.")
			  case 1:
				printf("######I see you've said good-bye.\n\n\n\nNow you must keep the promise you\nmade to her. You must find the\n#####Triforce#####.\n\nReturn to your time. There is work to\nbe done there.")
				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
				goto flw_28
			}
		}
	  case 1:
		switch (scene_flags[82 /* 0xB 04 */]) {
		  case 0:
			printf("######You stand in the past, ages before your\nplace in time. Here, the goddess, Hylia,\nhas only just sealed away #####Demise#####...\n\nYou will have many questions. But for\nnow, you must proceed through the\ngreat doors at the back of the room.\n\nIt is there that the person you've risked\nlife and blood to defend waits for you.\n")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 10), ('param3', 31)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 11), ('param3', 32)])
			printf("######...At last. I've been expecting you,\n####.\n\n\nYou are doubtless overwhelmed, so I\nwill explain things as simply as I can.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 5), ('param3', 39)])
			printf("This is the##### Temple of Hylia#####, though it \nwill come to be known as the #####Sealed\nTemple##### sometime in the future.\n\nYou stand in the past, ages before your\nown time. Here the goddess, Hylia,\nhas only just sealed away #####Demise#####...\n\nAnd little time has passed since the\ngoddess sent the outcropping of rock\ninto the sky that would one day\nbecome Skyloft.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 6), ('param3', 39)])
			printf("######It is true to its name. You have passed\nthrough the Gate of Time to an era\nin the distant past.\n\nYou will have many questions. But for\nnow, you must proceed back through\nthe great doors behind you.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 14), ('param3', 39)])
			printf("It is there that the person you've risked\nlife and blood to defend waits for you.")
			story_flags[349 /* us: 805A9B01 0x08, jp: 805ACD81 0x08 */] = true;
			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
			  case 0:
				story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
				flw_17:
				scene_flags[10 'Sealed Grounds'][82 /* 0xB 04 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
			  case 1:
				goto flw_17
			}
		}
	}
}

void entrypoint_502_02() {
	start()
	switch (scene_flags[85 /* 0xB 20 */]) {
	  case 0:
		printf("###########Ghirahim #####ran through the #####great doors\nat the front of the temple#####. If you\nhurry, you may yet stop him!")
	  case 1:
		printf("######Urgh... ####\n####...?\nIt's Ghirahim...####\n He appeared out of\nthin air and got the drop on me.\n\nDon't worry about me... You must\nchase after him!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 23), ('param3', 39)])
		printf("He ran through the #####great doors ##########at the\nfront of the temple#####. You may yet catch\nhim before it's too late. Hurry!")
		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
	}
}

void entrypoint_502_03() {
	start()
	switch (scene_flags[104 /* 0xC 01 */]) {
	  case 0:
		printf("######Do not panic. #####Zelda #####is fine. She rests\nin the back room of the temple.\n\n\n######Focus on the battle at hand. Defeat\nDemise and save our world,\n####.")
	  case 1:
		printf("######Do not panic. #####Zelda #####is fine. She rests in\nthe back room of the temple.\n\n\n######I never expected Demise would rise\nagain. ####\nIt seems now that the fate of the\nworld rests solely in your hands,\n##########!")
		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
	}
}

void entrypoint_502_04() {
	start()
	printf("######Master ####, I have\nimportant information for you.\n\n\nOnce you enter this portal, my analysis\nindicates a 0% chance that you will be\nable to return, unless you are able\nto vanquish your foe.\nAre you ready to proceed?\n#####I'm ready!#####Not yet...")
	switch (choice(2, 0)) {
	  case 0:
		printf("######Understood, Master ####.#####\nKnow that even in the place that lies\nbeyond this portal, I will be with you...\n\n######And, Master...#####good luck.")
	  case 1:
		printf("######Understood, Master. When you are\nready to proceed, please return to this\nlocation.")
	}
}

void entrypoint_502_05() {
	start()
	printf("####-######You wretched brat!")
}

