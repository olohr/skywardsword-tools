void entrypoint_302_01() {
	start()
	switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 0), ('param3', 15), ('param4', 3), ('param5', 9)])) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 13), ('param2', 3585), ('next', 16), ('param3', 13)])
		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
		  case 0:
			printf("Welcome!")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 53), ('param3', 13)])
			flw_53:
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 27)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 54), ('param3', 13)])
				printf("Here's how it works: you go on and dig\nup ALL the Rupees you can! Well,\nuntil you dig your mitts into a\nspicy little bomb...\nWould you like to... ######Oh, I'm sorry,\nbut you don't look so good. Why not\ncome back when you have some\nmore hearts?")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 119), ('param3', 39)])
				printf("If you like, use the seat over there\nand take a load off.")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 6), ('next', 1), ('param3', 13)])
				printf("Do you like money? How about\nexplosions? Well, dig up some Rupees\nbefore you hit a bomb in a suspenseful\ngame of #####Thrill Digger#####! Want to try it?\n#####Beginner!#####Intermediate!#####Expert!#####No, thanks.")
				flw_85:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 3), ('param3', 13)])
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 0)])) {
				  case 0:
					switch (temp_flags[14 /* 0x0 40 */]) {
					  case 0:
						flw_74:
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 87), ('param3', 12)])
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 59), ('param3', 13)])
						printf("It's #####30 Rupees #####to play. Want to give\nit a go?\n#####You bet!#####Nope.")
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 37), ('param3', 13)])
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 18)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 30), ('next', 109), ('param3', 23)])
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 37)])) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -30), ('next', 90), ('param3', 8)])
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 34), ('param3', 13)])
								printf("Hope you dig up lots of Rupees!\nJust be careful what you're poking\ndown in the dirt. Could go KA-BOOM!\nSo uh...good luck!")
								temp_flags[14 /* 0x0 40 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 47), ('param3', 33)])
								changeScene(1, 0) // 
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 35), ('param3', 13)])
								printf("You haven't got enough Rupees.\nSave some up and then come back!")
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 38), ('param3', 12)])
							printf("So which course will it be?\n#####Beginner.#####Intermediate.#####Expert.#####None.")
							goto flw_85
						}
					  case 1:
						printf("The Beginner course has less spots to\nburrow into, but it's great for\nfirst-timers!")
						goto flw_74
					}
				  case 1:
					switch (temp_flags[15 /* 0x0 80 */]) {
					  case 0:
						flw_76:
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 91), ('param3', 12)])
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 22), ('param3', 13)])
						printf("It'll cost you #####50 Rupees #####a go.\nInterested?\n#####Sure.#####Nope.")
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 31), ('param3', 13)])
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 16)])) {
						  case 0:
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 50), ('param3', 10), ('param4', 2), ('param5', 14)])) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -50), ('next', 96), ('param3', 8)])
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 27), ('param3', 13)])
								printf("Hope you dig up lots of Rupees!\nJust be careful what you're poking\ndown in the dirt. Could go KA-BOOM!\nSo uh...good luck!")
								temp_flags[15 /* 0x0 80 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 45), ('param3', 33)])
								changeScene(2, 0) // 
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 29), ('param3', 13)])
								printf("You haven't got enough Rupees.\nSave some up and then come back!")
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 32), ('param3', 12)])
							printf("So which course will it be?\n#####Beginner.#####Intermediate.#####Expert.#####None.")
							goto flw_85
						}
					  case 1:
						printf("The Intermediate course has plenty of\nspots to sink your mitts into, but watch\nout for #####Rupoors#####.")
						goto flw_76
					}
				  case 2:
					switch (temp_flags[16 /* 0x3 01 */]) {
					  case 0:
						flw_78:
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 93), ('param3', 12)])
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5638), ('next', 23), ('param3', 13)])
						printf("Each round costs #####70 Rupees#####. Do you\ndare to try?\n#####Sure.#####Nope.")
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 24), ('param3', 13)])
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 12)])) {
						  case 0:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 70), ('next', 112), ('param3', 23)])
							switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 39)])) {
							  case 0:
								OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -70), ('next', 98), ('param3', 8)])
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5400), ('next', 6), ('param3', 13)])
								printf("Hope you dig up lots of Rupees!\nJust be careful what you're poking\ndown in the dirt. Could go KA-BOOM!\nSo uh...good luck!")
								temp_flags[16 /* 0x3 01 */] = true;
								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 46), ('param3', 33)])
								changeScene(3, 0) // 
							  case 1:
								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4633), ('next', 13), ('param3', 13)])
								printf("You haven't got enough Rupees.\nSave some up and then come back!")
							}
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 25), ('param3', 12)])
							printf("So which course will it be?\n#####Beginner.#####Intermediate.#####Expert.#####None.")
							goto flw_85
						}
					  case 1:
						printf("The Expert course has more bombs,\nsure, but more valuable Rupees too.\nIt could be highly profitable...\nor highly explosive.")
						goto flw_78
					}
				  case 3:
					OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 5379), ('next', 5), ('param3', 13)])
					printf("Come back soon!")
				}
			}
		  case 1:
			printf("Hello there! Thanks for stopping by.\nFirst time here, am I right?")
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 154), ('param3', 13)])
			printf("The name's #####Tubert#####. Nice to meet you! \nI run this little game I like to call\n#####Thrill Digger#####!")
			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
			goto flw_53
		}
	  case 1:
		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 72), ('param3', 44)])
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 20), ('param3', 12)])
		printf("Here's your grand Rupee total: #################!")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 39), ('param3', 33)])
		switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 2), ('param3', 15), ('param4', 3), ('param5', 20)])) {
		  case 0:
			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 4628), ('next', 7), ('param3', 13)])
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 3), ('param3', 15), ('param4', 3), ('param5', 4)])) {
			  case 0:
				printf("You didn't dig up even a single Rupee?\nNot a one? You poor little digger...")
				flw_103:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 81), ('param3', 13)])
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 108), ('param3', 12)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 50), ('param3', 45)])
				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
				  case 0:
					flw_55:
					switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 1), ('param3', 14), ('param4', 2), ('param5', 29)])) {
					  case 0:
						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 5640), ('next', 56), ('param3', 13)])
						printf("You look a bit tired out. Why not rest\nup until you get a few hearts back?")
						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 117), ('param3', 39)])
						printf("There's a stool over there. It ain't\nexactly lined with satin pillows, but\ngo ahead and take a load off.")
					  case 1:
						printf("You should try again. How about\nanother go?\n#####Beginner.#####Intermediate.#####Expert.#####I'm done.")
						goto flw_85
					}
				  case 1:
					printf("Here's a useful tip: #####low-value Rupees \n#####have only #####a few bad spots #####nearby, \nso you can relax a little.\n\nBut the #####higher the value of the Rupee#####,\nthe #####more bad spots #####are nearby.\nBe careful of the spaces surrounding\na valuable Rupee!\nIf your first burrow digs up a bomb...#####\nyou'll just have to admit defeat and\ntry again. But don't let it get to you!")
					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
					goto flw_55
				}
			  case 1:
				printf("Looks like you took a heavy loss.\nYep. Well, I'm sorry, my friend.")
				goto flw_103
			  case 2:
				printf("You didn't quite turn a profit.\nChalk that up to bad luck, I say.")
				flw_102:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -1), ('next', 80), ('param3', 13)])
				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 12)])
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 55), ('param3', 45)])
				goto flw_55
			}
		  case 1:
			printf("You broke even! No loss. No gain.\nAt least you had yourself some fun, eh?\nAnd you got to see an explosion!")
			goto flw_102
		  case 2:
			switch (OrderedDict([('type', 'switch'), ('subType', 0), ('param2', 4), ('param3', 14), ('param4', 2), ('param5', 23)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4363), ('next', 10), ('param3', 13)])
				printf("You made a small profit. Nice digging!")
				goto flw_102
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 15), ('param2', 4364), ('next', 40), ('param3', 13)])
				printf("Wow, you made yourself a fortune!\nCongratulations!")
				goto flw_102
			}
		}
	  case 2:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 73), ('param3', 44)])
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 159), ('param3', 12)])
		printf("Let's see how many Rupees you\nmanaged to dig up...")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 99), ('param3', 33)])
		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 6415), ('next', 41), ('param3', 13)])
		printf("Well, I'm just stupefied! You dug up all\nthe Rupees! Listen--you earned this\nprize. Take it!")
		give_item(64 0x40);
		goto flw_102
	}
}

