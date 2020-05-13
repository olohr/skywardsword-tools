void entrypoint_402_17() {
	start()
	printf("This is easily as scary as I thought it\nwould be, vrrm#####.#####.#####.\n\n\n######But if you think about it, they should\nall be dead, brrzrrt!\n\n\n######The only reason I'm up and about like\nthis is because of that Timeshift Stone\non the boat, phoo-weep!\n\n######So I have nothing to worry about, vrrm!\nI feel better now, ########.\nAnd so it's time for you to go look for\nmy ship, zrt!\n######I'll wait here, of course, bzzt.")
	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
}

void entrypoint_402_51() {
	start()
	printf("To the Construction Bay")
}

void entrypoint_402_18() {
	start()
	printf("######I have information to report, Master.\nPlease take a look.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 148), ('param3', 39)])
	printf("There is a 60% probability that these\nmasts and these sails are from the ship\nthat protects #####Nayru's Flame#####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 75), ('param3', 39)])
	printf("You can now set your #####dowsing##### ability\nto search for the ship that holds\n#####################Nayru's Flame#####.")
	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 7), ('next', 278), ('param3', 56)])
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
}

void entrypoint_402_52() {
	start()
	printf("Approach the cart \nand press ##### to get on.")
}

void entrypoint_402_01() {
	start()
	printf(".#####.#####.")
}

void entrypoint_402_19() {
	start()
	printf("######Master, it would appear that in the\nmany years this factory went unused,\nmonsters have moved in and built\na nest.\nI now estimate that the chance of \nfinding a clue in the sand here as to the\nship's location is extremely low.")
	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
}

void entrypoint_402_53() {
	start()
	printf("Lean your body with the\nWii Remote to balance the\nweight of the cart as you\napproach a curve.")
}

void entrypoint_402_70() {
	start()
	printf("Dear Captain,\nThanks for everything, zrrt!\nYours, the Crew, vrrrrrm.")
}

