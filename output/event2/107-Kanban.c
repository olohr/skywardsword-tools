void entrypoint_107_04() {
	start()
	printf("##### Statue of the Goddess")
}

void entrypoint_107_21() {
	start()
	printf("Bath")
}

void entrypoint_107_56() {
	start()
	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 502), ('param2', 80), ('next', 152), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 26)])) {
	  case 0:
		printf("A report, ######Master.\n\n\n\nDue to your sword's enhancements, it is\nnow possible to use your #####dowsing##### ability\nto detect feelings of gratitude.\n\nI have added #####Gratitude##### #####Crystals##### to\nyour list of #####dowsing##### targets.######")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 19), ('next', 160), ('param3', 56)])
		printf("However, I sense that you have already\ngathered all of the gratitude possible,\n######Master. Congratulations.")
	  case 1:
		printf("A report, ######Master.\n\n\n\nDue to your sword's enhancements, it is\nnow possible to use your #####dowsing##### ability\nto detect feelings of gratitude.\n\nI have added #####Gratitude##### #####Crystals##### to\nyour list of #####dowsing##### targets.######")
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 19), ('next', -1), ('param3', 56)])
	}
}

void entrypoint_107_39() {
	start()
	printf("Our delicious pumpkin soup\nis best piping hot!")
}

void entrypoint_107_05() {
	start()
	printf("##### Skyloft Plaza")
}

void entrypoint_107_22() {
	start()
	printf("Sparring Hall")
}

void entrypoint_107_57() {
	start()
	printf("A report, ######Master.\n\n\n\nAnalysis indicates Loftwings cannot\nfly at night. Please return to your bed\nand rest, then depart during the day.")
}

void entrypoint_107_06() {
	start()
	printf("##### Knight Academy")
}

void entrypoint_107_58() {
	start()
	printf("A report, ######Master.\n\n\n\nI have determined that there is a #####Trial\nGate##### somewhere among these floating\nislands that can be opened by the\nSong of the Hero.\nI suggest you use your #####dowsing #####ability\nto locate it.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 162), ('param3', 58)])
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', 163), ('param3', 56)])
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
}

void entrypoint_107_23() {
	start()
	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
	  case 0:
		printf("#####Item Check Girl\n#####Peatrice's House")
	  case 1:
	}
}

void entrypoint_107_40() {
	start()
	printf("Now accepting applications\nfor workers to plow the\npumpkin fields!")
}

void entrypoint_107_07() {
	start()
	printf("No running in the halls!")
}

void entrypoint_107_24() {
	start()
	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
	  case 0:
		printf("Piper's House")
	  case 1:
	}
}

void entrypoint_107_59() {
	start()
	printf("######Congratulations, Master.\n\n\n\nYou have passed all of the trials.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 119), ('param3', 39)])
	printf("The ############### you just obtained is\nactually one of a pair, ######Master.\n\n\nAnother similar object with a mark\njust like the one you hold exists\nsomewhere on this island.\n\nCombining the two should open the\nway to the #####Triforce#####.\n\n\n##\n###I suggest that you search for that\nmatching stone.")
	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
}

void entrypoint_107_41() {
	start()
	printf("Skyloft is only a flap or three\nto the northwest!")
}

void entrypoint_107_25() {
	start()
	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
	  case 0:
		printf("Kukiel's House")
	  case 1:
	}
}

void entrypoint_107_08() {
	start()
	printf("Always dive from a designated\ndiving platform when\nmounting your Loftwing\nin Skyloft.")
}

void entrypoint_107_42() {
	start()
	printf("Karane + Caw...")
}

void entrypoint_107_26() {
	start()
	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
	  case 0:
		printf("Orielle & Parrow's House")
	  case 1:
	}
}

void entrypoint_107_09() {
	start()
	printf("Cleanliness is next to\nknightliness! Keep your\nsleeping quarters tidy.")
}

void entrypoint_107_60() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 129), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 356), ('next', 127), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 130), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 128), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 125), ('param3', 39)])
	printf("######Master ####, I have\nmemories of this island.\n\n\nIt is known as the #####Isle of Songs#####.\nSigns indicate that it was left here\nfor you by the goddess, ######Master.\n\nHowever, I am unable to determine a\nmeans of entering the structure ahead.\nI suggest you investigate the area.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 132), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_107_43() {
	start()
	printf("Rotate the center pedestal to\ncomplete the bridge that allows\nyou to step to the great tower\non the Isle of Songs.")
}

