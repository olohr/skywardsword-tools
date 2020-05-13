void entrypoint_404_03() {
	start()
	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
	  case 0:
		printf("I love the view from here, vweep.")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 198), ('param2', 1), ('next', 51), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 24)])) {
		  case 0:
			printf("Brrm-ZORT! Is that what I think it is?!#####\nQuick, take it to #####Master Thunder\nDragon#####, vweep-vweep!")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 31), ('param3', 23)])
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 10)])) {
			  case 0:
				switch (scene_flags[23 /* 0x3 80 */]) {
				  case 0:
					printf("######I don't think there's any way that\nseedling would ever mature if you\nplanted it in the #####Lanayru area#####, vrrm...\n\n######We need your help, brrzrrt! ######Master\nThunder Dragon needs the #####fruit from\nthe Tree of Life #####to regain his strength!")
				  case 1:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 32), ('param3', 31)])
					printf("######What are you doing with that seedling,\nvrrm?!##### #####Master Thunder Dragon##### needs\n#####fruit from the Tree of Life##### to recover!\n\n######Unless you mean to help our master,\nbzzzzt?\n#####Of course.#####Not really.")
					switch (choice(2, 0)) {
					  case 0:
						printf("######Really, vrrm?! Thank you, zrrt!\nMake sure you plant the seedling\nsomewhere it will be sure to thrive,\nphoo-weep.\n######I fear growing the seedling to maturity\nin #####Lanayru Province is impossible#####,######\nbrrzrrt. We're counting on you, vweep!")
						flw_72:
						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
					  case 1:
						printf("######Well, since you uprooted it, it's your\nresponsibility now, vrrm! Make sure\nyou plant that seedling where it can\ngrow to maturity, phoo-weep.\n######And that means taking it somewhere\n#####outside of the Lanayru area#####, bzzt!######\nWe're all counting on you, vweep!")
						goto flw_72
					}
				}
			  case 1:
				printf("###########Master Thunder Dragon#####'s condition has\nbeen bad for a long time,##### and the soil\nhere is not suitable for growing trees,\nzrrt.##### ######If only we had more time, vrrm...")
			}
		}
	}
}

void entrypoint_404_55() {
	start()
	switch (scene_flags[107 /* 0xC 08 */]) {
	  case 0:
		switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
		  case 0:
			printf("######You have certainly proved your passion\nfor digging, my friend! If you find\nout anything about the legend of the\nthree dragons, be sure to let me know.")
			flw_99:
			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
		  case 1:
			printf("######Is there anything else I can help you\nwith? If you find out anything about\nthe legend of the three dragons,\nbe sure to let me know!")
			goto flw_99
		}
	  case 1:
		printf("######I almost never get visitors!##### My name is\n#####Golo#####, and I am researching the #####legend\nof the three dragons#####, one of which is\nsaid to live here!\n######At first glance, it would seem that\nthere is nothing in this area, but I know\nthere is something here. I will just keep\non looking!\nSo your name is ####?\nI see... Not the easiest name to\nsay, is it?\n\n######And how about you, ####?\nWhy are you here.#####.#####.#####?\n\n\n######You are looking for a #####sacred flame#####?\nThat sounds like something I have\nheard of before,##### but maybe not...\n\n######Sweet goro,##### ######I remember now! I read\nsomething about it in ancient\nscrolls that spoke of the #####Lanayru\nSand Sea#####.\n######I do not remember all the details, but\nyou can get to Lanayru Sand Sea if you\njust go straight through here.")
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 126), ('param3', 39)])
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 128), ('param3', 39)])
		printf("######If you want to get to the Lanayru Sand\nSea, you are going to need this key!")
		give_item(1 0x01);
		printf("######Good luck to you!")
		goto flw_99
	}
}

void entrypoint_404_04() {
	start()
	printf("...")
}

