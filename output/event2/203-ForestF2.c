void entrypoint_203_55() {
	start()
	switch (story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */]) {
	  case 0:
		printf("Were you to transport this #####basin #####to the\nvolcano, the water in this container has\nan 85% chance of extinguishing the\nflames barring your path.\nI recommend you attempt to borrow\nthis basin###### from the Water Dragon.")
	  case 1:
		printf("Measurements indicate a large amount\nof water in this #####basin#####. This quantity of\nwater has an 85% chance of putting out\nthe flames that block our path.\nI recommend you attempt to borrow\nthis basin###### from the Water Dragon.")
		story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */] = true;
	}
}

void entrypoint_203_72() {
	start()
	printf("Master Shortpants! Watch carefully\nwhile I demonstrate what a real hero\nlooks like, bzzzzat!")
}

void entrypoint_203_03() {
	start()
	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
	  case 0:
		printf("######I love that it's so safe here, but you\nknow...it's kind of boring now.\n\n\n######I should really stop complaining and\njust enjoy this #problem\" of mine.")
	  case 1:
		printf("######You may not have noticed, but I'm\ntrying to hide here. Could you please\nscoot along before you draw monsters\nover this way?")
	}
}

void entrypoint_203_90() {
	start()
	printf("######Hmm...")
}

void entrypoint_203_56() {
	start()
	switch (scene_flags[127 /* 0xE 80 */]) {
	  case 0:
		printf("Very well,##### shall I call for the robot?\n#####Sure!#####Not that guy...")
		flw_153:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 84)])) {
		  case 0:
			printf("Understood, ######Master. I will call him\nat once.")
		  case 1:
			switch (scene_flags[127 /* 0xE 80 */]) {
			  case 0:
				printf("######Master...#####despite your somewhat\nwarranted reservations, it would be\nirrational to abandon the most logical\nsolution. I will call for the robot now.")
			  case 1:
				printf("######Master...#####unless you plan to carry the\ntub on your back, now is not the\ntime to be picky about who will help\nyou. I will call for the robot.")
			}
		}
	  case 1:
		printf("To transport the Water Dragon's basin\nto the volcano, you will need to enlist\nthe service of that transport robot.\nShall I send word to him?\n#####Call him!#####Not that guy...")
		goto flw_153
	}
}

void entrypoint_203_73() {
	start()
	printf("As usual, vrrrt, I shall await you in the\nskies above.")
	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
}

void entrypoint_203_04() {
	start()
	switch (loadzone_temp_flags[11 /* 0x8 08 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 443), ('param3', 6)])
		printf("######It's nice to get lost in your own\nthoughts sometimes.\n\n\n######Sitting down for a quick break does\nwonders for the body and the mind.")
		scene_flags[1 'Faron Woods'][54 /* 0x7 40 */] = true;
	  case 1:
		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
		  case 0:
			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
			  case 0:
				printf("######Hiding from you isn't even fun. You're\ntoo good at finding me.")
			  case 1:
				printf("######You found me again. Sheesh, there's\njust no hiding from those eagle eyes\nof yours.\n\n######You know, I think you deserve a\nreward. Here--take this. I found it\nwhile I was hiding.")
				give_item(176 0xB0);
				printf("######Don't forget: it's a secret to everybody!")
				story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
			}
		  case 1:
			printf("######This is where we've made our home.\nThere's plenty of food to go around. \nIt's a pretty nice place, all in all.")
		}
	}
}