void entrypoint_402_02() {
	start()
	switch (story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */]) {
	  case 0:
		switch (story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */]) {
		  case 0:
			switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
			  case 0:
				switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
				  case 0:
					printf("Let's get going quick, vrrm! Don't you\nneed to find that person you're looking\nfor, brrzt?\n\nOr do you need me to take the boat\nsomewhere else on this sea?\n#####To sea!#####To the Sandship!#####Never mind.")
					flw_263:
					switch (choice(3)) {
					  case 0:
						printf("######All right! Let's go, vrrrrm!")
						changeScene(2, 0) // 
					  case 1:
						printf("######Right, I'll take you to my boat, vrrm!")
						changeScene(4, 0) // 
					  case 2:
						printf("######Come and visit again sometime, vrrm!")
					}
				  case 1:
					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
					  case 0:
						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
						  case 0:
							flw_222:
							printf("You made it, zrrt! Did you find who\nyou were looking for, phaweep?\n\n\nDo you want me to take you somewhere\nby boat, brrzrrt?\n#####To sea!#####To the Sandship!#####Never mind.")
							goto flw_263
						  case 1:
							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
							  case 0:
								flw_282:
								printf("You are looking for a dragon god,\nvrrm?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of \n#####Lanayru Caves#####, bzzt. I don't know any \nother dragon gods, though, brrzrrt.\n######Do you want me to take you somewhere\nby boat?\n#####To sea!#####To the Sandship!#####Never mind.")
								goto flw_263
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 294), ('param3', 31)])
								story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
								goto flw_282
							}
						}
					  case 1:
						goto flw_222
					}
				}
			  case 1:
				flw_150:
				switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
				  case 0:
					printf("######Ready to shove off, brrzt?\n#####To sea.#####To the Sandship.#####Never mind.")
					switch (choice(3)) {
					  case 0:
						printf("######All right! Let's go, vrrrrm!")
						changeScene(2, 0) // 
					  case 1:
						printf("######Right, I'll take you to my boat, vrrm!")
						changeScene(0, 0) // 
					  case 2:
						printf("######We need to get a move on, bzzt!")
					}
				  case 1:
					printf("######Shall we shove off, vrrm?\n#####Let's go!#####Wait...")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 31)])) {
					  case 0:
						printf("######All right! Let's go, vrrrrm!")
						changeScene(2, 0) // 
					  case 1:
						printf("######We need to get a move on, bzzt!")
					}
				}
			}
		  case 1:
			printf("What's that, vwooot? Changed\nyour mind?\n\n\nWill you help me to get back my ship,\nbzztzzz?\n#####I'll help!#####No way.")
			flw_134:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 27)])) {
			  case 0:
				printf("######Really, vrrm? Well, in that case, bzzt...")
				printf("Hmm####\n.####\n.####\n. There's something weird about\nthat map of yours...vrrm.\n\n\n######If you're going to navigate these\ntreacherous waters, then you need a\nproper #####sea chart#####, doo-weep!\n\nThere is a #####sea chart #####in my shack\nat #####Skipper's Retreat#####, bzzzt. So first\nyou need to get on this boat and set a\ncourse for #####Skipper's Retreat#####!")
				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
				goto flw_150
			  case 1:
				printf("######Then I'm not letting you on board,\nbrrt!\n\n\nAnd you won't be able to get anywhere\nwithout getting on this boat, vweep!")
			}
		}
	  case 1:
		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
		printf("Hmm####\n.####\n.####\n. Who are you, bzzt?\nSome human, vrrrm?\n\n\nWho am I, brrzrrt#####.#####.#####.?\n\n\n\n############I am the proud skipper of the ship\nthat protects #####Nayru's Flame#####, phweep!\n#####Nayru's Flame?#####Protector ship?")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 37)])) {
		  case 0:
			flw_212:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 210), ('param3', 39)])
			printf("####\n.####\n.####\n.\n\n\n\nIt was the day of the storm,\nphoo-weep#####.#####.#####. My crew and I were\nnavigating the seas as usual, vrrm...\n\nAnd then those brutes, bzzt#####.#####.#####.\nthe pirates, suddenly attacked us,\nbrrzt.\n\nThey were after #####Nayru's Flame#####, zzpt.\nMy crew was imprisoned...vrrrt...\nand I was thrown into the sea!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 211), ('param3', 39)])
			printf("######I drifted on the current to this port,\nvrrrrm#####.#####.#####.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 270), ('param3', 39)])
			printf("######After that, I took this boat and went\nsearching for my ship and crew, but\nthey were nowhere to be found, bzzt.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 217), ('param3', 39)])
			printf("######It haunts me, wondering where my\nship could be, phweep.#####.#####.\n\n\nI'd bet my hat they've turned the ship\ninvisible and are hiding out \nsomewhere, vrrm! You can't see it.\n#####Why not?#####Invisible?")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 39)])) {
			  case 0:
				flw_209:
				printf("######In order to protect #####Nayru's Flame#####, the\nship has a function that allows it to\nbecome invisible, vweep#####.#####.#####.\n\nYou say you're searching for #####Nayru's\nFlame#####, bzzt? Oh... So you need #####Nayru's\nFlame #####to find someone important to\nyou, vrrrm#####.#####.#####.?\n######In that case, you should help me search\nfor my ship and crew, phweep!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 207), ('param3', 39)])
				printf("If you'll help me, vzzzt, then I guess\nI'll let you on my boat.\n#####I'll help!#####No way.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 134), ('param3', 39)])
				goto flw_134
			  case 1:
				goto flw_209
			}
		  case 1:
			goto flw_212
		}
	}
}

void entrypoint_401_20() {
	start()
	printf("")
}

void entrypoint_402_54() {
	start()
	printf("If you're moving too fast,\npress ##### to slow down.")
}

void entrypoint_402_71() {
	start()
	printf("Dear Dad,\nGood luck at work, vrrm!")
}

void entrypoint_402_03() {
	start()
	printf(".#####.#####.")
}

void entrypoint_402_55() {
	start()
	printf("Shake the Wii Remote upward\nto jump over obstacles.")
}

void entrypoint_402_72() {
	start()
	printf("To the Pier")
}

