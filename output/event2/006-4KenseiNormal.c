void entrypoint_006_400() {
	start()
	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
	  case 0:
		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
		  case 0:
			printf("Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.######")
		  case 1:
			printf("Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.\n\nTo ensure that you are able to find\nmore #####hearts##### when you need them,\nthey are now available as a target\nfor your #####dowsing #####ability.######")
			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 11), ('next', 8), ('param3', 56)])
			printf("Hold ##### and choose #####hearts #####from\nthe circle of objects to set them as\nyour current target. ##### This capability\nshould prove to be quite useful.")
			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
			  case 0:
				printf("You have elected to engage\n#####Hero Mode#####, so hearts and heart\nflowers will not appear.\n\nHowever, if you choose to carry the\n#########d#####, then ######hearts\nand heart flowers do #####have a chance\nof appearing#####.")
			  case 1:
			}
		}
	  case 1:
		printf("Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.######")
	}
}

void entrypoint_006_401() {
	start()
	printf("Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.######")
}

void entrypoint_006_402() {
	start()
	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
	  case 0:
		switch (story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */]) {
		  case 0:
			switch (adventure_pouch_has(8 0x0008)) {
			  case 0:
			  case 1:
				flw_11:
				printf("You have elected to engage\n#####Hero Mode#####, so hearts and heart\nflowers will not appear. I recommend\nutilizing potions.")
			}
		  case 1:
			goto flw_11
		}
	  case 1:
	}
}