void entrypoint_203_05() {
	start()
	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
	  case 0:
		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
		  case 0:
			printf("######I confess that now that the water has\nreceded, I do miss it a bit. It was\nexciting to have a change of scenery.")
			printf("######Hoo-hoo-hoo.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 9), ('next', -1), ('param3', 7)])
		  case 1:
			printf("######So the Water Dragon has found you\nworthy, has she? You are full of\nsurprises.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 9), ('next', -1), ('param3', 7)])
		}
	  case 1:
		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
		  case 0:
			printf("######So you've met Her Excellence, the\nWater Dragon? What an experience!\nI am terribly envious of you.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 9), ('next', -1), ('param3', 7)])
		  case 1:
			switch (scene_flags[55 /* 0x7 80 */]) {
			  case 0:
				switch (story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */]) {
				  case 0:
					switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
					  case 0:
						switch (temp_flags[5 /* 0x1 20 */]) {
						  case 0:
							flw_16:
							printf("######What a wild world we live in. I hope\nI can meet our lost brother soon.")
							printf("######Hoo-hoo-hoo.")
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 9), ('next', -1), ('param3', 7)])
						  case 1:
							printf("######What's that? You met an old hermit\nKikwi living up in the tree? Amazing!\nAll this time I was sure there were only\nfive of our kind in these woods!")
							temp_flags[5 /* 0x1 20 */] = true;
							goto flw_16
						}
					  case 1:
						printf("######So you climbed your way to the\nvery top of the tree? Very impressive!\n\n\n######What's that? Someone's living up\nthere? Well, I'm counting on you to\nfind out more about this mystery tree\nresident.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 9), ('next', -1), ('param3', 7)])
					}
				  case 1:
					switch (scene_flags[19 /* 0x3 08 */]) {
					  case 0:
						printf("######You found a way inside the great\ntree, eh? Hah, impressive!")
						printf("######If you reach the top branches of the\ntree, the view is spectacular!\nYou never know what you might\nsee from up there.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 9), ('next', -1), ('param3', 7)])
					  case 1:
						printf("######There are still some parts of this forest\nthat you haven't discovered yet,\nkewwwww.\n\n######If you use the power of the Water\nDragon's Scale, you can dive\nunderwater, kewww. Just hold #####\non the water's surface.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 9), ('next', -1), ('param3', 7)])
					}
				}
			  case 1:
				switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 328), ('param3', 31)])
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 327), ('param3', 6)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 330), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 3), ('param3', 13)])
					printf("######Ah, hello again. I see you have the\nWater Dragon's Scale there,\nkewwww.\n\n######That's amazing! I heard that if you\nhave one, kewww, you can swim\nthrough the water like a dragon soars\nthrough the sky!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 6), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 7), ('param3', 13)])
					printf("######There must be places here in the woods\nthat you haven't visited yet, kewww.\n\n\n######You should use the Water Dragon's\nScale to explore areas you couldn't\neven get to before, kewww!")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 332), ('param3', 13)])
					printf("######Hoo-hoo-hoo.")
					scene_flags[1 'Faron Woods'][55 /* 0x7 80 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 9), ('next', -1), ('param3', 7)])
				  case 1:
					printf("######I see that you didn't find the girl in the\nDeep Woods, kee-paleep.\n\n\n######But you can't lose heart! Just as I have\nbeen reunited with my fellow Kikwis,\nyou will find your friend one day, kwii!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 9), ('next', -1), ('param3', 7)])
				}
			}
		}
	}
}

void entrypoint_203_91() {
	start()
	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
	  case 0:
		switch (adventure_pouch_has(7 0x0007)) {
		  case 0:
			switch (temp_flags[2 /* 0x1 04 */]) {
			  case 0:
				printf("######What's this? You have a bottle of the\n#####sacred water##### I seek here with you?\nGo on and pour it into my basin!")
				flw_351:
				story_flags[85 /* us: 805A9AE8 0x02, jp: 805ACD68 0x02 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
			  case 1:
				printf("######Hmm...")
				printf("######Yes! Just look at that color. There's\nno doubt this is the water I need.\nQuickly, boy, pour it into my basin!")
				goto flw_351
			}
		  case 1:
			printf("######Hmm...")
			printf("######Quickly now, bring me the sacred water\nI desire. Do so, and I will show you\nthe way to the sacred flame.")
		}
	  case 1:
		switch (scene_flags[0 /* 0x1 01 */]) {
		  case 0:
			printf("######Hmm...")
			printf("######I am willing to lead you to the sacred\nflame you seek, but only if you bring\nme the #####sacred water##### I seek.\n#####All right.#####No, thanks.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 32)])) {
			  case 0:
				flw_61:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 52), ('next', -1), ('param3', 7)])
			  case 1:
				printf("######Hmph. So it's too great a task for you?\nThen I guess you are a mere human\nafter all.")
				temp_flags[0 /* 0x1 01 */] = true;
			}
		  case 1:
			switch (temp_flags[1 /* 0x1 02 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 454), ('param3', 49)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 455), ('param3', 6)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 456), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 356), ('next', 283), ('param3', 15)])
				flw_283:
				printf("######You have intruded into my home,\na sacred place few are permitted to\nenter!\n\n######This is no place for one such as you.\nAnd yet here you stand! You will\nexplain how you got here, and quickly.\n#####Water Dragon?#####I'm lost.")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 28)])) {
				  case 0:
					scene_flags[2 'Lake Floria'][0 /* 0x1 01 */] = true;
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 475), ('param3', 39)])
					printf("######I am. Those with manners address\nme as Faron, warden of the woods.\nI was appointed by the goddess herself.\n\nThough my current stature is less\nthan, well, intimidating, shall we say,\nknow that you stand in the presence\nof a loyal servant of the goddess!\n##########\n.####\n.####\n.####\n######Hmm?")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 452), ('param3', 39)])
					printf("###########I say,################ that's one of MY scales you have\nthere!\n\n\n######A sacred gift such as that could only be\ncarried by the goddess's chosen hero.\n######But could you really be him?\n\n######This raises questions. Even with that\nscale in your possession, finding my\nhall is no easy task... How did you\nfind me?")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 55), ('param3', 39)])
					printf("######Ah, yes...##### That cackling, old hermit\nKikwi told you where I live, didn't he?\n\n\n######Honestly, I can't remember how many\ntimes I've told that scruffy thing to\nkeep his mouth shut. That's the last\nstraw. Next time I see him, he's dinner!\n######Oh, but I digress.##### You've come here\nseeking a #####sacred flame#####, have you?\n#####Of course!#####I forget...")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 124)])) {
					  case 0:
						printf("######I knew it.")
						flw_463:
						printf("######But I'll be straight with you. A shrimpy\nboy like you hardly looks the part of\nthe goddess's chosen hero.\n\n######There's no doubt about it. A test is in\norder to prove you're everything you\nsay you are.\n\nShortly before your arrival, I was\nattacked by a pompous creature calling\nhimself #####Ghirahim#####.\n\nI stood against this self-proclaimed\nDemon Lord, but I was wounded in the\nencounter.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 28), ('param2', 0), ('next', 464), ('param3', 39)])
						printf("######The wounds he's given me are stubborn\nthings. I have been forced to\nrecuperate in this basin of #####sacred\nwater#####.\n######Unfortunately, the healing properties\nof the sacred water have diminished,\nand I am now in need of another dose\nto freshen up my healing bath.\n###########Bring me the###### container of fresh sacred\nwater##### that I require.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 56), ('param3', 39)])
						printf("Do me this favor, and I'll gladly show\nyou where to find the sacred flame\nyou desire. What say you?\n#####You got it!#####No, thanks.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 30)])) {
						  case 0:
							temp_flags[3 /* 0x1 08 */] = true;
							goto flw_61
						  case 1:
							printf("######Hmph. So it's too great a task for you?\nThen I guess you are a mere human\nafter all.")
							temp_flags[0 /* 0x1 01 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
						}
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 292), ('param3', 39)])
						printf("###########Do not mock me, boy! If this is\nan attempt at humor, you will\nfind this a cold audience!\n\n######Still...few mortals have had the\ncourage to speak so boldly before me.\nYou do not intimidate easily. Yes,\na laudable trait to be sure.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 463), ('param3', 39)])
						goto flw_463
					}
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 290), ('param3', 39)])
					printf("######Do not mock me, boy!\n\n\n\nLinger in my hall a moment longer,\nand I'll bite your head clean off!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
				}
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 298), ('param3', 49)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 20), ('next', 412), ('param3', 6)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 448), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 3), ('param2', 356), ('next', 52), ('param3', 15)])
				printf("###########Ah! You there, human!")
				temp_flags[1 /* 0x1 02 */] = true;
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 283), ('param3', 39)])
				goto flw_283
			}
		}
	}
}

