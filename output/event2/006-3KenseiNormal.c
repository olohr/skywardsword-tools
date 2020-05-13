void entrypoint_006_300() {
	start()
	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
	  case 0:
		printf("I cannot offer my usual analysis\nbecause you are currently engaged in\na challenge created by the Thunder\nDragon Lanayru.")
	  case 1:
		printf("You are located in the #####Sealed Grounds#####.\nI detect the auras of a small number\nof relatively weak enemies.")
		printf("######Master, your current selection of\npouch items is ######.")
		printf("Suitability to current location is #######%.")
		printf("My projections indicate that equipping\na sword is sufficient for combat at\nthis location.\n\nYou could also consider stocking your\npouch with helpful items.")
		switch (adventure_pouch_has(6 0x0006)) {
		  case 0:
			printf("To make matters worse, your Wooden\nShield is not well suited to defend you\nfrom fire-based attacks.##### I do not\nrecommend that you equip it.")
		  case 1:
		}
	}
}

void entrypoint_006_301() {
	start()
	printf("I do not have any relevant information\nto report at this time.")
}

