void entrypoint_460_00() {
	start()
	story_flags[351 /* us: 805A9B01 0x20, jp: 805ACD81 0x20 */] = false;
	story_flags[352 /* us: 805A9B01 0x40, jp: 805ACD81 0x40 */] = false;
	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = false;
	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = false;
	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = false;
	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = false;
	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = false;
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 16), ('param4', 4), ('param5', 0)])) {
	  case 0:
		switch (story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */]) {
		  case 0:
			switch (scene_flags[113 /* 0xF 02 */]) {
			  case 0:
				printf("##############! Are you here to do\n#####battle##### or challenge yourself in one\nof the trials in the #####Silent Realm#####?\n#####Battle!#####Silent Realm!#####Neither.")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 1), ('param4', 3), ('param5', 17)])) {
				  case 0:
					flw_80:
					switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
					  case 0:
						flw_17:
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 20)])) {
						  case 0:
							flw_52:
							printf("######Spoken like a little warrior. I like it!")
							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = false;
							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = false;
							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = false;
							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = false;
							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = false;
							scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = false;
							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = false;
							scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = false;
							scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = false;
							scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = false;
							scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = false;
							scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = false;
							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
							  case 0:
								flw_13:
								printf("######All right, then...which period of your\njourney would you like to face an\nenemy from?\n#####The beginning.#####The middle.#####Later on.#####Never mind.")
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 13)])) {
								  case 0:
									flw_236:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 41), ('next', -1), ('param3', 7)])
								  case 1:
									flw_237:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 42), ('next', -1), ('param3', 7)])
								  case 2:
									switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
									  case 0:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 43), ('next', -1), ('param3', 7)])
									  case 1:
										switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
										  case 0:
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 44), ('next', -1), ('param3', 7)])
										  case 1:
											switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
											  case 0:
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 45), ('next', -1), ('param3', 7)])
											  case 1:
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 46), ('next', -1), ('param3', 7)])
											}
										}
									}
								  case 3:
									flw_15:
									printf("######What? You're not interested?\nHow dull...\n\n\n######Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
								}
							  case 1:
								switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
								  case 0:
									goto flw_13
								  case 1:
									printf("######Now then...would you like to face an\nenemy from near the beginning of\nyour journey, or a fairly recent one?\n#####The beginning.#####Fairly recent.#####Never mind.")
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 1), ('param4', 3), ('param5', 98)])) {
									  case 0:
										goto flw_236
									  case 1:
										goto flw_237
									  case 2:
										goto flw_15
									}
								}
							}
						  case 1:
							printf("######...#####Hey, hold on a second... You look like\nyou're about to fall over! Are you sure\nyou're really ready for this?\n#####Of course!#####No...")
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 22)])) {
							  case 0:
								goto flw_52
							  case 1:
								printf("######Right...##### No need to knock yourself out\nfighting these enemies here. Might as\nwell save yourself for the real battles,\nI suppose...\n######So don't even sweat it. Just come on\nback when you're back to full strength.\nI'll be waiting!")
							}
						}
					  case 1:
						printf("######You want to do #####battle#####? Fantastic!\nI like your moxie.\n\n\nBecause you chose #####battle#####, I will select\nfrom only the toughest opponents\nyou've ever faced...\n\n######And I will use my power to re-create\nthe same battle, so you can face your\ngreatest enemies once more!\n\nYou're being a good sport, so I'll\nreward you. Do well enough, and I\nmight give you something truly special:\nan absurdly sturdy shield!\nOh, but if you lose...\n\n\n\n######Well, let's just say that this isn't just a\ngame... #####If you lose, it's all over#####. You\nwon't be going home in one piece!\n\n######Still interested?\n#####Yes!#####No, thanks.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 11)])) {
						  case 0:
							goto flw_17
						  case 1:
							printf("######What? You're not interested?\nHow dull...\n\n\n######Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
						}
					}
				  case 1:
					flw_81:
					switch (story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */]) {
					  case 0:
						flw_75:
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 49)])) {
						  case 0:
							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
							  case 0:
								flw_464:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 72), ('next', -1), ('param3', 7)])
							  case 1:
								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
								  case 0:
									goto flw_464
								  case 1:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 74), ('next', -1), ('param3', 7)])
								}
							}
						  case 1:
							printf("######Hey, hold on a second... You look like\nyou're about to keel over! Are you sure\nyou're really ready for this?\n\nThis isn't worth risking your life for.\nHow about you give it a rest for today?\n\n\nCome back when you've replenished\nthose hearts.")
						}
					  case 1:
						printf("######You want to take a shot at a trial in the\n#####Silent Realm#####? You got guts, boy!\n\n\n######These #####Silent Realm##### challenges are the\nsame as all the trials you've seen up\nuntil now, and I'll be re-creating them\nright here.\nBut just finishing the trial won't be\nenough. I'll time how long it takes for\nyou to finish, and if you're fast enough,\nI'll give you a reward.\nHowever...#####if you get hit even once by a\nGuardian, you'll fail the Silent Realm\nchallenge and return here #####with \nseverely diminished hearts#####.\n######So...are you up to the challenge?\n#####Yes!#####Not really.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 47)])) {
						  case 0:
							goto flw_75
						  case 1:
							printf("######What? You're not interested?\nHow dull...\n\n\n######Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
						}
					}
				  case 2:
					printf("######What? You're not interested?\nHow dull...\n\n\n######Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
				}
			  case 1:
				printf("######So, ####, tell me... \nAre you ready to have some fun?\n\n\n######We're just going to relive some of the\ngreatest challenges in your young life...\nAre you up for it?\n#####Bring it on!#####Maybe not...")
				flw_5:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 6)])) {
				  case 0:
					scene_flags[9 'Lanayru Gorge'][113 /* 0xF 02 */] = true;
					printf("######You're a true hero! That's the spirit.\n\n\n\n######Then if you would permit me, I'll take a\npeek at your past experiences.\n\n\n#####...\n\n\n\n######Indeed. Indeed. You have done some\namazing things, like #####battling##### fierce\nfoes and overcoming the daunting\ntrials in the Silent Realm.\n######All right, then! Based on those\nexperiences, you can choose one of two\nexciting challenges!\n\n######Which one would you like to try?\nPick whichever one you like.\n#####Battle!#####Silent Realm!#####Neither.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 1), ('param4', 3), ('param5', 8)])) {
					  case 0:
						goto flw_80
					  case 1:
						goto flw_81
					  case 2:
						printf("######What? You're not interested?\nHow dull...\n\n\n######Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
					}
				  case 1:
					printf("######What? You're not interested?\nHow dull...\n\n\n######Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
				}
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 2), ('param3', 31)])
			story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */] = true;
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 63), ('param3', 9), ('param4', 2), ('param5', 76)])) {
			  case 0:
				printf("######Whoa, ####, I told you to\nwait a little while, but you just couldn't\nresist, eh?\n\n######Well I guess there's no sense in waiting\nany longer. Let's get this show started!\n\n\n######Of course, seeing as how you're the\nhero of legend, you don't really have\ntime to just goof off here, right?\n\n######Right. So how about we make this bit\nof fun more meaningful by taking you\nback through some of those challenges\nyou've faced previously?\n######You know, sometimes you've got to step\nbackward to go forward. There's a\nlot you can learn from revisiting\nyour past struggles! Oh ho, yes!\n######So, ####, are you game?\n#####Yeah!#####Not really...")
				goto flw_5
			  case 1:
				printf("Finally, ##########! You really\ndid come back! Glad to see it.\n\n\n######Well then, let's have some fun!\n\n\n\n######Or maybe a hero such as yourself has\nno time for playing around?\n\n\n######Well, what I offer is more than mere\nchild's play! I would have you face\nchallenges that draw upon the many\nhardships you've experienced thus far.\n######Look to the past to understand the\nfuture! That's what I say. And I think\nyou will find that you have much to\ngain in revisiting your own past.\n######So what do you say, ####?\n#####I'm game!#####Maybe not.")
				goto flw_5
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 116), ('param3', 44)])
		story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = false;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 13), ('next', -1), ('param3', 7)])
	  case 2:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 6), ('next', 115), ('param3', 44)])
		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
		switch (story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */]) {
		  case 0:
			printf("######Way to go! Looks like you made it back\nin one piece.")
			flw_94:
			printf("The time it took to finish this trial was\n#######:#######.#######.")
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 5), ('param3', 16), ('param4', 4), ('param5', 72)])) {
			  case 0:
				printf("######Amazing, ####!\nThat's a very fast time!\nYou deserve something special.\nHere you go!######")
				give_item(64 0x40);
				flw_470:
				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 6), ('param3', 14), ('param4', 2), ('param5', 239)])) {
				  case 0:
					flw_91:
					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 65)])) {
					  case 0:
						printf("######Looks like that was your first time in\na #####Silent Realm #####trial here! We have to\ncelebrate that with a reward.######")
						flw_638:
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 639), ('param3', 12)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 637), ('param3', 8)])
						printf("Here's 50 Rupees! Go on, then. Take it!")
						flw_641:
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 510), ('param3', 12)])
						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 6), ('next', 98), ('param3', 45)])
						printf("#####\nSo what do you say, ####?\nOne more #####Silent Realm##### trial?\n#####Yes!#####No.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 68)])) {
						  case 0:
							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
							  case 0:
								flw_467:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 72), ('next', -1), ('param3', 7)])
							  case 1:
								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
								  case 0:
									goto flw_467
								  case 1:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 74), ('next', -1), ('param3', 7)])
								}
							}
						  case 1:
							printf("######Boring!##### Well, if you change your mind,\ncome back and see me.")
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 9), ('next', -1), ('param3', 28)])
						}
					  case 1:
						printf("######Well done. That's a new record!\nI have just the right prize for you.\n######Go on. Take it.")
						goto flw_638
					  case 2:
						goto flw_641
					}
				  case 1:
					printf("By the way, if you want my greatest\nprize, you'll have to beat the record:\n############:############.\n\nIf you want to best that, you're going to\nhave to start training like a champ!")
					goto flw_91
				}
			  case 1:
				printf("######Very impressive time! Here--this is\nyour prize!######")
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 636), ('param3', 12)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 634), ('param3', 8)])
				printf("Here's 100 Rupees! Spend it on\nsomething worthwhile!")
				goto flw_470
			  case 2:
				printf("######Hmm... Nothing to get excited about...#####\nBut you did your best, so have this.######")
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 633), ('param3', 12)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 631), ('param3', 8)])
				printf("Here's 20 Rupees. Don't go spending\nit all at once!")
				goto flw_470
			  case 3:
				printf("######Come on, now.##### Are you even trying?\n\n\n\nNext time, put some heart into it! You\nknow, some oomph! I'm sorry to say\nthis is all I can give you this time.######")
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 630), ('param3', 12)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 628), ('param3', 8)])
				printf("Here you go. Five Rupees. Hey, don't\ngive me that look!")
				goto flw_470
			}
		  case 1:
			printf("######Well done, ####! You got\nevery last one of them. You're a\ntrue warrior!")
			story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */] = true;
			goto flw_94
		}
	  case 3:
		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
		printf("######Ohhhhh, you really fumbled that one,\nmy friend...\n\n\nAnd failure comes with a price--you're\nleft with a single heart. Better go grab\nsome more and come back later.")
	}
}