void entrypoint_404_56() {
	start()
	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
	  case 0:
		printf("######You made it to the dragon's home,\n####?####T\n\n\n###########I am so jealous!####Z\n\n\n\n###########You beat me to the punch!")
		flw_154:
		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
	  case 1:
		switch (scene_flags[35 /* 0x5 08 */]) {
		  case 0:
			printf("######I was able to dig a tunnel to the place\nwhere the #####Thunder Dragon##### lives, but...####-\n###########It is too narrow for me to go through.\n###########What am I going to do?")
			goto flw_154
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 144), ('param3', 31)])
			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
			  case 0:
				printf("######Nice to see you, ####.\n\n\n\nSay, you ever find that #####sacred flame#####\nyou were looking for? Really?\nYou did?! Great! I was pretty curious\nabout it, so spill all the details!\n######.#####.#####.#####I see. So after all that adventuring,\nyou finally found it! \n\n\n########, I have to say... \nYou are pretty amazing!")
				printf("######You are not the only one! I found \nout some more about the legend of the\nthree dragons. This news is going to\nblow your mind!\n...I have found out that there is indeed\na hidden area beyond here! There is a\n#####narrow path##### ######that I cannot fit through\nwithout losing a few pounds!\n######My theory is that it probably links to\nthe home of the #####Thunder Dragon#####, one\nof the three dragons in the legend.\n\n######And I am convinced that these robots\nmust have something to do with it as\nwell.#####\n\n###########The #####Thunder Dragon#####, a bunch of\nrobots, and Timeshift Stones#####.#####.#####.\n\n\n###########What a story!")
				printf("######Oh, I almost forgot, ####!\nDo you remember that excavation\nproject you invested in?#####\n\nWell, we hit the jackpot! I found a\nlarge cache of Timeshift Stones.\n######I can pay you back tenfold now!")
				rupees += 100;
				flw_148:
				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
				goto flw_154
			  case 1:
				printf("######Nice to see you, ####.\n\n\n\nSay, you ever find that #####sacred flame#####\nyou were looking for? Really?\nYou did?! Great! I was pretty curious\nabout it, so spill all the details!\n######.#####.#####.#####I see. So after all that adventuring,\nyou finally found it! \n\n\n########, I have to say... \nYou are pretty amazing!")
				printf("######You are not the only one! I found \nout some more about the legend of the\nthree dragons. This news is going to\nblow your mind!\n...I have found out that there is indeed\na hidden area beyond here! There is a\n#####narrow path##### ######that I cannot fit through\nwithout losing a few pounds!\n######My theory is that it probably links to\nthe home of the #####Thunder Dragon#####, one\nof the three dragons in the legend.\n\n######And I am convinced that these robots\nmust have something to do with it as\nwell.#####\n\n###########The #####Thunder Dragon#####, a bunch of\nrobots, and Timeshift Stones#####.#####.#####.\n\n\n###########What a story!")
				goto flw_148
			}
		}
	}
}

void entrypoint_404_05() {
	start()
	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
	  case 0:
		switch (temp_flags[63 /* 0x6 80 */]) {
		  case 0:
			printf("Master Thunder Dragon has regained\nhis strength, and it is all thanks to your\nhelp, brrzrrt! We thank you, vweep!")
		  case 1:
			printf("Did you come to visit Master Thunder\nDragon, phoo-weep?")
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 198), ('param2', 1), ('next', 54), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 26)])) {
		  case 0:
			printf("Once he eats the #####fruit from the Tree\nof Life#####, Master Thunder Dragon will\nregain his strength, vrrm!")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 36), ('param3', 23)])
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 14)])) {
			  case 0:
				printf("######This area is only good for growing\ngrass and flowers, zrrt.##### ######If we can't find\na way to grow the seedling quickly...\n#####Our master will not make it, bzzt...")
			  case 1:
				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
				  case 0:
					switch (scene_flags[23 /* 0x3 80 */]) {
					  case 0:
						printf("######Master Thunder Dragon's present\ncondition concerns me greatly, vwerp.\nFind him #####fruit from the Tree of Life#####,\nor his systems may fail...")
					  case 1:
						printf("######We wanted Master Thunder Dragon to\nget well, so we planted a #####seedling from\nthe Tree of Life#####, which bears a fruit\nthat is said to cure any illness, vrrm.")
					}
				  case 1:
					printf("######Situation critical, vrrrrm! #####Master\nThunder Dragon #####is very sick, bzzt.#####\n\n\n######And we can't do anything with this\nTimeshift Stone without Master\nThunder Dragon's permission, vrrm.#####\n\n######But I guess we have bigger things to\nworry about than a Timeshift Stone,\nbrrzrrt...")
				}
			}
		}
	}
}

void entrypoint_404_57() {
	start()
	printf("######################Hey, over there! Is that you,\n####?\n\n\n##########Nice timing!##### I have been \nmeaning to look for you!#####\n\n\n##########Come over here for a minute!")
	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
}

void entrypoint_404_06() {
	start()
	printf("...")
}

void entrypoint_404_58() {
	start()
	printf("######Hey there, ####! \nI wanted to tell you that I found a hole\nthat leads farther in!\n\nBut this rock is really strong. It looks\nlike it will be a while before I can get\nall the way through it.")
}

