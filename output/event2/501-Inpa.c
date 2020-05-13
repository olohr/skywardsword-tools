void entrypoint_501_07() {
	start()
	printf("######Yo, ####! Saw the rail\ntrack I put up outside, eh?\n\n\n######What's it for? Duh huh... Oh, you'll see\nbefore long!")
}

void entrypoint_501_24() {
	start()
	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
	  case 0:
		switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 64), ('param2', 0), ('next', 391), ('param3', 39)])
			printf("##########...")
		  case 1:
			flw_347:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 453), ('param3', 32)])
			switch (scene_flags[37 /* 0x5 20 */]) {
			  case 0:
				printf("Is this tree something or what?!\nNo wonder it's called the Life Tree!")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 456), ('param3', 23)])
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 72)])) {
				  case 0:
					printf("Blah, this place is pretty barren.\nConsidering how long she's been here,\nyou'd think Grannie would've tried to\ndecorate a little.\nI guess she likes the all-stone motif.\nAt the very least she could've tried\nplanting a tree or something to liven\nthe place up.")
				  case 1:
					printf("Hard to leave the old girl all to herself\nhere...\n\n\n######But don't you dare go telling Cawlin\nand Strich that I'm down here taking\ncare of some little old lady!")
				}
			}
		}
	  case 1:
		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
		  case 0:
			switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
			  case 0:
				goto flw_347
			  case 1:
				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
				  case 0:
					flw_384:
					switch (scene_flags[37 /* 0x5 20 */]) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 64), ('param2', 0), ('next', 390), ('param3', 39)])
						printf("##########...")
					  case 1:
						printf("##########...")
					}
				  case 1:
					goto flw_347
				}
			}
		  case 1:
			goto flw_384
		}
	}
}

void entrypoint_501_08() {
	start()
	switch (scene_flags[81 /* 0xB 02 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 174), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', -1), ('next', 176), ('param3', 16)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 172), ('param3', 39)])
		printf("#####\n########, you must not loose\nanother #####Skyward Strike #####now!\n\n\nWere you to do so, it could speed up the\nmonster's awakening.\n\n\nWe will return to the gate later. For\nthe moment, you must focus your\nefforts on #####restoring the seal##### that\nholds the beast captive.")
		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 153), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 155), ('param3', 32)])
		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
		story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
		scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1010), ('next', 156), ('param3', 24)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 157), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 158), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1034), ('param2', 12800), ('next', 159), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3605), ('param2', -256), ('next', 275), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 99), ('next', 160), ('param3', 50)])
		printf("###########WHOA-HO!######")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3585), ('param2', -256), ('next', 287), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 284), ('param3', 50)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 161), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 162), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 4), ('param2', 356), ('next', 285), ('param3', 15)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 286), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 297), ('param3', 17)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 293), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1085), ('param2', 12800), ('next', 292), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 163), ('param3', 40)])
		printf("#####\nNo... I fear the #####seal has given way once\nagain#####. That #####terrible beast##### is awakening\neven as we speak.\n\nIt is likely that the monster reacted to\nthe sacred power given off by your\nsword.\n\n######I wish it had not happened, but there\nwas no other way to open the gate.\nSo it goes...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 164), ('param3', 39)])
		printf("##############, you must imprison\nthe beast once again.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 167), ('param3', 50)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12544), ('next', 166), ('param3', 13)])
		printf("######All right! Bring it on!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 50), ('param2', 0), ('next', 289), ('param3', 39)])
		printf("######This is what I've been waiting for.\nIt's time to break out my new toy!\nTrust me, that flabby bag of teeth\ndoesn't stand a chance.\n######Well? What are we waiting for?\nI'm heading out there!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 294), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 516), ('next', 295), ('param3', 14)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 51), ('param2', 0), ('next', 296), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 179), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 466), ('param3', 24)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 177), ('param3', 6)])
		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
		scene_flags[10 'Sealed Grounds'][81 /* 0xB 02 */] = true;
		story_flags[795 /* us: 805A9B2F 0x08, jp: 805ACDAF 0x08 */] = false;
		story_flags[144 /* us: 805A9AEE 0x04, jp: 805ACD6E 0x04 */] = true;
		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
	}
}

