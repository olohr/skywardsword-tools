void entrypoint_118_05() {
	start()
	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
	  case 0:
		printf("####\n#How weird... I can't see the Statue of\nthe Goddess for some reason.\nThat's weird...\n\nWell, never mind that.")
		flw_55:
		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
		  case 0:
			printf("######Oh! Kukiel turned up OK?!\n\n\n\n######You were the one who found her?\nNice work! That's showing 'em what\na student of the Knight Academy\ncan do!\n######You should go and let her mother\nknow she's safe! Their house is down\nnear the water's edge.")
		  case 1:
			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
			  case 0:
				printf("######Whoa! What's the matter,\n####? You look pale!\n\n\n#####It's Kukiel!#####Do I?")
				switch (choice(2, 0)) {
				  case 0:
					printf("######What?! Kukiel is missing?\n\n\n\n######She was abducted by a monster?!\n\n\n\n######You don't think this has anything to\ndo with all those silly stories about\na horrifying monster that's been\nliving here in Skyloft for ages, do you?\n####\n#People say the creature appears in\nthe dead of night, scaring folks and\neven taking away children!\n\n######Probably nothing more than a scary\nstory some older brother made up to\nterrorize his younger siblings, but\nstill...it makes me wonder.")
				  case 1:
					printf("######Well, it looked that way to me.\nIf nothing is wrong, though, I guess\nthere's nothing to worry about!")
				}
			  case 1:
				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 283), ('param3', 31)])
					printf("######Kukiel's mother was calling for her\nlike she was worried. I wonder what\nhappened...")
				  case 1:
					printf("######I heard you won the Wing Ceremony!\nCongratulations! That's incredible!\n\n\n######Hey, you don't seem all that happy\nabout winning. What's the matter?")
				}
			}
		}
	  case 1:
		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
		  case 0:
			printf("####\n#What was that thunderous rumbling\njust now?")
			goto flw_55
		  case 1:
			goto flw_55
		}
	}
}

void entrypoint_118_22() {
	start()
	switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 512), ('next', 156), ('param3', 13)])
		printf("#####\nOH! How incredible!\n\n\n\nThe world is still full of new plants\nwaiting to be discovered, isn't it?\nI can barely contain my excitement!")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 2560), ('next', 264), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 262), ('param3', 17)])
		printf("Oh, ####! You have\nno idea what this means to me! \nThank you so much!\n\nI'll take great care of this plant...life-\nform... Whatever it is. If you should\nhappen across any other interesting\nspecimens, be sure to let me know!")
		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 512), ('next', 171), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 36), ('next', 172), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 36), ('next', 153), ('param3', 17)])
		printf("#####SThis...this is... Unbelievable! You've\nfound me an entirely new plant species!\nIt's precisely what I wanted!")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 14), ('param2', 1280), ('next', 154), ('param3', 13)])
		printf("Hmm... Fascinating! Should this\nactually be classified as flora or\nfauna...? I mean, plant or animal?\n\nHmm... You know, this may very well\nmark the discovery of a new type of\nspecies altogether!")
		loadzone_temp_flags[0 /* 0x9 01 */] = true;
	}
}

void entrypoint_118_06() {
	start()
	switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
	  case 0:
		flw_57:
		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
		  case 0:
			printf("######Hmm.####\n.####\n.? The girl who went missing has\nbeen found safe?\n\n\nI see. So she wasn't abducted after all.\nThat's a relief to hear!\n\n\n######Well, anyway, I guess that case is\nclosed! Great work, valiant knight!")
		  case 1:
			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
			  case 0:
				switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
				  case 0:
					printf("######Hmm. He told you that you should\n#####deal a blow##### to the #####gravestone\nnearest the tree##### and then #####move##### it\nif you want to find the monster?\n######Either way, you're better off not\nwalking around outside at night.")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 401), ('param3', 31)])
					printf("######So you went and spoke to that old\npumpkin chugger, did you?\n\n\nHmm. He told you that you should\n#####deal a blow##### to the #####gravestone nearest\nthe tree##### and then #####move##### it...to find\na monster?\n######Probably just a lot of hot air#####...#####\nEither way, you're better off not\nwalking around outside after dark.")
					loadzone_temp_flags[11 /* 0x8 08 */] = true;
				}
			  case 1:
				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
				  case 0:
					switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
					  case 0:
						flw_46:
						printf("######You want to know where the\nold man is?\n\n\n######I'd imagine he's at the #####Lumpy\nPumpkin#####, to the east of here, as usual.\n\n\n######You'll need to fly your bird there,\nof course!")
						loadzone_temp_flags[11 /* 0x8 08 */] = true;
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 36), ('param3', 31)])
						printf("######Did you hear? A child who'd been\nplaying in the graveyard went missing.\n\n\n######Can you believe it? Do you really think\nthere are monsters abducting children\nin our little town?\n#####I do!#####I dunno...")
						switch (choice(2, 0)) {
						  case 0:
							printf("######What?! So there's a chance she\nwas dragged off by a monster?\n\n\n######Let's not be ridiculous here.\nThis monster business is going a\nbit far. #####Oh####\n.####\n.####\n.####\n\n\n######Now that you mention it, there's an\n###########old man##### who lives near here who's\nalways ranting about hidden monsters\nhere in Skyloft...\n######Everyone knows he's a little loony,\nthough, so no one takes him seriously.")
							goto flw_46
						  case 1:
							printf("######Nothing fazes you, does it? A child\njust vanished from our little village!")
						}
					}
				  case 1:
					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
					  case 0:
						printf("######There's talk going around that a little\ngirl has disappeared!")
					  case 1:
						printf("######Oh! So you won the Wing Ceremony\nand graduated to the senior class?\n\n\n######I can tell by that handsome knight's\nuniform you're wearing! It looks\nvery dashing on you.\n\n######One step closer to knighthood, eh?")
					}
				}
			}
		}
	  case 1:
		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
		  case 0:
			printf("######Sweet mercy... First the ground starts\nshaking... Next thing I know, the whole\nIsle of the Goddess disappears!\n\n######Oh, by the way...")
			goto flw_57
		  case 1:
			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
			  case 0:
				printf("######That was some real shaking there!\nWhat do you suppose could have\ncaused it?\n\n######Oh, and while I've got you here...")
				goto flw_57
			  case 1:
				goto flw_57
			}
		}
	}
}

