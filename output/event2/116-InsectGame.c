void entrypoint_116_01() {
	start()
	switch (minigame_related[1]) {
	  case 0:
		switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
		  case 0:
			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
			  case 0:
				flw_5:
				switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 115), ('param3', 12)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 114), ('param3', 23)])
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 64)])) {
					  case 0:
						printf("######You ready to start catching some\nbugs? Maybe you'll get bitten by the\nbug-catching fever, just like me.\nOr maybe you'll just get bitten...\nAnyway, it's #####20 Rupees #####for the Bug\nBeginner level or #####50 #####for the Bug\nWrangler level. What do you say?\n#####Bug Beginner!#####Bug Wrangler!#####No, thanks.")
						flw_1:
						switch (choice(3, 1)) {
						  case 0:
							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 56)])) {
							  case 0:
								switch (has_rupees(20)) {
								  case 0:
									rupees += -20;
									printf("######I'm going to be timing you while you're\nin the course. If you get a decent time,\nI'll give you a prize!\n\n######In the Bug Beginner course, I will show\nyou pictures of five different bugs.\nCatch one of each to finish! Got it?\nOK, get ready!")
									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
								  case 1:
									printf("######Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
								}
							  case 1:
								flw_104:
								printf("######Think you can go bug catching with\nso few #####hearts#####? You're not taking this\nseriously. It's not looking good for you.\n\n######Come back once you get some\nmore hearts.")
							}
						  case 1:
							switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 58)])) {
							  case 0:
								switch (has_rupees(50)) {
								  case 0:
									rupees += -50;
									printf("######I'm going to be timing you while you're\nin the course. If you get a decent time,\nI'll give you a prize!\n\n######In the Bug Wrangler course, you will\nneed to catch a total of 10 bugs that\nI specify from among eight different\ntypes. Got all that? OK, get ready!")
									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', -1), ('param3', 33)])
								  case 1:
									printf("######Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
								}
							  case 1:
								goto flw_104
							}
						  case 2:
							printf("######Well, I guess that means you never\nwere a real bug lover.")
						}
					  case 1:
						printf("######WHAT?! You don't even have a\n#####Bug Net#####?! I don't believe this.\n\n\n######You've never experienced the passion,\nthrill, and joy of bug hunting? I feel\nsorry for you.\n\n######You can buy a Bug Net at #####Beedle's\nAirshop#####, so do yourself a favor and go\nthere right now and get one!")
					}
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 7), ('param3', 12)])
					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
					printf("##############? I wasn't expecting\nto see you here.\n\n\n######I flew into this thick fog and ended up\non this island.\n\n\n######But once I got here, I looked around\nand realized...this is some kind of\ninsect paradise!\n\n######So I decided to go after my dream and\nraise a bunch of bugs here. Now I can\nspend my days catching all the bugs\nI want!\n######You want to try catching some bugs?\nI'll release a few for you, so why don't\nyou give it a shot?")
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 111), ('param3', 23)])
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 62)])) {
					  case 0:
						printf("######I have come up with two levels for my\nbug-catching competition: an easy\n#####Bug Beginner #####level and a #####Bug Wrangler\n#####level for real bug masters like me.\n######Since you aren't a bug lover, I'll\ncharge you #####20 Rupees #####for the Bug\nBeginner level and #####50 #####for the Bug\nWrangler level. Do you want in on this?\n#####Bug Beginner!#####Bug Wrangler!#####No, thanks.")
						goto flw_1
					  case 1:
						printf("######WHAT?! You don't even have a\n#####Bug Net#####?! I don't believe this.\n\n\n######You've never experienced the passion,\nthrill, and joy of bug hunting? I feel\nsorry for you.\n\n######You can buy a Bug Net at #####Beedle's\nAirshop#####, so do yourself a favor and go\nthere right now and get one!")
					}
				}
			  case 1:
				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
				  case 0:
					printf("######Heh heh heh... You've come to take\nback the #####Horned Colossus Beetle#####, eh?\n#####Of course!#####Nope.")
					flw_50:
					switch (choice(2, 0)) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 36), ('param3', 12)])
						printf("And because this is still business,\nI'll be taking #####10 Rupees #####from you...\n#####OK...#####No, thanks.")
						switch (choice(2, 0)) {
						  case 0:
							switch (has_rupees(10)) {
							  case 0:
								switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 14), ('param4', 2), ('param5', 60)])) {
								  case 0:
									OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 71), ('param2', 1), ('next', 117), ('param3', 23)])
									switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 66)])) {
									  case 0:
										rupees += -10;
										printf("######Well then, go get 10 insects of my\nchoosing!\n\n\n######I'll be timing you. You've got to get\n10 insects #####within three minutes#####.\n\n\n######If you somehow do it, I'll give the\n#####Horned Colossus Beetle##### back.\n\n\nAll right then, get set!")
										OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', -1), ('param3', 33)])
									  case 1:
										printf("######Hold on! Just hold it. You still don't\nhave a #####Bug Net#####! Why am I wasting my\ntime with you?\n\n######Come back when you finally get around\nto buying one!")
									}
								  case 1:
									printf("######Think you can go bug catching with\nso few #####hearts#####? You're not taking this\nseriously. It's not looking good for you.\n\n######Come back once you get some\nmore hearts.")
								}
							  case 1:
								printf("######Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
							}
						  case 1:
							flw_52:
							printf("######Oh, so are you hoping to become part\nof my collection too?\n\n\n######I mean, you are an annoying gnat...\nheh heh heh.######")
						}
					  case 1:
						goto flw_52
					}
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 28), ('param3', 31)])
					printf("######Heh heh heh heh. Well well, it's\n####! How's life?\n\n\n######Oh, you think I look happy? Heh heh...\nWell, I guess I can't help it.\n\n\nI mean, I did discover an insanely rare\ninsect, after all.\n#####Tell me!#####Who cares?")
					switch (choice(2, 0)) {
					  case 0:
						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
						printf("######You want to know more, huh?\n\n\n\nWell...##### ######Let's just say I managed to land\na legendary #####Horned Colossus Beetle#####.#####\n\n\n###########It's pretty much a miracle that I found\nit! I can't stop laughing or smiling.\nI'm so happy, my face hurts!")
						printf("######What?! You're saying this is Beedle's\npet bug?! The same Beedle who flies\naround in that shack selling his junk?\n#####Give it back!#####Poor Beedle...")
						switch (choice(2, 0)) {
						  case 0:
							printf("######So you really think a sob story like\nthat is going to work on me?\nWhat a joke.\n\n######I found this bug, and it's all mine!")
							flw_51:
							printf("#####...#####I suppose it would be kind of mean\nto keep someone's favorite pet bug.\n\n\n######But at the same time, I don't feel so\nbad that I'm just going to give it\nright back...\n\n######How about this?\n\n\n\n######If you can pull off a time in my game\nthat makes even me admit you are\nthe master of bug catching, I'll give\nthis little guy back.\n######So, what's it going to be? Are you up\nfor the challenge?\n\n\n#####You're on!#####Not now.")
							goto flw_50
						  case 1:
							printf("######Do you have any idea how much\nthis bug is worth?\n\n\n######With this bad boy in my collection,\nmy credibility in the bug-catching\ncommunity will skyrocket! I'll be\na bug-catching celebrity!")
							goto flw_51
						}
					  case 1:
						printf("######I see... You really are a snake\nin the grass...")
					}
				}
			}
		  case 1:
			goto flw_5
		}
	  case 1:
		printf("######Hey! You're not thinking about quitting\nthis round of bug catching, are you?\n#####I quit!#####Continue.")
		switch (choice(2, 0)) {
		  case 0:
			printf("######So you really are quitting... I guess you\ndon't appreciate bugs like I do.")
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', -1), ('param3', 33)])
		  case 1:
			printf("I know, right? Time flies when you're\ncatching bugs!")
		}
	  case 2:
		printf("######Uhh...don't you think you're taking\ntoo long?\n\n\n######I know you're not done yet, but I'm\ncalling it. Time's up!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
	  case 3:
		printf("######Easy now! You were about to make a\nbeeline for a quick death there!\n\n\n######Don't forget that bugs can fight back!\nI knew you were in over your head\nthere, so I had to stop the game.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 33)])
	}
}

