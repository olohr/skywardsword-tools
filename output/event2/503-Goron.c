void entrypoint_503_57() {
	start()
	printf("######THAT IS IT! One of the #####talking statues\n#####the ancient texts spoke of! There is\njust no mistaking it!")
	scene_flags[10 'Sealed Grounds'][73 /* 0x8 02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_503_74() {
	start()
	temp_flags[3 /* 0x1 08 */] = true;
	temp_flags[4 /* 0x1 10 */] = true;
	temp_flags[6 /* 0x1 40 */] = true;
	temp_flags[11 /* 0x0 08 */] = true;
	switch (scene_flags[64 /* 0x9 01 */]) {
	  case 0:
		printf("######Today, buddy, I would like to witness\nthe magic of #####bombs##### emerging from the\nwall! For my research, of course!\n\n#####...By the way, would you like to\nreview what was written in the text?\n#####Please!#####Nah.")
		flw_67:
		switch (choice(2, 0)) {
		  case 0:
			printf("###########Closed Circle##########... Ye who hungers for\ndestructive force, draw this shape so\nthat it may be known.")
			printf("######Well, that is what is written there!\nDoes that mean anything to you?")
			flw_137:
			temp_flags[9 /* 0x0 02 */] = true;
			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
		  case 1:
			printf("######Really? #####Well then...I want to see it!")
			goto flw_137
		}
	  case 1:
		printf("###########Closed Circle##########... Ye who hungers for\ndestructive force, draw this shape so\nthat it may be known.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		goto flw_137
	}
}

void entrypoint_503_58() {
	start()
	flw_55:
	switch (choice(2, 0)) {
	  case 0:
		printf("###########Glimmering Hexagon##########... Ye who seeks\ngreat riches, draw this shape so that it\nmay be known.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		flw_135:
		temp_flags[7 /* 0x1 80 */] = true;
		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
	  case 1:
		printf("######Really? #####Well then...I want to see it!")
		goto flw_135
	}
}

void entrypoint_503_75() {
	start()
	temp_flags[3 /* 0x1 08 */] = true;
	temp_flags[4 /* 0x1 10 */] = true;
	temp_flags[5 /* 0x1 20 */] = true;
	temp_flags[11 /* 0x0 08 */] = true;
	switch (scene_flags[65 /* 0x9 02 */]) {
	  case 0:
		printf("######Today I would like to witness the magic\nof #####arrows##### emerging from the wall!\nFor my research, of course.\n\n#####...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nah.")
		flw_73:
		switch (choice(2, 0)) {
		  case 0:
			printf("###########Arrow in Repose##########... Ye who yearns to\nstrike targets from afar, draw this\nshape so that it may be known.")
			printf("######Well, that is what is written there!\nDoes that mean anything to you?")
			flw_138:
			temp_flags[10 /* 0x0 04 */] = true;
			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
		  case 1:
			printf("######Really? #####Well then...I want to see it!")
			goto flw_138
		}
	  case 1:
		printf("###########Arrow in Repose##########... Ye who yearns to\nstrike targets from afar, draw this\nshape so that it may be known.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		goto flw_138
	}
}

void entrypoint_503_59() {
	start()
	flw_61:
	switch (choice(2, 0)) {
	  case 0:
		printf("###########Life's Crimson Vessel##########... Ye who longs\nfor the source of life, draw this shape\nso that it may be known.\n\nDo so, and from the heavens shall fall\na rain of life's essence.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		flw_136:
		temp_flags[8 /* 0x0 01 */] = true;
		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
	  case 1:
		printf("######Really? #####Well then...I want to see it!")
		goto flw_136
	}
}

void entrypoint_503_07() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 364), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 280), ('next', 368), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6145), ('param2', 256), ('next', 575), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 365), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 366), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 100), ('next', 328), ('param3', 16)])
	switch (scene_flags[69 /* 0x9 20 */]) {
	  case 0:
		switch (scene_flags[68 /* 0x9 10 */]) {
		  case 0:
			flw_171:
			switch (scene_flags[61 /* 0x6 20 */]) {
			  case 0:
				printf("######BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
				flw_195:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 17), ('next', -1), ('param3', 7)])
			  case 1:
				printf("######SWEET MONEYBAGS!\n\n\n\nSo that is what it meant by great\nriches!")
				scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
				goto flw_195
			}
		  case 1:
			scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
			printf("######SWEET MONEYBAGS!\n\n\n\nSo that is what it meant by great\nriches!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 20), ('next', -1), ('param3', 7)])
		}
	  case 1:
		goto flw_171
	}
}

void entrypoint_503_76() {
	start()
	temp_flags[3 /* 0x1 08 */] = true;
	temp_flags[4 /* 0x1 10 */] = true;
	temp_flags[5 /* 0x1 20 */] = true;
	temp_flags[6 /* 0x1 40 */] = true;
	switch (scene_flags[63 /* 0x6 80 */]) {
	  case 0:
		printf("######Today, buddy, I would like to witness\nthe magic of #####Fairies##### emerging from the\nwall! For my research, of course!\n\n#####...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nah.")
		flw_428:
		switch (choice(2, 0)) {
		  case 0:
			printf("######...The three... ...ngles...\n...the Tri...ce... ...and...")
			printf("######...The text is too badly damaged\nto read at all beyond that point.\nWhat do you suppose it could say?")
			flw_438:
			temp_flags[12 /* 0x0 10 */] = true;
			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
		  case 1:
			printf("######Really? #####Well then...I want to see it!")
			goto flw_438
		}
	  case 1:
		printf("######...The three... ...ngles...\n...the Tri...ce... ...and...")
		printf("######...The text is too badly damaged\nto read at all beyond that point.\nWhat do you suppose it could say?")
		goto flw_438
	}
}

