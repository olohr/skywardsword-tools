void entrypoint_401_00() {
	start()
	printf(".#####.#####.")
}

void entrypoint_401_01() {
	start()
	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
	  case 0:
		switch (scene_flags[60 /* 0x6 10 */]) {
		  case 0:
			switch (scene_flags[61 /* 0x6 20 */]) {
			  case 0:
				printf("You activated both power generators,\nvrrm! You should now be able to get\nthrough the engine room and come\nsave us, zrrt! So hurry up, bzzt!")
			  case 1:
				flw_103:
				printf("You turned on one of the power\ngenerators, vrrm! But you still need to\nactivate one more to be able to get\nthrough the engine room to us, zrrt.\nHurry up and activate the other #####power\ngenerator#####, then come rescue us, bzzt!")
			}
		  case 1:
			switch (scene_flags[61 /* 0x6 20 */]) {
			  case 0:
				goto flw_103
			  case 1:
				printf("Please rescue us quickly, vweep!\nFirst, you need to turn on the #####power\ngenerators in the engine room#####, bzzt!")
			}
		}
	  case 1:
		switch (scene_flags[109 /* 0xC 20 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3), ('param2', 2304), ('next', 106), ('param3', 13)])
			switch (scene_flags[69 /* 0x9 20 */]) {
			  case 0:
				printf("######That was scary, vrrm!\n\n\n\n######You're a human, aren't you, brrzrrt?\nSo how did you get in here, vweep?")
				flw_1:
				printf(".#####.#####.#####\n\n\n\n######You came with the #####captain #####to save us,\nvweep! I'm so happy, vrrm!\n\n\n######But we can't get out of here while that\n#####sparky thing #####blocks the exit, zrrt.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 61), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 32), ('param3', 6)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 29), ('param3', 39)])
				printf(".#####.#####.#####\n\n\n\n######I almost forgot to mention it, but the\nengine room is right below this brig,\nvrrrrrm.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 30), ('param3', 39)])
				printf("######There's a corridor from the engine\nroom that connects to this brig, vrrm.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 35), ('param3', 39)])
				printf("######But to get through the engine room to\nhere, bzzt, you need to activate the two\n###########power generators##### in the engine room.")
				switch (scene_flags[60 /* 0x6 10 */]) {
				  case 0:
					switch (scene_flags[61 /* 0x6 20 */]) {
					  case 0:
						printf("######Huh#####.#####.#####.? Oh! It looks like the engine\nroom is up and running, vrrm.\n\n\n######Did you turn on the #####power#####, vweep?\n######OK, then I'm sure you can get through\nthe engine room to here now, zrrt!\n\n######We'll be waiting, phoo-weep!")
						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
						flw_19:
						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
					  case 1:
						flw_112:
						printf("######Huh#####.#####.#####.? Oh hey, did you turn on one\nof the #####power generators#####, vrrm?\n\n\n######You still need to activate the other one,\nzrrt! There are two #####power generators#####,\nvweep!")
						switch (scene_flags[60 /* 0x6 10 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 511), ('param2', 0), ('next', 115), ('param3', 30)])
							flw_115:
							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
							printf("######The last #####power generator##### is here, vrrm.")
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 118), ('param3', 34)])
							printf("######You can do it, phoo-weep!")
							goto flw_19
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', 0), ('next', 115), ('param3', 30)])
							goto flw_115
						}
					}
				  case 1:
					switch (scene_flags[61 /* 0x6 20 */]) {
					  case 0:
						goto flw_112
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', 0), ('next', 47), ('param3', 30)])
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 511), ('param2', 0), ('next', 24), ('param3', 30)])
						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
						printf("######You will need to activate the #####power\ngenerators #####in two different locations,\nzrrt.")
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 21), ('param3', 34)])
						printf("######You can do it, phoo-weep!")
						goto flw_19
					}
				}
			  case 1:
				printf("######You're a human, aren't you, brrzrrt?\nSo how did you get in here, vweep?")
				goto flw_1
			}
		  case 1:
			printf("######I'm scared, brrzrrt... Please remove\nthose monsters and get us out of here,\nphoo-weep.")
			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
		}
	}
}

void entrypoint_401_02() {
	start()
	printf(".#####.#####.")
}

void entrypoint_401_03() {
	start()
	printf("")
}