void entrypoint_118_23() {
	start()
	printf("######What's up, ####?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 208), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 72), ('param3', 17)])
	printf("So you're curious about that windmill,\neh?\n\n\nPretty smart design, I gotta say. \nSee, you can turn the windmill so that\nit can always catch the wind no matter\nwhich way it's blowing.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 196), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 32), ('param2', 0), ('next', 197), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 33), ('param2', 100), ('next', 175), ('param3', 15)])
	printf("But... Well, there used to be this little\n#####propeller##### attached to the windmill so\nthat you could turn it.\n\nThe thing flew off ages ago. It must\nhave dropped down off the edge, down\nbeneath the clouds.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 178), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 176), ('param3', 39)])
	printf("The windmill's been uselessly sitting\nthere ever since.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 181), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 180), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 75), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 315), ('param2', 0), ('next', 257), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 258), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 3), ('next', 76), ('param3', 17)])
	printf("I highly suggest you retrieve the\n#####windmill propeller #####from the land\nbelow to reorient the windmill.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 165), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 259), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 198), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 78), ('param3', 39)])
	printf("######You wanna know if I could fix the\nwindmill if you brought back the\npropeller?\n\nWell, if I had the propeller, I could\nprobably rig something together to\nget it back on there, sure...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 200), ('param3', 39)])
	printf("But how would you even go looking\nfor the propeller in the first place?\nOnce something falls through the\nclouds, it's gone for good.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 203), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 2048), ('next', 79), ('param3', 13)])
	printf("#####...###########Hang on.\n\n\n\nCome to think of it, #####Gondo##### at the Scrap\nShop told me that someone in his\nfamily once used a #####flying robot##### to haul\njunk back from beneath the clouds.\nBut we're talking about a tale that's\nbeen passed down over a lot of years,\nso I wouldn't put much stock in it.")
	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_118_07() {
	start()
	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
	  case 0:
		printf("######The Statue of the Goddess is gone!\nWhat are we gonna do?!\n\n\nThat was easily the best place in the\nwhole world to catch bugs!")
	  case 1:
		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
		  case 0:
			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
			  case 0:
				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
				  case 0:
					switch (loadzone_temp_flags[8 /* 0x8 01 */]) {
					  case 0:
						printf("######I have to figure out a way to get up\nto Beedle's Airshop soon so I can\nget a Bug Net too!\n\nThen I'm going straight to the Scrap\nShop to get Gondo to upgrade it and\nmake it even bigger!")
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 118), ('param2', 28), ('next', -1), ('param3', 7)])
					}
				  case 1:
					printf("######Hi, ####!\n\n\n\nWHAT? You went to Beedle's Airshop?\nWithout me?! That's so unfair!")
					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
					loadzone_temp_flags[8 /* 0x8 01 */] = true;
				}
			  case 1:
				printf("######Ahhh, the wait is killing me! I've got\nto have a Bug Net! How can I get up to\nBeedle's Airshop?!")
			}
		  case 1:
			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
			  case 0:
				printf("######Oh, Kukiel's safe?!\n\n\n\n######I hope she'll be allowed to come out\nand play! I was worried she got eaten!")
			  case 1:
				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 420), ('param3', 31)])
					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
					  case 0:
						printf("######Hi, ####!\n\n\n\nWHAT? You went to Beedle's Airshop?\nWithout me?! That's so unfair!")
						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
						flw_29:
						printf("######Kukiel?\n\n\n\n######Well, I did see her playing over\nby the #####graveyard##### yesterday...\n\n\n####\n#My mom called me home, so I left.\nI don't know what she did after that.\n\n\n######Why? Did something happen?")
					  case 1:
						printf("######Hmm... I wonder how I can get my\nhands on a Bug Net from Beedle's\nAirshop.\n#####Where's Kukiel?#####Airshop?")
						switch (choice(2, 0)) {
						  case 0:
							goto flw_29
						  case 1:
							printf("######I'm trying to think up a way to get\nBeedle's Airshop to stop.\n\n\n######There's a bell hanging down from\nit, and I hear if you ring it, Beedle\nwill stop for you.\n\n######But being up that high, you'd have\nto ###########launch##### something at it to have\nany hope of hitting that bell.\n\nIf you ever look around and can't see\nthe shop, try opening your #####map#####!")
						}
					}
				  case 1:
					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
					  case 0:
						printf("######Hi, ####!\n\n\n\nWHAT? You went to Beedle's Airshop?\nWithout me?! That's so unfair!")
						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 50), ('param3', 31)])
						printf("######Hey, look up there! It's #####Beedle's\nAirshop#####! It's here!\n\n\n####\n#He sells #####Bug Nets##### there! I want one\nsooooo bad!\n\n\n######There's a bell hanging down from the\nshop, and I hear if you ring it, Beedle\nwill stop for you and pick you up!\n\n######But that bell is up off the ground...\nYou'd have to ###########launch##### something at it\nto have any hope of ringing it!")
					}
				}
			}
		}
	}
}