void entrypoint_501_25() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 63), ('param2', 0), ('next', 371), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 372), ('param3', 32)])
	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
	  case 0:
		printf("#####That red-haired fellow is really quite\nhandy.\n\n\nSome areas of the temple are badly in\nneed of repair. Perhaps he can assist\nme in that work...")
	  case 1:
		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
		  case 0:
			printf("#####This temple used to be a place of great\npeace and solitude, but life has taken\nquite a turn lately.\n\nStill, now is not the time for thoughts\nlike these.\n\n\nNot when my worst fears are coming\nto pass...")
		  case 1:
			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
			  case 0:
				printf("#####I do hope you are able to catch\nup with Zelda...")
			  case 1:
				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
				  case 0:
					printf("#####I do hope you are able to catch\nup with Zelda...")
				  case 1:
					printf("#####.####\n.####\n.")
				}
			}
		}
	}
}

void entrypoint_501_09() {
	start()
	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
	  case 0:
		switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
		  case 0:
			printf("######Searching after the three dragons, are\nyou? I seem to recall a dragon who\nlived in the far reaches of the desert...")
		  case 1:
			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
			  case 0:
				switch (scene_flags[95 /* 0xA 80 */]) {
				  case 0:
					printf("#####\n########, work with Groose to\nimprison that monster once more!")
				  case 1:
					printf("#####\nThat terrible #####monster##### begins to stir yet\nagain! It appears that even though\nZelda has lent her power to strengthen\nit, the seal will soon reach its limit.\nSo be it. You and Groose must work\ntogether to beat that foul beast back\ninto its prison and restore the seal!")
					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
				}
			  case 1:
				printf("######You seek the dragons? When the Song\nof the Hero is complete, the path to\nthe Triforce shall be illuminated?\nThen take care and be on your way!")
			}
		}
	  case 1:
		printf("The clues to finding the Triforce are\nin Skyloft.\n\n\n######Go forth and find the Triforce.")
	}
}

void entrypoint_501_26() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 356), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 353), ('param3', 50)])
	printf("######Come back, ####!\nThe disturbance we're feeling is not in\nthat direction.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 62), ('param2', 0), ('next', 352), ('param3', 39)])
	printf("Hurry. Take the door across from me,\nand see what is happening outside!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 351), ('param3', 39)])
	printf("...Do you need to equip yourself before\nfacing the unknown? Very well. I will\nnot stop you, but you must hurry back!")
	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
}

void entrypoint_501_27() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 476), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 445), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 446), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 447), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 441), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 442), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 443), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 9), ('next', 448), ('param3', 24)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', -1), ('param3', 6)])
}