void entrypoint_460_52() {
	start()
	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 663), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 132), ('param3', 52)])
	changeScene(2, 0) // {'name': 'B200', 'room': 10, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_35() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 373)])) {
	  case 0:
		switch (scene_flags[115 /* 0xF 08 */]) {
		  case 0:
			switch (scene_flags[116 /* 0xF 10 */]) {
			  case 0:
				switch (scene_flags[117 /* 0xF 20 */]) {
				  case 0:
					switch (scene_flags[118 /* 0xF 40 */]) {
					  case 0:
						switch (scene_flags[119 /* 0xF 80 */]) {
						  case 0:
							switch (scene_flags[120 /* 0xE 01 */]) {
							  case 0:
								switch (scene_flags[121 /* 0xE 02 */]) {
								  case 0:
									switch (scene_flags[122 /* 0xE 04 */]) {
									  case 0:
										switch (scene_flags[123 /* 0xE 08 */]) {
										  case 0:
											switch (scene_flags[124 /* 0xE 10 */]) {
											  case 0:
												switch (scene_flags[125 /* 0xE 20 */]) {
												  case 0:
													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 62), ('next', -1), ('param3', 7)])
												  case 1:
													scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
												}
											  case 1:
												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
											}
										  case 1:
											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
										}
									  case 1:
										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
		}
	  case 1:
		switch (scene_flags[125 /* 0xE 20 */]) {
		  case 0:
			switch (scene_flags[116 /* 0xF 10 */]) {
			  case 0:
				switch (scene_flags[123 /* 0xE 08 */]) {
				  case 0:
					switch (scene_flags[118 /* 0xF 40 */]) {
					  case 0:
						switch (scene_flags[115 /* 0xF 08 */]) {
						  case 0:
							switch (scene_flags[124 /* 0xE 10 */]) {
							  case 0:
								switch (scene_flags[119 /* 0xF 80 */]) {
								  case 0:
									switch (scene_flags[122 /* 0xE 04 */]) {
									  case 0:
										switch (scene_flags[120 /* 0xE 01 */]) {
										  case 0:
											switch (scene_flags[121 /* 0xE 02 */]) {
											  case 0:
												switch (scene_flags[117 /* 0xF 20 */]) {
												  case 0:
													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 62), ('next', -1), ('param3', 7)])
												  case 1:
													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
												}
											  case 1:
												scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
											}
										  case 1:
											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
										}
									  case 1:
										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
		}
	  case 2:
		switch (scene_flags[123 /* 0xE 08 */]) {
		  case 0:
			switch (scene_flags[120 /* 0xE 01 */]) {
			  case 0:
				switch (scene_flags[121 /* 0xE 02 */]) {
				  case 0:
					switch (scene_flags[125 /* 0xE 20 */]) {
					  case 0:
						switch (scene_flags[115 /* 0xF 08 */]) {
						  case 0:
							switch (scene_flags[122 /* 0xE 04 */]) {
							  case 0:
								switch (scene_flags[119 /* 0xF 80 */]) {
								  case 0:
									switch (scene_flags[116 /* 0xF 10 */]) {
									  case 0:
										switch (scene_flags[118 /* 0xF 40 */]) {
										  case 0:
											switch (scene_flags[124 /* 0xE 10 */]) {
											  case 0:
												switch (scene_flags[117 /* 0xF 20 */]) {
												  case 0:
													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 62), ('next', -1), ('param3', 7)])
												  case 1:
													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
												}
											  case 1:
												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
											}
										  case 1:
											scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
										}
									  case 1:
										scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
		}
	}
}

void entrypoint_460_53() {
	start()
	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 662), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 137), ('param3', 52)])
	changeScene(8, 0) // {'name': 'B300', 'room': 0, 'layer': 2, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_01() {
	start()
	switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
	  case 0:
		flw_25:
		printf("######You all set? You've got a shield on\nand everything? If you're ready,\nwe're going to do this for real!\nAre we ready?\n#####Let's do this!#####Maybe not.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 26)])) {
		  case 0:
			printf("######Psych yourself up for this!")
			story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */] = true;
			story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
			switch (scene_flags[115 /* 0xF 08 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
			  case 1:
				switch (scene_flags[116 /* 0xF 10 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
				  case 1:
					switch (scene_flags[117 /* 0xF 20 */]) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
					  case 1:
						switch (scene_flags[118 /* 0xF 40 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
						  case 1:
							switch (scene_flags[119 /* 0xF 80 */]) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
							  case 1:
								switch (scene_flags[120 /* 0xE 01 */]) {
								  case 0:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
								  case 1:
									switch (scene_flags[121 /* 0xE 02 */]) {
									  case 0:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
									  case 1:
										switch (scene_flags[122 /* 0xE 04 */]) {
										  case 0:
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
										  case 1:
											switch (scene_flags[123 /* 0xE 08 */]) {
											  case 0:
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
											  case 1:
												switch (scene_flags[124 /* 0xE 10 */]) {
												  case 0:
													OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
												  case 1:
													switch (scene_flags[125 /* 0xE 20 */]) {
													  case 0:
														OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
													  case 1:
														OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 62), ('next', -1), ('param3', 7)])
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		  case 1:
			printf("######Oh, so you've changed your mind?#####\nNo scales off my back. If you want to\ntry later, you're welcome to come back\nat any time.\n######If you want to change your shield, just\nequip the one you need and come talk\nto me again.")
		}
	  case 1:
		printf("######Ah!##### I forgot to tell you something!\n\n\n\nThe only items you can use in battle are\n#####items you would have had at the time#####.\nYep, that's it!\n\n######Also, #####pouch items are prohibited#####!\nI know that sounds really hard, but you\nfought these guys once before, so I've\ngot to keep it interesting.\n######Hmm... Maybe I am being a little bit\nrough on you here. Tell you what...\nI'll let you take the #####shield you currently\nhave equipped#####.")
		goto flw_25
	}
}

void entrypoint_460_54() {
	start()
	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 661), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 665), ('param3', 52)])
	story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = true;
	story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = false;
	story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = false;
	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
	story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = false;
	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = false;
	story_flags[149 /* us: 805A9AEE 0x80, jp: 805ACD6E 0x80 */] = false;
	changeScene(9, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_71() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 4), ('param3', 14), ('param4', 2), ('param5', 70)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 101), ('param3', 33)])
		printf("Right, let me see... Your best time for\nthis area is: #######:#######.#######.")
		flw_82:
		printf("######Then let's get this thing started!\nClose your eyes and concentrate...")
		story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */] = true;
		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = true;
		switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', -1), ('param3', 33)])
		  case 1:
			switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', -1), ('param3', 33)])
			  case 1:
				switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', -1), ('param3', 33)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', -1), ('param3', 33)])
				}
			}
		}
	  case 1:
		goto flw_82
	}
}