void entrypoint_203_57() {
	start()
	printf("######Master, your task here is complete for\nthe moment. We should return to the\nsky so that we can set a course for\nthe volcano.")
	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = true;
	story_flags[677 /* us: 805A9B20 0x40, jp: 805ACDA0 0x40 */] = true;
	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
	scene_flags[2 'Lake Floria'][127 /* 0xE 80 */] = true;
	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
}

void entrypoint_203_06() {
	start()
	printf("######I forgot to mention this earlier, but\nit's important.##### Her Excellence, the\nWater Dragon, is VERY persnickety\nabout manners... So watch yours!\n######I've heard stories of folks who caught\nher in a fussy mood. ######They ended up as\nmidmorning snacks, kwwwwrk!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 393), ('param3', 39)])
	printf("######I probably taste like old cave moss,\nbut I'm not in a hurry to become a\nroyal meal, kwwwrk!\n\n######So don't let her know I told you about\nFarore's Flame, OK?\n\n\n######And remember, when you're in her\nhall, you'd better be on your best\nbehavior and be a gracious guest.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 387), ('param3', 39)])
	printf("######I'll be here nappin' if you need some\nof my elder wisdom. See you around!\nKwwwwwwrk...")
	story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_203_92() {
	start()
	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
	  case 0:
		switch (scene_flags[1 /* 0x1 02 */]) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 85), ('next', -1), ('param3', 7)])
		  case 1:
			printf("######It pleases me that you have driven so\nmany monsters from these woods.\nYou have finally grown to possess\nstrength worthy of the sword you bear.\n######When you first came to my hall, you\nseemed an uncertain little thing...#####\nBut now your confidence is written\nacross your face.\n######Just the same, continue to temper your\nbody and mind! You must, if you hope\nto carry out the divine task entrusted\nto you.")
			scene_flags[2 'Lake Floria'][1 /* 0x1 02 */] = true;
		}
	  case 1:
		switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
		  case 0:
			printf("######Return the basin to me when you finish\nwith it. There is no rush, though.\nIt's yours to do with as you please.")
		  case 1:
			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
			  case 0:
				switch (scene_flags[127 /* 0xE 80 */]) {
				  case 0:
					printf("######Hmm? You wish to borrow my #####water\nbasin #####once again?\n\n\n###########Hmm...#####very well. But I must say the\nannoying contraption that returned\nwith it last time had a wicked tongue\non him!\n######I let it go because he's in your service,\nbut if you don't teach that impudent\nrunt some manners, know that I will.")
				  case 1:
					printf("######Ah, it's you. Tell me, are you mastering\nthe power that dwells within your\nsword?\n\n######Oh? You wish to borrow my #####water\nbasin#####?##### ######Hmm...##### Very well. I have\nrecovered, and I have no intention of\nhaving to soak in it again soon!\n######Begone with it. It's yours to use as\nyou please.")
				}
			  case 1:
				switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
				  case 0:
					printf("######That is a great sword you carry.\nDevote yourself to growing into a man\nstrong enough to wield its might.")
				  case 1:
					switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
					  case 0:
						printf("######One day I shall also repay Ghirahim in\nfull for his actions here.")
					  case 1:
						printf("######Mmmmmm! Exquisite! I can feel its\nenergy surging through me!")
					}
				}
			}
		}
	}
}

void entrypoint_203_58() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 300), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 302), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 340), ('param2', 0), ('next', 310), ('param3', 51)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 307), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 308), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 3), ('next', 309), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 0), ('next', 304), ('param3', 39)])
	printf("######Master, I have information to report.\n\n\n\nBy my estimates, you are currently\nsituated in the southwest area of\nFaron Woods. Please confirm your\nlocation with your map.")
	scene_flags[1 'Faron Woods'][56 /* 0x6 01 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 256), ('param2', 0), ('next', 305), ('param3', 30)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 306), ('param3', 34)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 303), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 311), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 312), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_203_93() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 198), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 79), ('param3', 17)])
	printf("######Now...behold.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 190), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 101), ('next', 189), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 270), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 268), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 269), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 9), ('param2', 0), ('next', 266), ('param3', 13)])
	printf("##########<######Hah-hmm#####...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 267), ('param3', 39)])
	printf("")
	scene_flags[2 'Lake Floria'][100 /* 0xD 10 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 60), ('next', 196), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 194), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 191), ('param3', 17)])
	printf("######Go. The sacred flame you seek lies\nwithin this place.\n\n\nWhile the waterfall has barred\nentrance to this place for many\nyears, monsters have still found a\nway in...and inside they flourish.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 8), ('param2', 0), ('next', 195), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 192), ('param3', 39)])
	printf("######Ah, but you are the goddess's chosen\nhero. Swatting a few monsters will be\nno trouble for you.\n\nI imagine you and I will cross paths\nagain. Until then, do not lower your\nguard.\n\n######Farewell, boy.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 278), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 277), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 199), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 314), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 279), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 313), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 197), ('param3', 6)])
	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 7), ('param2', 0), ('next', 272), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_203_07() {
	start()
	printf("####<######Kikwiiiiiiiiii!")
}

void entrypoint_203_59() {
	start()
	printf("Yes, as I suspected, the water level in\nFaron Woods has dropped. The forest\nhas returned to its former less-\naquatic state.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 4), ('next', -1), ('param3', 7)])
}

void entrypoint_203_94() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 209), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 210), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 208), ('param3', 17)])
	printf("######Ah, the sword you carry is different\nsince I last saw you. Yes, I see it is \nmuch improved...")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 1792), ('next', 211), ('param3', 13)])
	printf("To think, the goddess's chosen hero is\nbut a mere boy. Quite a twist...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 214), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 4), ('next', 213), ('param3', 13)])
	printf("######Chosen hero or not, you do not yet\npossess the strength required to wield\nthe full power of that blade.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 216), ('param3', 13)])
	printf("You must train yourself further!\nDevote yourself wholly to this task.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 32), ('param2', 0), ('next', 480), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 6), ('next', 479), ('param3', 13)])
	printf("######Farewell, boy.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 484), ('param3', 32)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 485), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 482), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 218), ('param3', 39)])
	story_flags[118 /* us: 805A9AEA 0x08, jp: 805ACD6A 0x08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 276), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_203_08() {
	start()
	printf("##########<######Oh, wait up!")
}

void entrypoint_203_95() {
	start()
	printf("######Now...behold.")
}

void entrypoint_203_60() {
	start()
	printf("I never knew there were humans who\ncould dive this deep!\n\n\nCan you also do a #####spin##### by #####shaking your\nNunchuk#####?")
}

void entrypoint_203_09() {
	start()
	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
	  case 0:
		printf("######Speaking of a change of scenery, how \nis Oolo faring out there in the big,\nwide world? Is he well?")
	  case 1:
		switch (story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */]) {
		  case 0:
			printf("######By the by, did you hear about Oolo?\nHe's considering leaving the woods on\nhis own. That's one brave Kikwi...")
		  case 1:
		}
	}
}