void entrypoint_401_04() {
	start()
	printf(".#####.#####.")
}

void entrypoint_401_05() {
	start()
	printf("")
}

void entrypoint_401_06() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 256), ('next', 121), ('param3', 13)])
	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
	  case 0:
		printf("######You really came to save us, vweep!\nMy circuits are glowing with\nhappiness, vrrm!")
		flw_15:
		printf("######Really, vrrm? You came on board to\nfind #####Nayru's Flame#####, zrrt?\n\n\n######If you want to reveal #####Nayru's Flame#####,\nyou're going to have to regain control\nof this ship, phoo-weep.\n\n######The control room is next to the brig,\nbut its huge door is sealed shut and\nyou'll need a key to open it, vrrm.\n\n######First you should head to the #####captain's\ncabin#####, zrrt! ######The control-room key\nshould be in there, vweep!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 145), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 143), ('param3', 15)])
		printf("######Please take this #####key #####as thanks for\nrescuing us, vrrrrm.\n\n\n######This #####key##### will open the door to the\n#####captain's cabin#####, vweep.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', 14), ('param3', 42)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 129), ('param3', 9)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1), ('param2', 256), ('next', 128), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 43), ('param3', 39)])
		printf("######You can get to the captain's cabin\nthrough a door on the deck in the\nback, vrrm.")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 768), ('param2', 0), ('next', 126), ('param3', 30)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 0), ('param2', 356), ('next', 42), ('param3', 15)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 130), ('param3', 34)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 28), ('param3', 39)])
		printf("######But I'm getting out of here, vrrm.\n\n\n\n######Sorry to leave you on your own, but\nyou look like you can handle it, zrrt!\nWe're counting on you, vweep!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 60), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 256), ('next', 58), ('param3', 15)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 0), ('next', 127), ('param3', 14)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 2), ('param2', 0), ('next', 59), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 16), ('param3', 6)])
		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
	  case 1:
		switch (scene_flags[69 /* 0x9 20 */]) {
		  case 0:
			printf("######I've seen you before, vweep#####.#####.#####.\n######You're the one who left me here\nearlier, vrrm. That's pretty cold\nfor a human, zrrt!\n######But how did you get in here anyway,\nphoo-weep?")
			flw_125:
			printf("######.#####.#####.#####\n\n\n\n######So you came with #####Skipper##### to rescue us,\nvrrm?! You've made us so happy, zrrt!")
			goto flw_15
		  case 1:
			printf("######You're a human, right, vrrm?\nHow did you get in here, zrrt?")
			goto flw_125
		}
	}
}

void entrypoint_401_07() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 26), ('param3', 39)])
	printf("##############! Good job, vweep!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 36), ('param3', 39)])
	printf("######Now the ship looks just like it used to,\nphoo-weep! That makes me so happy,\nvrrm!\n\n######Now I just need you to go rescue my\n#####crew#####, vweep!\n\n\n######I'm pretty sure they're being held\nin the ###########brig #####inside the ship, brrzrrt! ")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 766), ('param2', 0), ('next', 40), ('param3', 30)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 27), ('param3', 34)])
	printf("######It's still pretty dangerous here, so I'll\njust wait in the boat, zrrt.\n\n\n######You can do it, vrrm!")
	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
}

void entrypoint_401_08() {
	start()
	printf("")
	changeScene(1, 0) // 
}

void entrypoint_401_09() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 56), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 54), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 52), ('param3', 35)])
	printf("A report, ######Master. Judging by their size,\nthese #####tentacles #####belong to a monster\nof considerable size.\n\nThe current situation is difficult to\ndetermine with complete accuracy,\nbut signs indicate that this ship is\nunder attack.\nIf we do nothing, there is an 80%\nchance the ship will capsize.\n\n\nI recommend forcing it back with\n#####################sacred power#####, then exiting to further\nassess the current situation.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 53), ('param3', 36)])
	scene_flags[18 'Lanayru: Sandship'][79 /* 0x8 80 */] = true;
}

