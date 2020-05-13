void entrypoint_004_106() {
	start()
	printf("If you can dig up all the Rupees in\nMr. Tubert's #####Thrill Digger#####, you'll\nreceive a rare treasure.")
}

void entrypoint_004_107() {
	start()
	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
	  case 0:
		printf("Deep underground, below this volcano,\nyou'll find treasure-loving #####Mogmas#####.\n\n\nThese days, most of them are content\nwith staying down in their lair, where\nthey do nothing but relax all day.")
	  case 1:
		flw_59:
		printf("A #####dragon##### is said to live at the #####peak #####of\nthis volcano. You're nowhere near the\npeak, though!")
		printf("Do you want to hear that again?\n#####Yes.#####No.")
		switch (choice(2, 0)) {
		  case 0:
			goto flw_59
		  case 1:
			printf("Rumor has it you're some kind of\ngenius that remembers things perfectly\nthe first time you hear them...")
		}
	}
}

void entrypoint_004_014() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 2)])) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 20), ('param4', 2), ('param5', 4)])) {
		  case 0:
			printf("Your pouch is full, but so is your space at\nthe #####Item Check#####. The item has been put\nback in the treasure chest.")
		  case 1:
			printf("Your pouch is full, so the item was sent to\nthe #####Item Check#####!")
		}
	  case 1:
	}
}

void entrypoint_004_108() {
	start()
	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
	  case 0:
		printf("I hear the #####dragon##### that lives at the\ntop of the volcano is awfully chatty.\n\n\nSo chatty, they say, that he's even\nwilling to talk about matters outside\nhis own realm!")
	  case 1:
		flw_52:
		printf("The word going around is that a #####dragon#####\nwrapped in flames lives atop this\nvolcano.\n\nThe thing is, it isn't so easy to visit.\nHe's made his lair #####somewhere so hot\n#####that normal folks can't bother him.")
		printf("Do you want to hear that again?\n#####Yes.#####No.")
		switch (choice(2, 0)) {
		  case 0:
			goto flw_52
		  case 1:
			printf("Rumor has it you're some kind of\ngenius that remembers things perfectly\nthe first time you hear them...")
		}
	}
}

void entrypoint_004_015() {
	start()
	printf("Hey! ########! You're not\nthinking of running away, are you?\n\n\nHah! Surely you jest! A real man\nalways finishes what he starts!")
}

void entrypoint_004_109() {
	start()
	printf("Word is you can earn a #####Piece of Heart#####\nif you set a great time on the #####Rickety\nCoaster#####.")
}

void entrypoint_004_016() {
	start()
	printf("####How long do you want to sleep?###\n#####Until morning.#####Until night.#####Don't sleep.")
	switch (choice(3, 1)) {
	  case 0:
	  case 1:
	  case 2:
	}
}

void entrypoint_004_110() {
	start()
	printf("They say somewhere in this vast desert,\nthere's a #####dragon##### who loves putting the\nabilities of those who visit him to some\nkind of test.\nIf you can master the challenges he\nthrows at you, you'll be rewarded with\na #####shield stronger than any other#####.")
}

void entrypoint_004_017() {
	start()
	printf("Descend into this area?\n#####Yes.#####No.")
	switch (choice(2, 0)) {
	  case 0:
	  case 1:
	}
}

void entrypoint_004_111() {
	start()
	printf("It's been said that the best way to snag\na rare insect is to approach it slowly\nand use a #####Big Bug Net#####.")
}

void entrypoint_004_018() {
	start()
	printf("A report, ######Master.\n\n\n\nAn #####unusual phenomenon##### is taking place\nin Faron Woods, making it impossible\nto descend directly into them at\nthe moment.")
}

void entrypoint_004_001() {
	start()
	printf("####The door is locked tight and\nwill not open.###")
}

void entrypoint_004_112() {
	start()
	printf("I've heard some of the #####Goddess Cubes\n#####unlock all sorts of treasure when they\nfly up into the sky. Some even hold\na #####Piece of Heart#####.")
}

void entrypoint_004_019() {
	start()
	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
	  case 0:
		printf("Point to your preferred descent area\nwith #####, and confirm your destination\nby pressing #####.")
	  case 1:
		printf("A report, ######Master.\n\n\n\nIt is possible to descend to a specific\n#####bird statue##### on ######the surface after you\nhave already visited it and I have\nmemorized its location.\nTo do this, point to the area you want\nto descend to with ##### and press #####\nto confirm your destination.")
		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
	}
}

void entrypoint_004_002() {
	start()
	printf("####The sign is broken. It's not\npossible to read it.###")
}

void entrypoint_004_113() {
	start()
	printf("Apparently, if you draw a symbol of\nmoney on certain walls, you can make\nan easy fortune.")
}

void entrypoint_004_003() {
	start()
	printf("####You can't read the sign from\nthis angle.###")
}

void entrypoint_004_114() {
	start()
	printf("#########$ #####cause something to\nhappen when they are thrown on bugs\nor monsters. They can be collected\nfrom sparkly mushrooms.")
}

void entrypoint_004_115() {
	start()
	printf("Oddly enough, it seems that drawing\na circle on certain strange walls will\nproduce something round.")
}

void entrypoint_004_004() {
	start()
	printf("####The door is sealed shut.###")
}

void entrypoint_004_116() {
	start()
	printf("They say it's possible to summon\n#####Fairies##### by drawing three triangles\nupon certain walls.")
}

void entrypoint_004_117() {
	start()
	printf("Rumor has it there's a #####Piece of Heart\n#####hidden somewhere nearby.")
	switch (scene_flags[104 /* 0xC 01 */]) {
	  case 0:
		printf("Oh, but since you've already picked it\nup, this obviously doesn't come as a\nbig surprise to you. Hmph.")
	  case 1:
		printf("The thing is, to get to it you need to be\nable to burrow like a #####Mogma#####.")
	}
}

void entrypoint_004_100() {
	start()
	printf("Boing-oing!")
}

void entrypoint_004_008() {
	start()
	printf("Do you want to leave this\nSilent Realm?\n#####Leave.#####Stay.")
	switch (choice(2, 0)) {
	  case 0:
	  case 1:
	}
}

void entrypoint_004_101() {
	start()
	printf("You can get a valuable treasure if\nyou succeed in cutting the bamboo\nstalk #####over 28 times #####at #####Clean Cut#####.\n\nPeater, who was formerly the teen\nheartthrob of Skyloft, claims to hold\nthe record with 43 slices. Or so\nhe says...")
}

void entrypoint_004_102() {
	start()
	printf("You may get rare and difficult-to-\ncatch bugs if you finish the Bug\nWrangler challenge in #####Bug Heaven#####\n#####within two minutes#####.")
}

void entrypoint_004_103() {
	start()
	printf("#####Butterflies##### tend to gather around \n#####Gossip Stones##### like myself.\n\n\nIf you find a spot swarming with\nbutterflies, play a##### tune of great beauty#####\nand a Gossip Stone might just pop\nout of the ground with a boing-oing!")
}

void entrypoint_004_104() {
	start()
	printf("Rumor has it that drawing an arrow\nshape on certain walls will cause an\nobject of similar shape to appear.")
}

void entrypoint_004_105() {
	start()
	printf("They say drawing a symbol of love upon\ncertain walls will heal your wounds.")
}

