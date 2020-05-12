void entrypoint_406_01() {
	start()
	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 16), ('param4', 4), ('param5', 60)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 10), ('param3', 13)])
			switch (story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */]) {
			  case 0:
				story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 24), ('param3', 12)])
				switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
				  case 0:
					printf("Up for another run on the Rickety\nCoaster? You never know what will\nhappen. Just 20 Rupees!\n#####Sure!#####Uh...no.")
					flw_2:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
					  case 0:
						flw_8:
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 20), ('param3', 10), ('param4', 2), ('param5', 6)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -20), ('next', 56), ('param3', 8)])
							printf("So what track will it be?\n#####Scary!#####Heart stopping!")
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 36)])) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 58), ('param3', 13)])
								printf("Got it--the scary track it is. Good luck!")
								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = false;
								flw_15:
								switch (story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */]) {
								  case 0:
									printf("Want to hear the rules again?\n#####Sure.#####Nope.")
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 16)])) {
									  case 0:
										OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 42), ('param3', 13)])
										printf("This here is a race against time--\nscream across that finish line as fast\nas you can!\n\nTilt the Wii Remote to lean your cart.\nIf you lean at just the right angle on a\ncorner, you will get a nice speed boost.\n\nLose your concentration when you are\ncruising around a bend, though, and\nyou will run right off the rails. If that\nhappens, you lose the race.")
										flw_84:
										switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
										  case 0:
											switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
											  case 0:
												printf("Your best time so far is:\n#######:#######.#######.")
												flw_101:
												OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 44), ('param3', 13)])
												printf("All right, let us get going!")
												story_flags[501 /* us: 805A9B12 0x08, jp: 805ACD92 0x08 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 124), ('param3', 33)])
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
											  case 1:
												goto flw_101
											}
										  case 1:
											switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
											  case 0:
												printf("Your best time so far is:\n#######:#######.#######.")
												goto flw_101
											  case 1:
												goto flw_101
											}
										}
									  case 1:
										goto flw_84
									}
								  case 1:
									goto flw_84
								}
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 59), ('param3', 13)])
								printf("So you want the heart-stopping track,\neh? You got it, but I just hope you are\nready...")
								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = true;
								goto flw_15
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 40), ('param3', 13)])
							printf("You are out of cash? Well, then I guess\nthat is that. Come back once you get\nyourself some pocket change.")
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 34), ('param3', 13)])
						printf("Oh well. Maybe some other time, eh?")
					}
				  case 1:
					printf("Hey, ####! You are back!\n\n\n\nThink you have got the stomach to ride\nthe Rickety Coaster? Just 20 Rupees!\n#####I'm in!#####No, thanks.")
					goto flw_2
				}
			  case 1:
				switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
				  case 0:
					printf("So I have your attention?\n#####Yes.#####No.")
					flw_19:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 20)])) {
					  case 0:
						flw_110:
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3332), ('next', 38), ('param3', 13)])
						printf("This here is a race against time--\nscream across that finish line as fast\nas you can!\n\nTilt the Wii Remote to lean your cart.\nIf you lean at just the right angle on a\ncorner, you will get a nice speed boost.\n\nLose your concentration when you are\ncruising around a bend, though, and\nyou will run right off the rails. If that\nhappens, you lose the race.")
						story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 55), ('param3', 12)])
						printf("What do you say? Have you got the guts\nto ride the Rickety Coaster? Just 20\nRupees a ride.\n#####Sure!#####No, thanks.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 24)])) {
						  case 0:
							goto flw_8
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 37), ('param3', 13)])
							printf("What about all these prizes I have?\nSo you are OK with letting them go to\nwaste? You really are not interested?\n#####Let's do it.#####I'm sure.")
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 26)])) {
							  case 0:
								goto flw_8
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 39), ('param3', 13)])
								printf("Oh, all right, see you some other time!")
							}
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 36), ('param3', 13)])
						printf("You could at least let me explain\nthe rules...")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 8), ('next', -1), ('param3', 4)])
					}
				  case 1:
					printf("Hey, you! What are you doing?\n\n\n\nWell, you are here now...so how about a\nlittle fun?\n#####Fun?#####No way.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 34)])) {
					  case 0:
						printf("Got your attention, eh? Geheh.\nLet me explain...")
						goto flw_110
					  case 1:
						printf("Now, come on, do not be like that.\nHear me out first!\n#####OK.#####No chance.")
						goto flw_19
					}
				}
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 63), ('param3', 46)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3), ('next', 47), ('param3', 44)])
			printf("You finished!")
			switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
			  case 0:
				switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
				  case 0:
					flw_12:
					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 10)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 3847), ('next', 48), ('param3', 13)])
						printf("You set a new record!\nGreat work!")
						flw_4:
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 16), ('param4', 4), ('param5', 2)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 3590), ('next', 51), ('param3', 13)])
							printf("Hold it. You cannot be serious. \nThat was way too slow! Look, there is \njust no way I can give you a prize for\nthat time.")
							flw_68:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -256), ('next', 80), ('param3', 13)])
							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
							  case 0:
								story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */] = true;
								flw_64:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3), ('next', 50), ('param3', 45)])
								printf("Hope you come by again soon!")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 8), ('next', -1), ('param3', 4)])
							  case 1:
								story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */] = true;
								goto flw_64
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 3589), ('next', 72), ('param3', 13)])
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 52), ('param3', 12)])
							printf("I know you can do better than that.\nYou were just warming up, right?\n\n\nThe secret is in getting just the right\ntilt. Here--you have earned this prize\nat least.")
							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
							  case 0:
								flw_5:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 68), ('param3', 9)])
								goto flw_68
							  case 1:
								goto flw_5
							}
						  case 2:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 11), ('param2', 3847), ('next', 74), ('param3', 13)])
							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
							  case 0:
								printf("Not a bad time. Nope, not bad at all!\nHere is your prize!")
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 63), ('next', 68), ('param3', 9)])
								goto flw_68
							  case 1:
								printf("Not a bad time, but you are nowhere\nnear as fast as I am. Here are\n50 Rupees!")
								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 130), ('param3', 12)])
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 68), ('param3', 8)])
								goto flw_68
							}
						  case 3:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 4104), ('next', 54), ('param3', 13)])
							printf("Whoa, now! That was...unbelievable!\nEven I cannot go that fast.")
							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
							  case 0:
								switch (story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */]) {
								  case 0:
									printf("This is something I have been saving\njust for you.")
									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 64), ('next', 68), ('param3', 9)])
									goto flw_68
								  case 1:
									printf("Here you go! I found this treasure\nright here on this very island.")
									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 94), ('next', 79), ('param3', 9)])
									story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */] = true;
									goto flw_68
								}
							  case 1:
								printf("You get a Rupee I have taken really\ngood care of! I have been holding on to\nthis one forever, but it is yours now.")
								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 7), ('param3', 12)])
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 32), ('next', 68), ('param3', 9)])
								goto flw_68
							}
						}
					  case 1:
						goto flw_4
					}
				  case 1:
					goto flw_4
				}
			  case 1:
				switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
				  case 0:
					goto flw_12
				  case 1:
					goto flw_4
				}
			}
		  case 2:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 106), ('param3', 46)])
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 49), ('param3', 13)])
			printf("Well, come back anytime you want to\ngive it a try!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 8), ('next', -1), ('param3', 4)])
		  case 3:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 107), ('param3', 46)])
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3333), ('next', 99), ('param3', 13)])
			printf("Time is up. Try again next time!")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 8), ('next', -1), ('param3', 4)])
		}
	  case 1:
		switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 28), ('param3', 13)])
			printf("It is pretty fun to ride these mine carts.\nOne day, I would love to set up a race!")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 1), ('param3', 13)])
			printf("This station here was used by\nfolks heading into the old mines.\nPeople still ride the mine carts\nall over the place, though!\nI am probably supposed to tell you\nthere is some #safety information\"\nabout using the carts posted on\nthe wall over there.\nCart riding can be, uh...dangerous at\ntimes, so I would suggest you give that\nstuff a quick read.")
			story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */] = true;
		}
	}
}

void entrypoint_406_02() {
	start()
	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 93), ('param3', 13)])
		printf("I have been here alone for...well, who\nknows how long. Years.\n\n\nBut I get to ride these carts every\nday, and I never get bored of it!")
		flw_97:
		story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3334), ('next', 92), ('param3', 13)])
		printf("Hey, that is my seat! Nobody sits their\nrear end on my seat but me, got it?")
		goto flw_97
	}
}

void entrypoint_406_03() {
	start()
	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3330), ('next', 91), ('param3', 13)])
		printf("I am here every day running this\ncoaster, but you are the only one who\never shows up. Could you spread the\nword? It is lonely out here. And...dry.")
		flw_98:
		story_flags[742 /* us: 805A9B26 0x40, jp: 805ACDA6 0x40 */] = true;
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 3334), ('next', 96), ('param3', 13)])
		printf("Hey, that is my seat! Nobody sits their\nrear end on my seat but me, got it?")
		goto flw_98
	}
}