void entrypoint_501_10() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 60), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 405), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 404), ('param3', 50)])
	flw_404:
	printf("######It seems you were successful in\nimprisoning the monster again.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 400), ('param3', 47)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 356), ('next', 402), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 401), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 406), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 408), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 409), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 403), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 407), ('param3', 48)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 63), ('param3', 6)])
	printf("You have my thanks,\n####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 62), ('param3', 17)])
	printf("As do you, #####Groose#####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 4), ('next', 299), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 64), ('param3', 17)])
	printf("I do not wish to dwell on what may have\nhappened if you two hadn't been here.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 70), ('param3', 50)])
	printf("######Duh huh, aww...you give me too much\ncredit, Grannie.\n\n\nYou were the one who got me to stop\nfeeling sorry for myself and put my\nenergy into doing what I could to help.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1028), ('param2', 256), ('next', 72), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 71), ('param3', 50)])
	printf("######I did what was necessary to get you to\nrealize your full potential.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 300), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 73), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 301), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 74), ('param3', 6)])
	printf("##############, you must wonder\njust what it is you've been fighting out\nthere in the great pit.\n\nThere is much I could tell you, but\nsuffice to say it is the root of the evil\nwe face. When you pass through the\nGate of Time, you shall learn more.\n######We may seal it and reseal it into its\nprison a thousand times, but it will\nalways shatter the bonds that confine\nit. Such is its awesome power.\nWe must destroy it at its source or\nsuffer this fate again and again.\n\n\n######There is no time to lose. Hit the gate\nwith a Skyward Strike.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 76), ('param3', 50)])
	printf("######Come on, already! Charge that sword\nof yours with that sacred force stuff\nGrannie was talkin' about, and #####zap##### the\nGate of Time!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 77), ('param3', 17)])
	printf("Right on, Grannie.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1037), ('param2', 256), ('next', 277), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 78), ('param3', 50)])
	printf("######...Indeed. Now, ####, go.\nGo to the gate.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 53), ('param2', 0), ('next', 307), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 305), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_501_28() {
	start()
	printf("My analysis indicates this location is\nideally suited to growing your seedling.\n\n\nHowever, I project that planting the\nseedling in #####this time #####will make it take\nfar too long for the seedling to grow\ninto a tree capable of producing fruit.")
}

void entrypoint_501_11() {
	start()
	printf("###########Groose #####shall assist you in making your\nway to the woods.\n\n\nSomething may have happened to the\n#####Water Dragon of the woods#####. When you\narrive, seek her out!")
}

void entrypoint_501_12() {
	start()
	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
	  case 0:
		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
		  case 0:
			printf("#####\nThe time has finally come.\n\n\n\nGo now, ####. Seek out\nthe Triforce in Skyloft!")
		  case 1:
			switch (scene_flags[96 /* 0xD 01 */]) {
			  case 0:
				switch (scene_flags[97 /* 0xD 02 */]) {
				  case 0:
					flw_487:
					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
					  case 0:
						printf("#####\nWhen you have passed the final trial,\nyou will finally be worthy to receive\nthe power of the Triforce.\n\nHurry back to Skyloft. Whatever\nawaits you in the final trial, you must\nnot fail!")
					  case 1:
						printf("######Oh, ####! You've learned\nthe parts of the song from the three\ndragons. There's not much time left!\n\nHurry! Return to the sky and complete\nthe Song of the Hero.")
					}
				  case 1:
					switch (scene_flags[98 /* 0xD 04 */]) {
					  case 0:
						printf("###########Groose #####waits for you outside #####by his\ncatapult#####. Go speak with him.")
					  case 1:
						printf("######Ah, ####, I'm glad you are\nhere. #####Groose #####has been waiting for you.\n\n\nHe stands outside #####by his catapult#####.\nGo speak with him. ")
						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
					}
				}
			  case 1:
				printf("######So that's what happened to the woods?\nI am glad to hear that everything has\nreturned to normal.")
				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
				switch (scene_flags[97 /* 0xD 02 */]) {
				  case 0:
					goto flw_487
				  case 1:
					printf("######By the way, ####,\n#####Groose #####is waiting for you.\n\n\nHe proudly stands outside #####by his\ncatapult#####. Go speak with him.")
					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
				}
			}
		}
	  case 1:
		switch (scene_flags[96 /* 0xD 01 */]) {
		  case 0:
			flw_224:
			printf("#####\nYou must continue to gather the parts\nof the #####Song of the Hero#####. Time is\nshort!")
		  case 1:
			printf("######So that's what happened to the woods?\nI am glad to hear that everything has\nreturned to normal.")
			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
			goto flw_224
		}
	}
}

void entrypoint_501_13() {
	start()
	printf("######Good. You learn fast.\n\n\n\nNow for your next lesson.")
	printf("Focus and play in time with the pulsing\nof the #####circle of light#####.\n\n\nWhen your timing is right, I shall join\nmy voice to your harp.\n\n\nListen well, for the song I sing will be\nof great help to you in your journey.")
}

void entrypoint_501_14() {
	start()
	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
	  case 0:
		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
		  case 0:
			switch (scene_flags[37 /* 0x5 20 */]) {
			  case 0:
				printf("######Oh yeah! Now this is a tree I could\nlook at all day! It's like a symbol for\nthis temple...or something!\n\n######Every time I stare at it, my jaw starts\nhanging open and I get this weird,\nhappy feeling.")
			  case 1:
				switch (scene_flags[38 /* 0x5 40 */]) {
				  case 0:
					printf("######It's great to finally get a sapling here\nand all,##### but it's going to take #####ages #####to\nget this thing to grow tall!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 260), ('param3', 23)])
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 50)])) {
					  case 0:
						printf("######Hey, ####, now that is a\nserious seedling. Why didn't you tell\nme you had that thing on you?\n\n######I'm no expert, but it seems like the\nperfect fit for this temple. If you\nplant it here, it'll grow for sure.\n\n######Only downside is, ####\nit's gonna take\nbasically forever for a seedling that\nbig to grow into a full tree.")
					  case 1:
						printf("######Don't let me down. I'm counting on\nyou to help #####Zelda#####, ####!\n\n\nOh, by the way, I've been thinking\nabout how nice it'd be to have a #####tree\n#####here, but I don't have a seedling or\nanything. You seen one I can plant?")
					}
				}
			}
		  case 1:
			printf("######I bet you #####Zelda#####'s just on the other side\nof that gate, wondering where you are.\nYou shouldn't make the little lady\nwait, ####! Go on!")
		}
	  case 1:
		printf("######Come on, already! Charge that sword\nof yours with that sacred force stuff\nGrannie was talkin' about, and #####zap##### the\nGate of Time!\nI bet you #####Zelda#####'s just on the other side\nof that gate, wonderin' where you are.\nYou shouldn't make the little lady\nwait, ####! Go on!")
	}
}

void entrypoint_501_15() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 52), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 55), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 53), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 274), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 99), ('next', 57), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 2560), ('next', 321), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 54), ('param2', 0), ('next', 322), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 361), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1009), ('next', 56), ('param3', 24)])
	printf("#####=Huh? You gotta be kidding me,\nGrannie!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 27), ('param3', 39)])
	flw_27:
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 12), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 13), ('param3', 39)])
	printf("######You're messing with me. Say it again,\nI dare you!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 16), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3598), ('param2', -256), ('next', 14), ('param3', 13)])
	printf("#####\nI only speak the truth. You are not the\none who will save her. The spirit\nmaiden, your #####Zelda#####, can only be\nsaved by another.\nIt has been his fate to do this thing,\nand in doing so save us. As it was\ndecided long before you were brought\ncrying into this world.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 65), ('param2', 0), ('next', 32), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 33), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12544), ('next', 17), ('param3', 13)])
	printf("#####>#####Shut it, Grannie!\n\n\n\nYou obviously don't know me well,\n'cause if you did, you'd know that if\nanyone's gonna save #####Zelda#####, it's\nGroose!\nHow could it not be me? Plus, if it ain't\nme, why would I even be here? Pffft.\nIf I'm not up to the job of being\nthe hero, just who is?")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 356), ('next', 28), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 24), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1025), ('param2', 17920), ('next', 35), ('param3', 13)])
	printf("######Huh?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 80), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1025), ('param2', 1792), ('next', 37), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 79), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 19), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 100), ('next', 20), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 4), ('next', 280), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 21), ('param3', 6)])
	printf("######Oh...now I getcha.\n\n\n\n##############, Grannie here has\nbeen trying to tell me you're gonna be\nthe big hero who rescues Zelda.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 12544), ('next', 26), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 394), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 395), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 393), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 25), ('param3', 17)])
	printf("#####<What a joke! Look, all I've heard so\nfar is a bunch of babbling about\ndestiny, but that's a load of garbage.\n\n######I know you, and you're no hero,\nshrimp!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 30), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 29), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 2), ('param2', 516), ('next', 31), ('param3', 14)])
	printf("#####8#####Waaaah!####-#")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 35), ('next', 462), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 463), ('param3', 24)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 281), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 282), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 40), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 49), ('param2', 0), ('next', 283), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 41), ('param3', 16)])
	printf("######Greetings, ####. Were you\nable to catch up with #####Zelda#####?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 43), ('param3', 39)])
	printf("######Ah, I see. So the guardian was there as\nwell, was she?\n\n\nThe one you saw by Zelda's side is\nknown as #####Impa#####. She is a being sent\nforth by the #####goddess #####to aid Zelda in \nher quest.")
	printf("The two have traveled somewhere in\norder to accomplish the great task\ndestiny has set before them.\n\nHowever, now that Impa has destroyed\nthe gate that they used, there is only\none way left to find them.")
	printf("######You must make use of the #####harp #####given\nto you by Zelda.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 44), ('param3', 39)])
	printf("######...Tell me, ####, have you\nattempted to play the harp that\nyou received?\n\nMy sense is that you have not yet\nfamiliarized yourself with it. \n\n\nVery well, I shall teach you how to\nplay it. Listen well and do as I say.\n\n\nFirst, press ##### to ready your harp,\nthen press ##### to prepare to strum it.#####")
	story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 45), ('param3', 42)])
	scene_flags[10 'Sealed Grounds'][28 /* 0x2 10 */] = true;
}