void entrypoint_203_96() {
	start()
	printf("##########<######Hah-hmm#####...")
}

void entrypoint_203_61() {
	start()
	printf("Say, Mr. Human Person, do you know\nhow to do a #####spin jump#####?\n\n\nIf you spin up #####toward the water's\nsurface#####, you can do an amazing leap\nright out of the water!")
}

void entrypoint_203_97() {
	start()
	printf("")
}

void entrypoint_203_62() {
	start()
	printf("Hah! Human in the water! #####Look at him\ntrying to flap around in the water!")
}

void entrypoint_203_10() {
	start()
	story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 0), ('next', 582), ('param3', 39)])
	printf("######Channel the power of the goddess\ninto the gate, and complete the symbol\ncarved upon its doors using that power.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 584), ('param3', 30)])
	printf("######Place a beacon on your map over\nthis ##### so that you can find the\nlocation I was talking about, kwwwrk!")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 406), ('param3', 39)])
	flw_406:
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 35), ('param3', 34)])
	printf("######Is all of this seeping into your head,\nlad? Do you know where you must go\nto find the symbol you seek?\n#####Got it!#####Uh...")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 16)])) {
	  case 0:
		switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
		  case 0:
			printf("######I'll be here nappin' if you need some\nof my elder wisdom. See you around!\nKwwwwwwrk...")
		  case 1:
			printf("######Then I wish you safe travels, lad.")
			story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
		}
	  case 1:
		printf("######All right, kwwwwrk, let's try that\nagain...")
		flw_37:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 32), ('param3', 30)])
		switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
		  case 0:
			printf("######Place a beacon on your map over\nthis ##### so that you can find the\nlocation I was talking about, kwwwrk!")
			goto flw_406
		  case 1:
			story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
			printf("######The gate is down in the south, so it's\nlikely that there's a matching symbol\nsomewhere up north. Try searching\nnear this #####, kwwwrk!")
			goto flw_406
		}
	}
}

void entrypoint_203_80() {
	start()
	switch (story_flags[111 /* us: 805A9AEB 0x10, jp: 805ACD6B 0x10 */]) {
	  case 0:
		switch (story_flags[112 /* us: 805A9AEB 0x20, jp: 805ACD6B 0x20 */]) {
		  case 0:
			switch (story_flags[113 /* us: 805A9AEB 0x40, jp: 805ACD6B 0x40 */]) {
			  case 0:
				switch (story_flags[114 /* us: 805A9AEB 0x80, jp: 805ACD6B 0x80 */]) {
				  case 0:
					switch (scene_flags[15 /* 0x0 80 */]) {
					  case 0:
						switch (temp_flags[15 /* 0x0 80 */]) {
						  case 0:
							switch (temp_flags[16 /* 0x3 01 */]) {
							  case 0:
								printf("Please, come in.")
							  case 1:
								printf("Her Excellence the Water Dragon is \njust up ahead. Hang on just a second.")
								temp_flags[16 /* 0x3 01 */] = true;
							}
						  case 1:
							printf("At last, we're here!")
							temp_flags[15 /* 0x0 80 */] = true;
						}
					  case 1:
						printf("Wow! The goddess sure knows how to\npick them! You did great!")
						scene_flags[2 'Lake Floria'][15 /* 0x0 80 */] = true;
					}
				  case 1:
					switch (scene_flags[14 /* 0x0 40 */]) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 0), ('next', 131), ('param3', 13)])
						switch (temp_flags[14 /* 0x0 40 */]) {
						  case 0:
							printf("Hey there, big guy... We're friends,\nright? We both like...water.\nDon't hurt me now...")
						  case 1:
							scene_flags[2 'Lake Floria'][50 /* 0x7 04 */] = false;
							scene_flags[2 'Lake Floria'][51 /* 0x7 08 */] = true;
							printf("Yikes! Oh, they're back! That's one of\nthe fish that weirdo brought in here\nand used to attack Her Excellence.\n\nWatch out--they're mean as they come!")
							temp_flags[14 /* 0x0 40 */] = true;
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 551), ('param3', 32)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 552), ('param3', 17)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 33), ('param2', 0), ('next', 553), ('param3', 39)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
						}
					  case 1:
						printf("Wow! Perfect jump!\n\n\n\nI'd call you amazing, but I think we\nboth know it was the Water Dragon's\nScale that made that little stunt\npossible.")
						scene_flags[2 'Lake Floria'][14 /* 0x0 40 */] = true;
					}
				}
			  case 1:
				switch (scene_flags[13 /* 0x0 20 */]) {
				  case 0:
					switch (temp_flags[13 /* 0x0 20 */]) {
					  case 0:
						printf("If you can't pass through here, you'll\njust have to jump over the top of the\nwall.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
					  case 1:
						printf("Come on, come on! Hurry up!\n\n\n\nHuh? You can't get through? Sheesh,\nyou humans and your bones. Talk about\ninconvenient. I guess you can leap over\nthe top of this wall if you have to.")
						temp_flags[13 /* 0x0 20 */] = true;
					}
				  case 1:
					printf("Oh, now that's using your noodle!\nHer Excellence is just up ahead.\nOver this way!")
					scene_flags[2 'Lake Floria'][13 /* 0x0 20 */] = true;
				}
			}
		  case 1:
			switch (scene_flags[12 /* 0x0 10 */]) {
			  case 0:
				switch (temp_flags[12 /* 0x0 10 */]) {
				  case 0:
					printf("You see those pointy, bloated fellas\nover there? Sure they look tough, but\nif you #####shake your Nunchuk##### and #####spin##### at\n'em, they go down easy.")
				  case 1:
					printf("Huh? That's weird. I was expecting\nto meet up with my friend here...\nAnd the path is blocked with a\nhuge boulder.\nLovely. Now what do we do?")
					temp_flags[12 /* 0x0 10 */] = true;
				}
			  case 1:
				printf("GAH! How is that even possible?\nI've never seen a human pull off a\nspin like that!\n\nWait.####\n.####\n.####\n That's a #####Water Dragon's Scale#####!\nDoes that make you the emissary\nof the goddess, like the Water\nDragon said?\nHey, I've got an idea! Maybe you\ncan help Her Excellence! \n#####What's wrong?#####Take me to her!")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 162)])) {
				  case 0:
					flw_499:
					printf("Yeah, about that...##### It happened really\nrecently. This weirdo came in here\nwith a gang of monsters and went\nright after Her Excellence.\nMy lady the Water Dragon is a fierce\nfighter, and, boy, did she gobble up\nmost of those monsters in the first\nfew seconds.\nThing is, there were just so many of\nthem! While she was distracted, the\nweirdo leading all those creatures\nmanaged to wound her.\nShe's healing up now, but she says we\ndon't have enough special water for her\nto make a full recovery.\n\nSo could you please go talk with Her\nExcellence and see if you can help\nher out?\n\nI'll even take you to her. Follow me!\n\n")
					scene_flags[2 'Lake Floria'][12 /* 0x0 10 */] = true;
				  case 1:
					goto flw_499
				}
			}
		}
	  case 1:
		switch (scene_flags[11 /* 0x0 08 */]) {
		  case 0:
			switch (temp_flags[11 /* 0x0 08 */]) {
			  case 0:
				printf("Yep, nothing short of a mighty #####spin\n#####move will get you through here, and\nyou obviously can't do that!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
			  case 1:
				printf("Ha-HA! Didn't see that coming,\ndid you? Yep, there's no way you're\ngoing to be able to follow me now!\n\nSo, what now? Are you going to cry?\nIf you think you can make it through,\njust go ahead and try!")
				temp_flags[11 /* 0x0 08 */] = true;
			}
		  case 1:
			switch (scene_flags[110 /* 0xC 40 */]) {
			  case 0:
				printf("Quit following me, pest! If you don't\nmove along, I'll be forced to tell\nHer Excellence the Water Dragon\nabout your little incursion!")
				scene_flags[2 'Lake Floria'][11 /* 0x0 08 */] = true;
			  case 1:
				printf("Ack! Another human!\n\n\n\nOK, OK... I just have to avoid eye\ncontact and back away slowly...")
				scene_flags[2 'Lake Floria'][110 /* 0xC 40 */] = true;
			}
		}
	}
}