void entrypoint_404_07() {
	start()
	switch (temp_flags[0 /* 0x1 01 */]) {
	  case 0:
		printf("You should hurry up before you get left\nbehind, vrrm!")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 12), ('param3', 31)])
		printf("######There are lots of big Timeshift Stones\nhere, zrrt.##### ######Did you get permission from\n#####Master Thunder Dragon #####to come here\nlike we did, vrrm?\n######We were just about to transport this\nTimeshift Stone to Master Thunder\nDragon, vweep.")
		temp_flags[0 /* 0x1 01 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 86), ('param3', 39)])
		printf("####(#There are many monsters, vrrm.#####\n######Practice extreme caution, bzrt!")
	}
}

void entrypoint_404_08() {
	start()
	printf("...")
}

void entrypoint_404_09() {
	start()
	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
	  case 0:
		switch (temp_flags[63 /* 0x6 80 */]) {
		  case 0:
			printf("Master Thunder Dragon is in very high\nspirits, vweep!")
		  case 1:
			printf("Master Thunder Dragon is strong\nagain, vrrm!")
		}
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 198), ('param2', 1), ('next', 57), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 28)])) {
		  case 0:
			printf("Kerr-CHUNK! Where did you get that\nfruit?!####- Did you bring it for #####Master\nThunder Dragon#####, voo-weep?!")
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 197), ('param2', 1), ('next', 28), ('param3', 23)])
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 8)])) {
			  case 0:
				printf("######The #####Lanayru area##### is terrible for\ngrowing trees, zrrt.##### ######Do you know\nof a place where trees grow quickly,\nvweep?")
			  case 1:
				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
				  case 0:
					printf("On the other side of the bridge, we\nplanted a #####seedling from the Tree of\nLife#####, which is said to bear fruit that\ncan cure any illness, vrrm.#####\n######But trees don't grow so well around\nhere, vweep...")
				  case 1:
					printf("######We got permission from our master,\nthe Thunder Dragon, to dig for\n#####Timeshift Stones#####, vweep.\n\n###########But #####Master Thunder Dragon #####is very ill\nright now, brrzrrt.##### I'm worried about\nhim, vrrm.##### ######At this rate, our master \nmay cease functioning, vweep...")
				}
			}
		}
	}
}

void entrypoint_404_10() {
	start()
	switch (scene_flags[14 /* 0x0 40 */]) {
	  case 0:
		printf("#####.#####.#####.")
	  case 1:
		switch (scene_flags[9 /* 0x0 02 */]) {
		  case 0:
			switch (scene_flags[26 /* 0x2 04 */]) {
			  case 0:
				printf("#####.#####.#####.")
			  case 1:
				printf("#####.#####.#####.")
				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
			}
		  case 1:
			switch (scene_flags[18 /* 0x3 04 */]) {
			  case 0:
				printf("#####.#####.#####.")
			  case 1:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 95), ('param3', 31)])
				printf("#####.#####.#####.")
				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
			}
		}
	}
}

void entrypoint_404_11() {
	start()
	printf("##############! I owe you my life!\nYou have to let me repay you.\n\n\n######Give me some time to prepare, and\nwhen you next return to visit me...\nI believe you will be mightily pleased!")
	scene_flags[9 'Lanayru Gorge'][29 /* 0x2 20 */] = true;
}

void entrypoint_404_30() {
	start()
	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
	  case 0:
		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
		  case 0:
			story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
			flw_79:
			story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */] = true;
			temp_flags[63 /* 0x6 80 */] = true;
			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 4), ('next', -1), ('param3', 7)])
		  case 1:
			goto flw_79
		}
	  case 1:
		goto flw_79
	}
}

void entrypoint_404_31() {
	start()
	temp_flags[5 /* 0x1 20 */] = true;
	printf("####K#This is #####Lanayru Gorge#####. Legend tells of\na dragon loyal to the goddess living\nin this area.")
}

void entrypoint_404_32() {
	start()
	printf("####Z#Signs indicate that an ancient\ncivilization established a quarry\nhere to mine the deposit of\nhigh-quality Timeshift Stones.")
}

void entrypoint_404_50() {
	start()
	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
	  case 0:
		printf("######You have certainly proved your passion\nfor digging, my good friend! I will \nmake sure these funds are put to good\nuse, and I appreciate your patience.")
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 62), ('param3', 12)])
		printf("######So...you would not happen to be\ninterested in excavating, would you?####<\nYou are?! Well then, you are going to\nlove this!####<\n######The thing is, these research digs can\nget really expensive...##### But they can\nalso be lucrative! Any interest in\ninvesting 10 Rupees in my dig?\n#####Sure!#####No chance.")
		switch (choice(2, 0)) {
		  case 0:
			switch (has_rupees(10)) {
			  case 0:
				rupees += -10;
				printf("######Thanks! I will put these funds to good\nuse!")
				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
				flw_98:
				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
			  case 1:
				printf("Little goro, it seems you do not have \nenough Rupees. Well, you could always \ncome back later to make a small \ninvestment. My research needs you!")
				goto flw_98
			}
		  case 1:
			printf("###########That is too bad...##### I guess no one\nunderstands the importance of\nfunding research digs these days...")
			goto flw_98
		}
	}
}

