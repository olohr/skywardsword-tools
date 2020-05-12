void entrypoint_351_10() {
	start()
	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
	  case 0:
		printf("######Hey, what gives?! You said you'd take\nme to the sky, but then you backed out\nof our deal! Now I'm back here.\n\nIf you're going to make a promise\nlike that, you better follow through!")
		flw_19:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 20), ('param3', 35)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 21), ('param3', 16)])
		printf("This individual's capabilities match\nperfectly to the types of duties\nexpected of an employee at the Lumpy\nPumpkin.\nDo you want to call the robot and\ntransport this individual?\n#####Yes.#####No.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 4)])) {
		  case 0:
			printf("######Master, I will send word to the robot\nusing telepathic transmission.")
		  case 1:
			printf("Yes, ######Master. If you change your mind\nand decide to retrieve it, please\nexamine it again.")
		}
	  case 1:
		printf("######So we meet again, eh? I gotta thank ya\nfor your help last time!\n\n\nSee, I've been searchin' for new\ntreasure spots, but I can't find a\nsingle bauble or bit of treasure.\n\nMaybe I'm just gettin' woozy from\nworking so long in this heat.\n\n\n######Sometimes I wish I could find a job that\nreally played to my strengths, yeah...\nsomethin' in a cool climate. Then I'd\nbe set!\n#####I know a place!#####Keep dreaming.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 2)])) {
		  case 0:
			printf("######So ya know a place with work that I'd\nbe good at?\n\n\nAnd it's in the sky?!\n...\n...\nI LOVE THE SKY!\nWhere do I sign up?####\n I'm tellin' ya,\nI'm in! Let's do this thing!####\n")
			goto flw_19
		  case 1:
			printf("######Right...####\n Well, yeah, I guess I could try\nto stick it out for a little while longer...")
		}
	}
}

void entrypoint_351_11() {
	start()
	printf("######Master, I suggest that we also return\nto the sky and accompany the Mogma\nto his destination quickly.")
	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = true;
	story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
}

void entrypoint_351_12() {
	start()
	printf("#####dYou don't have to tell me twice, zrrbt!")
}

void entrypoint_351_01() {
	start()
	printf("I have located a substance that closely\nresembles the material used in the\nfortune-teller's crystal ball... It should\nmake a suitable replacement.\nShall I call the robot to collect it?\n#####Yes.#####Not now.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
	  case 0:
		printf("######Master, I will send word to the robot\nusing telepathic transmission.")
	  case 1:
		printf("Yes, ######Master. If you change your mind\nand decide to retrieve it, please\nexamine it again.")
	}
}

void entrypoint_351_02() {
	start()
	printf("#####dMistress Fi! I'm heeeeereeeee, zrrpt!\n\n\n\nOh. You want me to carry this old\nthing, bzzt?")
}

void entrypoint_351_03() {
	start()
	printf("#####dI'll be waiting for you in the sky,\nso don't take too long, vrrt!!")
}

void entrypoint_351_04() {
	start()
	printf("######Master, I suggest we also return to\nthe sky and collect the crystal ball as\nsoon as possible.")
	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = true;
	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
}

void entrypoint_351_05() {
	start()
	printf("#####dHey, Master Shortpants! How come\nyou always get the easy jobs, zrrpt?")
}