void entrypoint_107_27() {
	start()
	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
	  case 0:
		printf("#####Gear Peddler\n#####Rupin's House")
	  case 1:
	}
}

void entrypoint_107_61() {
	start()
	printf("######Master, I have confirmed the location\nof a second opening in the cloud\nbarrier. It is located in the skies to\nthe northeast.\nThis opening will allow you to access a\nnew area on the surface. I suggest\nyou fly there as soon as you complete\nnecessary preparations.")
}

void entrypoint_107_44() {
	start()
	printf("The bazaar is now closed.\nWe will be open again for\nbusiness tomorrow.\n\nFor urgent dealings, please\nvisit the merchant with whom\nyou have business at home.\n-Bazaar Peddler Association")
}

void entrypoint_107_10() {
	start()
	printf("########")
}

void entrypoint_107_28() {
	start()
	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
	  case 0:
		printf("Pipit's House")
	  case 1:
	}
}

void entrypoint_107_62() {
	start()
	printf("######I've confirmed the location of a third\nopening in the cloud barrier in the\nsky to the southwest.\n\nIt will allow you to reach a new area on\nthe surface. I suggest going there as\nsoon as you are suitably prepared.")
}

void entrypoint_107_45() {
	start()
	printf("Clean hands are happy hands!")
}

void entrypoint_107_11() {
	start()
	printf("Groose")
}

void entrypoint_107_29() {
	start()
	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
	  case 0:
		printf("#####Fortune-teller\n#####Sparrot's House")
	  case 1:
	}
}

void entrypoint_107_63() {
	start()
	printf("######Master ####...\n\n\n\nIt will be necessary for you to learn\nhow to execute the Spiral Charge\nmaneuver in order to rid Levias of\nhis blight.\nOwlan is currently waiting #####near the\nbird statue##### in the northeastern part\nof Skyloft. I suggest you go there\nto speak with him.")
}

void entrypoint_107_46() {
	start()
	printf("Keep it squeaky clean in here.")
}

void entrypoint_107_12() {
	start()
	printf("Cawlin & Strich")
}

void entrypoint_107_64() {
	start()
	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
	  case 0:
		printf("######Master ####...\n\n\n\n##\n###This treasure-chest-like object is a\nrelic of ancient times, left by the\ngoddess for her chosen hero.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 177), ('param3', 39)])
		printf("It would appear that each chest\nresponds to the energy released when a\nspecific #####Goddess Cube##### is launched\nskyward, releasing its lock mechanism.\nSearch for Goddess Cubes in the lands\nbelow and send them into the air.\nIt is the only way to open these chests.")
	  case 1:
		printf("######Master ####...\n\n\n\n##\n###This treasure-chest-like object is a\nrelic of ancient times, left by the\ngoddess for her chosen hero.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 175), ('param3', 39)])
		printf("However, I lack any information on\nhow it can be opened at this time.")
	}
}

void entrypoint_107_47() {
	start()
	printf("Out to work for the day.\nThose who have business for me\ncan find me here at night.\n#####-Beedle")
}

void entrypoint_107_13() {
	start()
	printf("Fledge")
}

void entrypoint_107_30() {
	start()
	printf("Let sound the goddess's song\nBeneath the light's radiance\nUnto her chosen hero shall fall\nA piercing ray of guidance")
}

void entrypoint_107_14() {
	start()
	printf("Headmaster Gaepora")
}

void entrypoint_107_31() {
	start()
	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
	  case 0:
		printf("#####Scrap Shop Owner\n#####Gondo's House")
	  case 1:
	}
}

void entrypoint_107_15() {
	start()
	printf("Instructor Owlan")
}

void entrypoint_107_32() {
	start()
	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
	  case 0:
		printf("#####Potion Shop Owner\n#####Bertie's House")
	  case 1:
	}
}

