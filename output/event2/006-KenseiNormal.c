void entrypoint_006_004() {
	start()
	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
	  case 0:
		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
		  case 0:
			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
			  case 0:
				printf("Well done, ######Master. You've successfully\ncollected three parts of the Song of the\nHero.\n\nI recommend you return to the sky\nand meet with the great sky spirit,\n#####Levias#####, to complete the song.")
				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
			  case 1:
				printf("Well done, ######Master. You have acquired\nthe second part of the Song of the\nHero. The final part can be found\nsomewhere within #####Lanayru Desert#####.")
			}
		  case 1:
			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
			  case 0:
				printf("Well done, ######Master. You have acquired\nthe second part of the Song of the\nHero. The final part can be found\nsomewhere within #####Faron Woods#####.")
			  case 1:
				printf("######Master, the melody you just acquired is\none part of the #####Song of the Hero#####.\n\n\nI recommend you seek out the other\ntwo dragons in their respective areas\nto learn the other two parts of the\nsong.")
			}
		}
	  case 1:
		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
		  case 0:
			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
			  case 0:
				printf("Well done, ######Master. You have acquired\nthe second part of the Song of the\nHero. The final part can be found\nsomewhere within #####Eldin Volcano#####.")
				flw_40:
				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
			  case 1:
				printf("######Master, the melody you just acquired is\none part of the #####Song of the Hero#####.\n\n\nI recommend you seek out the other\ntwo dragons in their respective areas\nto learn the other two parts of the\nsong.")
				goto flw_40
			}
		  case 1:
			printf("######Master, the melody you just acquired is\none part of the #####Song of the Hero#####.\n\n\nI recommend you seek out the other\ntwo dragons in their respective areas\nto learn the other two parts of the\nsong.")
			goto flw_40
		}
	}
}

void entrypoint_006_005() {
	start()
	printf("######Master, I have information for you.\nYou have obtained a map of this area.\nYou can view it by pressing #####.#####\n\nThe position of doors and their locks,#####\nas well as the position and status of\ntreasure chests,##### can be confirmed on\nthe map with marks such as #####.\nHowever, be aware that you will be\n#####unable to use beacons##### here due to\nthe indoor nature of this environment.")
	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
}

void entrypoint_006_006() {
	start()
	printf("A report, ######Master ####.\nI have detected the aura of a Trial Gate\nnearby.\n\nIf you can pinpoint the origin of this\naura using dowsing, I conjecture the\nsong you learned at the Isle of Songs,\nFarore's Courage, will reveal the gate.")
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
}

void entrypoint_006_007() {
	start()
	printf("A report, ######Master. The volcanic activity\nthat impeded your return to the sky\nearlier has ceased.\n\nIt is now possible to return to the sky\nagain.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 4), ('next', -1), ('param3', 7)])
}

void entrypoint_006_008() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3), ('next', 48), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 99), ('next', 49), ('param3', 16)])
	printf("A report, ######Master ####.\nI have detected the aura of a Trial Gate\nnearby.\n\nIf you can pinpoint the origin of this\naura using dowsing, I conjecture the\nsong you learned at the Isle of Songs,\nFarore's Courage, will reveal the gate.")
	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 51), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 15), ('next', -1), ('param3', 42)])
}

void entrypoint_006_001() {
	start()
	printf("After winning the race in the Wing\nCeremony, you went on a flight with\n#####Zelda##### where you encountered a storm\nthat caused Zelda to fall to the surface.\nShortly thereafter, you entered an\nold chamber and claimed the\nGoddess Sword in which I, #####Fi#####, reside.\n\nYou then used the power of an ancient\n#####tablet #####to open a #####column of light\n#####leading to the land below.")
}

void entrypoint_006_002() {
	start()
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
	switch (story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */]) {
	  case 0:
		switch (story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */]) {
		  case 0:
			switch (story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */]) {
			  case 0:
				printf("Thrust your sword into the center of\nthe mark and open the way to the final\nSilent Realm.")
				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
			  case 1:
				printf("Thrust your sword into the center of\nthe mark and open the way to a new\nSilent Realm.")
				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
			}
		  case 1:
			printf("Thrust your sword into the center of\nthe mark and open the way to a new\nSilent Realm.")
			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
		}
	  case 1:
		printf("######Something here is reacting to our\nperformance of Farore's Courage.\nI have confirmed the appearance of\na strange mark on the ground.\nI calculate a 90% possibility that this\nmark is a Trial Gate, as mentioned\nby the goddess statue we heard\nfrom on the Isle of Songs.\nThrust your sword into the center\nof the mark on the ground before you.")
		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
	}
}

void entrypoint_006_003() {
	start()
	printf("")
	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
}

