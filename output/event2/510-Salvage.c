void entrypoint_510_01() {
	start()
	printf("This is the #####Windmill Propeller #####you\nwere searching for.\n\n\nIt is now possible to retrieve this using\nthe robot whose services we have\nenlisted.\n\nWould you like me to call the robot?\n#####Yes.#####No.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
	  case 0:
		printf("I will send word to the robot using\ntelepathic transmission, ######Master.")
	  case 1:
		printf("Yes, ######Master. If you change your mind\nand wish to retrieve it, please examine\nit again.")
	}
}

void entrypoint_510_02() {
	start()
	printf("#####dMistress Fi! I hope you weren't waiting\nlong, bzzzt!\n\n\nSo, zrrrbt, you want me to carry this?!")
}

void entrypoint_510_03() {
	start()
	printf("#####dI'll be waiting for you up in the sky,\nso don't take too long, vrrrt!")
}

void entrypoint_510_04() {
	start()
	printf("######Master, I suggest that we also return to\nthe sky and collect the propeller as\nsoon as possible.")
	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = true;
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
	story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */] = true;
}

void entrypoint_510_05() {
	start()
	printf("#####dHey! Master Shortpants! You're in my\nway here, zrrpt! I said, get out of the\nway, vrrrrrt!")
}