void entrypoint_404_33() {
	start()
	printf("####Z#Consequently, the terrain is intricately\nsubdivided with the remnants of long-\nabandoned mining equipment, such as\nmine carts and their tracks.")
}

void entrypoint_404_51() {
	start()
	printf("Ahead is Lanayru Sand Sea,\nan area covered in an ocean of\nsand! There are lots of ancient\nruins there.")
}

void entrypoint_404_34() {
	start()
	printf("Some Bokoblins carry a Monster Horn\non their waist.\n\n\nIf you latch on to it and #####pull with your\nwhip#####, it is possible to claim it for\nyourself.")
}

void entrypoint_404_52() {
	start()
	printf("Ahead is Lanayru Desert.\nAdventures await those\nsolving the mysteries of the\nquarry in the desert!")
}

void entrypoint_404_01() {
	start()
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 198), ('param2', 1), ('next', 89), ('param3', 23)])
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 36)])) {
	  case 0:
		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = false;
		changeScene(18, 0) // 
	  case 1:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 41), ('param3', 23)])
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 16)])) {
		  case 0:
			switch (scene_flags[22 /* 0x3 40 */]) {
			  case 0:
				printf("What's that, ####?\nYou say you will find a place where\nthe seedling #####will ##########grow quickly #####for me?\n\n######That would be a great help... All I\nwould need to do is eat one piece of\n#####fruit from the Tree of Life##### to recover\nmy full strength.\n######But that seedling cannot be planted\njust anywhere. Look for a place with\n#####very rich soil#####.")
			  case 1:
				printf("######Hello there, ####.#####\nIt looks like you've found a #####seedling\nfrom the Tree of Life#####, haven't you?\n\nBut it's too late. I'm done for.#####\nI won't live long enough for the tree to\ngrow large and produce the fruit that\ncould save me.###### Cough...cough...\nIt's such a shame. If I had the strength,\nI could sing you as many songs as you\nwanted.##### ######Cough...cough...")
				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
			}
		  case 1:
			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
			  case 0:
				printf("########... Please bring me\nthe #####fruit from the Tree of Life #####as soon\nas you...can.")
			  case 1:
				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
				  case 0:
					printf("The robots were worried about me, so\nthey planted a #####seedling from the Tree\nof Life#####. The fruit of this tree is said to\nbe able to cure any illness...\nThey planted the seedling over there.#####\nCough...########### ######But it just won't grow.#####\nCough...##########- ######I think this is the end for me.#####")
				  case 1:
					printf("################Cough...cough...#####\n\n\n\n######Oh, hello...##### I haven't had a visitor like\nyou here in...quite a while.\n\n\n######You're a human, aren't you? You must\nhave some reason for coming this far.\nWhat is it?\n\n#####.#####.#####.\n\n\n\n######I see. So you're ####\nfrom the sky... #####Cough...#####\nThat's not much of a name, is it?\n\n######How about I add a model number to\nyour name like my friends have got?\nMaybe #####LD-####-16#####.#####.#####.#####?\n\nOh. I can tell you don't like the sound\nof that.##### That's a shame...\n###########Cough...cough...\nSo, what can I do for you?\n######Ohh...##### You say you need me to teach\nyou a song? Cough...")
					printf("######Hold on, now. Didn't you just say you\ncame from the sky, ####?\nSo then you're the hero chosen by the\ngoddess, aren't you?\nI see... Well, that is something...\n\n\n\n####\n#Although I must apologize. You see,\nI can't really help you.\n\n\n####\n#I may have enough strength for a brief\nchat like this, but... Well, as you can\nsee, I am quite ill.##### ######Cough...\n\n####\n#I'm in no shape to sing.\n\n\n\n######And to think it was the goddess herself\nwho entrusted me with this important\nduty... I feel the deepest shame...\nCough...")
					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
				}
			}
		}
	}
}

void entrypoint_404_53() {
	start()
	printf("Ahead is Lanayru Mine. It is\nthere that I will solve the\nmystery of the Timeshift\nStones!")
}

void entrypoint_404_02() {
	start()
	printf("...")
}

void entrypoint_404_54() {
	start()
	printf("Entry to the area ahead is\nallowed only by permission of\nthe #####Thunder Dragon#####, #####Lanayru#####.")
}