void entrypoint_203_98() {
	start()
	printf("######Go. The sacred flame you seek lies\nwithin this place.\n\n\nWhile the waterfall has barred\nentrance to this place for many\nyears, monsters have still found a\nway in...and inside they flourish.")
}

void entrypoint_203_63() {
	start()
	printf("The place was just perfectly peaceful\nfor the longest time. Then weirdo\npeople like you started showing up.\n\nOn top of that, scary fish have been \nterrorizing our water! All this\ncommotion has made it impossible\nfor me to get any shut-eye.")
}

void entrypoint_203_81() {
	start()
	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
	  case 0:
		printf("Talk about bad luck. While the woods\nwere flooded, I had to stay here and\nhold down the fort.\n\nTalk about disappointment! I was\nreally looking forward to swimming\naround that area for once.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 34), ('param2', 0), ('next', 103), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 102), ('param3', 33)])
		printf("Disappointment!\nDisappointment!")
		flw_563:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', -1), ('next', -1), ('param3', 42)])
	  case 1:
		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
		  case 0:
			printf("Her Excellence is currently out\nand about.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 34), ('param2', 0), ('next', 326), ('param3', 39)])
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 325), ('param3', 33)])
			printf("Out and about!\nOut and about!")
			goto flw_563
		  case 1:
			switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
			  case 0:
				printf("Thanks to you, the Water Dragon has\nmade a complete recovery.\nMany thanks!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 34), ('param2', 0), ('next', 100), ('param3', 39)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 99), ('param3', 33)])
				printf("Many thanks!\nMany thanks!")
				goto flw_563
			  case 1:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 50)])) {
				  case 0:
					printf("Please help Her Excellence recover!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 34), ('param2', 0), ('next', 97), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 96), ('param3', 33)])
					printf("Help her! Help her!")
					goto flw_563
				  case 1:
					printf("Her Excellence is just up ahead.\nPlease, go in and speak with her!")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 34), ('param2', 0), ('next', 94), ('param3', 39)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 92), ('param3', 33)])
					printf("Go on! Talk with the Water Dragon!")
					goto flw_563
				}
			}
		}
	}
}

void entrypoint_203_99() {
	start()
	printf("######Ah, but you are the goddess's chosen\nhero. Swatting a few monsters will be\nno trouble for you.\n\nI imagine you and I will cross paths\nagain. Until then, do not lower your\nguard.\n\n######Farewell, boy.")
	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
}

void entrypoint_203_64() {
	start()
	printf("That one over there? He's dying to\nget in good with the Water Dragon.\n\n\nMy advice? Keep your distance.\nNothing good will come of hanging\naround with a fin-kissing Parella.")
}

void entrypoint_203_82() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 11), ('param4', 2), ('param5', 76)])) {
	  case 0:
		printf("Come on, come on! Hurry up!\n\n\n\nHuh? You can't get through? Sheesh,\nyou humans and your bones. Talk about\ninconvenient. I guess you can leap over\nthe top of this wall if you have to.")
	  case 1:
		printf("Ha-HA! Didn't see that coming,\ndid you? Yep, there's no way you're\ngoing to be able to follow me now!\n\nSo, what now? Are you going to cry?\nIf you think you can make it through,\njust go ahead and try!")
	}
}

void entrypoint_203_65() {
	start()
	printf("I love my home here. I just wish it was\na little easier to get in and out of the\nplace.")
}