void entrypoint_402_04() {
	start()
	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
	  case 0:
		switch (story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */]) {
		  case 0:
			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
			  case 0:
				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
				  case 0:
					flw_44:
					printf("That house holds many dear memories\nof my family, vrrm.\n\n\nI wonder when I will be able to go\nhome, zrrt. I really want to see my\nfamily again, phweep.#####.#####.")
					flw_46:
					printf("######Shall we set sail, vrrt?\n#####Set sail!#####Not yet.")
					flw_47:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 11)])) {
					  case 0:
						printf("######Anchors aweigh, zrrm!")
						changeScene(2, 0) // 
					  case 1:
						printf("######I see, phweep...")
					}
				  case 1:
					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
					  case 0:
						flw_285:
						printf("You are looking for a dragon god,\nvrrm?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of \n#####Lanayru Caves#####, bzzt. I don't know any \nother dragon gods, though, brrzrrt.")
						goto flw_46
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 297), ('param3', 31)])
						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
						goto flw_285
					}
				}
			  case 1:
				goto flw_44
			}
		  case 1:
			printf("You got the #####sea chart#####, vrrm! Now we\ncan finally navigate properly, zrrt!\n\n\nPhweep! Let's go look for my ship!")
			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
			goto flw_46
		}
	  case 1:
		printf("What are you waiting for, zrrt?\nHurry and get the #####sea chart #####from my\nold house, vrrm!\n\nOr did you want to go back to sea,\nphweep?\n#####Sea.#####Never mind.")
		goto flw_47
	}
}

void entrypoint_402_21() {
	start()
	printf("#####dDid you see it, phoo-weep?\nThat's my ship, vrrm!\n\n\nWe must pursue, bzzt! And keep\npounding it with the cannon, zrrt!")
}

void entrypoint_402_56() {
	start()
	printf("Last Stop: Construction Bay")
}

void entrypoint_402_05() {
	start()
	printf("Thank you for getting me my ship back,\nvrrm.\n\n\n######It may have been half wrecked, but my\ncrew and I got it shaped up to almost\nproper working order in no time, vrrt.\n\n######I wish you good luck in finding\nwhomever it is you're looking\nfor, phweep!\n\n######Come visit again. You're welcome\nanytime, vweep!")
	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
	loadzone_temp_flags[1 /* 0x9 02 */] = true;
}

void entrypoint_402_22() {
	start()
	printf("Open up the #####sea chart #####you brought\nwith you, zrrt!")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 768), ('param2', 6), ('next', 192), ('param3', 30)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 105), ('next', 102), ('param3', 6)])
	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
	printf("The #####################Shipyard #####is at this location,\nvrrt. Let me mark it for you with an\n#####, vweep.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 142), ('param3', 34)])
	printf("######The Shipyard is where we used to build\nour ships, vrrt. My ship was built there\ntoo, vweep!\n\n######If you go to the Shipyard, you might\nfind some clues to the location of my\nship, brrzrrt!")
	printf("######OK! Set sail, vrrm!")
	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
}

void entrypoint_402_57() {
	start()
	printf("Only YOU can warn your\ncoworkers early enough to\navoid pirate attacks, zrrt!")
}

void entrypoint_402_23() {
	start()
	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
	  case 0:
		printf("This is pretty scary, vweep#####.#####.#####.\n\n\n\nThe pirate captain is a mechanical\nmaniac, zrrt! He's got no shortage\nof evil underlings too, vrrm!\n\n######I never wanted to lay eyes on him\nagain, brrzrrt. But#####.#####.#####.\n\n\n######If we want to take the ship back, then\nwe have no choice, phoo-weep!")
		flw_106:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 512), ('param2', 0), ('next', 101), ('param3', 30)])
		printf("The ###########Pirate Stronghold #####is here at this\n##### mark, zrrt.")
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 109), ('param3', 34)])
		printf("######Tighten up whatever you humans have\ninstead of bolts, and let's get going,\nphoo-weep!")
		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
	  case 1:
		printf("######So my ship wasn't here, zrrt?\nThen there is only one place left for us\nto look for clues, vrrm#####.#####.#####.\n\n######Brrzrrt. This could be scary, but...\nwe'll head to the stronghold of the\npirates who stole my ship, phweep!\n\n######The pirate captain is a mechanical\nmaniac, zrrt! Worse, he has plenty of\nevil underlings too, vrrm!\n\n######I never wanted to lay my optical\nreceptors on him again, brrzrrt. But#####.#####.#####.\n\n\n######If we want to take the ship back, then\nwe have no choice, phoo-weep!")
		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
		goto flw_106
	}
}