void entrypoint_118_24() {
	start()
	printf("######This guy here says people will probably\nbe surprised when they see me because\nI don't look like a plant, koo-kwee.\n\n######So in the meantime, kew-kaloo, I've\nbeen told to sit here and not move\na leaf.\n\n######This isn't any different from my\nlife in the forest, kweee!")
}

void entrypoint_118_08() {
	start()
	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
	  case 0:
		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
		  case 0:
			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
			  case 0:
				printf("######Oh hello, ####.\nYou haven't seen my husband around, \nhave you?\n\nI know he's curious why the night\nturned silent so suddenly, but it's no\nreason to dash out there. What if he\nbumped into a monster?!")
			  case 1:
				printf("##############, it's great. \nEver since Kukiel came back, she's \nstopped wandering out on her own.\n\nIt's too bad her father can't follow her\nexample. He always slips out to wander\naround town.")
			}
		  case 1:
			printf("##############, thanks so much\nfor finding Kukiel.\n\n\nI'll need to be sure to find and thank\nthat kind gentleman who kept an eye\non her too...")
		}
	  case 1:
		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 142), ('param3', 31)])
			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
			  case 0:
				printf("######Oh, ####!\n\n\n\n######Kukiel is safely back at home, and\nit's all because of you! I don't know\nhow to express my gratitude.\n\n######I can finally smile and laugh again!\nThank you ever so much.")
				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
			  case 1:
				printf("######Oh! You found Kukiel?\n\n\n\n######Hmm. Well, I guess it's good to hear\nshe's at least with a friendly and\nresponsible adult... But I just can't\nwait to see her!")
			}
		  case 1:
			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 278), ('param3', 31)])
				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
				  case 0:
					printf("######What is this world coming to?\nThe Isle of the Goddess is falling,\nand there's still no sign of Kukiel...\nOh, my sweet Kukiel...\nPlease, ####! Hurry and\nfind her!\n\n\n######You...wouldn't think of abandoning\nthe search, would you?!")
				  case 1:
					printf("######Oh, my sweet Kukiel... ####\nPlease...####\nfind my\ndaughter before anything bad happens\nto her.\n\nIf something happened... I just...\nI don't know what I would do.")
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 31)])
			}
		}
	}
}

void entrypoint_118_25() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 21), ('next', 276), ('param3', 32)])
	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
	  case 0:
		printf("######Oh no! This is terrible! The Isle of the\nGoddess has fallen! I was just\nsearching there for my Kukiel...\n\nHave you seen her?! My Kukiel?!\n#####Nope.#####Kuki-who?")
		flw_18:
		switch (choice(2, 0)) {
		  case 0:
			printf("######I...I see.")
			flw_21:
			printf("######Please, ####, won't you\nhelp me look for her? I've been looking\neverywhere, but I can't find her!\n\n######I've asked everyone I could find for\nhelp, and a few people have said she's\nbeen spotted with some unknown\nperson with a scary face.\n######Someone else even said they thought\nthey'd seen her carried off by a\nmonster. A monster!\n\n######She must have been kidnapped!\nShe's so cute and friendly... Someone\nmust have just walked off with her!")
			flw_22:
			printf("######Find Kukiel, please! Please! It breaks\nmy heart to think she's somewhere\nout there, crying!\n\n######Please, ####!\n#####You got it.#####Nah...")
			switch (choice(2, 0)) {
			  case 0:
				printf("######Thank you! The Knight Academy\nshould be proud to have a student\nlike you.\n\n######Please, find my daughter quickly!")
				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
			  case 1:
				printf("######And you truly consider yourself a\nknight in training? Isn't it a knight's\nduty to protect the townspeople?!")
				goto flw_22
			}
		  case 1:
			printf("######My daughter! She's a little \nfive-year-old girl!")
			goto flw_21
		}
	  case 1:
		printf("######What perfect timing! You haven't seen\nmy Kukiel, have you?\n#####Nope.#####Kuki-who?")
		goto flw_18
	}
}

void entrypoint_118_09() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 300), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 107), ('next', 11), ('param3', 24)])
	printf("#####EEEEEEEEEEEK!")
	scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_118_26() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 8), ('next', 352), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 21), ('next', 356), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5386), ('param2', 3072), ('next', 355), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 353), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 8), ('next', 350), ('param3', 16)])
	printf("######Kukiel! Kukiel! Where could that\nchild have gone?!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5387), ('param2', 3328), ('next', 349), ('param3', 13)])
	printf("Oh, Kukiel... Where did you go?\n\n\n\nWhat will I do if she's been...\nkidnapped?!")
	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 100), ('next', 366), ('param3', 16)])
	printf("######Oh! ########!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 361), ('param3', 47)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 360), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 49), ('param2', 356), ('next', 359), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 100), ('next', 367), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5390), ('param2', 3840), ('next', 363), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 368), ('param3', 48)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 49), ('param2', 100), ('next', 358), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 118), ('param2', 25), ('next', -1), ('param3', 7)])
}