void entrypoint_203_83() {
	start()
	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
	  case 0:
		switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
		  case 0:
			switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
			  case 0:
				printf("It's a shame the woods aren't flooded\nanymore. I wish I could have explored\na bit more outside.")
			  case 1:
				printf("I'm so glad Her Excellence has made\na speedy recovery. Thank you for\ncoming to her aid!")
			}
		  case 1:
			printf("Her Excellence hasn't been herself\nsince the attack. Can't you do\nsomething for her?")
		}
	  case 1:
		switch (scene_flags[19 /* 0x3 08 */]) {
		  case 0:
			printf("The Water Dragon is actually very\nkind...unless you irritate her.\nMake sure you stay on her good side!")
			printf("It's a secret to everybody.")
		  case 1:
			printf("Eeep! Don't eat me!\n#####Your Excellence?#####I won't eat you.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 108)])) {
			  case 0:
				switch (scene_flags[25 /* 0x2 02 */]) {
				  case 0:
					printf("Me, the Water Dragon? No!#####\nAre you looking for Her Excellence?\n\n\nShe's actually very kind, but if you're\nrude to her...she can be quite scary!\nWhen you see her, make sure you\nstay on her good side.")
					flw_239:
					printf("It's a secret to everybody.")
					scene_flags[2 'Lake Floria'][19 /* 0x3 08 */] = true;
				  case 1:
					printf("Me, the Water Dragon? No!#####\nAre you looking for Her Excellence?\n\n\nYou possess one of her scales, so you\nmust be a friend to our kind. I will\ntell you where you can find her.")
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 0), ('next', 238), ('param3', 30)])
					printf("The Water Dragon lives just a little\nways up from here. If you want to\nmake a note of that, now's probably\na good time to do it!")
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 239), ('param3', 34)])
					goto flw_239
				}
			  case 1:
				printf("Whaaa?##### You don't want to gobble\nme up?##### Oh, that's a relief.\n\n\nI've been hiding here for a while.\nEver since that school of scary-looking\nfish swam through.")
			}
		}
	}
}

void entrypoint_203_49() {
	start()
	printf("######Master, listen closely.\nDo you hear that?")
}