void entrypoint_460_02() {
	start()
	switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
	  case 0:
		printf("######Well done! Spectacular skills on display\nonce again.")
		flw_57:
		printf("Here's how long it took you to finish\noff ################:\n#######:#######.#######.")
		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 34)])) {
		  case 0:
			printf("######Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.######")
			flw_545:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 546), ('param3', 12)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 544), ('param3', 8)])
			printf("Here's 50 Rupees! Go on, then. Take it!")
			flw_640:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 508), ('param3', 12)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 61), ('param3', 45)])
			switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
			  case 0:
				flw_64:
				printf("Quit now, and you'll get yourself a not-\ntoo-shabby ################.\n\n\nBut the next win will net you a\nfabulous ################!\n#####\nWhat'll it be? Do you want to\ncontinue?\n#####Continue!#####Quit...")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 41)])) {
				  case 0:
					switch (scene_flags[114 /* 0xF 04 */]) {
					  case 0:
						printf("######Yeah! That's what I'm talking about!\n\n\n\nThe next battle will be No. #######.\nTo defeat all the enemies, you must\nwin this many more battles: #######.\nSo let's get on with it!")
						flw_117:
						story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
						switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 35), ('next', -1), ('param3', 7)])
						  case 1:
							switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 34), ('next', -1), ('param3', 7)])
							  case 1:
								switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
								  case 0:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 33), ('next', -1), ('param3', 7)])
								  case 1:
									switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
									  case 0:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 32), ('next', -1), ('param3', 7)])
									  case 1:
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 31), ('next', -1), ('param3', 7)])
									}
								}
							}
						}
					  case 1:
						printf("######That's what I'm talking about!\nBut there's one more thing...\n\n\n######For consecutive battles, I get to choose\nwhat opponent comes next. I mean...\nyou didn't really want to have to pick\nan enemy every time, did you?\nNow you get to look forward to finding\nout who your opponent is at the start of\neach battle. But enough chatter. Let's\nget this fight started!")
						scene_flags[9 'Lanayru Gorge'][114 /* 0xF 04 */] = true;
						goto flw_117
					}
				  case 1:
					printf("######Right...##### No need to knock yourself out\nfighting these enemies here, right?\nMight as well save yourself for the real\nbattles, I suppose...\n######But you battled hard! Just as I\npromised, I'll give you this.")
					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 12), ('param3', 15), ('param4', 3), ('param5', 259)])) {
					  case 0:
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 13), ('param3', 16), ('param4', 4), ('param5', 262)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 513), ('param3', 12)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 511), ('param3', 8)])
							printf("Here's 20 Rupees. Don't go spending\nit all at once!")
							flw_648:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 9), ('next', 471), ('param3', 28)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 995), ('param3', 33)])
							printf("######Come back for a battle anytime!\nYou know where to find me.")
						  case 1:
							give_item(61 0x3D);
							goto flw_648
						  case 2:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 516), ('param3', 12)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 100), ('next', 514), ('param3', 8)])
							printf("Here's 100 Rupees! Spend it on\nsomething worthwhile!")
							goto flw_648
						  case 3:
							switch (story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */]) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 519), ('param3', 12)])
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 200), ('next', 517), ('param3', 8)])
								printf("Here's 200 Rupees! Well, look at you\nnow!")
								goto flw_648
							  case 1:
								give_item(94 0x5E);
								story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */] = true;
								goto flw_648
							}
						}
					  case 1:
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 14), ('param3', 16), ('param4', 4), ('param5', 266)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 522), ('param3', 12)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 300), ('next', 520), ('param3', 8)])
							printf("Here's 300 Rupees! Go buy something\nnice for yourself!")
							goto flw_648
						  case 1:
							give_item(64 0x40);
							goto flw_648
						  case 2:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 525), ('param3', 12)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 500), ('next', 523), ('param3', 8)])
							printf("Here's 500 Rupees! Must be a fortune\nfor you!")
							goto flw_648
						  case 3:
							switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 530), ('param3', 12)])
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1000), ('next', 528), ('param3', 8)])
								printf("Look at this--1,000 Rupees!\nHave you ever seen so much?")
								goto flw_648
							  case 1:
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 504)])) {
								  case 0:
									switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 20), ('param4', 2), ('param5', 498)])) {
									  case 0:
										OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 1014), ('param3', 12)])
										printf("######What's this? Your pouch is full, and so\nis your space at the Item Check in\nSkyloft? Then I guess you won't be\ngetting this shield.")
										OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1000), ('next', 1002), ('param3', 8)])
										printf("Ouch! Can't be helped, I guess. Oh, but\nI will give you 1000 Rupees for that\nimpressive performance!###### You'll just\nhave to try for the shield next time.")
										goto flw_648
									  case 1:
										flw_505:
										give_item(125 0x7D);
										story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
										goto flw_648
									}
								  case 1:
									goto flw_505
								}
							}
						}
					  case 2:
						switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 15), ('param3', 16), ('param4', 4), ('param5', 270)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 533), ('param3', 12)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2000), ('next', 531), ('param3', 8)])
							printf("Gah, 2,000 Rupees! It's robbery!")
							goto flw_648
						  case 1:
							give_item(64 0x40);
							printf("######Here's your prize!")
							give_item(64 0x40);
							printf("######You've won this fabulous prize!")
							give_item(64 0x40);
							goto flw_648
						  case 2:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 540), ('param3', 12)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3000), ('next', 538), ('param3', 8)])
							printf("Whoa, now! You get 3,000 Rupees!\nWhat are you going to spend it all on?!")
							goto flw_648
						  case 3:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 543), ('param3', 12)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 9900), ('next', 541), ('param3', 8)])
							printf("This time you win 9,900 Rupees!\nI think you've pretty much cleaned\nme out!")
							goto flw_648
						}
					}
				}
			  case 1:
				printf("######By the way, ####...what \ndo you think about trying another\nbattle right now?\n\n######I wouldn't ask you if there wasn't\nanother reward on the table. In fact,\nthe more battles you win, the better\nyour reward when you finish! \nAs I mentioned before, I've got lots of\nrewards, including an #####absurdly\nsturdy shield#####! Makes you want to leap\nright into another fight, doesn't it?\n######However--#####I bet you can see where I'm\ngoing with this--if you fail, that's the\nend of our little game.\n\nAnd keep in mind that #####your shield\ndurability and hearts #####will carry over\nfrom battle to battle. It makes the\nbattles all the more...exciting!")
				story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */] = true;
				goto flw_64
			}
		  case 1:
			printf("######Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.######")
			goto flw_545
		  case 2:
			printf("That was not your finest, I have to say!\nNo new record. Seriously, maybe you\ncould step it up a little bit next time.")
			goto flw_640
		}
	  case 1:
		printf("######Wow, ####! That was\nincredible. You're quite a warrior!")
		goto flw_57
	}
}

