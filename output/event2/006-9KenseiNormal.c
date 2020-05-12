void entrypoint_006_950() {
	start()
	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
	  case 0:
		printf("Additionally, #####Clawshots##### have the\nability to latch on to vines, so you may\nwant to use them in order to reach\nvines from a distance.")
	  case 1:
	}
}

void entrypoint_006_916() {
	start()
	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
	  case 0:
		printf("You can check your #####map #####to locate\nBeedle's airborne shop. You will need\nto ring the #####large bell #####hanging from the\nshop to gain access.")
	  case 1:
		printf("To enter #####Beedle#####'s airborne shop, ring\nthe #####large bell #####hanging below the\nstructure.\n\nUnfortunately, ######Master, you do not have\nthe equipment needed to ring the bell.\nYou need to find #####something #####that can\nshoot a projectile from a distance.")
	}
}

void entrypoint_006_900() {
	start()
	printf("Ancient buildings can be found on\nthe small islands floating in the\narea around #####Skyloft#####.#####\n\n#####I calculate over an 80% chance that\nchests will be hidden on such islands.")
}

void entrypoint_006_918() {
	start()
	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
	  case 0:
		printf("I now calculate a 95% chance that it is\n#####Batreaux##### who lives under the shed next\nto the graveyard.")
		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
		  case 0:
			printf("You collected enough #####Gratitude\nCrystals##### for Batreaux to become a\nhuman. I estimate a 60% chance that\nthe Skyloft-demon rumor will die.\nBut there is still a 40% probability that\nthe rumor will not fade, based upon the\npossibility that people will still find\nBatreaux's new human face terrifying.")
		  case 1:
			printf("Batreaux would like you to collect\n#####Gratitude Crystals #####and wants to see\nthem for himself so that he can become\na human.\nIf you aid him in this search, ######Master,\nthere is an 85% probability that it will\nbenefit you as well.")
		}
	  case 1:
		printf("If you are interested, I recommend\ngoing to the##### ##########Lumpy Pumpkin#####, where\nthese rumors appear to have\noriginated.")
	}
}

void entrypoint_006_902() {
	start()
	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
	  case 0:
		printf("The knight apprentice known as #####Strich#####\nis looking for this island and is often\nobserved exploring in the sky.\n\nIt seems that he recently found an\nisland #####inside the thunderhead #####suitable\nfor insect habitation.")
	  case 1:
		printf("However, nobody has ever reported\nvisiting such a place.")
	}
}

void entrypoint_006_955() {
	start()
	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 29)])) {
		  case 0:
			flw_44:
			printf("Any ##########s #####that don't hit their\ntarget can be picked up and reused.")
		  case 1:
			goto flw_44
		  case 2:
			flw_45:
			printf("You possess sufficient arm strength to\nslice your sword through the trunks of\nsmaller trees.\n\nIf a point on a tree appears to glow,\ncut through that spot with your\nsword and you may be rewarded with\na Rupee.")
		}
	  case 1:
		goto flw_45
	}
}

void entrypoint_006_904() {
	start()
	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 20), ('param3', 10), ('param4', 2), ('param5', 4)])) {
		  case 0:
			printf("It is a place of amusement where you\ncan procure high-value Rupees with\nsurprisingly little exertion.\n\nYou will require room in your wallet to\ncarry Rupees back with you, though,\nso it would be wise to plan accordingly. ")
		  case 1:
			printf("It is a place of amusement where you\ncan procure high-value Rupees with\nsurprisingly little exertion.\n\nMy analysis indicates that you will\nneed to make a payment to play there.")
		}
	  case 1:
		printf("Some say that it will be an attraction\nwhere you can obtain a great amount\nof Rupees easily.")
	}
}

void entrypoint_006_940() {
	start()
	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
	  case 0:
		printf("Technically speaking, this is no rumor,\nbut I will pass on this information\nnonetheless.\n\nWhen energy is released from the\n#####Goddess Cubes #####scattered across the\nland and it launches into the sky,\nI can calculate its trajectory.\nThen I will note the location in the sky\nthat the energy has returned to on your\nmap, ######Master.")
	  case 1:
		printf("Do you recall seeing the #####mysterious##########\ncubes #####bearing the mark of the goddess\nthroughout the land below?\n\nThere seems to be a connection\nbetween those cubes and the locked\nchests in #####Skyloft##### and the surrounding\nislands.")
	}
}

void entrypoint_006_908() {
	start()
	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
	  case 0:
		printf("The flying shop cannot be observed\nin #####Skyloft #####after sundown. This leads me\nto infer that it moves to another island\nat night.\n#####If you were to stay in the airborne shop\nuntil nightfall#####, there is a possibility you\nwill discover where it travels to.")
	  case 1:
		printf("Unfortunately, ######Master, you do not have\nthe equipment needed to ring the bell.\nYou need to find #####something #####that can\nshoot at it from a distance.")
	}
}

void entrypoint_006_943() {
	start()
	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 26)])) {
		  case 0:
			flw_16:
			printf("In ancient times, a great warrior\ndevised a strategy to collect lots of \narrows. Do you know it, ######Master?\n#####Tell me!#####I know it.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 6)])) {
			  case 0:
				printf("The warrior took out his #####Wooden\nShield #####and approached the Bokoblin\nfort.\n\nHe hid behind his shield as the\nBokoblins rained arrows down on\nhim. He then retreated out of range.\n\nMany arrows #####were ##########stuck in his ##########Wooden\nShield#####. All he needed to do then was\npull them out and fire them back at\nhis enemies with his bow.")
				flw_14:
				printf("You could use a Wooden Shield to\nemploy this same strategy, ######Master.\n\n\nHowever, doing so will damage your\nshield, so #####pay attention to your\nshield gauge#####.")
			  case 1:
				goto flw_14
			}
		  case 1:
			goto flw_16
		  case 2:
			flw_46:
			printf("#####Bird Feathers##### are a useful material\noften used in equipment upgrades.\n\n\nHowever, there is a 90% probability\nyou will need some kind of tool to\ncatch the birds who provide these\nfeathers.")
		}
	  case 1:
		goto flw_46
	}
}

void entrypoint_006_944() {
	start()
	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
	  case 0:
		printf("If you return to places you previously\nvisited, you may be able to reach new\nareas using the power of the\n#####Water Dragon's Scale#####.\nSince you already possess this item,\nyou can easily dive underwater.\n")
	  case 1:
		printf("Somewhere in the world is an item\ncalled a #####Water Dragon's Scale#####.\nRumors suggest that this item allows\na person to dive deep underwater.")
	}
}

void entrypoint_006_945() {
	start()
	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
	  case 0:
		printf("Of course, you already possess the\n#####Fireshield Earrings#####, so you can freely\nenter extremely hot areas.\n\nI recommend thoroughly exploring\nplaces that were previously too hot\nto travel through safely.")
	  case 1:
		printf("There is an item called #####Fireshield\nEarrings #####in this world somewhere.\nThey allow the wearer to remain in\nareas of extreme heat.")
	}
}

void entrypoint_006_928() {
	start()
	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
	  case 0:
		printf("If you get too close to Levias, there is a\ndanger that your Loftwing will collide\nwith one of his fins or his tail.")
	  case 1:
		printf("Every year since he was born so long\nago, he has grown larger and larger.\nHe is now the size of a large island.\nHowever, he hasn't been seen recently.")
	}
}