void entrypoint_118_27() {
	start()
	switch (loadzone_temp_flags[7 /* 0x9 80 */]) {
	  case 0:
		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
		  case 0:
			printf("######You probably heard about the Isle of\nthe Goddess, huh? I wonder what\nhappened. It's just crazy...\n\nThere's no sign of Zelda. Groose\nis gone... What is going on around\nhere?!")
			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
		  case 1:
			printf("######Just you wait! I'm going to keep\nworking out at night until I'm\nstrong like you!")
		}
	  case 1:
		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
		  case 0:
			printf("######Hey, ####! How goes it?\nI've been great, thanks to that\n#####Stamina Potion##### you gave me!\n\n######The longer I train, though, the more\nI realize I'll never measure up to you...\nI'm just so...scrawny.\n\nHey, if you're up for it, why don't you\ncome by and visit again some night?")
			flw_440:
			loadzone_temp_flags[7 /* 0x9 80 */] = true;
		  case 1:
			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
			  case 0:
				printf("######Hey, ####! Any closer to\nfinding Zelda yet?\n\n\nI think I mentioned this before, but\nit's started feeling like maybe I've\nreached my peak. Like maybe I'm just\nwasting my time...\nAnyhow, I'll be here doing my thing at\n#####night#####, so come by and give me some\nadvice whenever you've got the time.")
				goto flw_440
			  case 1:
				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
				  case 0:
					printf("######Hey there, ####! I've been\ntraining hard at #####night #####since you gave\nme that #####Stamina Potion#####.\n\n######But, I don't know... It's started feeling\nlike maybe I've reached my peak.\nLike maybe I'm just wasting my time.\n\nI don't know if I'll ever be as strong\nas you, ####...\n\n\n######Still, there's nothing to be gained from\nfeeling sorry for myself, so I'll keep\nworking out every #####night#####! Come by and\ngive me pointers anytime!")
					goto flw_440
				  case 1:
					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
					  case 0:
						printf("######Hey there, ####! Thanks\nagain for that #####Stamina Potion#####!\nSince you gave it to me, I've been\ndoing push-ups like a machine!\n######You'll see! I'll be as tough as you in\nno time!")
						goto flw_440
					  case 1:
						printf("######Oh, how embarrassing... You caught\nme in the middle of my nightly\nworkout routine.\n\nI want to become strong like you, but I\njust don't seem to be making any\nprogress. I'll keep trying, though.")
						goto flw_440
					}
				}
			}
		}
	}
}

void entrypoint_118_10() {
	start()
	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 429), ('param3', 31)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 118), ('param2', 27), ('next', -1), ('param3', 7)])
	  case 1:
		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
		  case 0:
			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
			  case 0:
				switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
				  case 0:
					switch (loadzone_temp_flags[7 /* 0x9 80 */]) {
					  case 0:
						switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
						  case 0:
							printf("######Just you wait! I'm going to keep\nworking out at night until I'm\nstrong like you!")
							flw_332:
							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
							  case 0:
								printf("######You probably heard about the Isle of\nthe Goddess, huh? I wonder what\nhappened. It's just crazy...\n\nThere's no sign of Zelda. Groose\nis gone... What is going on around\nhere?!")
								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
							  case 1:
							}
						  case 1:
							printf("######I'm sure you'll find Zelda too!")
							goto flw_332
						}
					  case 1:
						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 118), ('param2', 29), ('next', -1), ('param3', 7)])
						  case 1:
							printf("######I still haven't seen any sign of Kukiel,\n####!\n\n\n######Are you really looking for her?\n\n\n\n######What? She's safe?!\n\n\n\n######That's a huge relief! I'm so glad you\ntracked her down, ####!\nI knew you'd do it.")
							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
							loadzone_temp_flags[7 /* 0x9 80 */] = true;
						}
					}
				  case 1:
					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
					  case 0:
						printf("#####\nYou should go and let Kukiel's\nmother know! I'm sure she's at\ntheir house near the water's edge.")
					  case 1:
						printf("######I still haven't seen any sign of Kukiel,\n####!\n\n\n######Are you really looking for her?\n\n\n\n######What? She's safe?!\n\n\n\n######That's a huge relief! I'm so glad you\ntracked her down, ####!\nI knew you'd do it.")
						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
					}
				}
			  case 1:
				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
				  case 0:
					printf("######Oh, ####! This is just \nso awful it's hard to believe...\nThe Isle of the Goddess is gone!\n\n######That cute little Kukiel girl has gone\nmissing...\n\n\n######There's no sign of Zelda. Groose is\ngone... What's this world coming to?!\n\n\n######I'll do my best to help look for\nthem, but this may be up to you,\n####!")
					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
				  case 1:
					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
					  case 0:
						printf("######I still haven't seen any sign of Kukiel,\n####!\n\n\n######Have you been really looking for her?\nYou're not putting it off for later\nor anything, are you?\n\n######I'm doing my best to find her, but\nI can't do it alone. You do the same!")
					  case 1:
						switch (loadzone_temp_flags[7 /* 0x9 80 */]) {
						  case 0:
							printf("######Check the plaza, ####!\nI'll try some other places.\n\n\n######I wonder if that boy she was playing\nwith yesterday is still around...")
						  case 1:
							printf("######Oh, ####! How's it going?\nAny luck tracking down Zelda?\n\n\n.####\n.####\n.####\nI see. Well, we're all pulling for you!\n\n\n\n######By the way, I saw Kukiel's mother\nheading up toward the temple a\nlittle while ago. She looked pretty\nupset...\n######You don't suppose something\nhappened, do you?")
							printf("#### #Huh? Kukiel's gone missing?!\n\n\n\n######We've got to do something! I'll start\nlooking too! Ask around and see if you\ncan find somebody who's seen her,\n####!")
							loadzone_temp_flags[7 /* 0x9 80 */] = true;
						}
					}
				}
			}
		  case 1:
			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
			  case 0:
				printf("######Oh, ####! This is just \nso awful it's hard to believe...\nThe Isle of the Goddess is gone!\n\n######That cute little Kukiel girl has gone\nmissing...\n\n\n######There's no sign of Zelda. Groose is\ngone... What's this world coming to?!\n\n\n######I'll do my best to help look for\nthem, but this may be up to you,\n####!")
				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
			  case 1:
				printf("######Oh, ####! How's it going?\nAny luck tracking down Zelda?\n\n\n.####\n.####\n.####\nI get it. Well, all of us here are\npulling for you!\n\n\nBy the way, I saw Kukiel's mother\nheading up toward the temple a little\nwhile ago. She looked really upset.\nDo you know if something happened?\n#####Wait, who?#####I know!")
				switch (choice(2, 0)) {
				  case 0:
					printf("######You know, she lives in that house\nnear the water with her husband and\ntheir little girl.\n\n######I don't know what was wrong, but\nshe was definitely upset.")
				  case 1:
					printf("######...You're just pulling my chain, aren't\nyou?")
				}
			}
		}
	}
}