void entrypoint_460_55() {
	start()
	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 660), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 145), ('param3', 52)])
	changeScene(10, 0) // {'name': 'B101', 'room': 0, 'layer': 2, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_72() {
	start()
	printf("######That's what I wanted to hear, brave\nwarrior! Now choose a Silent Realm\ntrial.\n#####Faron Woods!#####Eldin Volcano!#####Lanayru Desert!#####Somewhere else.")
	flw_445:
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 230)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 446), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 9), ('next', 460), ('param3', 4)])
		flw_460:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 71), ('next', -1), ('param3', 7)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 447), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 9), ('next', 460), ('param3', 4)])
		goto flw_460
	  case 2:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 450), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 9), ('next', 460), ('param3', 4)])
		goto flw_460
	  case 3:
		printf("######Somewhere else? Where to, then?\n#####Skyloft!#####Previous places.#####I quit.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 1), ('param4', 3), ('param5', 234)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 460), ('param3', 33)])
			goto flw_460
		  case 1:
			printf("#####\nMake your mind up already!\nWhich place will it be?\n#####Faron Woods.#####Eldin Volcano.#####Lanayru Desert.#####More places.")
			goto flw_445
		  case 2:
			printf("######What? You're not interested?\nHow dull...\n\n\n######Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 9), ('next', -1), ('param3', 28)])
		}
	}
}