void entrypoint_107_50() {
	start()
	printf("######Master ####... Observe.\nThe #####green pillar##### before you is a #####column\nof light#####. It marks the point at which\nyou can descend to the surface.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 72), ('param3', 30)])
	printf("You can confirm your current\nlocation on the map. Please see\nwhere you are in relation to Skyloft.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 73), ('param3', 34)])
	printf("It appears that you will be able to reach\nthe surface by passing through the\nportal in the clouds at the column's\nbase.")
	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
}

void entrypoint_107_16() {
	start()
	printf("Instructor Horwell")
}

void entrypoint_107_33() {
	start()
	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
	  case 0:
		printf("Batreaux's House")
	  case 1:
	}
}

void entrypoint_107_51() {
	start()
	printf("######Master, I have an update regarding\nthe stone tablet and the resulting\ncolumn of light it created.\n\nA column of light has appeared to the\nsouth of our location, and signs\nindicate that it has created an opening\nin the cloud barrier to the land below.")
	printf("I must also caution you that descending\nto the surface armed only with a sword\nwould result in a decreased probability\nof survival.\nIf you have not already done so, I\nadvise you to purchase a #####shield##### and\n#####potions #####at the bazaar in preparation\nfor your journey.")
	printf("Another subject to discuss, ######Master...\n\n\n\n######Once you are accustomed to the\ncontrols, you are free to modify the\non-screen #####interface#####.\n\nOn the #####Gear Screen#####, select #####Interface\n#####to change the on-screen display to suit\nyour preferences.")
	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
}

void entrypoint_107_17() {
	start()
	printf("Karane")
}

void entrypoint_107_34() {
	start()
	printf("Skyloft Map\nN: Statue of the Goddess\nE: Residential Quarter\nS: Plaza    W: Knight Academy")
}

void entrypoint_107_52() {
	start()
	printf("######Master, the column of light is visible\nfrom here.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 74), ('param3', 39)])
	printf("Dive off a ledge and call your Loftwing\nfrom here, where you can see the\ncolumn of light.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 76), ('param3', 39)])
	printf("It is time for you to set out on your\nsearch for Zelda. You can call your\nLoftwing with ##### after you dive off.#####")
}

void entrypoint_107_18() {
	start()
	printf("Zelda")
}

void entrypoint_107_35() {
	start()
	printf("Try our pumpkin soup!\nNutritious and bowl-lickin'\ndelicious! One cup, 10 Rupees!")
}

void entrypoint_107_01() {
	start()
	printf("Waterfall Cave\n\nBeware of bloodsucking\nmonsters! No kids allowed.")
}

void entrypoint_107_19() {
	start()
	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
	  case 0:
		printf("######## Claims\nWinner's Perch in the\nWing Ceremony!\nSadly, Tragedy Also Strikes")
	  case 1:
		printf("The Wing Ceremony is today!\nRiders: Groose, Cawlin,\nStrich, and ####.\nWho will claim the prize?")
	}
}

void entrypoint_107_53() {
	start()
	switch (scene_flags[25 /* 0x2 02 */]) {
	  case 0:
		printf("######Master ####, please\ninsert the #####stone tablet #####you recently\nacquired into the altar.")
	  case 1:
		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
		  case 0:
			printf("######Master ####, I suggest\nyou imbue that crest with the power of\nyour #####Skyward Strike##### and then insert\nthe tablet I gave you a moment ago.\nTo gather energy from the heavens\nand charge up a #####Skyward Strike#####,\n#####point your sword skyward#####.")
		  case 1:
			printf("I am known as #####Fi#####... Please step up to\nthe pedestal and draw the sword.")
		}
	}
}

void entrypoint_107_36() {
	start()
	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
	  case 0:
		printf("Kina's Stage\nNot-so-regularly-scheduled\nnighttime performances")
	  case 1:
		printf("Kina's Stage is temporarily\nclosed due to lack of musical\naccompanist. Now seeking\nmusical accompanists!")
	}
}

void entrypoint_107_02() {
	start()
	printf("##### Knight Academy\n    Residential Quarter #####")
}

void entrypoint_107_54() {
	start()
	printf("######Master ####...\n\n\n\nWhen you hit that #####Goddess Cube #####with\na #####Skyward Strike##### earlier, I was able\nto detect a resulting energy reaction\nabove the clouds.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 7), ('next', 151), ('param3', 30)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 56), ('param3', 6)])
	printf("The location I have marked on your\nmap indicates the spot where I sensed\nan energy reaction.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 57), ('param3', 34)])
	printf("I advise you to investigate the area\naround this location.")
	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
}

void entrypoint_107_37() {
	start()
	printf("Customers wishing to see\nthe Lumpy Pumpkin's famed\nchandelier should visit the\nsecond-floor viewing gallery.")
}

void entrypoint_107_03() {
	start()
	printf("##### Bazaar")
}

void entrypoint_107_20() {
	start()
	printf("Restroom")
}

void entrypoint_107_55() {
	start()
	printf("A seedling planted here would require\nseveral thousand years to mature.\nI would suggest not planting one\nat this location.")
}

void entrypoint_107_38() {
	start()
	printf("No roughhousing on the\nbalcony! Big ruckuses cause\nthe chandelier to shake.")
}

