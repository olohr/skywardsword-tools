void entrypoint_104_02() {
	start()
	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
	  case 0:
		printf("#####-It's driving me crazy! I've looked\nabsolutely everywhere, but still no\nZelda.\n\n######I do have one last idea, though.\nHave you seen the lights that popped\nup out of the clouds a few days ago?\n\nSo I say to myself, Groose, that thing\nlooks kinda fishy. Then one day it\nhits me! \n\nWhat if that's Zelda down there, and\nshe's sending me a signal? It's a sign!\nIt says, #Save me, Groose. You're my\nonly hope!\"\n######The more I think about it, the more\nsure I get! It's Zelda down there, and I\ngotta go rescue her!\n\n######Anyhow, don't think about trying to\ngo down there before me.\nI'm her hero, remember?\n\n######Ugh. I don't even know why I'm talking\nto you. Looking at you just makes me\nfeel sad again.")
	  case 1:
		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
		  case 0:
			printf("#####.Where's Zelda gone off to? I can't\nstand it anymore...")
		  case 1:
			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
			  case 0:
				printf("######Oh, Zelda, where are you?\n\n\n\n######Hey, hotshot! Don't think I don't see\nyou flying in and out of town all the\ntime.\n\n######I know what you're up to! You're\ntrying to make sure you find Zelda\nfirst, but it ain't gonna happen!\n\n######Aww...this is the worst.")
			  case 1:
				printf("######Poor Zelda...\n\n\n\nYou... This is your fault, you know.\nYou can barely fly straight, and yet\nsomehow you beat me in the race...\n\n######It should've been me up there with her\nthat day. But I guess now I'll just have\nto be the one to save her!")
			}
		}
	}
}

void entrypoint_104_03() {
	start()
	switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
	  case 0:
		printf("######Hey, I just checked Groose's room, and\nthe guy is gone. You got any idea where\nhe went?\n\n###########...#####Maybe he had to run away because\nof his broken heart?####2###### What a tough\nguy. Heh heh...")
	  case 1:
		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
		  case 0:
			printf("######Man, when Groose gets sad, he's\ndownright miserable.\n\n\n######He's always in his room sulking, and\nwhen he does come out, he gets angry\nat everyone for no reason! Even me!\n\n######The way I hear it, you're the one\nresponsible for Zelda going missing.\nThis is your mess, so you'd better fix it!")
		  case 1:
			printf("######Hey, I just saw the news. Out of all of\nus, how come only you got promoted to\nsenior class? Talk about stupid calls!\n\n######On top of all that, Groose won't come\nout of his room AND Zelda is missing.\n\n\n######It's all your fault! Way to go there,\nbuddy. Some senior-class guy you are!")
		}
	}
}

void entrypoint_104_04() {
	start()
	printf("Hey! Don't you know this is my day to \nget all the glory?")
}

void entrypoint_104_05() {
	start()
	printf("Yeah, you heard him! Let's see how you\nfly with egg on your face.")
}

void entrypoint_104_06() {
	start()
	printf("######So Zelda really fell down and vanished\ninto the clouds?\n\n\n######You were with her, weren't you? What\ngives? Why didn't you do something to\nsave her?")
}

void entrypoint_104_07() {
	start()
	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
	  case 0:
		printf("######I'm beginning to wonder if Groose\nis ever going to pull himself out of\nthis nose dive.\n\nSure, it's tough for him, but imagine\nhow I feel having to listen to him\nmoping all the time.\n\n######I can't wait to get back to my room...")
	  case 1:
		printf("######Look at Groose. Just look at him!\nThe guy is so far down in the dumps, I\nhardly recognize him. It's hard to see\nhim like this!\nIt's all because you let Zelda fall!\nYou messed things up, so you better\nfix them.")
	}
}