void entrypoint_302_02() {
	start()
	printf("Thank you very much for your\nparticipation in #####Thrill Digger#####.\n\n\nHere's a helpful tip: #####low-value\nRupees #####have only #####a few bad\nspots #####nearby, so you can relax a\nlittle.\nBut the #####higher the value of the\n##########Rupee#####, the #####more bad spots #####are\nnearby, so watch it.\nSee you again soon!")
}

void entrypoint_302_03() {
	start()
	printf("I wish you'd hurry up about it.\nYour time's almost up...")
}

void entrypoint_302_04() {
	start()
	printf("Sorry. There's a time limit here,\nand you just hit it. Time's up!")
}

void entrypoint_302_05() {
	start()
	printf("######Ah, you're taking a break? Too much\nsuspense for you?\n\n\nWell then, will you take a load off and\nchat with me a bit?#####OK.#####Not now.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 41)])) {
	  case 0:
		printf("######Oh, yes! OK, OK...is there anything\nyou want to ask me?###########Who are you?#####Are you floating?#####Is it too bright for you?#####Nothing.######")
		flw_123:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 43)])) {
		  case 0:
			switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
			  case 0:
				printf("######My name is #####Tubert#####! I run this game I\nlike to call #####Thrill Digger#####! Yep, I'm kind\nof important around here.\n\nYou could even call me #####Mr. Tubert#####.\nYou know, ######if you want to. Thanks, kid.")
				flw_128:
				printf("######So what do you want to ask me next?#####Who are you?#####Are you floating?#####Is it too bright for you?#####Nothing.")
				goto flw_123
			  case 1:
				switch (scene_flags[26 /* 0x2 04 */]) {
				  case 0:
					printf("######My name is #####Tubert#####! I run this game I\nlike to call #####Thrill Digger#####! Yep, I'm kind\nof important around here.\n\nYou could even call me #####Mr. Tubert#####.\nYou know, ######if you want to. Thanks, kid.\n\n\n######I want everyone to get their hands on\nplenty of Rupees, so I made up this\n#####Thrill Digger##### thing!\n\n######The sad thing is all my #####Mogma##### friends\nthink Rupees are easy to find. They\nnever come and play...\n\n######So that's why I need you to step up and\nbecome not just a repeat customer,\nbut my only customer!")
					flw_124:
					loadzone_temp_flags[0 /* 0x9 01 */] = true;
					goto flw_128
				  case 1:
					printf("######My name is #####Tubert#####! I run this game I\nlike to call #####Thrill Digger#####! Yep, I'm kind\nof important around here.\n\nYou could even call me #####Mr. Tubert#####.\nYou know, ######if you want to. Thanks, kid.\n\n\n######I want everyone to get their claws on\nplenty of Rupees, so I made up this\n#####Thrill Digger##### thing!\n\n######The sad thing is there's been a #####scary-\nred-monster##### infestation in these parts\nlately, and it's been bad for business.\nAlmost nobody comes to play!\n######Some days I wish someone would\njust demolish###### those ugly #####towers #####with\na bang and send them scampering\naway.")
					goto flw_124
				}
			}
		  case 1:
			switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
			  case 0:
				printf("######I'm not floating, no. I just want\ncustomers to see my cute little #####paws#####,\nso I'm standing on my tail.")
				goto flw_128
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 148), ('param3', 39)])
				printf("######No, I'm not floating. I'm standing on\nmy tail.")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 149), ('param3', 39)])
				printf("#####\nI don't need to tell you that my #####paws\n#####are my best feature. ")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 150), ('param3', 39)])
				printf("######I like to give all my customers a chance\nto admire them. That's why I stand on\nmy tail--it does wonders for sales!")
				loadzone_temp_flags[1 /* 0x9 02 */] = true;
				goto flw_128
			}
		  case 2:
			switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
			  case 0:
				printf("######No, it's not too bright. I just wear these\nto look cool.")
				goto flw_128
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 134), ('param3', 39)])
				printf("######You mean my glasses? Looking dapper,\neh? The round frames make me\nlook even more fashionable!")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 143), ('param3', 39)])
				printf("######And I'm plenty proud of my fine\n#####mustache##### too! Cute and curly,\nall the way. I groom it every day!\nWait. That rhymed, didn't it?")
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 144), ('param3', 39)])
				printf("######But it's only to be expected. I can't have\nmy customers upset by my looks!")
				loadzone_temp_flags[2 /* 0x9 04 */] = true;
				goto flw_128
			}
		  case 3:
			switch (loadzone_temp_flags[0 /* 0x9 01 */]) {
			  case 0:
				switch (loadzone_temp_flags[1 /* 0x9 02 */]) {
				  case 0:
					switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
					  case 0:
						switch (scene_flags[39 /* 0x5 80 */]) {
						  case 0:
							flw_139:
							printf("######Really? That's a shame. Well, take\na nice break. #####Thrill Digger #####is waiting\nfor you whenever you're in the mood\nto poke around for Rupees and bombs!")
						  case 1:
							printf("######Really? What a shame...\n\n\n\n######But thanks for asking all those\ngreat questions! Actually, here,\nlet me tell you something.\n\n######You see the shining stone sticking out\nof the wall? That's pure #####Rupee Ore#####!\nIt's also why there are so many Rupees\nto dig up here.\nIf you sling something at it, it'll #####pop\n#####right out.###### Go on and give it a try!")
							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
						}
					  case 1:
						goto flw_139
					}
				  case 1:
					goto flw_139
				}
			  case 1:
				goto flw_139
			}
		}
	  case 1:
		printf("######Oh...that's too bad. Anyway, once\nyou've rested up, I hope you'll consider\ngiving #####Thrill Digger #####a try.")
	}
}