void entrypoint_460_03() {
	start()
	printf("######Congratulations! That's eight victories\nin a row!")
	switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 553), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1000), ('next', 551), ('param3', 8)])
		printf("Look at this--1,000 Rupees!\nHave you ever seen so much?")
		flw_647:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 649), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 9), ('next', 492), ('param3', 28)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 996), ('param3', 33)])
		printf("######Come back for a battle anytime!\nYou know where to find me.")
	  case 1:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 502)])) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 20), ('param4', 2), ('param5', 500)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 1016), ('param3', 12)])
				printf("######What's this? Your pouch is full, and so\nis your space at the Item Check in\nSkyloft? Then I guess you won't be\ngetting this shield.")
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1000), ('next', 999), ('param3', 8)])
				printf("Ouch! Can't be helped, I guess. Oh, but\nI will give you 1000 Rupees for that\nimpressive performance!###### You'll just\nhave to try for the shield next time.")
				goto flw_647
			  case 1:
				flw_547:
				give_item(125 0x7D);
				story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
				goto flw_647
			}
		  case 1:
			goto flw_547
		}
	}
}

void entrypoint_460_56() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 659), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 147), ('param3', 52)])
	changeScene(11, 0) // {'name': 'B301', 'room': 0, 'layer': 2, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_73() {
	start()
	printf("")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 222)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 430), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 9), ('next', 461), ('param3', 4)])
		flw_461:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 71), ('next', -1), ('param3', 7)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 432), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 9), ('next', 461), ('param3', 4)])
		goto flw_461
	  case 2:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 436), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 9), ('next', 461), ('param3', 4)])
		goto flw_461
	  case 3:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 461), ('param3', 33)])
		goto flw_461
	}
}

void entrypoint_460_04() {
	start()
	printf("######Wow! You pulled off nine victories in a\nrow! Who would have thought?")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 556), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2000), ('next', 554), ('param3', 8)])
	printf("Gah, 2,000 Rupees! It's robbery!")
	goto flw_647
}

void entrypoint_460_57() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 658), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 149), ('param3', 52)])
	changeScene(12, 0) // {'name': 'B201', 'room': 0, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_74() {
	start()
	printf("######That's what I wanted to hear, brave\nwarrior! Now choose a Silent Realm\ntrial.\n#####Faron Woods!#####Eldin Volcano!#####Lanayru Desert!#####Never mind.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 226)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 438), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 9), ('next', 462), ('param3', 4)])
		flw_462:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 71), ('next', -1), ('param3', 7)])
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 439), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 9), ('next', 462), ('param3', 4)])
		goto flw_462
	  case 2:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 442), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 9), ('next', 462), ('param3', 4)])
		goto flw_462
	  case 3:
		printf("######What? You're not interested?\nHow dull...\n\n\n######Ah, well. Come back anytime you\nchange your mind. I'll be waiting.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 9), ('next', -1), ('param3', 28)])
	}
}

void entrypoint_460_05() {
	start()
	printf("######You pulled off 10 victories in a row?!\nYou're something else!")
	printf("######Hey! Take this!")
	give_item(64 0x40);
	printf("######Here's your prize!")
	give_item(64 0x40);
	printf("######You've won this fabulous prize!")
	give_item(64 0x40);
	goto flw_647
}

void entrypoint_460_58() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 657), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 666), ('param3', 52)])
	story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = true;
	story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = false;
	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
	changeScene(13, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_06() {
	start()
	printf("######You keep amazing me, you know that?\nEleven victories in a row... I've never\nseen anything like it!")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 564), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 3000), ('next', 562), ('param3', 8)])
	printf("Whoa, now! You get 3,000 Rupees!\nWhat are you going to spend it all on?!")
	goto flw_647
}

void entrypoint_460_59() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 656), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 667), ('param3', 52)])
	story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = true;
	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
	  case 0:
		story_flags[495 /* us: 805A9B13 0x20, jp: 805ACD93 0x20 */] = true;
		flw_673:
		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = false;
		changeScene(14, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
	  case 1:
		story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
		goto flw_673
	}
}

void entrypoint_460_41() {
	start()
	printf("######From the beginning of your journey,\nhuh? In that case, let's see...##### Here we\ngo! These guys look pretty tough.\nWhich one would you like to face?\n#####Ghirahim!#####Scaldera!#####Moldarach!#####The Imprisoned!")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 101)])) {
	  case 0:
		printf("###########Ghirahim #####it is! He's that creeeepy guy\nyou fought in #####Skyview Temple#####.")
		scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
		flw_228:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
	  case 1:
		printf("###########Scaldera#####, coming right up! It's that\nblazing-hot fireball-looking thing \nfrom the #####Earth Temple#####.")
		scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
		goto flw_228
	  case 2:
		printf("###########Moldarach #####it is! This creepy crawly is\nthat big bug you fought in ##########Lanayru#####\nMining Facility#####.")
		scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
		goto flw_228
	  case 3:
		printf("######All right, you'll face #####the Imprisoned#####!\nIt's that gigantic thing you battled at\nthe #####Sealed Grounds#####.")
		scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
		goto flw_228
	}
}

void entrypoint_460_07() {
	start()
	printf("######Twelve battles, twelve victories!\nYou are the real deal... A genuine\nwarrior!")
	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 567), ('param3', 12)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 9900), ('next', 565), ('param3', 8)])
	printf("This time you win 9,900 Rupees!\nI think you've pretty much cleaned\nme out!")
	goto flw_647
}

void entrypoint_460_42() {
	start()
	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
	  case 0:
		printf("######From the middle of your journey, you\nsay? In that case, let's see...##### Here we\ngo! These guys look pretty tough.\nWhich one would you like to face?\n#####Koloktos!#####Tentalus!#####Ghirahim!#####The Imprisoned!")
		flw_207:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 105)])) {
		  case 0:
			printf("###########Koloktos #####it is! It's that six-armed\nmechanized monstrosity you fought\nat the #####Ancient Cistern#####!")
			scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
			flw_229:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
		  case 1:
			printf("###########Tentalus #####it is! You might know this\nbeast as the weirdo with one eye\nthat you fought on the #####Sandship#####.")
			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
			goto flw_229
		  case 2:
			printf("###########Ghirahim #####it is! This is the creepy-\nlooking guy you fought in that\nsweltering-hot #####Fire Sanctuary#####.")
			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
			goto flw_229
		  case 3:
			printf("###########The Imprisoned #####it is! It's that gigantic,\ndisgusting beast you battled for a\nsecond time at #####Sealed Grounds#####.")
			scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
			goto flw_229
		}
	  case 1:
		printf("######A fairly recent battle, huh?\nIn that case, let's see...##### Here we go!\nThese guys look pretty tough. \nWhich one would you like to face?\n#####Koloktos!#####Tentalus!#####Ghirahim!#####The Imprisoned!")
		goto flw_207
	}
}