void entrypoint_118_28() {
	start()
	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
	  case 0:
		flw_460:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 170)])) {
		  case 0:
			printf("######Hey, ####! I haven't seen\nGroose around lately. I wonder if he\ngot into big trouble and now he has to\ngo to detention at the academy...")
		  case 1:
			printf("######Hey, ####! Strich taught\nme some great #####bug-catching\ntechniques#####!\n\nHe said it works better if you swing\nthe net to your side instead of over\nyour head!\n\nHe also said it's best to sneak up on\nthe bugs slowly and then swing fast!")
		}
	  case 1:
		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
		  case 0:
			printf("######Hi, ####!\n\n\n\nHuh? #####Try and force##########...?##### #####What are you\ntalking about? Sometimes you're so\nweird...")
		  case 1:
			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
			  case 0:
				goto flw_460
			  case 1:
				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
				  case 0:
					printf("######Hey, ####!\nLook at the Light Tower!\n\n\nThere's a beam of light shooting out\nof it! How cool is that?!")
				  case 1:
					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
					  case 0:
						flw_454:
						printf("######Hey, ####! Is it true you\ncan catch more than just bugs with a\n#########G#####?\n\nThe guy at the Scrap Shop said you can\nuse one to catch all kinds of stuff...\nlike things you'd never even think of!")
					  case 1:
						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
						  case 0:
							printf("######Yo, ####!\n\n\n\nHuh? The #####lyrics##### to a song Zelda\nwas singing?\n\n\nWhat's a #####lyric#####? Is that some kind of\nbug? I don't get it. I'm so confused...")
						  case 1:
							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
							  case 0:
								goto flw_454
							  case 1:
								printf("######I have to figure out a way to get up\nto Beedle's Airshop soon so I can\nget a Bug Net too!\n\nThen I'm going straight to the Scrap\nShop to get Gondo to upgrade it and\nmake it even bigger!")
							}
						}
					}
				}
			}
		}
	}
}

void entrypoint_118_11() {
	start()
	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
	  case 0:
		printf("######He's not a bad man! He saved me\none time when I almost fell over the\nedge! And he lets me come here and\nscream as loud as I want!\nAnyway, he said it was dangerous to go\nout alone at night, so I'll just hang out\nhere for a while. Tell my mom I'll come\nhome in the morning!")
	  case 1:
		printf("######Hey, what's wrong? Why do you look so\nscared? Did something happen to you?")
	}
}

void entrypoint_118_29() {
	start()
	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
	  case 0:
		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
		  case 0:
			printf("######I've been secretly working out at night\nso that someday I might be strong like\nyou, but...it's not as easy as you make\nit look, ####.\nYou really are amazing!")
			flw_330:
			loadzone_temp_flags[7 /* 0x9 80 */] = true;
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 415), ('param3', 31)])
			printf("######Hey, ####. Any closer to\nfinding Zelda?\n\n\nDon't go around telling anyone, but\nlately I've been working out #####at night\n#####so that I can get strong like you.\n\n#####.#####.#####.####\nNo, no, no!###### Please don't come to\n#####my room##### at night when I'm training.\nI'd be so embarrassed!")
			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
			goto flw_330
		}
	  case 1:
		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
		  case 0:
			flw_505:
			printf("######Hey, ####! Did you find\nany trace of Zelda? I hope she gets\nback soon.")
			goto flw_330
		  case 1:
			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
			  case 0:
				printf("##############, this is amazing!\nThere's some kind of beam coming out\nof the Light Tower! I've never seen\nanything like it!")
			  case 1:
				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
				  case 0:
					goto flw_505
				  case 1:
					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
					  case 0:
						printf("######Hey, ####!\n\n\n\n###########Two whirling sails#####, eh...? That's a\ntough one. The wind is really strong\nhere in Skyloft, so there are lots of\nthings that look like sails.")
					  case 1:
						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
						  case 0:
							printf("######Oh, hey there, ####!\n\n\n\n######Hmm? The #####Ballad of the Goddess#####?#####\nSure, I know it. Zelda used to sing it all\nthe time.\n\nI'm afraid I don't know the lyrics, but\nI bet you anything the headmaster\nof the academy does.")
						  case 1:
							printf("######Oh, hey, ####! Kukiel's\nmother must have been thrilled,\nhuh? I'm sure glad you found her!")
							loadzone_temp_flags[7 /* 0x9 80 */] = true;
						}
					}
				}
			}
		}
	}
}

void entrypoint_118_12() {
	start()
	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
	  case 0:
		printf("######Heya, ####!\n#####Huh? Uncle Bats is a human now?\n\n\n#####...#####Awww, that's too bad. I liked his\nflappy bat wings...")
	  case 1:
		printf("######Oh, it's you, ####!\n\n\n\nUncle Bats told me he wants to see all\nthe grabitude crackles he can!\nBut how's he going to do that?")
	}
}

