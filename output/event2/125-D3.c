void entrypoint_125_04() {
	start()
	printf("Seek the #####gemstones##### that sleep\nbehind each statue. If you strike\nthem in order from lowest to\nhighest, the door will open.")
}

void entrypoint_125_05() {
	start()
	printf("######Master, look over that way.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 22), ('param3', 39)])
	printf("The design carved into the floor there\nis the #####mark of Farore#####.\n\n\nI detect the sacred power of the\n#####Triforce##### emanating from its vicinity.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 23), ('param3', 39)])
	printf("To reach the area where that mark is\nlocated, I propose you pass through the\ndoor in front of you.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', -1), ('param3', 39)])
}

void entrypoint_125_06() {
	start()
	printf("######Master, look over that way.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 19), ('param3', 39)])
	printf("I have identified the design on the \nfloor there as the #####mark of Nayru#####.\n\n\nI detect the sacred power of the\n#####Triforce##### radiating from it.\nUnfortunately, the way leading to\nthe mark is closed off.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 38), ('param3', 39)])
	printf("There appears to be a #####Timeshift Orb#####\nover there.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 28), ('param3', 39)])
	printf("I propose you utilize the nearby\n#####Timeshift Orb##### to open a path to\nthe #####mark#####.")
}

void entrypoint_125_07() {
	start()
	printf("######Master, look over that way.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 20), ('param3', 39)])
	printf("The symbol visible on the floor here is\nthe #####mark of Din#####.\n\n\nI detect the sacred power of the\n#####Triforce##### emanating from its vicinity.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 32), ('param3', 39)])
	printf("Unfortunately, there seems to be no\nway to reach the mark from your\ncurrent position.\n\nI recommend you find another\nentrance into this chamber.")
	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
}

void entrypoint_125_08() {
	start()
	switch (scene_flags[122 /* 0xE 04 */]) {
	  case 0:
		printf("######Master, I have information for you.\nThe chamber you stand in now is the\nsame one where you previously spotted\nthe #####mark of Din#####.")
		flw_39:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 34), ('param3', 39)])
		printf("If you can find a way through the river\nof magma, I calculate a 60% chance\nyou will arrive at one of the sources\nof sacred power.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 40), ('param3', 39)])
		printf("I recommend you press forward in\nsearch of the power present here.")
	  case 1:
		printf("######Master, I have information for you.\nI've detected a source of sacred power\nsomewhere within this chamber.")
		goto flw_39
	}
}

void entrypoint_125_11() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 43), ('param3', 39)])
	printf("######Master ####, you have\nreached the mark. Offer your sword\nto it.\n\nIf you do this, I calculate a high\nprobability that you will be shown\nthe way to a part of the #####Triforce#####.")
}

void entrypoint_125_12() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 45), ('param3', 39)])
	printf("######Master ####, you have\nreached the mark. Offer your sword\nto it.\n\nIf you do this, I calculate a high\nprobability that you will be shown\nthe way to a part of the #####Triforce#####.")
}

void entrypoint_125_13() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 47), ('param3', 39)])
	printf("######Master ####, you have\nreached the mark. Offer your sword\nto it.\n\nIf you do this, I calculate a high\nprobability that you will be shown\nthe way to a part of the #####Triforce#####.")
}

void entrypoint_125_01() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 59), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 61), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 53), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 1), ('param3', 6)])
	printf("######Master, I have information to report.\nI've detected three sources of sacred\npower within this building. This power\nclearly radiates from the ###########Triforce#####.\nI've triangulated the three sources of\npower and marked them on your map\nas #.")
	scene_flags[20 'Skyloft: Sky Keep'][29 /* 0x2 20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
}

void entrypoint_125_03() {
	start()
	switch (story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 9), ('param3', 30)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 34)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 3), ('next', 3), ('param3', 17)])
		printf("######Master, I have new information for\nyou. Analysis indicates that the shaking\nyou felt just now was caused by a\n#####################change in the building's structure#####.")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 30)])
		switch (scene_flags[13 /* 0x0 20 */]) {
		  case 0:
			printf("Now that the building's structure has\nbeen altered, it appears you can\nenter the adjacent room.")
			flw_5:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 11), ('param3', 34)])
			printf("I propose you use this #####control panel##### to\nmove through the structure and collect\nthe components of the #####Triforce#####.")
			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
		  case 1:
			printf("By altering the internal structure of\nthis building, you will be able to gain\naccess to other chambers.")
			goto flw_5
		}
	}
}