void entrypoint_460_08() {
	start()
	printf("######Well done! Spectacular skills on display\nonce again.")
	printf("Here's how long it took you to finish\noff ################:\n#######:#######.#######.")
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 278)])) {
	  case 0:
		printf("######Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.######")
		flw_576:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 577), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 575), ('param3', 8)])
		printf("Here's 50 Rupees! Go on, then. Take it!")
		flw_642:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 574), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 623), ('param3', 45)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 3), ('next', -1), ('param3', 7)])
	  case 1:
		printf("######Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.######")
		goto flw_576
	  case 2:
		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
		goto flw_642
	}
}

void entrypoint_460_60() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 655), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 1009), ('param3', 52)])
	story_flags[347 /* us: 805A9B01 0x02, jp: 805ACD81 0x02 */] = true;
	changeScene(15, 0) // {'name': 'F403', 'room': 1, 'layer': 0, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_43() {
	start()
	printf("######From later on in your journey, huh?\nIn that case, let's see...##### Here we go!\nThese guys look pretty tough.\nWhich one would you like to face?\n#####The Imprisoned!#####Horde battle!#####Ghirahim!#####Demise!")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 109)])) {
	  case 0:
		printf("###########The Imprisoned #####it is! This is the huge\nbeast you battled for a third time at\nthe #####Sealed Grounds#####.")
		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
		flw_230:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
	  case 1:
		printf("######Oh-ho, a #####horde battle#####! You'll face off\nagainst the horde of monsters that\n#####Ghirahim##### summoned at the #####Sealed\nGrounds#####.")
		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
		goto flw_230
	  case 2:
		printf("###########Ghirahim##### it is! He's the creepy guy you\nfought at the #####Sealed Grounds#####.")
		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
		goto flw_230
	  case 3:
		printf("######OK, #####Demise##### it is! You've fought some\nreal baddies, but this one really makes\nmy scales crawl!")
		scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
		goto flw_230
	}
}

void entrypoint_460_09() {
	start()
	printf("######Well done! Spectacular skills on display\nonce again.")
	printf("Here's how long it took you to finish\noff ################:\n#######:#######.#######.")
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 281)])) {
	  case 0:
		printf("######Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.######")
		flw_587:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 588), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 586), ('param3', 8)])
		printf("Here's 50 Rupees! Go on, then. Take it!")
		flw_643:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 585), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 624), ('param3', 45)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 4), ('next', -1), ('param3', 7)])
	  case 1:
		printf("######Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.######")
		goto flw_587
	  case 2:
		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
		goto flw_643
	}
}

void entrypoint_460_61() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 654), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 691), ('param3', 52)])
	story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = true;
	changeScene(16, 0) // {'name': 'F403', 'room': 1, 'layer': 4, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_44() {
	start()
	printf("######From later on in your journey, huh? \nIn that case, let's see...##### Here we go!\nThese guys look pretty tough.\nWhich one would you like to face?\n#####The Imprisoned!#####Horde battle!#####Ghirahim!")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 1), ('param4', 3), ('param5', 115)])) {
	  case 0:
		printf("###########The Imprisoned #####it is! This is the huge\nbeast you battled for a third time at\nthe #####Sealed Grounds#####.")
		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
		flw_247:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
	  case 1:
		printf("######Oh-ho, a #####horde battle#####! You'll face off\nagainst the horde of monsters that\n#####Ghirahim##### summoned at the #####Sealed\nGrounds#####.")
		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
		goto flw_247
	  case 2:
		printf("###########Ghirahim##### it is! He's the creepy guy you\nfought at the #####Sealed Grounds#####.")
		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
		goto flw_247
	}
}

void entrypoint_460_62() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 653), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 159), ('param3', 52)])
	changeScene(17, 0) // {'name': 'B400', 'room': 0, 'layer': 1, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_45() {
	start()
	printf("######From later on in your journey, huh?\nIn that case, let's see...##### Here we go!\nThese guys look pretty tough.\nWhich one would you like to face?\n#####The Imprisoned!#####Horde battle!")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 118)])) {
	  case 0:
		printf("###########The Imprisoned #####it is! This is the huge\nbeast you battled for a third time at\nthe #####Sealed Grounds#####.")
		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
		flw_255:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
	  case 1:
		printf("######Oh-ho, a #####horde battle#####! You'll face off\nagainst the horde of monsters that\n#####Ghirahim##### summoned at the #####Sealed\nGrounds#####.")
		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
		goto flw_255
	}
}

void entrypoint_460_10() {
	start()
	printf("######Well done! Spectacular skills on display\nonce again.")
	printf("Here's how long it took you to finish\noff ################:\n#######:#######.#######.")
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 284)])) {
	  case 0:
		printf("######Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.######")
		flw_598:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 599), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 597), ('param3', 8)])
		printf("Here's 50 Rupees! Go on, then. Take it!")
		flw_644:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 596), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 625), ('param3', 45)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 5), ('next', -1), ('param3', 7)])
	  case 1:
		printf("######Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.######")
		goto flw_598
	  case 2:
		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
		goto flw_644
	}
}

void entrypoint_460_46() {
	start()
	printf("######From later on in your journey, huh?\n...#####It looks like the only opponent you\ncan face right now from the end of \nyour journey is #####the Imprisoned#####.")
	printf("###########The Imprisoned #####it is! This is the huge\nbeast you battled for a third time at\nthe #####Sealed Grounds#####.")
	scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 1), ('next', -1), ('param3', 7)])
}

void entrypoint_460_11() {
	start()
	printf("######Well done! Spectacular skills on display\nonce again.")
	printf("Here's how long it took you to finish\noff ################:\n#######:#######.#######.")
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 287)])) {
	  case 0:
		printf("######Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.######")
		flw_609:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 610), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 608), ('param3', 8)])
		printf("Here's 50 Rupees! Go on, then. Take it!")
		flw_645:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 607), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 626), ('param3', 45)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 6), ('next', -1), ('param3', 7)])
	  case 1:
		printf("######Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.######")
		goto flw_609
	  case 2:
		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
		goto flw_645
	}
}