void entrypoint_503_08() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 369), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 280), ('next', 373), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6145), ('param2', 256), ('next', 576), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 370), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 371), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 100), ('next', 330), ('param3', 16)])
	switch (scene_flags[69 /* 0x9 20 */]) {
	  case 0:
		switch (scene_flags[68 /* 0x9 10 */]) {
		  case 0:
			flw_183:
			switch (scene_flags[62 /* 0x6 40 */]) {
			  case 0:
				printf("######BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
				flw_194:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 17), ('next', -1), ('param3', 7)])
			  case 1:
				printf("######ASTONISHING!\n\n\n\nSo that is what the ancient writing\nmeant by a crimson vessel!")
				scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
				goto flw_194
			}
		  case 1:
			scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
			printf("######ASTONISHING!\n\n\n\nSo that is what the ancient writing\nmeant by a crimson vessel!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 20), ('next', -1), ('param3', 7)])
		}
	  case 1:
		goto flw_183
	}
}

void entrypoint_503_77() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 236)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 76), ('next', -1), ('param3', 7)])
	  case 1:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 240)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
		  case 2:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
		  case 3:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
		}
	  case 2:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 244)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
		  case 2:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
		  case 3:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
		}
	  case 3:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 248)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
		  case 2:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
		  case 3:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
		}
	}
}

void entrypoint_503_60() {
	start()
	goto flw_67
}

void entrypoint_503_09() {
	start()
	flw_377:
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 374), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 280), ('next', 378), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6145), ('param2', 256), ('next', 577), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 375), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 376), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 100), ('next', 185), ('param3', 16)])
	switch (scene_flags[63 /* 0x6 80 */]) {
	  case 0:
		printf("######BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 17), ('next', -1), ('param3', 7)])
	  case 1:
		printf("######HOLY GORON!\n\n\n\nSo this is what the lost part of the old\ntext was explaining! Nice going, bud!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 186), ('param3', 39)])
		scene_flags[10 'Sealed Grounds'][63 /* 0x6 80 */] = true;
		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = true;
		printf("######Now I have seen everything that those\nancient writings described!\n\n\nI really owe you, bud, so let me give you\nthis! Just my way of saying thanks.")
		give_item(33 0x21);
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 556), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 588), ('param3', 39)])
		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
		  case 0:
			flw_394:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 589), ('param3', 32)])
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 280), ('next', 394), ('param3', 15)])
			goto flw_394
		}
	}
}

void entrypoint_503_78() {
	start()
	flw_517:
	printf("######Lost writings in an ancient text...\n#####What secrets could have been\nwritten there?\n\nLayers upon layers of mysteries...\n\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####No, thanks.")
	flw_459:
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 65), ('next', -1), ('param3', 7)])
}

void entrypoint_503_61() {
	start()
	goto flw_73
}

void entrypoint_503_62() {
	start()
	flw_79:
	switch (choice(2, 0)) {
	  case 0:
		printf("###########Glimmering Hexagon##########... Ye who seeks\ngreat riches, draw this shape so that it\nmay be known.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		flw_139:
		temp_flags[7 /* 0x1 80 */] = true;
		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
	  case 1:
		printf("######Really? #####Well then...I want to see it!")
		goto flw_139
	}
}

void entrypoint_503_10() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 379), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 280), ('next', 383), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6145), ('param2', 256), ('next', 579), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 380), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 381), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 100), ('next', 332), ('param3', 16)])
	switch (scene_flags[69 /* 0x9 20 */]) {
	  case 0:
		switch (scene_flags[68 /* 0x9 10 */]) {
		  case 0:
			flw_187:
			switch (scene_flags[64 /* 0x9 01 */]) {
			  case 0:
				printf("######BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
				flw_192:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 17), ('next', -1), ('param3', 7)])
			  case 1:
				printf("######SWEET BOMBO-DONGO!\n\n\n\nSo that is what it meant by great\ndestructive force!")
				scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
				goto flw_192
			}
		  case 1:
			scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
			printf("######SWEET BOMBO-DONGO!\n\n\n\nSo that is what it meant by great\ndestructive force!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 20), ('next', -1), ('param3', 7)])
		}
	  case 1:
		goto flw_187
	}
}

