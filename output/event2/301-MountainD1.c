          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf("______Master, I am detecting new enemies\nahead. They appear to be creatures\nof very significant physical ability.\n\nPress (Z) to<g< target >>an enemy, then (v)\nto call me. I will then share any data\nI have on that enemy.__________")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 21), ('param2', 2064), ('next', 1), ('param3', 13)])
/*<  1>*/ 	printf("My partner's gone missing, and those\nred guys are everywhere!\nI never shoulda come here.")
/*< 31>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -255), ('next', 33), ('param3', 13)])
/*< 33>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 32), ('param3', 17)])
/*< 32>*/ 	printf("Oh, it's you again. Come all this way\nin search of your friend, eh?\n\n\nThat reminds me...~~~ Before I came in\nhere, I saw a<r< weird-looking blonde girl\n>>get dragged away.\n\nBut ______don't even dream about going to\nthe rescue. Those baddies are\neverywhere!\n\n______If you wanna live to...live again one\nday, you should head for home, pal!")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf("______Master Link. It appears\nZelda has cleansed herself in the\nwaters of this fountain.\n\nBased on the information from the\nmessage I just imparted, I project she\nis traveling to a region known as\n<b<Lanayru>>.\nIf you transport this tablet back to the\nstatue in Skyloft, a new column of\nlight will appear that will allow you to\ntravel to the <b<Lanayru region>>.\nI suggest you return at once to <b<Skyloft\n>>and then set out for the Lanayru\nregion.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	loadzone_temp_flags[0 /* 0x9 01 */] = true;
/*< 59>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 60), ('param3', 36)])
/*< 60>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', -1), ('param3', 6)])
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 19), ('param2', 4103), ('next', 3), ('param3', 13)])
/*<  3>*/ 	printf("Blast! I must have dropped it earlier...")
/*< 87>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 28), ('param3', 33)])
/*< 28>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 30), ('param3', 17)])
/*< 30>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 17), ('param2', 3346), ('next', 29), ('param3', 13)])
/*< 29>*/ 	printf("Hey! Nice timing, pal. It's me, <b<Ledd>>!\n\n\n\n______You showing up here must mean we're\nconnected somehow. You know, like\nfate or something. Anyways, do me a\nfavor and get my <y<Bomb Bag>>, OK?")
/*<102>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 16), ('param2', 0), ('next', 101), ('param3', 39)])
/*<101>*/ 	printf("I was behind that rock looking for\ntreasure when those creeps showed up.~~~\nI panicked and hit the road, but______\nit looks like I dropped it.")
/*<104>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 103), ('param3', 39)])
/*<103>*/ 	printf("______It's a <r<bag for carrying around bomb\nflowers>>. I can't imagine not having one.\nOh, hey...I guess I don't have to\nimagine it, 'cause I lost mine!\nAnyway, it's back there... ____\n______Do me a \nfavor and get my <y<Bomb Bag >>back,\nwill you?")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 93), ('param3', 39)])
/*< 93>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 92), ('param3', 40)])
/*< 92>*/ 	OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 19), ('param2', 100), ('next', 88), ('param3', 14)])
/*< 88>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 38), ('param3', 33)])
/*< 38>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 95), ('param3', 17)])
/*< 95>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 15), ('param2', 0), ('next', 6), ('param3', 39)])
/*<  6>*/ 	printf("______Heyyyyy! You found my <y<Bomb Bag>>!\n\n\n\n______Sorry to put you through that. I guess \nI owe you one now! So let me have it..._____\n\n\n______What's this, now? You want to borrow\nit so you can go deeper into the\nvolcano?\n\n______Oh, right. You're looking for your\nfriend. You sure have put yourself out\nthere, getting this far...\n\n______That reminds me!~~~ How's MY pal?\n[1]Gone...[2]Worried![3]No idea.")
/*< 34>*/ 	switch (choice(3, 1)) {
          	  case 0:
/*< 35>*/ 		printf("______Seriously? Can't depend on anybody\nthese days...\n\n\n______Let me take that back. Looks like your\nfriend can count on you, though, right?\nYou've risked life and limb to get here.\n\n______I'm not letting you borrow my bag,\nthough. Nope. I'm GIVING it to you!\nJust don't blow yourself up...")
          		flw_105:
/*<105>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 19), ('param3', 42)])
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -245), ('next', 18), ('param3', 13)])
/*< 18>*/ 		printf("Now you've got my <y<Bomb Bag>>.\nGo find your friend!")
/*<106>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 36>*/ 		printf("______He's worried? About me?~~~ What kind\nof pal am I, putting him through that?\n\n\n______You must be worried too. Not knowing\nif your friend's dead or alive...\n\n\n______I'm not letting you borrow my bag,\nthough. Nope. I'm GIVING it to you!\nJust don't blow yourself up...")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf("______That so? Hmm... ~~~I hope he's OK.\nHey...you don't think those monsters\nhave...\n\n______You must be worried yourself.\nNot knowing if your friend's dead or\nalive or some awful place in between...\n\n______I'm not letting you borrow my bag,\nthough. Nope. I'm GIVING it to you!\nJust don't blow yourself up...")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 27), ('param3', 33)])
/*< 27>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 10), ('param3', 17)])
/*< 10>*/ 	printf("______Hold up! I forgot to tell you something!\n\n\n\n______Knowing me, that bag's probably\nempty, so let me give you a little\nsomething to get you started.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf("If you run out of bombs, just find some\nmore and fill the bag back up.\n\n\n______When you've got a bomb flower, press\n<g<(B) to put it in the bag>>. Don't forget!_____\n\n\n______That bag can <r<hold up to 10 bombs>>.\nSo if you run across bomb flowers,\nbe sure to fill up the bag.")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 91), ('param3', 33)])
/*< 91>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 9), ('param3', 17)])
/*<  9>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 92), ('param2', 1), ('next', 8), ('param3', 23)])
/*<  8>*/ 	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 0)])) {
          	  case 0:
/*< 12>*/ 		printf("______Let me ask you something. You ever\nbeen set on fire when you're fighting\nbad guys?\n\n______Do yourself a favor and put the fire\nout quick! Oh, and never, EVER pull\nout a <y<bomb>> when you're covered in\nflames. Trust me on that.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf("______Heh heh, nice work. Rolling <y<bomb\nflowers >>through there--that's the mark\nof a real professional adventurer!\n\n______Keep it up, and go grab my <y<Bomb Bag>>!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf("I think you should be able to blow your\nway in there. Why don't you search the\narea for some <y<bomb flowers>>?")
          			  case 1:
/*< 97>*/ 				printf("Oh, right... ~~~You can't tunnel, so you\ncan't get back there. Hmm...\n\n\n______You should be able to blow your way\nin there with a <y<bomb flower>>. \n\n\n______Why don't you start by seeing if there\nare any <y<bomb flowers >>in the area?")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Earth Temple")
          }

          void entrypoint_301_09() {
/*< 39>*/ 	start()
/*< 80>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1006), ('next', 54), ('param3', 24)])
/*< 54>*/ 	story_flags[686 /* us: 805A9B21 0x08, jp: 805ACDA1 0x08 */] = true;
/*< 82>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = true;
/*< 50>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 13), ('next', 49), ('param3', 32)])
/*< 49>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', 99), ('next', 56), ('param3', 16)])
/*< 56>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 1), ('next', 52), ('param3', 40)])
/*< 52>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3335), ('param2', 1279), ('next', 70), ('param3', 13)])
/*< 70>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 51), ('param3', 6)])
/*< 51>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 40), ('param3', 39)])
/*< 40>*/ 	printf("______Oh, it's you.")
/*< 79>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 78), ('param3', 39)])
/*< 78>*/ 	printf("______Let me see~.~.~.~ _____No, that's not it._____ This is\nso very embarrassing, but I seem to be\nat a loss for your name.\n\n______Not that it matters, really. To tell you\nthe truth, I'm feeling a bit frustrated,\nand right now I just need someone to\nvent to.")
/*< 73>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3339), ('param2', 3327), ('next', 72), ('param3', 13)])
/*< 72>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 58), ('param3', 39)])
/*< 58>*/ 	printf("______I heard my underlings had finally\ncaptured the spirit maiden, so of\ncourse I rushed over here. What can I\nsay? I was excited. Flustered, even...\nBut what did I find when I arrived?\n______That agent of the goddess...")
/*< 74>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3340), ('param2', 3327), ('next', 65), ('param3', 13)])
/*< 65>*/ 	printf("_______\n___She had once again...\n\n\n\n___________~~~__\n___You see, what I'm trying to say is...")
/*< 75>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3341), ('param2', 3583), ('next', 66), ('param3', 13)])
/*< 66>*/ 	printf("____-______That goddess-serving dog\n__\n___escaped with the girl!")
/*< 81>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3342), ('param2', 3583), ('next', 63), ('param3', 13)])
/*< 63>*/ 	printf("_____I MUST have the spirit maiden\nin order to resurrect my master!\nI MUST HAVE HER!")
/*< 77>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3335), ('param2', 1535), ('next', 76), ('param3', 13)])
/*< 76>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 64), ('param3', 39)])
/*< 64>*/ 	printf("~~.~~.~~.~~____\nI got a little carried away there,\ndidn't I? I don_t deal well with...\ncomplications to plans I_ve laid out so\ncarefully. It_s a character flaw of mine.\n______Ah, but something good can still come\nfrom this day! I've had all this bottled-\nup anger smoldering inside me, and\nnow I can release it.")
/*< 67>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 61), ('param3', 39)])
/*< 61>*/ 	printf("______There's someone special I'd like you to\nmeet. Oh, don't be shy! I need to vent\nall this unhealthy anger, and your\nagony is such a great stress reliever.")
/*< 71>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3335), ('param2', 1535), ('next', 68), ('param3', 13)])
/*< 68>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 62), ('param3', 39)])
/*< 62>*/ 	printf("It won't take more than a few moments\nwith my friend before you're charred\nto a satisfying crisp. And let me tell\nyou, that will put a spring in my step!")
/*< 47>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3337), ('param2', 1791), ('next', 69), ('param3', 13)])
/*< 69>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 53), ('param3', 39)])
/*< 53>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 65), ('next', 48), ('param3', 6)])
/*< 48>*/ 	story_flags[189 /* us: 805A9AE9 0x10, jp: 805ACD69 0x10 */] = true;
/*< 83>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = false;
/*< 55>*/ 	loadzone_temp_flags[1 /* 0x9 02 */] = true;
/*< 84>*/ 	switch (scene_flags[28 /* 0x2 10 */]) {
          	  case 0:
/*< 85>*/ 		loadzone_temp_flags[3 /* 0x9 08 */] = true;
          		flw_57:
/*< 57>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 86>*/ 		scene_flags[14 'Eldin: Earth Temple'][28 /* 0x2 10 */] = true;
          		goto flw_57
          	}
          }

          void entrypoint_301_10() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("______Master, I detect Zelda's aura in the\nsurrounding area.")
/*< 44>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 43), ('param3', 39)])
/*< 43>*/ 	printf("I detect an especially strong reaction\nfrom this chain. I calculate the\nprobability Zelda was bound by it\nrecently at 95%.")
/*< 45>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 46), ('param3', 39)])
/*< 46>*/ 	printf("I surmise Zelda was somehow able to\nescape and proceed along this path.\nI suggest we continue with all possible\nspeed.")
          }