void entrypoint_501_16() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 68), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 298), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 404), ('param3', 50)])
	goto flw_404
}

void entrypoint_501_17() {
	start()
	flw_134:
	printf("######Ah, your sword!\n\n\n\n######There can be no doubt. The sacred\nflames have purified this blade.\nWell done, ####. That\nsword holds tremendous power.")
	printf("######That power is a sacred #####force#####.\n\n\n\n######It is a divine power left to us by the\ngods of old. The same power that is\nspoken of in the Ballad of the Goddess.\n\nTo look upon you is to see that same\ngreat power, now flowing through you\nand the sword you carry.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 427), ('param3', 39)])
	printf("######Come, ####. You must\nnow open the Gate of Time.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 397), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 398), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 136), ('param3', 17)])
	printf("Now that the sacred #####force##### dwells\nwithin your blade, strike the Gate of\nTime with a #####Skyward Strike #####and\nit will surely awaken.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 0), ('next', 137), ('param3', 39)])
	printf("Climb upon the pedestal, and #####show\nthe gate your sword's power#####!")
	scene_flags[10 'Sealed Grounds'][80 /* 0xB 01 */] = true;
	scene_flags[10 'Sealed Grounds'][57 /* 0x6 02 */] = false;
	scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 30), ('next', -1), ('param3', 42)])
}