void entrypoint_503_63() {
	start()
	flw_85:
	switch (choice(2, 0)) {
	  case 0:
		printf("###########Life's Crimson Vessel##########... Ye who longs\nfor the source of life, draw this shape\nso that it may be known.\n\nDo so, and from the heavens shall fall\na rain of life's essence.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		flw_140:
		temp_flags[8 /* 0x0 01 */] = true;
		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
	  case 1:
		printf("######Really? #####Well then...I want to see it!")
		goto flw_140
	}
}

void entrypoint_503_64() {
	start()
	flw_91:
	switch (choice(2, 0)) {
	  case 0:
		printf("###########Closed Circle##########... Ye who hungers for\ndestructive force, draw this shape so\nthat it may be known.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		flw_141:
		temp_flags[9 /* 0x0 02 */] = true;
		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
	  case 1:
		printf("######Really? #####Well then...I want to see it!")
		goto flw_141
	}
}

void entrypoint_503_65() {
	start()
	goto flw_428
}

void entrypoint_503_66() {
	start()
	flw_51:
	switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
	  case 0:
		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
		  case 0:
			printf("####&#Over time, the power of the goddess\nwalls is #####restored#####!\n\n\n######When that happens, I would like your\nhelp with my research again!")
		  case 1:
			printf("######Over time, the power of the goddess\nwalls is #####restored#####!\n\n\n######When that happens, I would like your\nhelp with my research again!")
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 1), ('next', 40), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 22)])) {
		  case 0:
			switch (scene_flags[67 /* 0x9 08 */]) {
			  case 0:
				switch (scene_flags[68 /* 0x9 10 */]) {
				  case 0:
					switch (scene_flags[63 /* 0x6 80 */]) {
					  case 0:
						switch (temp_flags[7 /* 0x1 80 */]) {
						  case 0:
							printf("####!#I want to see a bunch of #####Rupees\n#####pop out of the wall again!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 58), ('next', -1), ('param3', 7)])
						  case 1:
							switch (temp_flags[8 /* 0x0 01 */]) {
							  case 0:
								printf("####!#I want to see the wall rain #####hearts##### down\non you again!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 59), ('next', -1), ('param3', 7)])
							  case 1:
								switch (temp_flags[9 /* 0x0 02 */]) {
								  case 0:
									printf("######Buddy, I have always said that an\nexplosive is worth a pound of...uh,\nboom? Anyway, I want to see #####bombs\n#####come out of that wall today!\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 60), ('next', -1), ('param3', 7)])
								  case 1:
									switch (temp_flags[10 /* 0x0 04 */]) {
									  case 0:
										printf("####!#Listen, buddy, I need to see some\n#####arrows##### come flying out of that wall!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 61), ('next', -1), ('param3', 7)])
									  case 1:
										switch (temp_flags[12 /* 0x0 10 */]) {
										  case 0:
											switch (scene_flags[63 /* 0x6 80 */]) {
											  case 0:
												printf("####!#I want to see more #####Fairies##### appear!\nThink you can do it again?\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
												goto flw_459
											  case 1:
												goto flw_517
											}
										  case 1:
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 77), ('next', -1), ('param3', 7)])
										}
									}
								}
							}
						}
					  case 1:
						temp_flags[3 /* 0x1 08 */] = true;
						temp_flags[4 /* 0x1 10 */] = true;
						temp_flags[5 /* 0x1 20 */] = true;
						temp_flags[6 /* 0x1 40 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 78), ('next', -1), ('param3', 7)])
					}
				  case 1:
					switch (temp_flags[7 /* 0x1 80 */]) {
					  case 0:
						switch (scene_flags[61 /* 0x6 20 */]) {
						  case 0:
							printf("####!#I want to see a bunch of #####Rupees\n#####pop out of the wall again!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
							flw_452:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 58), ('next', -1), ('param3', 7)])
						  case 1:
							printf("######Great riches, eh? Do you suppose\nthey...they really meant it?!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
							goto flw_452
						}
					  case 1:
						switch (temp_flags[8 /* 0x0 01 */]) {
						  case 0:
							switch (scene_flags[62 /* 0x6 40 */]) {
							  case 0:
								printf("####!#I want to see the wall rain #####hearts##### down\non you again!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
								flw_453:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 59), ('next', -1), ('param3', 7)])
							  case 1:
								printf("######From the heavens shall fall\na rain of life's essence...\n\n\n######What do you think that means, bud?\nWhatever it is, it sounds kind of...\nrefreshing!\n\n######...By the way, want to see what was\nwritten in the text again, bud?\n#####Please!#####No, thanks.")
								goto flw_453
							}
						  case 1:
							switch (temp_flags[9 /* 0x0 02 */]) {
							  case 0:
								switch (scene_flags[64 /* 0x9 01 */]) {
								  case 0:
									printf("######Buddy, I have always said that an\nexplosive is worth a pound of...uh,\nboom? Anyway, I want to see #####bombs\n#####come out of that wall today!\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
									flw_454:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 60), ('next', -1), ('param3', 7)])
								  case 1:
									printf("####!#What kind of shape is a closed circle,\nanyway? Huh. I thought all of them\nwere closed.\n\n######This is just a hunch, but...####\nI think it\nmight just be a regular old circle!\n\n\n######...By the way, want to see what was\nwritten in the text again, bud?\n#####Please!#####No, thanks.")
									goto flw_454
								}
							  case 1:
								switch (temp_flags[10 /* 0x0 04 */]) {
								  case 0:
									switch (scene_flags[65 /* 0x9 02 */]) {
									  case 0:
										printf("####!#Listen, buddy, I need to see some\n#####arrows##### come flying out of that wall!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
										flw_455:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 61), ('next', -1), ('param3', 7)])
									  case 1:
										printf("######Strike targets from afar... You do not\nsuppose that could mean THAT, do\nyou, bud?\n\n######...By the way, want to see what was\nwritten in the text again, bud?\n#####Please!#####No, thanks.")
										goto flw_455
									}
								  case 1:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 71), ('next', -1), ('param3', 7)])
								}
							}
						}
					}
				}
			  case 1:
				printf("######I came across an ancient volume\nin the course of my research!\nWant to know what it had to say?\n#####Of course!#####Nah...")
				switch (choice(2, 0)) {
				  case 0:
					flw_53:
					printf("###########Arrow in Repose##########... Ye who yearns to\nstrike targets from afar, draw this\nshape so that it may be known.")
					printf("######Well, that is what is written there!\nDoes that mean anything to you?")
					scene_flags[10 'Sealed Grounds'][67 /* 0x9 08 */] = true;
					temp_flags[3 /* 0x1 08 */] = true;
					temp_flags[4 /* 0x1 10 */] = true;
					temp_flags[5 /* 0x1 20 */] = true;
					temp_flags[10 /* 0x0 04 */] = true;
					temp_flags[11 /* 0x0 08 */] = true;
					story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
					story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
					switch (scene_flags[61 /* 0x6 20 */]) {
					  case 0:
						switch (scene_flags[62 /* 0x6 40 */]) {
						  case 0:
							switch (scene_flags[64 /* 0x9 01 */]) {
							  case 0:
								scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
							  case 1:
							}
						  case 1:
						}
					  case 1:
					}
				  case 1:
					printf("######No need to be shy, now! I can see\nthe excitement on your face, bud!\nOh, all right, I will tell you!")
					goto flw_53
				}
			}
		  case 1:
			printf("######There is no mistaking it! This symbol\nmust mark one of the #####goddess walls#####\nleft for the hero by the goddess!")
			switch (temp_flags[7 /* 0x1 80 */]) {
			  case 0:
				switch (scene_flags[61 /* 0x6 20 */]) {
				  case 0:
					printf("####!#I want to see a bunch of #####Rupees\n#####pop out of the wall again!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
					flw_160:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 62), ('next', -1), ('param3', 7)])
				  case 1:
					printf("######Great riches, eh? Do you suppose\nthey...they really meant it?!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
					goto flw_160
				}
			  case 1:
				switch (temp_flags[8 /* 0x0 01 */]) {
				  case 0:
					switch (scene_flags[62 /* 0x6 40 */]) {
					  case 0:
						printf("####!#I want to see the wall rain #####hearts##### down\non you again!\n\n\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
						flw_161:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 63), ('next', -1), ('param3', 7)])
					  case 1:
						printf("######From the heavens shall fall\na rain of life's essence...\n\n\n######What do you think that means, bud?\nWhatever it is, it sounds kind of...\nrefreshing!\n\n######...By the way, want to see what was\nwritten in the text again, bud?\n#####Please!#####No, thanks.")
						goto flw_161
					}
				  case 1:
					switch (temp_flags[9 /* 0x0 02 */]) {
					  case 0:
						switch (scene_flags[64 /* 0x9 01 */]) {
						  case 0:
							printf("######Buddy, I have always said that an\nexplosive is worth a pound of...uh,\nboom? Anyway, I want to see #####bombs\n#####come out of that wall today!\n######...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####Nope.")
							flw_162:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 64), ('next', -1), ('param3', 7)])
						  case 1:
							printf("####!#What kind of shape is a closed circle,\nanyway? Huh. I thought all of them\nwere closed.\n\n######This is just a hunch, but...####\nI think it\nmight just be a regular old circle!\n\n\n######...By the way, want to see what was\nwritten in the text again, bud?\n#####Please!#####No, thanks.")
							goto flw_162
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 67), ('next', -1), ('param3', 7)])
					}
				}
			}
		}
	}
}