void entrypoint_116_02() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 61), ('param3', 42)])
	switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
	  case 0:
		flw_9:
		switch (minigame_related[0]) {
		  case 0:
			switch (minigame_related[2]) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 10), ('param3', 44)])
				printf("######That's it--time's up! Umm...you've still\ngot A LOT of improving to do.\n\n\n######For starters, shoot for getting your\ntime #####under five minutes#####. Just keep on\npracticing.\n\n######Oh, at night, I buy bugs back in my\nroom in Skyloft. You should come by\nand sell me any beauties you find.")
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
			  case 1:
				printf("######It's pretty sad that you can't see just\nhow fun catching bugs can be.\n\n\n######But come back when you change\nyour mind!")
			  case 2:
				printf("######Sorry, I don't do refunds!\n\n\n\n######Better luck next time. Heh heh heh.")
			  case 3:
				printf("######Heh heh heh... Who would have thought\nyou'd get so into bug catching that\nyou'd put your own life at risk?!\n\n######Sorry, I don't do refunds! Come back\nlater when you have more hearts.")
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 77), ('param3', 44)])
			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
			  case 0:
				printf("######Time's up! That was pretty decent,\nI have to admit.\n\n\n######Your times will get even better if you\nremember where the bugs live. Next\ntime, shoot for #####under three minutes#####.")
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 120), ('param3', 12)])
				printf("######All right, here's some money. You\nget #####80 Rupees#####!")
				rupees += 80;
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
			  case 1:
				printf("######OK, you're done! Huh. I guess I\nshould've expected this kind of time\nfrom you.\n\n######You know, sometimes the same type of\nbug is a lot easier to catch in just a\ndifferent place. Make sure you look\naround for the right spot.")
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 121), ('param3', 12)])
				printf("######Next time, try for #####under three minutes#####.\nOh, and I guess I should throw you\na little money. Here's #####30 Rupees#####.")
				rupees += 30;
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
			}
		  case 2:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 87), ('param3', 44)])
			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
			  case 0:
				printf("######OK! Time! Hey... This is incredible!\n\n\n\n######I think you might be in the running for\nsecond place as the best bug catcher\nafter me. You should aim for #####under two\nminutes#####.\nDo that, and a prize package of #####five\nfabulous bugs##### is yours to take home!")
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 129), ('param3', 45)])
				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
				give_item(23 0x17);
				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
				printf("######Take good care of them for me...")
			  case 1:
				printf("######That's it--time's up! Whoa...\nI'm impressed. You might just be a\nnatural at this!\n\n######Don't get full of yourself, though.\nYou're still not good enough to win\nany of my rare insects.")
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 123), ('param3', 12)])
				printf("Next time, pull out all the stops and\ntry to finish in #####less than two minutes#####.\n\n\nOh, and your prize this time is \n#####50 Rupees#####!")
				rupees += 50;
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
			}
		  case 3:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 89), ('param3', 44)])
			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
			  case 0:
				printf("######OK, time's up! ...Th-this is amazing!\n\n\n\n######I don't have any choice. I'm forced to\nadmit you're one of the all-time greats\nof bug catching! I bow down to your\nbug-wrangling skills.\n######Let me give you your prize! You get\na set of insects... #####Five##### rare ones at that!")
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 131), ('param3', 45)])
				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
				give_item(24 0x18);
				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
				printf("######Take good care of them for me...")
			  case 1:
				printf("######Stop! Stop! Time's up! That was just... \nincredible!\n\n\n######Oh, but let me just remind you that you\nwere doing the Bug Beginner level\nof difficulty.\n\n######Next time, try Bug Wrangler! As a\nprize, here are #####five##### of my absolute\nfavorite #####bugs#####!")
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 132), ('param3', 45)])
				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
				give_item(22 0x16);
				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
				printf("######Take good care of them for me...")
			}
		}
	  case 1:
		switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
		  case 0:
			switch (minigame_related[0]) {
			  case 0:
				switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 15), ('param4', 3), ('param5', 43)])) {
				  case 0:
					flw_65:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 64), ('param3', 44)])
					flw_64:
					printf("######Phew...\n\n\n\n######Sorry, but I won't be able to give the\n#####Horned Colossus Beetle##### back!\n\n\n######Not with that kind of time. At the very\nleast, you're going to have to finish in\nless than three minutes... Come on!\nLet's see some hustle!")
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
				  case 1:
					goto flw_64
				  case 2:
					goto flw_64
				}
			  case 1:
				goto flw_65
			  case 2:
				flw_72:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 71), ('param3', 44)])
				printf("OK, you're done!\n######Heh heh heh... Who would have thought\nit would be so easy for you to break the\nrecord time!")
				printf("######OK, OK... As I promised, here's the\n#####Horned Colossus Beetle#####.\n\n\n######I have to admit, you're a pretty tough\ncompetitor. I guess I won't be able to\n#####bug #####you anymore.\n\n######Heh heh heh...")
				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
				give_item(159 0x9F);
				printf("######Make sure to tell Beedle that, bug\nlover to bug lover, I feel sort of bad\nfor causing him so much stress.")
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 45)])
			  case 3:
				goto flw_72
			}
		  case 1:
			goto flw_9
		}
	}
}