void entrypoint_501_18() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 310), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 437), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 428), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 85), ('param3', 39)])
	printf("######So you've returned.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 14), ('next', 429), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 430), ('param3', 47)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 7), ('param2', 356), ('next', 431), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 432), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 14), ('next', 433), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 435), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 434), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 32), ('param2', 0), ('next', 436), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 86), ('param3', 48)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 461), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1015), ('next', 87), ('param3', 24)])
	printf("Then you know everything...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 30), ('param2', 0), ('next', 84), ('param3', 39)])
	printf("On the other side of that gate, #####Zelda#####\nwaits, suspended in a sleep without end.\nBut do not despair, for she is still\nalive and well.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 313), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 33), ('param2', 0), ('next', 312), ('param3', 39)])
	printf("True to legend, the Triforce is the one\nthing with the power to vanquish\nDemise. It is thought to have been\nhidden within Skyloft by the goddess. \n######Sadly, that is all we know of where it\nrests. #####All other clues to its whereabouts\nhave been lost to the ages.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 32), ('param2', 0), ('next', 314), ('param3', 39)])
	printf("##############, you have likely\ncome to the same conclusion, but I will\nspell it out just the same.\n\nThe key to finding the Triforce must\nbe in #####Skyloft#####.")
	printf("######Go now, ####. \nFind the Triforce.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 319), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 317), ('param3', 50)])
	printf("###########Whoa! Whoa there! Hold up!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 131), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 48), ('param2', 0), ('next', 91), ('param3', 39)])
	printf("##############, there's something I\ngotta tell you.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1028), ('param2', 256), ('next', 309), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 89), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 34), ('param2', 0), ('next', 90), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 75), ('next', 88), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 8), ('param2', 100), ('next', 92), ('param3', 14)])
	printf("######So, Zelda... How's she holding up?\nWas she OK when you saw her?\n\n#####She's great!#####Actually...")
	switch (choice(2, 0)) {
	  case 0:
		printf("She was? Oh, good to hear.\n\n\n\n######...But she's still stuck there till this\nwhole mess blows over, huh?")
		flw_97:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 35), ('param2', 0), ('next', 96), ('param3', 39)])
		printf("##############...I've made up my\nmind. I'm not going back.\n\n\n######I'm staying right here with Grannie.")
		printf("######Aww, don't look so bummed out. Do I\nlook sad? Nah, I'm doing what I want\nto do!\n\n######I don't know how to explain it. I got\nthis feeling in my belly that there's\nwork to do here.\n\nSomeone's gotta watch that big, ugly\nmonster,###### and someone's gotta make\nsure Grannie's doing all right.\n\nIt ain't as action packed as what you're\ndoing, but maybe this is my destiny.\nKnow what I mean?")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 36), ('param2', 0), ('next', 99), ('param3', 39)])
		printf("######Besides, it's not so bad here. Living up\nin the sky was OK, I guess, but don't\nyou just love the way it smells down\nhere? What? That's not weird to say!")
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 104), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1025), ('param2', -256), ('next', 103), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 101), ('next', 102), ('param3', 17)])
		printf("######Check it out.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 109), ('param3', 17)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 37), ('param2', 0), ('next', 107), ('param3', 39)])
		printf("######Zelda and Grannie have brought life\nback to the land here.\n\n\nI bet even the weakest #####sapling #####could\ngrow into one beast of a tree in soil\nlike this. It'd brighten this place up a\nlittle too.\n######I mean, sure, it'd take a few years for\nit to grow, but as far as I'm concerned,\nI got nothing but time.\n\n######It's weird to say out loud, but that's\njust how I feel right now.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 36), ('param2', 0), ('next', 320), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 106), ('param3', 17)])
		printf("######So...yeah...you know. When you get\nback to Skyloft, do me a favor and let\npeople know I'm doing OK down here.\n\n######Cawlin and Strich might get a little\nemotional since they look up to me,\nbut you tell them I'm happy, OK?\n\n######Thanks, ####.")
		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		printf("######That's terrible. It's gotta be so hard for\nthe poor girl.\n\n\n######But you're going to do something about\nthis mess, right?")
		goto flw_97
	}
}