void entrypoint_460_12() {
	start()
	printf("######Well done! Spectacular skills on display\nonce again.")
	printf("Here's how long it took you to finish\noff ################:\n#######:#######.#######.")
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 290)])) {
	  case 0:
		printf("######Hey, you know what? That was your\nfirst time reliving that battle! Let's\ncelebrate with a little prize for your\nefforts.######")
		flw_620:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 621), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 619), ('param3', 8)])
		printf("Here's 50 Rupees! Go on, then. Take it!")
		flw_646:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 618), ('param3', 12)])
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 7), ('next', 627), ('param3', 45)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 7), ('next', -1), ('param3', 7)])
	  case 1:
		printf("######Nice work! You beat your record!\nI can't let you go empty handed.\nHere--take this.######")
		goto flw_620
	  case 2:
		printf("That was not your finest, I have to say!\nNo new record! Still...you beat\neverything I can throw at you right\nnow, so that's something!")
		goto flw_646
	}
}

void entrypoint_460_13() {
	start()
	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
	  case 0:
		story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = false;
		story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
		flw_690:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 14), ('next', -1), ('param3', 7)])
	  case 1:
		switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
		  case 0:
			story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = false;
			story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = true;
			story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
			goto flw_690
		  case 1:
			switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
			  case 0:
				story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = false;
				story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
				story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = true;
				story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
				story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = true;
				goto flw_690
			  case 1:
				switch (story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */]) {
				  case 0:
					story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = false;
					goto flw_690
				  case 1:
					goto flw_690
				}
			}
		}
	}
}

void entrypoint_460_31() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 301)])) {
	  case 0:
		switch (scene_flags[115 /* 0xF 08 */]) {
		  case 0:
			switch (scene_flags[116 /* 0xF 10 */]) {
			  case 0:
				switch (scene_flags[117 /* 0xF 20 */]) {
				  case 0:
					switch (scene_flags[118 /* 0xF 40 */]) {
					  case 0:
						switch (scene_flags[119 /* 0xF 80 */]) {
						  case 0:
							switch (scene_flags[120 /* 0xE 01 */]) {
							  case 0:
								switch (scene_flags[121 /* 0xE 02 */]) {
								  case 0:
									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
								  case 1:
									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
		}
	  case 1:
		switch (scene_flags[120 /* 0xE 01 */]) {
		  case 0:
			switch (scene_flags[118 /* 0xF 40 */]) {
			  case 0:
				switch (scene_flags[117 /* 0xF 20 */]) {
				  case 0:
					switch (scene_flags[119 /* 0xF 80 */]) {
					  case 0:
						switch (scene_flags[121 /* 0xE 02 */]) {
						  case 0:
							switch (scene_flags[115 /* 0xF 08 */]) {
							  case 0:
								switch (scene_flags[116 /* 0xF 10 */]) {
								  case 0:
									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
								  case 1:
									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
		}
	  case 2:
		switch (scene_flags[118 /* 0xF 40 */]) {
		  case 0:
			switch (scene_flags[119 /* 0xF 80 */]) {
			  case 0:
				switch (scene_flags[115 /* 0xF 08 */]) {
				  case 0:
					switch (scene_flags[121 /* 0xE 02 */]) {
					  case 0:
						switch (scene_flags[116 /* 0xF 10 */]) {
						  case 0:
							switch (scene_flags[120 /* 0xE 01 */]) {
							  case 0:
								switch (scene_flags[117 /* 0xF 20 */]) {
								  case 0:
									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
								  case 1:
									scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
		}
	}
}

void entrypoint_460_14() {
	start()
	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
	  case 0:
		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 7), ('param3', 14), ('param4', 2), ('param5', 249)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 12), ('next', -1), ('param3', 7)])
		  case 1:
			flw_482:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 2), ('next', -1), ('param3', 7)])
		}
	  case 1:
		switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 8), ('param3', 14), ('param4', 2), ('param5', 251)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 11), ('next', -1), ('param3', 7)])
			  case 1:
				goto flw_482
			}
		  case 1:
			switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
			  case 0:
				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 9), ('param3', 14), ('param4', 2), ('param5', 253)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 10), ('next', -1), ('param3', 7)])
				  case 1:
					goto flw_482
				}
			  case 1:
				switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
				  case 0:
					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 10), ('param3', 14), ('param4', 2), ('param5', 255)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 9), ('next', -1), ('param3', 7)])
					  case 1:
						goto flw_482
					}
				  case 1:
					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 11), ('param3', 14), ('param4', 2), ('param5', 257)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 8), ('next', -1), ('param3', 7)])
					  case 1:
						goto flw_482
					}
				}
			}
		}
	}
}