void entrypoint_503_15() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 384), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 280), ('next', 388), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6145), ('param2', 256), ('next', 580), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 385), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 386), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 100), ('next', 334), ('param3', 16)])
	switch (scene_flags[69 /* 0x9 20 */]) {
	  case 0:
		switch (scene_flags[68 /* 0x9 10 */]) {
		  case 0:
			flw_189:
			switch (scene_flags[65 /* 0x9 02 */]) {
			  case 0:
				printf("######BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
				flw_193:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 17), ('next', -1), ('param3', 7)])
			  case 1:
				printf("######SWEET GORON!\n\n\n\nSo that is what the ancient writing\nmeant by striking targets from afar!")
				scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
				goto flw_193
			}
		  case 1:
			scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
			printf("######SWEET GORON!\n\n\n\nSo that is what the ancient writing\nmeant by striking targets from afar!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 20), ('next', -1), ('param3', 7)])
		}
	  case 1:
		goto flw_189
	}
}

void entrypoint_503_67() {
	start()
	switch (scene_flags[61 /* 0x6 20 */]) {
	  case 0:
		switch (scene_flags[62 /* 0x6 40 */]) {
		  case 0:
			switch (scene_flags[64 /* 0x9 01 */]) {
			  case 0:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 116)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 68), ('next', -1), ('param3', 7)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 69), ('next', -1), ('param3', 7)])
				  case 2:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 70), ('next', -1), ('param3', 7)])
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 70), ('next', -1), ('param3', 7)])
			}
		  case 1:
			switch (scene_flags[64 /* 0x9 01 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 69), ('next', -1), ('param3', 7)])
			  case 1:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 119)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 70), ('next', -1), ('param3', 7)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 69), ('next', -1), ('param3', 7)])
				}
			}
		}
	  case 1:
		switch (scene_flags[62 /* 0x6 40 */]) {
		  case 0:
			switch (scene_flags[64 /* 0x9 01 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 68), ('next', -1), ('param3', 7)])
			  case 1:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 123)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 68), ('next', -1), ('param3', 7)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 70), ('next', -1), ('param3', 7)])
				}
			}
		  case 1:
			switch (scene_flags[64 /* 0x9 01 */]) {
			  case 0:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 121)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 68), ('next', -1), ('param3', 7)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 69), ('next', -1), ('param3', 7)])
				}
			  case 1:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 125)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 68), ('next', -1), ('param3', 7)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 69), ('next', -1), ('param3', 7)])
				  case 2:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 70), ('next', -1), ('param3', 7)])
				}
			}
		}
	}
}

