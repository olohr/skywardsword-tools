          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 29), ('param3', 6)])
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Hello...and welcome to the Item Check.\nWant to put stuff from your pouch into\nstorage? OK. Want to take something\nout of storage? That's fine.\nSo is there anything in your pouch or\nin storage that you want to move?\n[1]Yes.[2-]No.")
          		flw_4:
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
/*< 16>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 42>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 61>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 62>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_43:
/*< 43>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 44>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0BOh. Wow. Looks like I've got too much\nof your stuff in storage.\n\n\nMy shelves are just like my heart--\nready to burst at the seams!\n\n\nI need you to get rid of some things.\nJust <r<trade >>them or something, OK?")
          								flw_5:
/*<  5>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x08\xA0CI hope you're not in a hurry to go,\nsweetie!")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17Um... Let me see. Yep, I've got no\nmore room for your stuff.\n\n\nYou won't trust me with your heart,\nbut you give me all the extra junk\nyou don't want to have to carry around.\nYou're such a romantic.\nI'm joking, I'm joking. I do need to\nmake room, though, so <r<trade >>some\nitems or do something to help me out.\n")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13OK. Hand it over.")
          								goto flw_5
          							}
          						}
          					  case 1:
          						goto flw_43
          					}
          				  case 1:
/*< 90>*/ 					switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          					  case 0:
/*< 91>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 93>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x15Listen, I'd love to take some things off\nyour hands, but this isn't a bottomless\npit. I don't have any more space here.\n\nCan't you just <r<trade >>some items or do\nsomething to make room?")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x15Wonderful. So what do you have?")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Listen, I'd love to take some things off\nyour hands, but it looks like I'm all\nfull here.\n\nJust <r<trade >>some items or do something\nto make some room, OK?")
          							goto flw_5
          						  case 1:
/*<  2>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03All right. Let's see it.")
          							goto flw_5
          						}
          					}
          				}
          			  case 1:
/*< 51>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 59>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 60>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nListen, sweetie, you don't have\nanything to store.\n\n\nCome back and see me when your\nluck improves a bit. OK? Great.")
          						  case 1:
/*< 55>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04You don't have anything to store.\n\n\n\nWhy don't you come back when you\nhave some stuff. Bye now.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Hate to break this to you, but you don't\nhave anything to put into storage.\n\n\nCome back and see me when you\nactually get some stuff, OK?")
          				}
          			}
          		  case 1:
/*< 50>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 56>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 57>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_47:
/*< 47>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0E\x150CLook, hon, it's not humane to tease\nsomeone this bored. Knock it off, OK?")
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x13So you came all this way just for my\nsparkling personality, huh? I figured\nyou couldn't stop thinking about me.")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x17What's your deal? Stop bothering me\nif you don't want anything. I'm busy\nwatching dust settle on my counter.")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02What's with you? Leave me alone if\nyou don't want anything. Sheesh...\nI'm busy staring at a wall.")
          					  case 1:
/*<  3>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Oh, really? Great. Not like my time is\nworth anything...")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_112_02() {
/*<  6>*/ 	start()
/*< 41>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 69>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 70>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Oh wow. I don't have any more storage\nspace!\n\n\nWould you please<r< trade >>or throw out\nstuff you don't need? Help a girl out,\nwill you, hon?")
          				  case 1:
/*< 68>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x1709See you next time! Tee hee!")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Great... I'm all out of storage space.\n\n\n\nHelp me out, will you? <r<Trade >>or get\nrid of any items you don't need.")
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x15Remember, you can come by anytime\nyou need to remind yourself about\nhow beautiful I am.")
          				}
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 25>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x15Hey. Your stuff is taking up all of my\nstorage space.\n\n\nWould you please get rid of stuff you\ndon't need and help me make some\nroom? You know, <r<trade >>some stuff.")
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Hey! All of my storage space is taken\nup with your junk!\n\n\nI can't hold anything else, so you better\nmake room by <r<trading >>or getting rid of\nstuff you don't need.")
          			}
          		  case 1:
/*< 88>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 89>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Thank you. Come again.")
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03OK. Thank you. Come again...")
          			}
          		}
          	}
          }

          void entrypoint_112_03() {
/*<  8>*/ 	start()
/*< 19>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 36), ('param3', 12)])
/*< 36>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Let's see, how many Rupees for that...\nHow about <r<\x0E\x02\x03\x06\x00\x00Í>>?\n\n\nDo we have a deal?\n[1]OK.[2-]No, thanks.")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 18>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 20), ('param3', 33)])
/*< 20>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 39), ('param3', 6)])
/*< 39>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 77>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 78>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_40:
/*< 40>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08Thanks! I bet you've got lots more to\nput into storage. No rush, sweetie.\nTake all the time you need.")
          						flw_53:
/*< 53>*/ 						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 12), ('param3', 12)])
/*< 12>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Thanks. Anything else?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x03Thanks. Anything else?")
          				goto flw_53
          			}
          		  case 1:
/*< 37>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_38:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x12Ooh, good call, sweetie! I knew you\nwere a smart one.")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14No, thanks? You're going to pass on\nthis deal just like you passed on me.\nI get it.")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 1, unk: 0 */ "No, thanks? OK, fine. It's your call.")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Hmm... For that I'll give you\n<r<\x0E\x02\x03\x06\x00\x00Í >><r<\x0E\x03\x04\x02\x1CD>>.\n\n\nWhat do you say?\n[1]OK![2-]Nah.")
          		goto flw_11
          	}
          }

          void entrypoint_112_04() {
/*< 14>*/ 	start()
/*< 34>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 80>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 81>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_82:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\nListen, sweetie, you don't have\nanything to store.\n\n\nCome back and see me when your\nluck improves a bit. OK? Great.")
          			  case 1:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04You don't have anything to store.\n\n\n\nWhy don't you come back when you\nhave some stuff. Bye now.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Hate to break this to you, but you don't\nhave anything to put into storage.\n\n\nCome back and see me when you\nactually get some stuff, OK?")
          	}
          }

          void entrypoint_112_05() {
/*< 21>*/ 	start()
/*< 32>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 84>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 85>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_33:
/*< 33>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x08A little spring cleaning, is that it?\nTee hee!\n\n\nIf you select that option, you can\nstraighten up the things you have\nin storage.\n\nYou know, for example, the arrows in\nyour quiver will be sorted properly.")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 33)])
          			  case 1:
/*< 86>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04So you want to get your junk in order,\nis that right?\n\n\nThe option you picked lets you clean up\nand sort the stuff you have in storage.\n\n\nYou can even sort arrows in your\nquiver and...yeah...whatever.")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04You want to arrange your things, is\nthat it?\n\n\nIf you select that option, you can tidy\nup the things you have in storage.\n\n\nYou know, for example, the arrows in\nyour quiver will be sorted properly.")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