void entrypoint_118_99() {
	start()
	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
	  case 0:
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 90), ('param2', 0), ('next', 244), ('param3', 51)])
		printf("")
		switch (choice(2, 0)) {
		  case 0:
			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 13), ('next', 380), ('param3', 56)])
			printf("")
			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
			flw_254:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
		  case 1:
			printf("######Understood, Master. Your ######dowsing\nability will not be set to find this item.")
			goto flw_254
		}
	}
}

void entrypoint_118_13() {
	start()
	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
	  case 0:
		printf("######Whoa! Isn't that...the beat-up\nold robot from Gondo's place?!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 87), ('param3', 33)])
		printf("Wait just a second...\n\n\n\n#####Is that...####( It is! That's the #####windmill\npropeller#####! That thing was supposed to\nhave fallen down below the clouds!\n\n######Are you saying that whole story handed\ndown through Gondo's family was\nactually true?\n\nHmm... Somehow I get the feeling\nthis is all some elaborate prank, but I\nguess I'll try to fix this thing...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 88), ('param3', 39)])
		printf("This goes in here... And I just crank\nthat a few clicks...")
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 29), ('param2', 256), ('next', 184), ('param3', 15)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 30), ('param2', 356), ('next', 209), ('param3', 15)])
		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 190), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 256), ('next', 185), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 194), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 89), ('param3', 6)])
		printf("####\n#Phew!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 187), ('param3', 17)])
		printf("######That ought to do it! If you can find\nsome way to spin the propeller, you can\nprobably turn the windmill around.")
		printf("###########Honeeeeey! Honeeeey?")
		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
		  case 0:
			printf("######Oh no! I think I might've promised my\nwife I'd fix our cupboard! I swear that\nwoman's always looking for somebody.")
			printf("######See you around, ####!")
			flw_192:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 191), ('param3', 17)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 31), ('param2', 0), ('next', 193), ('param3', 14)])
			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			printf("######Oh, no! I just remembered I'm\nsupposed to be looking for Kukiel!")
			printf("######Catch you later, ####!\nIf you happen to see Kukiel, let me\nknow, all right?")
			goto flw_192
		}
	  case 1:
		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
		  case 0:
			printf("######Dredging things up from some mystical\n#world beneath the clouds\" that doesn't\neven exist? Sounds like a lot of hot air.\n\n#####Gondo##### actually bought into the whole\nthing, though. That's why he's always\ntinkering with that busted old robot.")
		  case 1:
			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
			  case 0:
				printf("######Thank you so much for tracking down\nKukiel, ####! It's such a \ngorgeous day today too.\n\nOn a day like today, there's nothing I'd\nlove more than to head over to the\nLumpy Pumpkin for a sip of soup.\n\nBut of course my wife asked me to fix\nthe cupboard, so I'm not going\nanywhere.\n\nSigh... The story of my life...")
			  case 1:
				printf("######Hey, ####. Still no sign of \nKukiel! Even I'm starting to get a\nbit worried...\n\nHelp keep an eye out for her, all right?")
			}
		}
	}
}

void entrypoint_118_14() {
	start()
	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
	  case 0:
		printf("Dzzat! Everything you do is wonderful,\nMistress Fi. I will drop anything to\nfulfill your any wish...bzzrt.")
	  case 1:
		printf(".#####.#####.")
	}
}

void entrypoint_118_15() {
	start()
	printf("You feel a suspicious presence\nemanating from within the room.")
}

void entrypoint_118_16() {
	start()
	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
	  case 0:
		printf("######Please come by the bazaar again when\nyou have the chance!\n\n\nI'll tell your fortune for a special\nprice!")
	  case 1:
		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
		  case 0:
			printf("######...Oh! What do my eyes behold?!\n\n\n\nThis...this is it! You found it! This is\nexactly the same as the crystal ball I\nused before!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 105), ('param3', 17)])
			printf("######Fates and fortunes! My eyes are wide\nwith the thrill of possibility and damp\nwith tears of gratitude!\n\nI'll be able to start gazing into the\nfuture and making predictions at\nonce!\n\nCome by the bazaar again, and I'll tell\nyour fortune for a special price!")
			story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */] = true;
			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
			scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
			scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
		  case 1:
			switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 212), ('param3', 31)])
				switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 1799), ('next', 103), ('param3', 13)])
					printf("Come now! What are you doing here?\nHurry and find me a new crystal ball!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 1799), ('next', 213), ('param3', 13)])
					printf("Come now! What are you doing here?\nHurry and find me a new crystal ball!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 215), ('param3', 51)])
					printf("Your ###########dowsing #####ability is not currently\ncalibrated to search for the #####crystal ball#####\nthat this person seeks.\n\n######Do you wish to calibrate your #####dowsing\n#####ability to search for this #####crystal ball#####?\n#####Yes, please.#####Not now.")
					switch (choice(2, 0)) {
					  case 0:
						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 14), ('next', 383), ('param3', 56)])
						printf("######Understood, Master.\n\n\n\nYour ###########dowsing #####ability is now set to\ndetect the #####crystal ball##### this person\nseeks.")
						flw_241:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
					  case 1:
						printf("######Understood, Master. Your ######dowsing\nability will not be set to find this item.")
						goto flw_241
					}
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 122), ('param3', 31)])
				printf("######I'm fine. Go on, go on... Please leave\nme be...\n\n\nMy crystal ball has shattered, and\nwithout it, my eyes can no longer gaze\ndeeply into the future...\n\nIt's almost as though these #####exquisite,\nall-seeing eyes##### of mine have begun to\ndull and cloud over with sadness now\nthat my crystal ball is gone.\n#####If only... If only I had a new crystal\nball to gaze into...")
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 1798), ('next', 159), ('param3', 13)])
				printf("Is it not true that you recovered a\npiece of the windmill from beneath\nthe clouds recently, young man?\n\nThis shattered crystal ball was salvaged\nfrom below by Gondo's ancestor long\nbefore it found its way into my\ndelicate hands.\nThere may still be others like it where\nit came from, yes, yes! Would you\nsearch for a new one for me?\n#####Yes.#####No.")
				switch (choice(2, 0)) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 1802), ('next', 97), ('param3', 13)])
					printf("Yesssss... No doubt you can see the\ngratitude in my eyes!\n\n\nThe robot who originally retrieved this\ncrystal ball was said to have reported\nthat he found it in #####a building atop a\nmountain peak#####! Can you believe it?!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 45), ('param2', 0), ('next', 124), ('param3', 51)])
					printf("Your ###########dowsing##### ability can be calibrated\nto locate the crystal ball that this\nperson is seeking.\n\nHowever, if you are searching for\nanother object that someone has\nasked you to find, that target will be\nremoved when you switch to this target.\nDo you wish to set the #####crystal ball #####as\nyour dowsing target?\n#####Yes!#####Not yet.")
					switch (choice(2, 0)) {
					  case 0:
						printf("######Understood, Master. I'll set your\ndowsing target to the crystal ball in\nquestion.")
						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 14), ('next', 391), ('param3', 56)])
						flw_391:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 390), ('param3', 36)])
						story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 392), ('param3', 16)])
						printf("######I'm counting on you, young man!\nWithout my crystal ball, I cannot gaze\ninto the future. Oh no... My eyes, they\nwould droop with despair...\nPlease bring me a new crystal ball\nwith all haste!")
					  case 1:
						printf("######Understood, Master. Should you wish\nto set your dowsing target to the item\nin question later, simply speak to this\nperson again.")
						goto flw_391
					}
				  case 1:
					printf("#####...###########Such a cruel world#####...#####")
				}
			}
		}
	}
}