void entrypoint_203_50() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 254), ('param3', 39)])
	printf("Congratulations, ######\nMaster ####.")
	printf("You have passed this trial. You now\nhave the power to proceed to the\nlocation of the first sacred flame\nthat will enhance your sword.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 257), ('param3', 39)])
	printf("The #########D##### is one\nof the goddess's sacred gifts.\n\n\nThe great spirit of the #####Water Dragon\n#####has provided you with the ability to\nswim freely underwater.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 259), ('param3', 39)])
	printf("The flame you seek is somewhere \nwithin these woods... ######Master, I must\nconclude that this flame is likely in a\npart of this area you have not explored.")
}

void entrypoint_203_85() {
	start()
	printf("######Yes? If you have a question for me,\nyou need only speak it.\n#####Fire Dragon?#####Thunder Dragon?#####Faron Woods?#####Nothing.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 158)])) {
	  case 0:
		printf("######Hah! Him?##### Just as I was charged with\nwatching the woods, so does he preside\nover the volcanic lands to the north. \n\nHe's a peculiar fellow who has made\nhis lair deep in the sweltering depths\nof the volcano, beyond the reach of\nmonster and man.\nIf you can't handle the heat, I'd suggest\nyou stay clear. That is, unless you want\nthe flame-charred look!")
	  case 1:
		printf("######Hah! Oh, him?##### Just as the goddess\ncharged me with watching the woods,\nso does he preside over the bone-dry\nsands of the desert.\nHe's the oldest of the dragons. For\nsome time, he's neglected his own\nhealth.##### I wonder how he's been faring\nof late...")
	  case 2:
		printf("######A great many ancient songs praise the\nway humans once lived in these woods.\nThey were in harmony with nature.\n\nHonestly, I think those songs fail to\nsee the big picture. Don't you agree\nthese woods are far more beautiful\nnow that the humans are gone? ")
	  case 3:
		printf("######Continue to temper your body and\nmind! This is vital if you are to carry\nout the divine mission entrusted to you!")
	}
}

void entrypoint_203_51() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 346), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 347), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 35), ('param2', 356), ('next', 348), ('param3', 15)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 146), ('param3', 40)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 8), ('param2', 0), ('next', 29), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 27), ('param3', 35)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 144), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 99), ('next', 350), ('param3', 17)])
	printf("You have reached the top of the tree.\n\n\n\nFrom this vantage point, you have a\ngood view of the woods. Perhaps you\nwill see an area you haven't explored.")
	story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
	scene_flags[1 'Faron Woods'][51 /* 0x7 08 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 145), ('param3', 33)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 394), ('param3', 17)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 395), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 0), ('next', 381), ('param3', 17)])
	printf("######Master, look up there...")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 386), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 383), ('param3', 6)])
	printf("I have confirmed the discovery of\na new Kikwi.\n\n\nAnalysis indicates a 90% chance that\nthe sounds we have been hearing were\nthe loud snores of this Kikwi.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 385), ('param3', 39)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 30), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 28), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_203_86() {
	start()
	printf("######Mmmmmm! Exquisite! I can feel its\nenergy surging through me!")
}

void entrypoint_203_00() {
	start()
	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
	  case 0:
		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
		  case 0:
			printf("######You! I told you to keep quiet about\nour conversation!\n\n\nWhen the Water Dragon flooded the\nforest, I was sure she was going to\neat me like a dinner salad!\n\n######Still, the flood isn't so bad, is it?\nThe water's flushed out most of those\nmonsters. The woods are quite\npeaceful, really.")
			flw_540:
			printf("######I'll be here nappin' if you need some\nof my elder wisdom. See you around!\nKwwwwwwrk...")
		  case 1:
			printf("######Ack! That stings!\n\n\n\n######I hear the Water Dragon's pretty\nimpressed with you.\n\n\nOf course, she's been impressed with\nme for ages now, so...")
			goto flw_540
		}
	  case 1:
		switch (scene_flags[50 /* 0x7 04 */]) {
		  case 0:
			switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
			  case 0:
				switch (adventure_pouch_has(7 0x0007)) {
				  case 0:
					printf("######There's no need to be so rough,\nyou know.\n\n\n######Ah, no mistaking it. That's the water\nHer Excellence craves. If you're\nembarrassed to give it to her, you\ncould always say it's a gift from me!")
					goto flw_540
				  case 1:
					printf("######There's no need to be so rough,\nyou know.\n\n\n######Hmm? You need to fetch some sacred\nwater to prove yourself to the\nWater Dragon?\n\nDid you try searching the temple here?\nI think I remember Her Excellence\nwas quite fond of the water from one\nof the little springs inside.")
					goto flw_540
				}
			  case 1:
				printf("######Hey now! You're going to give me\na bruise like that.\n\n\n######So you've managed to open the gate\nto Lake Floria, eh?\n\n\nRemember, if the Water Dragon\nasks how you found out where she\nresides, you didn't hear it from me!")
				goto flw_540
			}
		  case 1:
			switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
			  case 0:
				switch (story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */]) {
				  case 0:
					printf("######Hmmmmmm? Oh, you again...kwwrk.\nIs there something I can do for you?\n#####Yes.#####No.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 20)])) {
					  case 0:
						printf("######Channel the power of the goddess\ninto the gate, and complete the symbol\ncarved upon its doors using that power.")
						goto flw_37
					  case 1:
						printf("######I'll be here nappin' if you need some\nof my elder wisdom. See you around!\nKwwwwwwrk...")
					}
				  case 1:
					goto flw_37
				}
			  case 1:
				printf("######Whoozit?! I'm nappin'! ")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 569), ('param3', 39)])
				switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
				  case 0:
					printf("###########Whazzit?##### #####Say, you got a familiar face.\nHave you and I met before, kwrrrrrk?\n#####Sure have!#####Nah...")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 182)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 574), ('param3', 39)])
						printf("######Ah, you're playing in #####Hero Mode#####. That\nexplains it. In that case, you don't need\nme blabbing on about what you need to\ndo, do you?#####Pretty much.#####Uh, I forgot...")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 184)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 10), ('next', -1), ('param3', 7)])
						  case 1:
							printf("######Uh-oh. If your memory is so shaky that\nyou've already forgotten our past\nconversation, things could get pretty\nhairy for you this time around, kwwrk!")
							flw_378:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 379), ('param3', 39)])
							flw_379:
							printf("######Listen, do you promise not to breathe\na word of what I'm about to tell you\nto another soul? I'm serious, kwwwrk!\n\n#####I promise.#####No promises!")
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 10)])) {
							  case 0:
								flw_354:
								printf("######All right, I'll tell you. But remember--\nit's a secret to everybody.")
								flw_355:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 364), ('param3', 39)])
								printf("######The flame that you seek...#####is most\nlikely ###########Farore's Flame#####.\n\n\n######Yes, yes... Farore's Flame...##### That story\nbegins very long ago, when the goddess\nwas still with us, kwwwrk...")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 366), ('param3', 39)])
								printf("######The goddess gave the flame to the\n#####Water Dragon#####, a great spirit that\npresides over #####Faron Woods#####.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 368), ('param3', 39)])
								printf("######The way I hear it is she left the flame\nin the care of the Water Dragon so that\none day the mighty dragon could pass\nit on to the ######one from the sky#####\"...")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 370), ('param3', 39)])
								printf("You see, kwwwwrk, I've got a hunch\nthat the goddess was talking about\nyou, lad.\n\n######Well, that settles that. You must\nseek out the mighty Water Dragon.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 23), ('param2', 0), ('next', 372), ('param3', 39)])
								printf("Her lair is deep in a lake in the south\nof these woods, kwwwwwwrk.\nShe watches over the flame there.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 24), ('param2', 0), ('next', 374), ('param3', 39)])
								printf("######There's a problem, though. The gate\nthat leads to that lake is sealed shut to\nall those judged unworthy...\n\n######But don't worry, kwwwwrk. I'll let you\nin on the trick to opening the gate.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 25), ('param2', 0), ('next', 408), ('param3', 39)])
								printf("######To open the gate,##### you have to channel\nthe #####power of the goddess #####into the\nsymbol carved into its doors, kwwwrk!\n\n######Oh, but it isn't so simple!##### The symbol is\nincomplete. To unlock the gate,\nyou must make the symbol whole.")
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 410), ('param3', 39)])
								printf("######The only way you'll know what the\ncompleted symbol should look like is\nto first find that same completed\nsymbol somewhere else in these woods.")
								goto flw_37
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 22), ('param3', 39)])
								printf("###########You can't keep a secret?!\n\n\n\n######Here I am trying to let you in on a big\nsecret, and you can't even promise to\nkeep it to yourself? Do you even want\nto hear it, kwwwwwrk?\n#####Please!#####Nah...")
								switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 12)])) {
								  case 0:
									goto flw_354
								  case 1:
									printf("###########WHATSIT?!\n\n\n\n######Oh, fine.##### I give up, kwwwrk.\nYou climbed all the way up here,\nso I'll tell you anyway.")
									goto flw_355
								}
							}
						}
					  case 1:
						printf("######Huh, maybe so. Maybe so. This must be\nwhat folks call d#j# vu, kwwwrk.\nCreepy.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 363), ('param3', 39)])
						flw_363:
						printf("######...But forget all that nonsense and tell\nme, kwwwrk, what business does a\nreal live human have in these woods?\n\n#####The flame!#####Nothing.")
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 132)])) {
						  case 0:
							printf("######You're out questing for a flame to\nenhance your sword, kwwrk? So that\nyou can find someone important to\nyou, eh?\nHow about that...##### A human who can see\nme and seeks a great flame, kwwwrk!")
							goto flw_378
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 397), ('param3', 39)])
							printf("######Remember what I said about it being\nmy job to watch over the forest?\nI know things most don't, kwrrrk!\n\nA human who seeks a great flame to\nenhance his sword... Pffft. I know\nwho you are!")
							goto flw_379
						}
					}
				  case 1:
					printf("######Oooh, look at that! A real live human!\nHaven't seen one of you in a while,\nkwrrrrrk.\n\nThey used to call me #####Yerbal#####. Now I'm\njust the old #####Kikwi hermit#####. I watch over\nthis forest here...when I'm not nappin'.\n\n######I don't know how you wandered all the\nway up here, but let me ask you\nsomething... Can you really see me?\n#####Sure can.#####Nope.")
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 130)])) {
					  case 0:
						printf("######Is that so? Well then, slap yourself on\nthe back, kwwwrk! You know, some\nKikwis can't even see me these days.")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 363), ('param3', 39)])
						goto flw_363
					  case 1:
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 18), ('param2', 0), ('next', 359), ('param3', 39)])
						printf("######Fibber! You're a fibbity fibber, kwwrk!\n\n\n\n######And just how did you peg me with your\nfancy shooter thing without being able\nto see me, eh?")
						goto flw_363
					}
				}
			}
		}
	}
}

