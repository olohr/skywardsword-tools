void entrypoint_451_01() {
	start()
	printf("I have identified the item that the...\nhighly unusual man on Fun Fun Island\nsays was lost.\n\nWe can call the Scrap Shop robot to\ncome and retrieve it. Would you like \nme to call the robot?\n#####Yes!#####No, thanks.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
	  case 0:
		printf("######Master, I will send word to the robot\nusing telepathic transmission.")
	  case 1:
		printf("Yes, ######Master. If you change your mind\nand decide to retrieve it, please\nexamine it again.")
	}
}

void entrypoint_451_02() {
	start()
	printf("#####dMistress Fi, zrrpt! You called?\n\n\n\nWhoa, zrrft... This place seems\nstrangely familiar, brrzrrt...\n\n\nBzzzt, so you want me to carry this\nthing?")
}

void entrypoint_451_03() {
	start()
	printf("#####dI'll be waiting for you in the sky,\nso don't take too long, vrrt!")
}

void entrypoint_451_04() {
	start()
	printf("######Master, I suggest that we head back to\nthe sky and return this party wheel to\nits owner as soon as possible.")
	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = true;
	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 721), ('next', 22), ('param3', 52)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 722), ('next', 24), ('param3', 52)])
	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
}

void entrypoint_451_05() {
	start()
	printf("#####dOK, OK, zrrft... You just sit tight\nthere and stay out of my way,\nMaster Shortpants, bzzzt!")
}

void entrypoint_451_06() {
	start()
	printf("I have identified the item that the\nunusual man on Fun Fun Island says\nwas lost.\n\nUnder usual circumstances, we could\ncall the Scrap Shop robot to come and\nretrieve it.\n\nHowever, the robot is currently\ncarrying out some duties at Eldin\nVolcano, so we cannot call him here.\n\nI recommend returning to Eldin\nVolcano and verifying the status\nof the robot.")
}