void entrypoint_118_17() {
	start()
	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
	  case 0:
		switch (loadzone_temp_flags[14 /* 0x8 40 */]) {
		  case 0:
			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 15), ('next', 480), ('param3', 13)])
				printf("Can you believe the Isle of the Goddess\nis gone? The thought boggles the mind.\n\n\nI couldn't believe it until I went and\nconfirmed the truth of it with my own\neyes!\n\nTerrible though it is, the headmaster\nhas informed me that it was a price we\nhad to pay to save Zelda. We're\ncounting on you to find her!")
			  case 1:
				flw_173:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 36), ('next', 509), ('param3', 32)])
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 1), ('next', 322), ('param3', 13)])
				printf("Oh, ####! The world is\nbursting with undiscovered surprises,\nisn't it? I wonder how many\nunidentified plants are still out there.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 36), ('next', 121), ('param3', 17)])
				printf("######You know, the longer I spend with this\nplant, the more interested I become!\n\n\n######Just how much of this thing is a\nplant and how much an animal, do\nyou suppose? Fascinating!")
				loadzone_temp_flags[14 /* 0x8 40 */] = true;
			}
		  case 1:
			goto flw_173
		}
	  case 1:
		switch (story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 118), ('param2', 21), ('next', -1), ('param3', 7)])
		  case 1:
			switch (story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 274), ('param3', 31)])
				switch (loadzone_temp_flags[14 /* 0x8 40 */]) {
				  case 0:
					printf("######Ha! I knew you would lend me a\ngreen thumb, ####!\nThank you in advance!")
					flw_229:
					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
					  case 0:
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 268), ('param3', 32)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 269), ('param3', 17)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 230), ('param3', 6)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 270), ('param3', 51)])
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 231), ('param3', 50)])
						printf("Your ###########dowsing #####ability is not currently\ncalibrated to search for the #####plant\n#####that this person seeks.\n\n######Do you wish to calibrate your #####dowsing\n#####ability to search for this #####plant#####?\n#####Sure.#####Not yet.")
						switch (choice(2, 0)) {
						  case 0:
							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 16), ('next', 395), ('param3', 56)])
							printf("######Understood, Master.\n\n\n\nYour ###########dowsing #####ability is now set to\ndetect the #####plant##### this person seeks.")
							flw_240:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
						  case 1:
							printf("######Understood, Master. Your ######dowsing\nability will not be set to find this item.")
							goto flw_240
						}
					}
				  case 1:
					printf("######How goes the search for exotic flora?\nAny luck finding new varieties of\nexotic plant species?")
					goto flw_229
				}
			  case 1:
				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
				  case 0:
					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 321), ('param3', 31)])
						printf("######Oh! Have you decided to help me\nafter all, ####?\n\n\nCollecting exotic plants is my passion!")
						flw_118:
						printf("######But you see...I have begun to fear that\nI have collected everything I can hope\nto collect. My plant collection now\nfeatures every known species.\nI've started wondering if, in light of\nyour travels, there isn't somewhere you\nmight be able to discover something\nnew for me.\n######What do you think? Would you be\nwilling to look for a new plant species\nfor me? Perhaps something exotic...\nThe kind that would turn a few heads?\n#####I'll try.#####Maybe later.")
						switch (choice(2, 0)) {
						  case 0:
							printf("####\n#Aha! I knew you would be willing\nto help me out, ####.\n\n\nI'm truly sorry to trouble you, but\nplease try to bring me something\nrare... Something no one will have\nseen before!")
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 266), ('param3', 32)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 271), ('param3', 17)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 134), ('param3', 6)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 272), ('param3', 51)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 135), ('param3', 50)])
							printf("Your ###########dowsing##### ability can be calibrated\nto locate the #####plant##### that this person\nseeks.\n\nHowever, if you are searching for\nanother object that someone has\nasked you to find, that target will be\nremoved when you switch to this target.\nDo you wish to set this #####plant##### as your\ncurrent #####dowsing##### target?\n#####Yes!#####Not now.")
							switch (choice(2, 0)) {
							  case 0:
								printf("######Understood, Master. I will set the plant\nin question as your current dowsing\ntarget.")
								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 16), ('next', 136), ('param3', 56)])
								flw_136:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 119), ('param3', 36)])
								story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */] = true;
								loadzone_temp_flags[14 /* 0x8 40 */] = true;
							  case 1:
								printf("######Understood, Master. Should you wish\nto set your dowsing target to the item\nin question later, simply speak to this\nperson again.")
								goto flw_136
							}
						  case 1:
							printf("####\n#Ha! I suppose you do have other\nmatters to be minding. Just don't\nforget to stop and take a moment for\nyourself and relax now and again!\nIf you're always so focused on the\ntask at hand, you'll wear yourself out.")
						}
					  case 1:
						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 484), ('param3', 31)])
						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 15), ('next', 482), ('param3', 13)])
							printf("Can you believe the Isle of the Goddess\nis gone? The thought boggles the mind.\n\n\nI couldn't believe it until I went and\nconfirmed the truth of it with my own\neyes!\n\nTerrible though it is, the headmaster\nhas informed me that it was a price we\nhad to pay to save Zelda. We're\ncounting on you to find her!")
							flw_116:
							printf("######Ahem. By the way...would you be\nwilling to listen to a little request\nof mine as well?\n\nAs I'm sure you're aware, I'm the\neminent authority on plant collecting\nin Skyloft. If I do say so myself...")
							goto flw_118
						  case 1:
							printf("######Oh, ####! How did it go?\nWere you able to hear what Levias\nhad to say?\n\n...I see! I was right, then. There is\nsomething special about you. I have a\nfeeling you and that vibrant Loftwing\nof yours will be just fine.\nThe road ahead of you certainly won't\nbe a smooth one, but don't lose faith!")
							goto flw_116
						}
					}
				  case 1:
					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
					  case 0:
						printf("##############! I don't suppose\nyou'd be willing to lend an ear to my\ntroubles this time, would you?\n#####What is it?#####No, sorry.")
						switch (choice(2, 0)) {
						  case 0:
							printf("Actually, let's talk about this matter\nanother time. Since Kukiel has gone\nmissing, her mother has asked me to\nhelp with the search.\nIf you have the time, I'm sure she'd\nappreciate your help as well.")
						  case 1:
							printf("######Hah! Surely it wouldn't cause you\npain to listen to one of my concerns\nfor once!")
						}
					  case 1:
						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 15), ('next', 485), ('param3', 13)])
							printf("Can you believe the Isle of the Goddess\nis gone? The thought boggles the mind.\n\n\nI couldn't believe it until I went and\nconfirmed the truth of it with my own\neyes!\n\nTerrible though it is, the headmaster\nhas informed me that it was a price we\nhad to pay to save Zelda. We're\ncounting on you to find her!")
						  case 1:
							printf("######Oh, ####! How did it go?\nWere you able to hear what Levias\nhad to say?\n\n...I see! I was right, then. There is\nsomething special about you. I have a\nfeeling you and that vibrant Loftwing\nof yours will be just fine.\nThe road ahead of you certainly won't\nbe a smooth one, but don't lose faith!")
							story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
						}
					}
				}
			}
		}
	}
}