void entrypoint_501_01() {
	start()
	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
	  case 0:
		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
		  case 0:
			printf("#####\nWe shall find more time to talk later.\nFor now, you must go.")
		  case 1:
			printf("######No doubt you've seen the great\nspiraling pit just outside the temple.\nKnow that something sleeps sealed\naway in the depths of that place.\nDo not worry yourself about what\nslumbers there. It will be made known\nto you when the time is right.")
		}
	  case 1:
		printf("######The door that leads to Faron Woods\nis open now. Leave through the door\nto my left, and head for the woods.\n\nAll the questions you have now will be\nanswered in time. For now, you must\ngo, ####. Walk bravely.")
	}
}

void entrypoint_501_19() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 55), ('param2', 0), ('next', 359), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 485), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 1), ('next', 327), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 13), ('param2', 100), ('next', 328), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 329), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 59), ('param2', 0), ('next', 336), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 335), ('param3', 6)])
	printf("###########Ah...##### The traveler descended from\nthe clouds above. I welcome you,\nchild of fate.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 0), ('next', 342), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 340), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 56), ('param2', 0), ('next', 343), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 337), ('param3', 6)])
	printf("###########Tell me, what is your name?\n\n\n\n...####(########?\nAh, ####. Good.\nVery good.\n\nI sense you have already gained control\nover the sacred power that fills your\nsword when #####pointed skyward#####. The\n###########Skyward Strike##### is yours to command.\n######It is proof that you are fit to bear the\nblade you carry, the #####Goddess Sword#####.\n\n\n#####I have sat here for many years waiting\nfor you to arrive. All so that I could\nfulfill my purpose as your guide.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 43), ('param2', 0), ('next', 182), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 9), ('param2', 356), ('next', 183), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 180), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 38), ('param2', 0), ('next', 184), ('param3', 39)])
	printf("You stand under the roof of the Sealed\nTemple, a place built by the goddess\nan eternity ago.\n\nYour arrival here was predestined\nmany, many years ago.\n\n\nThe spirit maiden you seek arrived \nhere shortly before you, descending to\nthis land in a shower of light.\n\nThere's no doubting it. The gears of\nfate have begun to turn.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 57), ('param2', 0), ('next', 344), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 185), ('param3', 6)])
	printf("#####\nYet all is not as it should be. The spirit\nmaiden was not meant to reach this\nland in the manner she did.\n\nI feel an evil power working in the\nshadows. It moves to warp the destiny\nof which you two are a part.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 60), ('param2', 0), ('next', 338), ('param3', 39)])
	printf("##############...#####You are concerned\nfor the spirit maiden and seek her\nwhereabouts, yes?\n\n...That is understandable, but for now\nyou must focus on moving forward.\nThat girl has her own purpose she must\npursue, as do you.\nShe set out for #####Faron Woods##### to discover\nthat destiny for herself, and you must\nfollow.")
	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
	printf("######Show me your map.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 364), ('param3', 30)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 363), ('param3', 6)])
	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
	printf("The ##### upon your map marks the path\nthat will lead you to #####Faron Woods#####.\n\n\nYou will be traveling in unfamiliar\nland. Many monsters have settled here,\nand a map may not prove guidance\nenough for your journey.\nAnd so I will give you the power to \ncreate #####beacons#####.\n\n\nWhen a beacon is marked on your map,\na column of light will stand at that \nlocation. It will act as your waypoint \nfrom afar.\nPoint at the ##### and press ##### to place\na beacon.#####")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 191), ('param3', 34)])
	flw_191:
	switch (scene_flags[24 /* 0x2 01 */]) {
	  case 0:
		printf("######Though you cannot see it from where\nwe are, a beacon stands outside to \nguide you. Leave the temple through\nthe front doors, and see for yourself.\nWhen you no longer have a use for\na beacon, you can remove it from your\nmap by pressing ##########.\n\nUse your beacons well, and you will\nnever fear getting lost.")
		printf("######Go now. You must head into Faron\nWoods and chase after the spirit\nmaiden...the one you call #####Zelda#####.\n\nOn your way out, take the contents of\nthe #####treasure chest##### within this room.\nWhat you find there should prove\nuseful to you on your journey.")
		scene_flags[10 'Sealed Grounds'][83 /* 0xB 08 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 196), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 197), ('param3', 32)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 101), ('next', 199), ('param3', 17)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 40), ('param2', 0), ('next', 358), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 10), ('next', 279), ('param3', 13)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 200), ('param3', 17)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 201), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 41), ('param2', 0), ('next', 202), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 203), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 102), ('next', 205), ('param3', 24)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 45), ('next', 204), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 42), ('param2', 0), ('next', 206), ('param3', 39)])
		printf("You are ready. Leave through the door\nbefore you, and head into the woods.\nI wish you safe travel.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 334), ('param3', 17)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 278), ('param3', 6)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 49), ('param2', 0), ('next', 209), ('param3', 39)])
		printf("######Know that all the questions you have\nnow will be answered in time. For now,\n####, go bravely!")
		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 61), ('param2', 0), ('next', 330), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		printf("######You haven't set a beacon over ##### yet.\n\n\n\nTo remove a beacon from your map, \npoint at it and press ##### once more.#####\n\n\nIf you aim to be more accurate with\nthe placement of your beacons, zoom in\nwith ##### before you lay one down.")
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 368), ('param3', 30)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 367), ('param3', 6)])
		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
		printf("Go on now. Point at ##### and press ##### to\nplace a beacon at that location.#####")
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 191), ('param3', 34)])
		goto flw_191
	}
}

void entrypoint_501_02() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 6), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 9), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 14), ('next', 7), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 4), ('next', 273), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 99), ('next', 34), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1035), ('param2', 2560), ('next', 360), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1008), ('next', 10), ('param3', 24)])
	printf("#####=Huh? You gotta be kidding me,\nGrannie!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 11), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 14), ('next', 27), ('param3', 17)])
	goto flw_27
}

void entrypoint_501_20() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 113), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 115), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 413), ('param3', 50)])
	flw_413:
	printf("######The beast has been sealed into its\nprison for a third time.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 415), ('param3', 47)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 5), ('param2', 356), ('next', 417), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 416), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 419), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 421), ('param3', 50)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 422), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 418), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 420), ('param3', 48)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 412), ('param3', 6)])
	printf("########, Groose... You have\nboth done well.\n\n\nBut I fear we can't dwell on your\nsuccess. The strength of the seal\nseems to wane with each escape.\n\nWe are almost out of time,\n####. Are you close to\ndiscovering the Triforce?\n#####Yes!#####Actually...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 44), ('param2', 0), ('next', 426), ('param3', 39)])
	printf("#####...I see. You must seek out the three\ndragons and complete the Song of the\nHero to find the Triforce.\n\nIt is right your search led you here.\nThe #####Faron Woods##### are close by.\n\n\n#####\nUnfortunately, there has been an\nunusual turn of events in the woods...\n\n\n######I am unsure of what happened, but a\nshort while ago, I noticed the path to\nthe woods was completely flooded.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 130), ('param3', 39)])
	printf("To protect the land here, I closed the\n#####gate leading to the woods##### and drove\nback the water with a simple seal.\n\nThe seal will only hold as long as the\ngate remains closed, meaning you\nwill not be able to open it without\nflooding these lands.\nGiven this situation, I am at a loss\nas to how you can enter the woods. ")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 46), ('param2', 0), ('next', 126), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 100), ('next', 116), ('param3', 50)])
	printf("######Heh! Is that all? Consider the problem\nsolved!\n\n\nSee, that last battle with big ugly got\nme thinking about other ways to use\nthe #####Groosenator#####!\n\nJust climb up into that bad boy, and I'll\ngive you a #lift\" over to the woods,\nall right?")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 125), ('param3', 39)])
	printf("######I'll run ahead and get her prepped for\nyou! Come see me when you're ready\nto take a little flight.")
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 10), ('param2', 516), ('next', 467), ('param3', 14)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 124), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 119), ('param3', 24)])
	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 99), ('next', 117), ('param3', 50)])
	printf("######Oh my...\n\n\n\nThe boy has made himself very useful,\nbut he does have a tendency to cause\ntrouble for those he #helps\"...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 323), ('param3', 17)])
	printf("######Safe journey. I wish you a soft landing,\n####.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 324), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_501_03() {
	start()
	give_item(186 0xBA);
	story_flags[343 /* us: 805A9AFE 0x20, jp: 805ACD7E 0x20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
}

void entrypoint_501_21() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 121), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 14), ('next', 123), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 100), ('next', 413), ('param3', 50)])
	goto flw_413
}

void entrypoint_501_22() {
	start()
	switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
	  case 0:
		switch (scene_flags[100 /* 0xD 10 */]) {
		  case 0:
			switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
			  case 0:
				switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
				  case 0:
					printf("#####\nI have no other words for you,\n####. Know now that you\nare the sole hope for the survival\nof this land.\nThe danger is overwhelming, but you\nmust persevere. You must save our\nworld!")
				  case 1:
					printf("######Groose left the temple through the\nfront door a few moments ago!\n\n\nI imagine he's out by his #####catapult#####,\nlike always.")
				}
			  case 1:
				printf("#####\nI have no other words for you,\n####. Know now that you\nare the sole hope for the survival\nof this land.\nThe danger is overwhelming, but you\nmust persevere. You must save our\nworld!")
			}
		  case 1:
			printf("######No! So Demise has already been\nresurrected... If we do not stop him,\nthis world is doomed.")
			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
			printf("#####\nI have no other words for you,\n####. Know now that you\nare the sole hope for the survival\nof this land.\nThe danger is overwhelming, but you\nmust persevere. You must save our\nworld!")
		}
	  case 1:
		switch (scene_flags[99 /* 0xD 08 */]) {
		  case 0:
			printf("##############, listen to me! You\nmust do whatever it takes to prevent\nthe resurrection of Demise in the past!\n\nQuickly now! Open the Gate of Time\nand return to the past!")
		  case 1:
			printf("######For #####Zelda##### to be taken from us at a time\nlike this... It is unthinkable!\n\n\n########, listen to me! You\nmust do whatever it takes to prevent\nthe resurrection of Demise in the past!\n\nQuickly now! Open the Gate of Time\nand return to the past!")
			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
		}
	}
}