void entrypoint_402_40() {
	start()
	printf("######Master, please take a look.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 171), ('param3', 39)])
	printf("This object is called a ###########Timeshift Orb#####.\n\n\n\nI conjecture that, unlike the Timeshift\nStones we've seen, this device was\ndesigned to be carried around and\ninstalled in different locations.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', -1), ('param3', 39)])
}

void entrypoint_402_58() {
	start()
	printf("At the end of this month, rail\ncars will be out of operation\nfor a full day while the track\nis inspected, vrrm.")
}

void entrypoint_402_24() {
	start()
	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
	  case 0:
		flw_99:
		printf("######How are we going to search this whole\nhuge sea, vrrm?\n\n\n######I have no choice but to ask you to do\nit for me, brrzrrt! So get cracking,\nvweep!\n\n######There is a high probability that the ship\nis currently hidden from our view,\nphoo-weep. But ###########if we attack it#####, then we\nmight catch a glimpse of it, zrrt!")
		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
	  case 1:
		printf("So my ship wasn't at the Pirate\nStronghold either, vrrm#####.#####.#####.\n\n\nWhat's that, bzzt? You found a clue?\n\n\n\n######You know the place, vrrm? Something\ncalled #####dowsing#####, phweeep? Wow, that's\namazing, brrzrrt!")
		goto flw_99
	}
}

void entrypoint_402_41() {
	start()
	printf("######Master, I have determined that this\nis #####Skipper's sea chart#####. Let's take it\nback to him.\n\n######Master, look over there.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 174), ('param3', 39)])
	printf("That is the ship containing Nayru's\nFlame. There is a 90% chance that the\nsynthetic life-forms assembled here\nare the crew.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 175), ('param3', 39)])
	printf("This image would indicate that the\nship's captain spent many happy days\namong his many crew members.")
	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
}

void entrypoint_402_59() {
	start()
	printf("I hope the plans for my ship\nare completed soon...")
}

void entrypoint_402_42() {
	start()
	printf("######Master, please take a look.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 186), ('param3', 39)])
	printf("This device looks like it is meant to\nhold a #####Timeshift Stone#####, but there is\nnot one currently installed.\n\nThere is a 95% chance that it is the\nsame type of device as the ones we\nencountered in #####Lanayru Mine#####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 187), ('param3', 39)])
	printf("Signs indicate that ###########Timeshift Stones#####\nwere used in this facility as a kind of\npower source.")
}

void entrypoint_402_25() {
	start()
	printf(".#####.#####.")
}

void entrypoint_402_09() {
	start()
	printf(".#####.#####.")
}

void entrypoint_402_60() {
	start()
	printf("######A report, ######Master.\n\n\n\n####<#This is #####Lanayru Sand Sea#####. This whole\narea was once a vast ocean.")
}

void entrypoint_402_43() {
	start()
	printf("######Master, we have arrived at the\nShipyard construction bay.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 184), ('param3', 39)])
	printf("With the passing of many years, this\nstructure has filled with sand.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 185), ('param3', 39)])
	printf("I recommend looking in the sand for a\nclue that may direct you to the location\nof the ship.")
}

void entrypoint_402_61() {
	start()
	printf("####Z#But the water has all evaporated, and\nnow the area is a sea of sand.")
}

void entrypoint_402_44() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 232), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 229), ('param3', 39)])
	printf("######I recommend waiting until after you\nhave achieved your objective before\ntaking a rest. First we need to find the\nsea chart.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 235), ('param3', 36)])
	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
}

void entrypoint_402_10() {
	start()
	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
	  case 0:
		switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
		  case 0:
			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
			  case 0:
				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
				  case 0:
					flw_275:
					printf("I remember when my ship was finished\nbeing built here, vrrm. I was so happy.\nAh, the good old days, voo-weeet.#####.#####.")
					flw_67:
					printf("######Shall we set sail, vrrt?\n#####Set sail!#####Not yet.")
					flw_68:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 23)])) {
					  case 0:
						printf("######Anchors aweigh, zrrm!")
						changeScene(2, 0) // 
					  case 1:
						printf("######I see, phweep...")
					}
				  case 1:
					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
					  case 0:
						flw_288:
						printf("You are looking for a dragon god,\nvrrm?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of \n#####Lanayru Caves#####, bzzt. I don't know any \nother dragon gods, though, brrzrrt.")
						goto flw_67
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 303), ('param3', 31)])
						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
						goto flw_288
					}
				}
			  case 1:
				goto flw_275
			}
		  case 1:
			switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
			  case 0:
				printf("Prepare yourself, brrzrrt! We're\nheading to the #####Pirate Stronghold#####,\nphweep!")
				goto flw_67
			  case 1:
				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
				printf("######So my ship wasn't here, zrrt?\nThen there is only one place left for us\nto look for clues, vrrm#####.#####.#####.\n\n######Brrzrrt. This could be scary, but...\nwe have to head to the stronghold of\nthe pirates who stole my ship, phweep!\n\n######So let's not waste any time, vrrm!\n#####Let's go!#####Wait.")
				goto flw_68
			}
		}
	  case 1:
		printf("What are you waiting for, zrrt?\nHurry up and look for clues in the\n#####Shipyard#####, vrrm!\n\n######Or do you want to go back to sea,\nphweep?\n#####To the sea!#####Never mind.")
		goto flw_68
	}
}