void entrypoint_118_18() {
	start()
	printf("Here's that #####windmill propeller#####, zzzazt!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 86), ('param3', 33)])
	printf("If you need me...zzrboosh-\nCLANG...feel free to call!\n\n\nFor Mistress Fi, I will travel to\nany destination, ker-dizzzt!")
}

void entrypoint_118_19() {
	start()
	printf("######Keeee-paleeep! I'm not used to getting\nstared at like this. It's making me\nblush!")
}

void entrypoint_118_20() {
	start()
	printf("Here's that bright and shiny\ncrystal ball, BZZAT!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 126), ('param3', 33)])
	printf("If you need me...zzrboosh-\nCLANG...feel free to call!\n\n\nFor Mistress Fi, I will travel to\nany destination, ker-dizzzt!")
	loadzone_temp_flags[2 /* 0x9 04 */] = true;
}

void entrypoint_118_04() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 8), ('next', 13), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 21), ('next', 145), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5386), ('param2', 3072), ('next', 16), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 14), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 8), ('next', 9), ('param3', 16)])
	printf("######Kukiel! Kukiel! Where could that\nchild have gone?!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 146), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5387), ('param2', 3328), ('next', 1), ('param3', 13)])
	printf("Oh, Kukiel... Where did you go?\n\n\n\nWhat will I do if she's been...\nkidnapped?!")
	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 100), ('next', 369), ('param3', 16)])
	printf("######Oh! ########!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 344), ('param3', 47)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 342), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 48), ('param2', 356), ('next', 341), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 100), ('next', 365), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 5390), ('param2', 3840), ('next', 346), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 370), ('param3', 48)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 48), ('param2', 100), ('next', 340), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 118), ('param2', 25), ('next', -1), ('param3', 7)])
}

void entrypoint_118_21() {
	start()
	switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
	  case 0:
		printf("Zzzz-TING! If you should have need of\nme again, just call, dzzzrp!")
	  case 1:
		printf("I have come bearing the unusual Kikwi,\nfzzzzk!")
		loadzone_temp_flags[1 /* 0x9 02 */] = true;
	}
}