void entrypoint_503_68() {
	start()
	temp_flags[4 /* 0x1 10 */] = true;
	temp_flags[5 /* 0x1 20 */] = true;
	temp_flags[6 /* 0x1 40 */] = true;
	temp_flags[11 /* 0x0 08 */] = true;
	switch (scene_flags[61 /* 0x6 20 */]) {
	  case 0:
		printf("######Today I would like to witness the magic\nof #####Rupees##### emerging from the wall.\nFor my research, of course!\n\n#####...By the way, would you like to\nreview what was written in the text?\n#####Please!#####No need.")
		goto flw_79
	  case 1:
		printf("###########Glimmering Hexagon##########... Ye who seeks\ngreat riches, draw this shape so that it\nmay be known.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		goto flw_139
	}
}

void entrypoint_503_51() {
	start()
	switch (scene_flags[110 /* 0xC 40 */]) {
	  case 0:
		flw_13:
		printf("####%#It is sort of embarrassing to admit, but \nthat is all I have figured out so far. \nBut, hey, I just started my research!\n\n######If you find yourself still hankering to\nlearn more, come back and talk to me\nagain later!\n\n######Meanwhile, I will keep trying to dig\nup more information!")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 5), ('param3', 31)])
		printf("######Oh, hey, bud! We meet again! In a\nhurry as usual, eh?\n\n\n######Yup, I have been keeping busy too,\nchecking out the wonders of the world.\n\n\n######Say, you want to hear about some\nof my research?\n#####Sure!#####Nah...")
		switch (choice(2, 0)) {
		  case 0:
			printf("######OK, bud, prepare to be amazed!\nI made a huge discovery while I was\nout doing my field research.\n\nSo get a load of this... Apparently,\nthere are #####walls #####and #####statues##### that\nrespond to ###########beautiful tones#####!\n\n######Wild, right? Want to know more?\n#####Of course!#####Nah...")
			switch (choice(2, 0)) {
			  case 0:
				scene_flags[10 'Sealed Grounds'][110 /* 0xC 40 */] = true;
				goto flw_13
			  case 1:
				flw_11:
				printf("####%#Oh, that is too bad. Well, if you ever \nget in a researchy kind of mood, you\nknow where to find me.")
			}
		  case 1:
			goto flw_11
		}
	}
}

void entrypoint_503_17() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 631), ('param3', 39)])
	switch (scene_flags[113 /* 0xF 02 */]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 82)])) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 86)])) {
			  case 0:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(62 0x3E);
				flw_554:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 596), ('param3', 39)])
				switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
				  case 0:
					flw_501:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 597), ('param3', 32)])
					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 280), ('next', 501), ('param3', 15)])
					goto flw_501
				}
			  case 1:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(4 0x04);
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 554), ('param3', 12)])
				goto flw_554
			  case 2:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(62 0x3E);
				goto flw_554
			  case 3:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(62 0x3E);
				goto flw_554
			}
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 90)])) {
			  case 0:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(63 0x3F);
				goto flw_554
			  case 1:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(4 0x04);
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 554), ('param3', 12)])
				goto flw_554
			  case 2:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(62 0x3E);
				goto flw_554
			  case 3:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(63 0x3F);
				goto flw_554
			}
		  case 2:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 94)])) {
			  case 0:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(63 0x3F);
				goto flw_554
			  case 1:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(4 0x04);
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 554), ('param3', 12)])
				goto flw_554
			  case 2:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(64 0x40);
				goto flw_554
			  case 3:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(63 0x3F);
				goto flw_554
			}
		  case 3:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 98)])) {
			  case 0:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(64 0x40);
				goto flw_554
			  case 1:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(4 0x04);
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 554), ('param3', 12)])
				goto flw_554
			  case 2:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(32 0x20);
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 554), ('param3', 12)])
				goto flw_554
			  case 3:
				printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
				give_item(32 0x20);
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 554), ('param3', 12)])
				goto flw_554
			}
		}
	  case 1:
		scene_flags[10 'Sealed Grounds'][113 /* 0xF 02 */] = true;
		printf("######For helping me out with my research,\nI would like to give you a little\nsomething!")
		give_item(94 0x5E);
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 640), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 639), ('param3', 32)])
		printf("######The magical power of the goddess walls\n#####returns##### after a little time has passed,\nso come by and help me with my\nresearch again sometime, OK?")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 636), ('param3', 39)])
		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
		  case 0:
			flw_634:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 280), ('next', 634), ('param3', 15)])
			goto flw_634
		}
	}
}