void entrypoint_401_10() {
	start()
	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
	  case 0:
		switch (scene_flags[60 /* 0x6 10 */]) {
		  case 0:
			switch (scene_flags[61 /* 0x6 20 */]) {
			  case 0:
				printf("######Master, I can confirm that the engine\nroom is now fully operational.\n\n\nI suggest hurrying to the brig through\nthe engine room and #####freeing##### the crew\nimmediately.")
			  case 1:
				flw_69:
				printf("######Master, I can confirm that, as\nmentioned by the crew, the engine\nroom is now fully operational.\n\nBut the corridor to the brig will not be\npassable until you activate the other\n#####power generator#####. I suggest hurrying\nto the second #####power generator#####.")
			}
		  case 1:
			switch (scene_flags[61 /* 0x6 20 */]) {
			  case 0:
				goto flw_69
			  case 1:
				goto flw_69
			}
		}
	  case 1:
		switch (scene_flags[60 /* 0x6 10 */]) {
		  case 0:
			switch (scene_flags[61 /* 0x6 20 */]) {
			  case 0:
				printf("######Master, I am detecting strong\nvibrations again.\n\n\nThe current situation is difficult\nto accurately assess, but I suggest\nhurrying to the area beneath the\n#####crew in the brig #####first.")
			  case 1:
				flw_71:
				printf("######Master, I am detecting very strong\nvibrations.\n\n\nSigns indicate that activating this\nmechanism has caused something\nwithin the ship to begin moving.\n\nThe current situation is difficult\nto accurately assess, but I suggest\nhurrying to the #####crew in the brig#####\nand freeing them first.")
			}
		  case 1:
			switch (scene_flags[61 /* 0x6 20 */]) {
			  case 0:
				goto flw_71
			  case 1:
				goto flw_71
			}
		}
	}
}

void entrypoint_401_11() {
	start()
	printf("######Master, I conjecture that this is the\n#####key #####to the ######control room mentioned by\nthe crew.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1278), ('param2', 0), ('next', 77), ('param3', 30)])
	printf("My memory indicates that the location\nof the #####door to the control room #####is\nmarked with the ##### symbol.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 78), ('param3', 34)])
	printf("I suggest you quickly make your way to\nthe #####control room#####.")
}

void entrypoint_401_12() {
	start()
	printf("######Master, please look.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 89), ('param3', 39)])
	printf("This large door here is sealed shut.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 90), ('param3', 39)])
	printf("This door must lead to an important\nroom in the ship.")
}

void entrypoint_401_13() {
	start()
	printf("Warning, ######Master.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 93), ('param3', 39)])
	printf("I sense an evil presence on the other\nside of this door.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 94), ('param3', 39)])
	printf("There is a 90% chance it is the primary\nbody mass of the creature whose\ntentacles are destroying this ship.\n\nI suggest making all necessary\npreparations before exiting to\nthe outside of the ship.")
}

void entrypoint_401_14() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 155), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 151), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 152), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 86), ('param3', 16)])
	printf("######Master, I have important information\nfor you. There is a 90% chance the\nobject you see over there is a\n###########Timeshift Stone#####.\nIf you could #####deliver an impact #####to it by\nsome means, it could have a significant\neffect on the ship.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 156), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 15), ('next', -1), ('param3', 42)])
}

void entrypoint_401_15() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 148), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 149), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 88), ('param3', 16)])
	printf("######Master, that synthetic life-form...\nThere is a 99% chance that it was the\n#####pirate##### described by the captain.\n\nI can't help but admire the tenacity\nit has displayed in staying alive and\nfunctional all these years.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
}

void entrypoint_401_16() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 140), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 141), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 132), ('param3', 16)])
	printf("######Master, a report about the bow you\nhave just obtained...\n\n\nYour bow's elasticity can propel arrows\nthrough the air with great force,\nallowing you to #####strike your targets\nfrom afar#####.\nTo confirm the controls associated\nwith your bow, raise your bow by\npressing ##### then press #####.##########\n")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 163), ('param3', 39)])
	printf("You can also shoot arrows to strike\n#####certain devices #####in order to activate\nthem.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 133), ('param3', 39)])
	printf("I have confirmed that such a #####device\n#####exists on the #####################deck#####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 131), ('param3', 39)])
	printf("However, it will be difficult to target it\nfrom here, so I recommend you return\nto the deck.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
}

void entrypoint_401_17() {
	start()
	printf("######Master, look up.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 160), ('param3', 39)])
	printf("You can reach the Timeshift Stone\non the deck through the ventilation\nshaft in the ceiling.\n\nI believe it will be possible to shoot\nthrough the grate with a small\nprojectile, such as an arrow.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 159), ('param3', 39)])
	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
}