void entrypoint_203_52() {
	start()
	story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */] = true;
	switch (temp_flags[3 /* 0x1 08 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 467), ('param3', 35)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 30), ('param2', 0), ('next', 64), ('param3', 39)])
		flw_64:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 84), ('param3', 16)])
		switch (adventure_pouch_has(7 0x0007)) {
		  case 0:
			printf("I am analyzing the water in this basin#####...##########\nIts unique #####properties ##########match #####the water\nyou collected at Skyview Spring.")
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 517), ('param3', 36)])
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 317), ('param3', 6)])
			temp_flags[2 /* 0x1 04 */] = true;
			switch (temp_flags[3 /* 0x1 08 */]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 31), ('param2', 0), ('next', 183), ('param3', 39)])
				flw_183:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 185), ('param3', 16)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 203), ('param2', 91), ('next', -1), ('param3', 7)])
			  case 1:
				goto flw_183
			}
		  case 1:
			printf("I am analyzing the water remaining in\nthis basin.#####.#####.########### Excellent. I can now help\nyou #####dowse #####for the water type you are\nsearching for.")
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 5), ('next', 567), ('param3', 56)])
			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
			switch (adventure_pouch_has(1 0x0001)) {
			  case 0:
				printf("######Master, you have wisely elected to\ncarry an #####Empty Bottle#####. Use it to carry\nthe water you seek.")
				flw_66:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 297), ('param3', 36)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 462), ('param3', 6)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 294), ('param3', 16)])
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 293), ('param3', 39)])
				printf("######If you continue down this way, you will\nfind an exit back to the woods.")
				switch (temp_flags[0 /* 0x1 01 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 184), ('param3', 39)])
					flw_184:
					printf("######Excellent. Now run along. One does not\nkeep a dragon waiting.")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 27), ('param2', 0), ('next', 184), ('param3', 39)])
					goto flw_184
				}
			  case 1:
				printf("######Master, you do not have a container\nsuitable for transporting water. Please\nprepare a vessel for this purpose.")
				goto flw_66
			}
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 64), ('param3', 35)])
		goto flw_64
	}
}

void entrypoint_203_87() {
	start()
	printf("Behold the full majesty of #####Faron#####,\nWater Dragon and guardian of these\nlands! I stand tall--healed and whole\nonce again!")
}

void entrypoint_203_01() {
	start()
	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
	  case 0:
		printf("######I'm sure glad all those mean guys\nare gone. We can finally live in\npeace again!\n\n######I really hope you find your friend,\njust so the two of you can get back\nto life as usual!")
	  case 1:
		printf("######Heya! Remember me? You ever find\nthat girl you were searching after?\n#####Who're you?#####Not yet...")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 170)])) {
		  case 0:
			printf("######Who am I...?##### Is it that hard to\nremember who I am?\n\n\n######Want to know the best way to tell us\nKikwis apart? If you point to us on\nyour map, you'll see our names appear.")
		  case 1:
			printf("######Oh... I sure hope you two find each\nother soon. Let me tell you, there's\nnothing like reuniting with friends.")
		}
	}
}

void entrypoint_203_53() {
	start()
	story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 220), ('param3', 35)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 227), ('param3', 16)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 3), ('next', 223), ('param3', 17)])
	printf("")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 228), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
}

void entrypoint_203_70() {
	start()
	printf("Mistress Fi, bzzzt! My deep apologies\nfor keeping you waiting!")
}

void entrypoint_203_88() {
	start()
	switch (temp_flags[2 /* 0x1 04 */]) {
	  case 0:
		printf("######Human. You have done well to bring\nme the #####sacred water##### I asked you for.\n\n\nI see now it was no coincidence that\nyou completed the goddess's trial\nand obtained a #####Water Dragon's Scale#####.")
	  case 1:
		printf("######Human. You have done well to bring\nme the #####sacred water##### I asked you for.\n\n\nI see now it was no coincidence that\nyou completed the goddess's trial\nand obtained a #####Water Dragon's Scale#####.")
	}
}

void entrypoint_203_54() {
	start()
	printf("I estimate an 80% probability that this\nsymbol is the one the hermit was\ndescribing.")
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 26), ('param2', 0), ('next', 437), ('param3', 39)])
	printf("I recommend you memorize its shape.")
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 439), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 440), ('param3', 36)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', -1), ('param3', 6)])
}

void entrypoint_203_71() {
	start()
	switch (scene_flags[127 /* 0xE 80 */]) {
	  case 0:
		printf("Ugh, vweep. This old #####basin #####again...#####\nFine, vrrm! I got this...")
	  case 1:
		printf("Let's see here... This cargo looks very\nheavy,##### but it's well within my payload\ntolerances, bzzrrt!")
	}
}

void entrypoint_203_89() {
	start()
	printf("######In turn, I will grant you the favor you\nhave asked of me and lead you to the\n#####sacred flame##### of my land.\n\nCome.")
	changeScene(2, 0) // 
}

void entrypoint_203_02() {
	start()
	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
	  case 0:
		printf("######Everyone keeps saying the forest\nis safe again, but I don't buy it.\n\n\n######I mean, is anywhere truly safe\nanymore? One day, I'd like to go for\na walk without cringing with fear\nevery time I hear a sound.")
	  case 1:
		printf("######How long do we have to live in\nconstant fear?\n\n\n######Is no place in the woods completely\nsafe? One day it would be nice to\ngo for a relaxing walk.")
	}
}