void entrypoint_503_69() {
	start()
	temp_flags[3 /* 0x1 08 */] = true;
	temp_flags[5 /* 0x1 20 */] = true;
	temp_flags[6 /* 0x1 40 */] = true;
	temp_flags[11 /* 0x0 08 */] = true;
	switch (scene_flags[62 /* 0x6 40 */]) {
	  case 0:
		printf("######Today I would like to witness the magic\nof #####hearts##### emerging from the wall!\nHow astonishing would that be?\n\n#####...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####No need.")
		goto flw_85
	  case 1:
		printf("###########Life's Crimson Vessel##########... Ye who longs\nfor the source of life, draw this shape\nso that it may be known.\n\nDo so, and from the heavens shall fall\na rain of life's essence.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		goto flw_140
	}
}

void entrypoint_503_52() {
	start()
	switch (scene_flags[36 /* 0x5 10 */]) {
	  case 0:
		printf("######What is going on here?! #####This has never\nhappened before!")
	  case 1:
		switch (scene_flags[111 /* 0xC 80 */]) {
		  case 0:
			flw_22:
			printf("####\n#Ancient tomes mention these\nbutterflies flapping around in packs\nby certain walls and statues!\n\nSeems like these butterflies have some\nkind of sixth sense. They are detecting,\nuh...something! Want to hear more?\n#####Please!#####Enough.")
			switch (choice(2, 0)) {
			  case 0:
				scene_flags[10 'Sealed Grounds'][111 /* 0xC 80 */] = true;
				printf("######Which are you interested in?\n#####Walls.#####Statues.")
				switch (choice(2, 0)) {
				  case 0:
					printf("######From what I have learned, it sounds\nlike these walls were left behind by\nthe goddess for the hero mentioned\nin legends!\nThe things the hero desires are said to\nspring forth from behind the walls.\nThat is why they call them #####goddess\nwalls#####, I suppose. Hungry to hear more?\n#####Of course!#####Sorry...")
					switch (choice(2, 0)) {
					  case 0:
						printf("####%#THAT IS THE SPIRIT! But sadly, that\nis as far as my research has gotten me.\n\n\n####\n#As soon as I make any new discoveries,\nyou will be the first to know!")
					  case 1:
						printf("######I am hard at work investigating the\nlocations of those #####goddess walls##### now!")
					}
				  case 1:
					printf("######The writings claim that the statues\nappear out of nowhere with a\n#boing-oing\" sound and speak a\nstrange language!\nCan you believe it, buddy? #####Talking\nstatues#####! I know you want to hear more\nabout this!\n#####Tell me!#####No, thanks.")
					switch (choice(2, 0)) {
					  case 0:
						printf("####%#THAT IS THE SPIRIT! But sadly, that\nis as far as my research has gotten me.\n\n\n####\n#As soon as I make any new discoveries,\nyou will be the first to know!")
					  case 1:
						printf("######I am hard at work investigating the\nlocations of those #####talking statues##### now!")
					}
				}
			  case 1:
				flw_16:
				printf("####%#Oh, that is too bad. Well, if you ever \nget in a researchy kind of mood, you\nknow where to find me.")
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 6), ('param3', 31)])
			printf("######Oh, hey, bud! We meet again! In a\nhurry as usual, eh?\n\n\n######Yup, I have been keeping busy too,\nchecking out the wonders of the world.\n\n\n######Say, you want to hear about some\nof my research?\n#####Sure!#####Nah...")
			switch (choice(2, 0)) {
			  case 0:
				printf("######OK, bud, prepare to be amazed!\nI made a huge discovery while I was\nout doing my field research.\n\nSo get a load of this... Apparently,\nthere are #####walls #####and #####statues##### that\nrespond to ###########beautiful tones#####!\n\n######Wild, right? Want to know more?\n#####Of course!#####Nah...")
				switch (choice(2, 0)) {
				  case 0:
					printf("######ALL RIGHT! That is the kind of\narchaeological enthusiasm I like to see!\n\n\n######Oh, but before we get into the\nfascinating details of #####walls##### and #####statues#####,\nthere is something I had better ask you\nabout, bud.\n######You ever heard of a #####Blessed Butterfly#####?\n#####I've seen one!#####Nope.")
					switch (choice(2, 0)) {
					  case 0:
						printf("All right, bud, then let me jump\nstraight to the point.")
						goto flw_22
					  case 1:
						printf("######Oh! Right, so a #####Blessed Butterfly##### is\nthis kind of pretty, blue butterfly!\n\n\n######You may not believe it, but they are\nsuper hardy. They live in all kinds of\nplaces you would never expect.\n\n######Even in a land like this, you will see\nplenty of them!")
						goto flw_22
					}
				  case 1:
					goto flw_16
				}
			  case 1:
				goto flw_16
			}
		}
	}
}

void entrypoint_503_18() {
	start()
	switch (story_flags[424 /* us: 805A9B06 0x02, jp: 805ACD86 0x02 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 21), ('next', -1), ('param3', 7)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 389), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 280), ('next', 393), ('param3', 15)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6145), ('param2', 256), ('next', 581), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 390), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 391), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 100), ('next', 399), ('param3', 16)])
		switch (temp_flags[8 /* 0x0 01 */]) {
		  case 0:
			switch (story_flags[421 /* us: 805A9B07 0x40, jp: 805ACD87 0x40 */]) {
			  case 0:
				printf("######WHOA NOW!\n\n\n\n######...Three piddly hearts? Hardly a rain\nfrom the heavens, now is it?\n\n\nThat was not what I was expecting\nwould appear. I better do some more\nresearch!")
				printf("######Over time, the power of the goddess\nwalls is #####restored#####!\n\n\n######When that happens, I would like your\nhelp with my research again!")
				flw_532:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 590), ('param3', 39)])
				switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
				  case 0:
					flw_395:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 280), ('next', 395), ('param3', 15)])
					goto flw_395
				}
			  case 1:
				flw_398:
				printf("######WHAZIT?!\n\n\n\n######That was not what I was expecting\nwould appear. I better do a little\nmore research!")
				printf("######Over time, the power of the goddess\nwalls is #####restored#####!\n\n\n######When that happens, I would like your\nhelp with my research again!")
				goto flw_532
			}
		  case 1:
			goto flw_398
		}
	}
}

void entrypoint_503_53() {
	start()
	switch (scene_flags[73 /* 0x8 02 */]) {
	  case 0:
		printf("#####\nIt is just like the old texts say, buddy!\nIt appeared with a #boing-oing\" and\nspoke in some strange tongue!\n\n######This is a major leap forward in my\nstudy of the #####talking statues#####!\n\n\n######Next up are those #####goddess walls#####!\nI have got an inkling I will not have to \nlook very far for those, either. And I \nmean to find one, no matter what!")
	  case 1:
		switch (scene_flags[66 /* 0x9 04 */]) {
		  case 0:
			printf("######Oh... This could be a problem.\nI cannot carry a tune.\n\n\n######I could not create beautiful tones if\nwild animals threatened to roll me\ndown a hill! What can we do?")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 600), ('param3', 32)])
			printf("######GREAT GORON?!\nI have found some!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 101), ('next', 623), ('param3', 17)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 621), ('param3', 6)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 31), ('param3', 39)])
			printf("######Look! Those butterflies that respond\nto beautiful tones are swarming all\nover this place!\n\n######This has to be the right spot...")
			printf("######...Hrm.")
			printf("######Oh... This could be a problem.\nI cannot carry a tune.\n\n\n######I could not create beautiful tones if\nwild animals threatened to roll me\ndown a hill! What can we do?")
		}
	}
}