void entrypoint_460_32() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 332)])) {
	  case 0:
		switch (scene_flags[115 /* 0xF 08 */]) {
		  case 0:
			switch (scene_flags[116 /* 0xF 10 */]) {
			  case 0:
				switch (scene_flags[117 /* 0xF 20 */]) {
				  case 0:
					switch (scene_flags[118 /* 0xF 40 */]) {
					  case 0:
						switch (scene_flags[119 /* 0xF 80 */]) {
						  case 0:
							switch (scene_flags[120 /* 0xE 01 */]) {
							  case 0:
								switch (scene_flags[121 /* 0xE 02 */]) {
								  case 0:
									switch (scene_flags[122 /* 0xE 04 */]) {
									  case 0:
										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
									  case 1:
										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
		}
	  case 1:
		switch (scene_flags[121 /* 0xE 02 */]) {
		  case 0:
			switch (scene_flags[122 /* 0xE 04 */]) {
			  case 0:
				switch (scene_flags[120 /* 0xE 01 */]) {
				  case 0:
					switch (scene_flags[115 /* 0xF 08 */]) {
					  case 0:
						switch (scene_flags[117 /* 0xF 20 */]) {
						  case 0:
							switch (scene_flags[118 /* 0xF 40 */]) {
							  case 0:
								switch (scene_flags[116 /* 0xF 10 */]) {
								  case 0:
									switch (scene_flags[119 /* 0xF 80 */]) {
									  case 0:
										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
									  case 1:
										scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
		}
	  case 2:
		switch (scene_flags[118 /* 0xF 40 */]) {
		  case 0:
			switch (scene_flags[116 /* 0xF 10 */]) {
			  case 0:
				switch (scene_flags[120 /* 0xE 01 */]) {
				  case 0:
					switch (scene_flags[121 /* 0xE 02 */]) {
					  case 0:
						switch (scene_flags[117 /* 0xF 20 */]) {
						  case 0:
							switch (scene_flags[119 /* 0xF 80 */]) {
							  case 0:
								switch (scene_flags[122 /* 0xE 04 */]) {
								  case 0:
									switch (scene_flags[115 /* 0xF 08 */]) {
									  case 0:
										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
									  case 1:
										scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
		}
	}
}

void entrypoint_460_33() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 367)])) {
	  case 0:
		switch (scene_flags[115 /* 0xF 08 */]) {
		  case 0:
			switch (scene_flags[116 /* 0xF 10 */]) {
			  case 0:
				switch (scene_flags[117 /* 0xF 20 */]) {
				  case 0:
					switch (scene_flags[118 /* 0xF 40 */]) {
					  case 0:
						switch (scene_flags[119 /* 0xF 80 */]) {
						  case 0:
							switch (scene_flags[120 /* 0xE 01 */]) {
							  case 0:
								switch (scene_flags[121 /* 0xE 02 */]) {
								  case 0:
									switch (scene_flags[122 /* 0xE 04 */]) {
									  case 0:
										switch (scene_flags[123 /* 0xE 08 */]) {
										  case 0:
											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
										  case 1:
											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
										}
									  case 1:
										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
		}
	  case 1:
		switch (scene_flags[123 /* 0xE 08 */]) {
		  case 0:
			switch (scene_flags[116 /* 0xF 10 */]) {
			  case 0:
				switch (scene_flags[117 /* 0xF 20 */]) {
				  case 0:
					switch (scene_flags[115 /* 0xF 08 */]) {
					  case 0:
						switch (scene_flags[118 /* 0xF 40 */]) {
						  case 0:
							switch (scene_flags[121 /* 0xE 02 */]) {
							  case 0:
								switch (scene_flags[119 /* 0xF 80 */]) {
								  case 0:
									switch (scene_flags[122 /* 0xE 04 */]) {
									  case 0:
										switch (scene_flags[120 /* 0xE 01 */]) {
										  case 0:
											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
										  case 1:
											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
										}
									  case 1:
										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
		}
	  case 2:
		switch (scene_flags[120 /* 0xE 01 */]) {
		  case 0:
			switch (scene_flags[115 /* 0xF 08 */]) {
			  case 0:
				switch (scene_flags[117 /* 0xF 20 */]) {
				  case 0:
					switch (scene_flags[123 /* 0xE 08 */]) {
					  case 0:
						switch (scene_flags[116 /* 0xF 10 */]) {
						  case 0:
							switch (scene_flags[121 /* 0xE 02 */]) {
							  case 0:
								switch (scene_flags[119 /* 0xF 80 */]) {
								  case 0:
									switch (scene_flags[118 /* 0xF 40 */]) {
									  case 0:
										switch (scene_flags[122 /* 0xE 04 */]) {
										  case 0:
											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
										  case 1:
											scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
										}
									  case 1:
										scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
		}
	}
}

void entrypoint_460_51() {
	start()
	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = true;
	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 664), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 692), ('next', 126), ('param3', 52)])
	changeScene(7, 0) // {'name': 'B100', 'room': 0, 'layer': 5, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
}

void entrypoint_460_34() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 12), ('param4', 3), ('param5', 370)])) {
	  case 0:
		switch (scene_flags[115 /* 0xF 08 */]) {
		  case 0:
			switch (scene_flags[116 /* 0xF 10 */]) {
			  case 0:
				switch (scene_flags[117 /* 0xF 20 */]) {
				  case 0:
					switch (scene_flags[118 /* 0xF 40 */]) {
					  case 0:
						switch (scene_flags[119 /* 0xF 80 */]) {
						  case 0:
							switch (scene_flags[120 /* 0xE 01 */]) {
							  case 0:
								switch (scene_flags[121 /* 0xE 02 */]) {
								  case 0:
									switch (scene_flags[122 /* 0xE 04 */]) {
									  case 0:
										switch (scene_flags[123 /* 0xE 08 */]) {
										  case 0:
											switch (scene_flags[124 /* 0xE 10 */]) {
											  case 0:
												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
											  case 1:
												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
											}
										  case 1:
											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
										}
									  case 1:
										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
		}
	  case 1:
		switch (scene_flags[116 /* 0xF 10 */]) {
		  case 0:
			switch (scene_flags[119 /* 0xF 80 */]) {
			  case 0:
				switch (scene_flags[120 /* 0xE 01 */]) {
				  case 0:
					switch (scene_flags[123 /* 0xE 08 */]) {
					  case 0:
						switch (scene_flags[118 /* 0xF 40 */]) {
						  case 0:
							switch (scene_flags[121 /* 0xE 02 */]) {
							  case 0:
								switch (scene_flags[122 /* 0xE 04 */]) {
								  case 0:
									switch (scene_flags[124 /* 0xE 10 */]) {
									  case 0:
										switch (scene_flags[115 /* 0xF 08 */]) {
										  case 0:
											switch (scene_flags[117 /* 0xF 20 */]) {
											  case 0:
												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
											  case 1:
												scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
											}
										  case 1:
											scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
										}
									  case 1:
										scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
		}
	  case 2:
		switch (scene_flags[115 /* 0xF 08 */]) {
		  case 0:
			switch (scene_flags[119 /* 0xF 80 */]) {
			  case 0:
				switch (scene_flags[120 /* 0xE 01 */]) {
				  case 0:
					switch (scene_flags[121 /* 0xE 02 */]) {
					  case 0:
						switch (scene_flags[118 /* 0xF 40 */]) {
						  case 0:
							switch (scene_flags[117 /* 0xF 20 */]) {
							  case 0:
								switch (scene_flags[124 /* 0xE 10 */]) {
								  case 0:
									switch (scene_flags[123 /* 0xE 08 */]) {
									  case 0:
										switch (scene_flags[116 /* 0xF 10 */]) {
										  case 0:
											switch (scene_flags[122 /* 0xE 04 */]) {
											  case 0:
												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 61), ('next', -1), ('param3', 7)])
											  case 1:
												scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 58), ('next', -1), ('param3', 7)])
											}
										  case 1:
											scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 52), ('next', -1), ('param3', 7)])
										}
									  case 1:
										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 59), ('next', -1), ('param3', 7)])
									}
								  case 1:
									scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 60), ('next', -1), ('param3', 7)])
								}
							  case 1:
								scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 53), ('next', -1), ('param3', 7)])
							}
						  case 1:
							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 54), ('next', -1), ('param3', 7)])
						}
					  case 1:
						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 57), ('next', -1), ('param3', 7)])
					}
				  case 1:
					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 56), ('next', -1), ('param3', 7)])
				}
			  case 1:
				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 55), ('next', -1), ('param3', 7)])
			}
		  case 1:
			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 460), ('param2', 51), ('next', -1), ('param3', 7)])
		}
	}
}