void entrypoint_402_62() {
	start()
	printf("####Z#Signs indicate that this place \nfunctioned as a port, linking the land\nto the sea.")
}

void entrypoint_402_45() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 226), ('param3', 51)])
	printf("A report, ######Master.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 227), ('param3', 39)])
	printf("I have detected a bug infestation in\nthe upper area of the house.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 236), ('param3', 36)])
	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
}

void entrypoint_402_11() {
	start()
	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
	  case 0:
		printf("#####dThat's the stronghold of those\nfearsome pirates, vweep!\n\n\nZrrrt! It's dangerous, so we should stay\nfar away for now. We need to go to the\n#####Shipyard #####first anyway, vrrm!")
	  case 1:
		printf("#####dAwooga! There's danger thataway!\nFirst we need to go to #####Skipper's\nRetreat#####, phoo-weet!")
	}
}

void entrypoint_402_63() {
	start()
	printf("####<#This area operated on a new form \nof power. There is a 90% probability\nthat the##### sacred flame##### is located ahead.\n\n######I recommend exploring this sand sea.")
}

void entrypoint_402_46() {
	start()
	printf("A report, ######Master. The power of the\nTimeshift Orb appears to have caused\na change in this structure.\n\nI recommend going outside to further\nassess the situation.")
}

void entrypoint_402_12() {
	start()
	printf("My circuits spark to life in the salt air,\nvrrm! It feels good to take to the seas\nagain after so long, but let's see if I can\nremember how to navigate, brrzrrt.\n######Press ##### to move, zrrt. Press ##### while\nmoving to speed up, vrrm!\n\n\nPress ##### to ready the cannon, phweep.\nThen press ##### to fire it, zrrt!#####")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 136), ('param3', 30)])
	printf("I placed an ##### mark over on the \nisland where my house is, vrrm!\n\n\nThere's a #####pier##### on the island where we\ncan dock, brrzrrt!")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 88), ('param3', 34)])
	printf("######Right, let's go, vrrm!")
	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
}

void entrypoint_402_13() {
	start()
	printf(".#####.#####.")
}

void entrypoint_402_30() {
	start()
	printf("######A report, Master. I calculate a 0%\nchance that searching further in this\nlocation will lead to the appearance\nof the ship.\nBecause of those substantially\nunfavorable odds, I suggest reporting\nto the ship's captain and leaving this\nisland.")
	scene_flags[8 'Lanayru Sand Sea'][89 /* 0xA 02 */] = true;
}