void entrypoint_503_70() {
	start()
	temp_flags[3 /* 0x1 08 */] = true;
	temp_flags[4 /* 0x1 10 */] = true;
	temp_flags[6 /* 0x1 40 */] = true;
	temp_flags[11 /* 0x0 08 */] = true;
	switch (scene_flags[64 /* 0x9 01 */]) {
	  case 0:
		printf("######Today, buddy, I would like to witness\nthe magic of #####bombs##### emerging from the\nwall! For my research, of course!\n\n#####...By the way, would you like to\nreview what was written in the text?\n#####Please!#####Nah.")
		goto flw_91
	  case 1:
		printf("###########Closed Circle##########... Ye who hungers for\ndestructive force, draw this shape so\nthat it may be known.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		goto flw_141
	}
}

void entrypoint_503_19() {
	start()
	switch (scene_flags[68 /* 0x9 10 */]) {
	  case 0:
		goto flw_377
	  case 1:
		flw_482:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 479), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 280), ('next', 483), ('param3', 15)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6145), ('param2', 256), ('next', 578), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 480), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 481), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 100), ('next', 484), ('param3', 16)])
		printf("######GREAT GORON!\n\n\n\n######Something I have never seen before\njust materialized out of that wall!\n\n\n###########...#####That could not have been a... ######\nNo, that is impossible! Forget it.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 592), ('param3', 39)])
		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
		  case 0:
			flw_485:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 280), ('next', 485), ('param3', 15)])
			goto flw_485
		}
	}
}

void entrypoint_503_54() {
	start()
	switch (scene_flags[68 /* 0x9 10 */]) {
	  case 0:
		flw_39:
		switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
		  case 0:
			goto flw_51
		  case 1:
			printf("######You again, eh?!\n\n\n\n######Oh! You would probably want to know\nthat I have seen #####Blessed Butterflies\n#####flying around here lately!\n\n######Too bad I have no musical talent\nwhatsoever.\n\n\nYep, I could not make a beautiful tone\nto save my life.")
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 39), ('param3', 31)])
		goto flw_39
	}
}

void entrypoint_503_71() {
	start()
	switch (scene_flags[61 /* 0x6 20 */]) {
	  case 0:
		switch (scene_flags[62 /* 0x6 40 */]) {
		  case 0:
			switch (scene_flags[64 /* 0x9 01 */]) {
			  case 0:
				switch (scene_flags[65 /* 0x9 02 */]) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 175)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
					  case 2:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
					  case 3:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
				}
			  case 1:
				switch (scene_flags[65 /* 0x9 02 */]) {
				  case 0:
					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
				  case 1:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 179)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
					}
				}
			}
		  case 1:
			switch (scene_flags[64 /* 0x9 01 */]) {
			  case 0:
				switch (scene_flags[65 /* 0x9 02 */]) {
				  case 0:
					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
				  case 1:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 181)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
					}
				}
			  case 1:
				switch (scene_flags[65 /* 0x9 02 */]) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 183)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
					}
				  case 1:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 185)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
					  case 2:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
					}
				}
			}
		}
	  case 1:
		switch (scene_flags[62 /* 0x6 40 */]) {
		  case 0:
			switch (scene_flags[64 /* 0x9 01 */]) {
			  case 0:
				switch (scene_flags[65 /* 0x9 02 */]) {
				  case 0:
					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
				  case 1:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 188)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
					}
				}
			  case 1:
				switch (scene_flags[65 /* 0x9 02 */]) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 173)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
					}
				  case 1:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 170)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
					  case 2:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
					}
				}
			}
		  case 1:
			switch (scene_flags[64 /* 0x9 01 */]) {
			  case 0:
				switch (scene_flags[65 /* 0x9 02 */]) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 168)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
					}
				  case 1:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 165)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
					  case 2:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
					}
				}
			  case 1:
				switch (scene_flags[65 /* 0x9 02 */]) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 162)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
					  case 2:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
					}
				  case 1:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 13), ('param4', 4), ('param5', 158)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 72), ('next', -1), ('param3', 7)])
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 73), ('next', -1), ('param3', 7)])
					  case 2:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 74), ('next', -1), ('param3', 7)])
					  case 3:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 75), ('next', -1), ('param3', 7)])
					}
				}
			}
		}
	}
}

void entrypoint_503_55() {
	start()
	switch (scene_flags[36 /* 0x5 10 */]) {
	  case 0:
		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
		  case 0:
			printf("######AGAIN?! #####What is going on?!\n\n\n\n####%#Still, even at times like these,\nresearch must go on!")
			flw_545:
			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 66), ('next', -1), ('param3', 7)])
			  case 1:
				printf("######Oh, hey, bud! You would probably want\nto know that I have seen #####Blessed\nButterflies #####flapping around here\nlately!\n######Too bad I have absolutely no musical\nability whatsoever.\n\n\nI could not create beautiful tones to\nsave my life!")
			}
		  case 1:
			printf("######AGAIN?! #####What in the world is going\non?!\n\n\n######Still, even at times like these,\nresearch must go on!")
			goto flw_545
		}
	  case 1:
		switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
		  case 0:
			goto flw_545
		  case 1:
			switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
			  case 0:
				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
				  case 0:
					printf("###########...Huh?##### ######Is there something different\nabout your sword, or is it just me?\n\n\nEither way, bud, you have got to get rid\nof those bad guys down there!")
					flw_601:
					switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
					  case 0:
						switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
						  case 0:
							printf("######You know, bud, even at a time like\nthis, I never stop thinking about my\nresearch!")
							flw_603:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 66), ('next', -1), ('param3', 7)])
						  case 1:
							printf("######You know, bud, even at a time like\nthis, I never stop thinking about my\nresearch!")
							goto flw_603
						}
					  case 1:
						printf("######Oh, hey, bud! You would probably want\nto know that I have seen #####Blessed\nButterflies #####flapping around here\nlately!\n######Too bad I have absolutely no musical\nability whatsoever.\n\n\nI could not create beautiful tones to\nsave my life!")
					}
				  case 1:
					printf("###########...Huh?##### ######Is there something different\nabout your sword, or is it just me?\n\n\nEither way, bud, you have got to get rid\nof those bad guys down there!")
					goto flw_601
				}
			  case 1:
				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
				  case 0:
					printf("######You are back?! #####A bunch of strange\ncreatures came out down below!\nI have never seen anything like them!\n\n######Is there any way you could get rid of\nthem like you did before?!")
					goto flw_601
				  case 1:
					printf("######You are back?! #####A bunch of strange\ncreatures came out down below!\nI have never seen anything like them!\n\n######Is there any way you could get rid of\nthem like you did before?!")
					goto flw_601
				}
			}
		}
	}
}