void entrypoint_501_05() {
	start()
	printf("The ######Ballad of the Goddess#####.\" Based on\nmy projections, this is likely the song\nZelda sang on the day of the Wing\nCeremony.\nI calculate an 85% probability that\nsomeone associated with the academy\nwill be able to provide additional\ninformation about this song.")
	story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
}

void entrypoint_501_06() {
	start()
	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
	  case 0:
		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
		  case 0:
			switch (scene_flags[80 /* 0xB 01 */]) {
			  case 0:
				switch (scene_flags[81 /* 0xB 02 */]) {
				  case 0:
					switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
					  case 0:
						switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
						  case 0:
							printf("##############, what are you doing?\nDid you meet with Zelda on the other\nside of the door?\n\n######If not, you must go back through!")
						  case 1:
							printf("##############, it is time!\nOpen the Gate of Time, and travel\nto the other side.")
						}
					  case 1:
						printf("#####\nThe beast is awakening from its\nslumber.\n\n\n########, you must seal the\nbeast away once more!")
					}
				  case 1:
					printf("######Now that the sacred force dwells within\nyour blade, hit the Gate of Time with\na #####Skyward Strike##### and it will surely\nawaken.\nClimb upon the pedestal, and #####show\nthe gate your sword's power#####!")
				}
			  case 1:
				goto flw_134
			}
		  case 1:
			printf("#####\nThe seal's strength will not last. Sooner\nor later the great beast shall break its\nshackles once more.\n\nFortunately, I hear Groose has been\nhard at work preparing something for\nits next assault.\n\n########, you must move fast.\nYou must imbue your sword with the\npower of the three sacred flames.")
		}
	  case 1:
		printf("######When the three sacred flames have\nimbued your sword, only then will the\nGate of Time open for you.\n\nThe clue that will lead you to the\nflames is woven into the song of your\nhomeland known as the #####Ballad of the\nGoddess#####. You must return to Skyloft!")
	}
}

void entrypoint_501_23() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 2621), ('next', 263), ('param3', 13)])
	printf("######You gotta chase after that creep,\n####! #####Zelda#####'s counting\non you!")
}