void entrypoint_402_14() {
	start()
	switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
	  case 0:
		switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
		  case 0:
			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
			  case 0:
				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
				  case 0:
					flw_277:
					printf("Brrzrrrt... I still have nightmares\nabout the day the pirates took my ship,\nvrrm. I was so scared I was fused.#####.#####.")
					flw_56:
					printf("######Shall we set sail, vrrt?\n#####Set sail!#####Not yet.")
					flw_57:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 17)])) {
					  case 0:
						printf("######Anchors aweigh, zrrm!")
						changeScene(0, 0) // 
					  case 1:
						printf("######I see, phweep...")
					}
				  case 1:
					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
					  case 0:
						flw_291:
						printf("You are looking for a dragon god,\nvrrm?\n\n\n######If it's #####Master Thunder Dragon #####you \nwant to meet, he's to the south of \n#####Lanayru Caves#####, bzzt. I don't know any \nother dragon gods, though, brrzrrt.")
						goto flw_56
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 300), ('param3', 31)])
						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
						goto flw_291
					}
				}
			  case 1:
				goto flw_277
			}
		  case 1:
			switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
			  case 0:
				printf("We need to hurry up, vweeeet, and look\nfor my ship!")
				goto flw_56
			  case 1:
				printf("So my ship wasn't here either, vrrm#####.#####.#####.\n\n\n\nZrrt? Vweeeeet? You found a clue?\n\n\n\n######You know the place? Some kind of\nthing called #####dowsing#####, vrrm?\nThat's amazing, phoo-weep!\n\n######This time we'll definitely find my ship,\nvoo-whooot!\n\n\n######Ready to set sail, vweep?\n#####To sea!#####Not yet.")
				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
				goto flw_57
			}
		}
	  case 1:
		switch (scene_flags[76 /* 0x8 10 */]) {
		  case 0:
			switch (scene_flags[88 /* 0xA 01 */]) {
			  case 0:
				printf("######There's something at the bridge inside\nthe mouth, vweep!\n\n\nCould be a clue to my ship, zrrt!\nI'm just going to have a look, brzzt!")
				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
				flw_194:
				printf("######Or do you want to head back out to sea,\nvrrm?\n#####To sea.#####Never mind.")
				goto flw_57
			  case 1:
				printf("########, voo-weet! That was\nabsolutely amazing!\n\n\nThe big mouth opened, zrrt!\nHow did you do that, vrrm?!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 199), ('param3', 54)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 195), ('param3', 39)])
				printf("######There's something at the bridge inside\nthe mouth, vweep!\n\n\nCould be a clue to my ship, zrrt!\nI'm just going to have a look, brzzt!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 200), ('param3', 54)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 194), ('param3', 39)])
				goto flw_194
			}
		  case 1:
			printf("What are you waiting for, vrrm?\nAfraid of the pirates, zrrt?\nDon't worry--they're all dead, vweep.\nOr do you want to head to sea, phweep?\n#####To sea.#####Never mind.")
			goto flw_57
		}
	}
}

void entrypoint_402_15() {
	start()
	printf("We've arrived, vweep!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 156), ('param3', 39)])
	printf("My shack is at the very top, vrrm!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 157), ('param3', 39)])
	printf("######The ###########sea chart #####we need is in my shack,\nzrrt. But you're the one who will have\nto go get it, bzzt!\n\nThere are more monsters about than\nbefore, so be careful, vweep!\n\n\n######I can't wander far from the boat,\nso I'll just stay here, vrrm.")
	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
}

void entrypoint_402_16() {
	start()
	printf("We've arrived, vrrm!\n\n\n\nThis is the island where we used to\nmake our ships, bzzt. You'll find the\nShipyard here, as well as the town\nwhere the workers lived, vweep!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 165), ('param3', 39)])
	printf("That building is the construction bay,\nvrrm!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 138), ('param3', 39)])
	printf("But the entrance is closed, vrrrm.\nLooks like you can't get in.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 139), ('param3', 39)])
	printf("######Each location on the island is linked\nto the others via a mine-cart track,\nvrrm!")
	printf("######You might be able to get to the back\ndoor of the construction bay if you can\nget around to the other side of it using\na mine cart, brrzrrt.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 161), ('param3', 54)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 140), ('param3', 39)])
	printf("There's a mine-cart station over there,\nzrrt!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 163), ('param3', 54)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 141), ('param3', 39)])
	printf("######You should head to the station first.\nI'll wait here, phoo-weep!")
	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
}

void entrypoint_402_50() {
	start()
	printf("To Shipyard Center")
}