void entrypoint_503_03() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 358), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 21), ('param2', 280), ('next', 363), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 6145), ('param2', 256), ('next', 574), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 359), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 361), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 100), ('next', 48), ('param3', 16)])
	printf("######WHOA! I think my heart stopped!\n\n\n\n######This is it! The discovery of a lifetime!")
	printf("######There is no mistaking it! This symbol\nmust mark one of the #####goddess walls#####\nleft for the hero by the goddess!")
	scene_flags[10 'Sealed Grounds'][93 /* 0xA 20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_503_72() {
	start()
	temp_flags[4 /* 0x1 10 */] = true;
	temp_flags[5 /* 0x1 20 */] = true;
	temp_flags[6 /* 0x1 40 */] = true;
	temp_flags[11 /* 0x0 08 */] = true;
	switch (scene_flags[61 /* 0x6 20 */]) {
	  case 0:
		printf("######Today I would like to witness the magic\nof #####Rupees##### emerging from the wall.\nFor my research, of course!\n\n#####...By the way, would you like to\nreview what was written in the text?\n#####Please!#####No need.")
		goto flw_55
	  case 1:
		printf("###########Glimmering Hexagon##########... Ye who seeks\ngreat riches, draw this shape so that it\nmay be known.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		goto flw_135
	}
}

void entrypoint_503_20() {
	start()
	scene_flags[10 'Sealed Grounds'][68 /* 0x9 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 488), ('param3', 39)])
	printf("######Let me give you a little token of my\nappreciation for assisting with\nmy research!")
	give_item(168 0xA8);
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 24), ('next', 566), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 489), ('param3', 39)])
	printf("######This answers all the mysteries from\nthose ancient texts!\n\n\n...At least, except for the mysteries\nthat followed after that. Do you want\nto know what else was written in\nthere?!\n#####Absolutely!#####I'll pass.")
	switch (choice(2, 0)) {
	  case 0:
		flw_492:
		printf("######...The three... ...ngles...\n...the Tri...ce... ...and...")
		printf("######...The text is too badly damaged\nto read at all beyond that point.\nWhat do you suppose it could say?")
		printf("######Over time, the power of the goddess\nwalls is #####restored#####!\n\n\n######When that happens, I want you to try\nsome different things in order to solve\nthe final mystery!")
		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = false;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 594), ('param3', 39)])
		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
		  case 0:
			flw_491:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 22), ('param2', 280), ('next', 491), ('param3', 15)])
			goto flw_491
		}
	  case 1:
		printf("######No need to be stubborn, now.\nJust listen!")
		goto flw_492
	}
}

void entrypoint_503_73() {
	start()
	temp_flags[3 /* 0x1 08 */] = true;
	temp_flags[5 /* 0x1 20 */] = true;
	temp_flags[6 /* 0x1 40 */] = true;
	temp_flags[11 /* 0x0 08 */] = true;
	switch (scene_flags[62 /* 0x6 40 */]) {
	  case 0:
		printf("######Today I would like to witness the magic\nof #####hearts##### emerging from the wall!\nHow astonishing would that be?\n\n#####...By the way, would you like to review\nwhat was written in the text?\n#####Please!#####No need.")
		goto flw_61
	  case 1:
		printf("###########Life's Crimson Vessel##########... Ye who longs\nfor the source of life, draw this shape\nso that it may be known.\n\nDo so, and from the heavens shall fall\na rain of life's essence.")
		printf("######Well, that is what is written there!\nDoes that mean anything to you?")
		goto flw_136
	}
}

void entrypoint_503_56() {
	start()
	switch (scene_flags[36 /* 0x5 10 */]) {
	  case 0:
		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
		  case 0:
			printf("######AGAIN?! #####What is going on?!\n\n\n\n####%#Still, even at times like these,\nresearch must go on!")
			flw_550:
			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 503), ('param2', 66), ('next', -1), ('param3', 7)])
			  case 1:
				printf("######Oh, hey, bud! You would probably want\nto know that I have seen #####Blessed\nButterflies #####flapping around here\nlately!\n######Too bad I have absolutely no musical\nability whatsoever.\n\n\nI could not create beautiful tones to\nsave my life!")
			}
		  case 1:
			printf("######AGAIN?! #####What in the world is going\non?!\n\n\n######Still, even at times like these,\nresearch must go on!")
			goto flw_550
		}
	  case 1:
		goto flw_550
	}
}

void entrypoint_503_21() {
	start()
	goto flw_482
}

