void entrypoint_006_600() {
	start()
	printf("Target lock: #####Remlit (Day)#####################")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 21), ('param4', 2), ('param5', 0)])) {
	  case 0:
		printf("You have defeated ####### of this type of\nenemy. My analysis shows that your\nbattle performance rating with this\nenemy is ######.")
	  case 1:
	}
}

void entrypoint_006_652() {
	start()
	printf("I have insufficient data on this\nmonster.\n\n\nIts enormous size and ominous aura\ncannot be compared with previously\nencountered monsters.\n#####Tell me more!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		flw_239:
		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
		  case 0:
			flw_89:
			printf("I can confirm that the #####sealing spike\n#####observed at the top of its head is the\nsame object originally found in the\n#####Sealed Grounds#####.\nI hypothesize that damage can be\ninflicted by driving the stone pillar\ninto the monster's head.\n\nBut first, I recommend attacking the\nbeast's feet--where your sword can\nreach--to stop it from moving.\n#####Tell me more!#####Got it.")
			switch (choice(2, 0)) {
			  case 0:
				printf("It is probable that the monster will be\nunable to move if you destroy all of\nits toes.\n\nI recommend using the air vents to\nmove ahead of the monster instead\nof chasing it from behind.\n#####Tell me more!#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("If you are able to get between the\nmonster's toes, my analysis indicates\nyou can effectively inflict great\ndamage with a #####spin attack#####.\nYou can also choose to decrease your\nrisk of physical harm by using #####bombs##### to\nattack from a distance.")
				  case 1:
				}
			  case 1:
			}
		  case 1:
			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
			  case 0:
				goto flw_89
			  case 1:
				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
			}
		}
	  case 1:
	}
}

void entrypoint_006_653() {
	start()
	printf("There is insufficient data on this target\nto make a full report at this time.\n\n\nBut I can confirm the appearance of\nlimb-like appendages that were not\npreviously present. The evil power of\nthis creature has also increased.#####More info!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		flw_240:
		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
		  case 0:
			flw_98:
			printf("Analysis indicates that you should be\nable to use the same basic strategy as in\nthe previous encounter to seal the\nmonster in its prison once more.\nThe fingers and toes on its limbs can be\ndestroyed with a physical attack, but\nyou should wait to do so until these\ntargets become a very high priority.\n#####More info!#####Got it.")
			switch (choice(2, 0)) {
			  case 0:
				printf("I calculate a 100% probability that the\nlarge apparatus Groose constructed\nwill be effective against this\nmonster.\nIt is likely that a direct hit from this\napparatus will stop the monster's\nmovement, creating a window of\nopportunity for you to attack.#####More info!#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("#####Groose#####'s defense apparatus can be\nrepositioned by pushing #####.\n\n\nWhen the monster is in your blind spot,\nI recommend you reposition the\napparatus and target the monster.")
				  case 1:
				}
			  case 1:
			}
		  case 1:
			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
			  case 0:
				goto flw_98
			  case 1:
				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
			}
		}
	  case 1:
	}
}

void entrypoint_006_601() {
	start()
	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
	  case 0:
		printf("These small animals dwell in #####Skyloft#####.\nDue to #####Batreaux#####'s transformation into\na human, they no longer exhibit\naggressive tendencies at night.")
	  case 1:
		printf("These small creatures inhabit #####Skyloft#####.\nThey have friendly dispositions during\nthe day, but can become aggressive at\nnight. Approach with caution.")
	}
}

void entrypoint_006_654() {
	start()
	printf("Though the details are still unclear,\nthis monstrosity is the demonic vessel\nof #####Demise#####.\n\nI can confirm a previously unseen\ntaillike appendage.\n\n\nI recommend generous use of #####Groose#####'s \ncatapult.\n#####Tell me more!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		flw_241:
		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
		  case 0:
			flw_107:
			printf("You must attempt to seal this beast\naway again. I suggest a plan of attack\nsimilar to what you used in previous\nencounters.\nThe monster's fingers, like its toes, are\ncomparatively soft targets and can be\ndestroyed by physical attack.\n#####Tell me more!#####Got it.")
			switch (choice(2, 0)) {
			  case 0:
				printf("After toppling the monster, it is\npossible that the beast's enormous bulk\nmay prevent you from approaching\nthe #####sealing spike#####.\nIn this scenario, I recommend that you\ndescend a level and use an air vent to\ntravel to the head of the monster.\n#####More info!#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("The monster has evolved to an\nimmensely powerful state. I calculate\nthe odds you will defeat it by sword\nalone at approximately 0%.\nI recommend you utilize Groose's\ndefense apparatus. As a last-ditch\nmeasure, you can launch #####yourself#####,\n######Master, as a projectile.")
				  case 1:
				}
			  case 1:
			}
		  case 1:
			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
			  case 0:
				goto flw_107
			  case 1:
				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
			}
		}
	  case 1:
	}
}

void entrypoint_006_689() {
	start()
	printf("There is a 90% change in outward\nappearance compared to previous\nencounters with him. I detect a dark\naura emanating from his entire body.\nI can confirm a change in Ghirahim's\nfighting style, likely as a result of the\nminor damage he has suffered.#####More info!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
		  case 0:
			flw_125:
			printf("I project that the #####weak spot revealed\non his chest #####from the previous attack\nwill continue to be an effective target.\n\nHowever, there is a 100% probability\nthat Ghirahim will block all attacks\ntargeting this area while he is in his\nstandard state.\n#####More info!#####Got it.")
			switch (choice(2, 0)) {
			  case 0:
				printf("I suggest you attempt to parry\nGhirahim's sword away, ######Master.\nThis should leave the #####weak spot on\nhis chest##### open to attack.\nTaking advantage of opportunities to\nattack the villain's weak spot should\nbe your top priority.#####More info!#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("My analysis shows that it is impossible\nto parry away Ghirahim's sword\nin one attack.\n\nI theorize that it will become possible\nby #####attacking in the same direction#####\na number of times.")
				  case 1:
				}
			  case 1:
			}
		  case 1:
			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
			  case 0:
				goto flw_125
			  case 1:
				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
			}
		}
	  case 1:
	}
}

void entrypoint_006_602() {
	start()
	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
	  case 0:
		printf("These small animals dwell in #####Skyloft#####.\nDue to #####Batreaux#####'s transformation into\na human, they no longer exhibit\naggressive tendencies at night.")
	  case 1:
		printf("During the day they are quite docile,\nbut after dark their personality turns\naggressive and they will attack. Don't\nbe fooled by their cute appearance.")
	}
}

void entrypoint_006_655() {
	start()
	printf("This eternal being has conquered time\nitself. It is the source of all monsters.\n\n\nAccording to tales passed down through\ngenerations, it appears differently in\neach epoch and to each person who\nlays eyes on it.#####Tell me more!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		printf("It is clear that #####Skyward Strikes #####cannot\nbe called down to your sword because\nthis place is under the magical\ninfluence of Demise.\nAttacks using #####Skyward Strike energy\n#####will not be possible here.\n#####Tell me more.#####Got it.")
		switch (choice(2, 0)) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 124)])) {
			  case 0:
				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
				  case 0:
					flw_151:
					printf("The probability that a single, standard\nattack of yours will injure Demise,\n######Master, is exactly 0%.\n\nA series of attacks that can overwhelm\nDemise's guard is required, such as\n#####repeated slashing from various angles#####.\n#####Tell me more!#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("Results from my analysis confirm that\nthe time to strike Demise is when he\nholds his sword aloft.\n\nHowever, vigilance is required.#####\nAny attack falling near Demise's sword\nhas a 100% chance of being blocked.")
					  case 1:
					}
				  case 1:
					printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
				}
			  case 1:
				flw_147:
				printf("It is highly probable that the only\nweapon capable of wounding Demise\nis the #####Master Sword #####itself. No other\nweapon can affect it.\n#####Tell me more!#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					goto flw_151
				  case 1:
				}
			  case 2:
				goto flw_147
			  case 3:
				goto flw_147
			}
		  case 1:
		}
	  case 1:
	}
}

void entrypoint_006_690() {
	start()
	printf("There has been a 90% change in his\noutward appearance since our last\nmeeting. I detect a black aura\nemanating from his entire body.\nI have also confirmed that he is\nusing a new weapon.\n#####More info!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
		  case 0:
			flw_137:
			printf("Results from my analysis confirm that\nthe sword Ghirahim wields #####can be\nbroken #####by your sword, ######Master.\n\nI theorize that Ghirahim used magic\nto call this weapon into existence.\n\n\nNow that he is deeply wounded,\nthe sword he wields appears to\nhave become brittle.\n#####More info!#####Got it.")
			switch (choice(2, 0)) {
			  case 0:
				printf("I have detected identical responses\nfrom #####the center of Ghirahim's sword\nand Ghirahim's chest#####.\n\nBy destroying the #####sword's core#####, there is\na 100% probability that the sword itself\nwill be destroyed.\n\nI recommend carefully watching the\nsword's movement and repeatedly\nattacking the #####same spot#####.")
			  case 1:
			}
		  case 1:
			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
			  case 0:
				goto flw_137
			  case 1:
				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
			}
		}
	  case 1:
	}
}

void entrypoint_006_656() {
	start()
	printf("This eternal being has conquered time\nitself. It is the source of all monsters.\n\n\nAccording to tales passed down through\ngenerations, it appears differently in\neach epoch and to each person who\nlays eyes on it.#####Tell me more!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		printf("It is clear that #####Skyward Strikes #####cannot\nbe called down to your sword because\nthis place is under the magical\ninfluence of Demise.\nAttacks using #####Skyward Strike energy\n#####will not be possible here.\n#####Tell me more.#####Got it.")
		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
		switch (choice(2, 0)) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 132)])) {
			  case 0:
				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
				  case 0:
					flw_154:
					printf("######Master, I see no reason why you cannot\nmake use of the lightning strikes the\nsame way Demise does.\n#####Tell me more!#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("It is possible to store lightning in the\n#####Master Sword #####by raising your sword\nin the air as if you were readying a\n#####Skyward Strike#####.\nWhen lightning strikes in the distance\nand the sky lights up, quickly raise\nyour sword skyward to call down the\nlightning.\nHowever, be aware that while you are\nattempting to be struck by lightning,\nyou will be leaving yourself open to\nDemise's attacks.")
					  case 1:
					}
				  case 1:
					printf("I can confirm it is possible for Demise\nto store the electrical energy of a\nlightning strike in his sword and use it\nto his advantage.\n######Master, should your sword come into\ncontact with Demise's sword once it\nhas electrified, you will receive a\npainful shock.\nIt is essential that you time your\nattacks carefully. Very carefully.\n#####Tell me more.#####Understood.")
					switch (choice(2, 0)) {
					  case 0:
						printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
					  case 1:
					}
				}
			  case 1:
				goto flw_154
			  case 2:
				goto flw_154
			  case 3:
				goto flw_154
			}
		  case 1:
		}
	  case 1:
	}
}

void entrypoint_006_605() {
	start()
	printf("This species of parasite is currently\nattached to #####Levias#####. It is known for its\nenormous optical structure.\n\nThis horrifying life-form utterly\ncontrols the mind and body of its host.#####Tell me more!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		flw_242:
		switch (scene_flags[37 /* 0x5 20 */]) {
		  case 0:
			printf("My analysis indicates the projectiles\nspit by the #####Bilocyte #####can be #####repelled#####\nby your sword, ######Master.\n\nFurthermore, I infer that repelling the\nBilocyte's own projectiles back toward\nit could become a very effective means\nof attack.\n#####Tell me more!#####Got it.")
			switch (choice(2, 0)) {
			  case 0:
				printf("Based on the creature's anatomy,\nit is probable that this monster's\nweakness is its central #####eye#####.\n\nHowever, I can confirm that while the\n#####fins##### on the sides of its head are\nextended, any attack on the #####eye #####will be\nquite ineffective.\n#####Tell me more.#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("In order to effectively hit the Bilocyte\nby repelling its projectiles, you must\nconsider the direction in which you are\nswinging your sword.\nBy swinging left and right, you can\ncontrol the direction of the deflection.\n#####Swinging up or down will deflect\nprojectiles straight back.")
				  case 1:
				}
			  case 1:
			}
		  case 1:
			printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
		}
	  case 1:
	}
}

void entrypoint_006_657() {
	start()
	printf("I have something to report, ######Master.\nMy analysis of this enemy's movement\npatterns is complete.\n\nWhile holding ##### to lock on to the\nenemy, press ##### to call me. I will\ngive you my analysis.########## Would you like to\nhear it now?#####Yes.#####No.")
	story_flags[772 /* us: 805A9B2A 0x10, jp: 805ACDAA 0x10 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		flw_69:
		switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 46)])) {
			  case 0:
				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
				  case 0:
					flw_53:
					printf("Analysis indicates that the daggers\nGhirahim shoots will align on a single\nplane in one of three orientations:\nhorizontal, vertical, or diagonal.\nWith good timing, you might be able to\nrepel them with a single swing of your\nsword, but my judgment shows that this\nmaneuver will be difficult.#####Anything else?#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("I can now confirm that Ghirahim has\nthe ability to teleport.\n\n\nFurther study reveals that he may be\nvulnerable immediately after\nteleportation. This is your chance to\nattack.\nHowever, be aware Ghirahim may use\nhis sword to guard against just such\nan attack.\n#####Anything else?#####Got it.")
						switch (choice(2, 0)) {
						  case 0:
							printf("Ghirahim will repeatedly move around\nyou, ######Master. I recommend #####engaging##### \nhim with your sword as he makes his\nattack.\nIt is probable that the moment before\nGhirahim readies his attack, he will\nreveal the direction he will move\nas he attempts to flank you.\nIf you are unable to establish the\ncorrect timing to attack, I suggest\nusing your #####spin attack#####.")
						  case 1:
						}
					  case 1:
					}
				  case 1:
					printf("I have detected a change in Ghirahim's\nfighting style from the beginning of \nthe battle. \n\nI theorize that this change happened\nbecause of the small amount of damage\nhe sustained.#####Tell me more!#####Understood.")
					switch (choice(2, 0)) {
					  case 0:
						printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
					  case 1:
					}
				}
			  case 1:
				goto flw_53
			  case 2:
				goto flw_53
			  case 3:
				goto flw_53
			}
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 54)])) {
			  case 0:
				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
				  case 0:
					flw_62:
					printf("Speech analysis indicates absolute\nconfidence in his own abilities.\n\n\n######Master, you must watch for Ghirahim's\nability to grasp your sword with his\nbare #####right hand#####.\n\nIt is highly probable that he observes\nthe #####angle you hold your sword at##### and\nprepares his defense accordingly.\n\nI recommend attacking from the\ndirection opposite his hand.\n#####More info!#####I'm ready.")
					switch (choice(2, 0)) {
					  case 0:
						printf("Should he catch hold of your sword,\nI recommend swinging in the\n#####direction Ghirahim's hand opens#####.\n#####More info!#####Got it.")
						switch (choice(2, 0)) {
						  case 0:
							printf("My analysis confirms that #####Ghirahim#####'s \nfingers always point upward when\nhe holds ######your sword, Master.\n\nThe probability of escaping his grip\n#####by swinging your sword upward#####\nis approximately 100%.")
						  case 1:
						}
					  case 1:
					}
				  case 1:
					printf("Speech analysis indicates absolute\nconfidence in his own abilities.\n\n\n######Master, you must watch for Ghirahim's\nability to grasp your sword with his\nbare #####right hand#####.\n\nIt is highly probable that he observes\nthe #####angle you hold your sword at##### and\nprepares his defense accordingly.\n\nI recommend attacking from the\ndirection opposite his hand.\n#####More info!#####I'm ready.")
					switch (choice(2, 0)) {
					  case 0:
						printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
					  case 1:
					}
				}
			  case 1:
				goto flw_62
			  case 2:
				goto flw_62
			  case 3:
				goto flw_62
			}
		}
	  case 1:
		printf("Whatever you think is best, ######Master.\nPlease call for me if you want to hear\nmy findings at a later time.")
	}
}

void entrypoint_006_658() {
	start()
	printf("I have something to report, ######Master.\nMy analysis of this enemy's movement\npatterns is complete.\n\nWhile holding ##### to lock on to the\nenemy, press ##### to call me. I will\ngive you my analysis.########## Would you like to\nhear it now?#####Yes.#####No.")
	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		flw_231:
		switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
		  case 0:
			flw_34:
			printf("There is a 0% probability that your\nsword will be effective against the\nrock that covers this target's body.\n\nI strongly recommend using items with\npowerful destructive properties.\n#####More info!#####Got it.")
			switch (choice(2, 0)) {
			  case 0:
				printf("There is a 100% probability that #####bombs#####\nthat come into contact with Scaldera's\nbody will immediately explode, due to\nthe creature's high body temperature.\nAnalysis indicates that explosions on\nScaldera's outer surface will not yield\ndesired results, however. You must\nlook for a more effective target site.\n#####More info!#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("Results from my analysis confirm that\nin order to remove the rocks covering\nScaldera, you will need to inflict\npowerful internal damage.\nWhen Scaldera is inhaling a large\namount of air, I suggest##### throwing a\nbomb ##########into its mouth#####.")
				  case 1:
				}
			  case 1:
			}
		  case 1:
			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
			  case 0:
				goto flw_34
			  case 1:
				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
			}
		}
	  case 1:
		printf("Whatever you think is best, ######Master.\nPlease call for me if you want to hear\nmy findings at a later time.")
	}
}

void entrypoint_006_659() {
	start()
	printf("I have something to report, ######Master.\nMy analysis of this enemy's movement\npatterns is complete.\n\nWhile holding ##### to lock on to the\nenemy, press ##### to call me. I will\ngive you my analysis.########## Would you like to\nhear it now?#####Yes.#####No.")
	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		flw_17:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 10)])) {
		  case 0:
			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
			  case 0:
				flw_14:
				printf("The #####weak points #####are its overdeveloped\npincers, but you must hit each at the\nright angle relative to the pincer's \nposition to be effective.\n#####Tell me more.#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("This beast has a tendency to bury itself\nin the sand when it feels its health\nis endangered.\n\nWhen it is burrowed below the sand,\nyou can expect at least an 85% chance\nthat it will attempt to stab you with\nits tail.\nI highly recommend removing the\ncreature's environmental advantage\nby #####blowing away #####sand, thereby\nrevealing its position.\n#####Tell me more!#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("Analysis reveals that the creature's\n#####central eye #####will be vulnerable to\nattack once its pincers have been\nproperly disposed of.\nI calculate a near 100% chance that\nan assault on this weak point will \nultimately prove quite fatal.\n\nHowever, I infer from the armor\nsurrounding the #####central eye #####that\nhorizontal, vertical, and diagonal\nslashes will be entirely ineffective.")
					  case 1:
					}
				  case 1:
				}
			  case 1:
				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
			}
		  case 1:
			goto flw_14
		  case 2:
			goto flw_14
		  case 3:
			goto flw_14
		}
	  case 1:
		printf("Whatever you think is best, ######Master.\nPlease call for me if you want to hear\nmy findings at a later time.")
	}
}

void entrypoint_006_677() {
	start()
	printf("As you can likely gather from its other\ntitle, this #Abyssal Leviathan\" is said to\nhave been a tyrant of the ancient seas.\n\nIts ##########enormous tentacles##### #####can be repelled,\nbut they will regenerate after a\nshort time.\n#####More info!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		flw_268:
		switch (loadzone_temp_flags[20 /* 0xB 10 */]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 226)])) {
			  case 0:
				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
				  case 0:
					flw_261:
					printf("In order to attack Tentalus's weak\nspot, its #####eye#####, you must first deal with\nthe tentacles attempting to latch on\nto you.\nMy analysis shows you can easily\nslice the tip of the tentacles with\nyour sword.\n#####More info!#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("Because this monster's tentacles attack\nincessantly and in large number, it is\ntoo dangerous to respond to them one\nat a time.\nMy analysis indicates it is possible to\nrepel the tentacles more efficiently by\nconcentrating an all-out assault on\nthem with your sword.\n#####More info!#####Got it.")
						switch (choice(2, 0)) {
						  case 0:
							printf("When the tentacles are repelled,\nthey may drop #####hearts##### and #####arrows#####.\n\n\nShould you find yourself in danger\nbecause of low hearts or arrows,\nconcentrate on attacking the tentacles\nrather than fleeing from battle.")
						  case 1:
						}
					  case 1:
					}
				  case 1:
					printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
				}
			  case 1:
				goto flw_261
			  case 2:
				goto flw_261
			  case 3:
				goto flw_261
			}
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 36)])) {
			  case 0:
				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
				  case 0:
					flw_43:
					printf("My analysis shows that by repelling\na number of its aggressive tentacles,\nthe beast will reveal itself.\n\nThere is a 99% probability that the\ntentacles that attacked you on the ship,\nMaster, can be attributed to Tentalus.\n\nI theorize that using a #####sacred power##### \nwill be the most effective means\nof repelling the tentacles.\n#####More info!#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("Results from my analysis confirm that\nits tentacles can be severed with a\nwell-aimed #####Skyward Strike#####.\n\nI theorize that the creature's #####eye##### is its \nweak point, but the probability that you\ncan actually hit the eye with a Skyward\nStrike is approximately 0%.\nInstead, I recommend utilizing\nlong-range weapons.\n#####More info!#####Got it.")
						switch (choice(2, 0)) {
						  case 0:
							printf("To accurately strike at the creature's\n#####eye#####--its weak spot--a #####bow##### will be most\neffective.\n\nYou can press ##### to move with your\n##########bow##### #####drawn. I recommend shooting\n#####arrows #####immediately after dodging\nattacks launched by Tentalus.")
						  case 1:
						}
					  case 1:
					}
				  case 1:
					printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
				}
			  case 1:
				goto flw_43
			  case 2:
				goto flw_43
			  case 3:
				goto flw_43
			}
		}
	  case 1:
	}
}

void entrypoint_006_660() {
	start()
	printf("A report, ######Master. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n#####Yes.#####No.")
	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		flw_27:
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 20)])) {
		  case 0:
			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
			  case 0:
				flw_24:
				printf("It is highly probable that if the #####red\ncores #####in its arms were to be ejected,\nthe unit would lose integrity and the\nlimbs would sever from the body.\nHowever, during normal operation the\ncores are likely hidden below the\nforearm plating.\n#####More info!#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("Results from my analysis show that the\n#####red cores##### in Koloktos's arms will only\nbe revealed when the arms are\nstretched out to full length.\nFast and timely counterattacks after\nKoloktos swings its arms down have\nthe best chance of success.\n#####More info!#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("I estimate a high probability that the\n#####red cores #####can be removed using your\n#####whip#####.\n\nWhen Koloktos's arms lower, there\nwill be a brief moment when you can \nattack the #####chest core#####. \n\nHowever, when targeting the #####chest\ncore#####, there is nowhere to hook on to\nwith your #####whip#####. Therefore, removing\nthe core will not be possible.")
					  case 1:
					}
				  case 1:
				}
			  case 1:
				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
			}
		  case 1:
			goto flw_24
		  case 2:
			goto flw_24
		  case 3:
			goto flw_24
		}
	  case 1:
		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold ##### \nto lock on to the enemy and then press\n##### to call me.##########")
	}
}

void entrypoint_006_661() {
	start()
	printf("A report, ######Master. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n#####Yes.#####No.")
	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		goto flw_268
	  case 1:
		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold ##### \nto lock on to the enemy and then press\n##### to call me.##########")
	}
}

void entrypoint_006_610() {
	start()
	printf("An #####Aracha##### that has survived its very\nlengthy larval stage is known as a\n#Thousand-Year Arachnid,\" which\nis precisely what you see before you.\nOver 90% of its body is shielded by a\ntough, chitinous armor that can deflect\neven the sharpest blade.\n#####Tell me more.#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		goto flw_17
	  case 1:
	}
}

void entrypoint_006_662() {
	start()
	printf("A report, ######Master. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n#####Yes.#####No.")
	story_flags[777 /* us: 805A9B2D 0x02, jp: 805ACDAD 0x02 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		flw_87:
		switch (loadzone_temp_flags[2 /* 0x9 04 */]) {
		  case 0:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 66)])) {
			  case 0:
				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
				  case 0:
					flw_71:
					printf("When Ghirahim shoots his daggers,\nI recommend repelling them by\nswinging your sword along the line\nthe knives are positioned in.\nLogically, if surrounded by daggers,\nusing #####a sword technique that attacks in \nall directions #####would be effective.\n#####Anything else?#####I'm ready.")
					switch (choice(2, 0)) {
					  case 0:
						printf("There will be a significant opening for\ncounterattacks if you are able to avoid\nGhirahim's overhead attack when he\nteleports above your head.\nHe will teleport to places other than\nabove you, of course, but my analysis\nconfirms an interesting behavior\npattern.\nHe assumes different stances when he\nplans to teleport above you and when\nhe plans to go somewhere else.\n#####Anything else?#####Got it.")
						switch (choice(2, 0)) {
						  case 0:
							printf("I am confident Ghirahim will use his\nsword to defend against your attacks,\n######Master.\n\nGhirahim wields two swords, so the\nprobability that he will block two of\nyour sequential attacks is 100%.")
						  case 1:
						}
					  case 1:
					}
				  case 1:
					printf("I have detected a change in Ghirahim's\nfighting style since the beginning of\nthe battle.\n\nI have concluded that this change\nhappened because of the small amount\nof damage he sustained.\n#####Tell me more!#####Understood.")
					switch (choice(2, 0)) {
					  case 0:
						printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
					  case 1:
					}
				}
			  case 1:
				goto flw_71
			  case 2:
				goto flw_71
			  case 3:
				goto flw_71
			}
		  case 1:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 22), ('param4', 4), ('param5', 74)])) {
			  case 0:
				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
				  case 0:
					flw_80:
					printf("Analysis indicates that the daggers that\nappear around Ghirahim also act as a\ndefensive barrier.\n\nRemoving these daggers before\nattacking should be an effective means\nof breaking down his defenses.\n#####More info!#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("It appears that Ghirahim prefers to\nuse his right hand to attempt to grab\nyour sword, ######Master.\n\nShould he succeed, I recommend\n#####swinging your sword up and down\n#####to force him to release it.\n\nHowever, Ghirahim continues to utilize\nmore of his true power, and the\nprobability of it taking more than one\nswing to release your sword is 100%.\n#####Tell me more!#####Got it.")
						switch (choice(2, 0)) {
						  case 0:
							printf("To land an attack on Ghirahim, I\nadvise you to swing your sword from a\ndirection that cannot be blocked by\ndaggers or Ghirahim's right hand.\nGhirahim will move his right hand\nin time with your attacks. However,\n######Master, there will be times when #####he is\ntoo slow to meet your attack#####.")
						  case 1:
						}
					  case 1:
					}
				  case 1:
					printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
				}
			  case 1:
				goto flw_80
			  case 2:
				goto flw_80
			  case 3:
				goto flw_80
			}
		}
	  case 1:
		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold ##### \nto lock on to the enemy and then press\n##### to call me.##########")
	}
}

void entrypoint_006_663() {
	start()
	printf("A report, ######Master. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n#####Yes.#####No.")
	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		goto flw_239
	  case 1:
		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold ##### \nto lock on to the enemy and then press\n##### to call me.##########")
	}
}

void entrypoint_006_664() {
	start()
	printf("A report, ######Master. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n#####Yes.#####No.")
	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		goto flw_240
	  case 1:
		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold ##### \nto lock on to the enemy and then press\n##### to call me.##########")
	}
}

void entrypoint_006_699() {
	start()
	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
	  case 0:
		printf("This giant species of spider inhabits the\ndeepest areas of forests. It attacks\nwith highly adhesive webbing in order\nto prevent its prey from escaping.\nIt has a tough outer carapace, but its\nstomach may be vulnerable to attack.\n#####Tell me more!#####Got it.")
		switch (choice(2, 0)) {
		  case 0:
			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
			  case 0:
				printf("I have observed that it has a tendency\nto move with its back toward its prey\nto prevent its weak point from being\nexposed.\nTherefore, you must find a way to flip\nit over to attack its weak point.\n#####Anything else?#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("Its lone weak point is the center of its\nabdomen, but it is surrounded by tough\nchitin. This leads me to conclude that a\n#####fatal blow##### will be most effective.")
					flw_279:
					switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 21), ('param4', 2), ('param5', 244)])) {
					  case 0:
						printf("You have defeated ####### of this type of\nenemy. My analysis shows that your\nbattle performance rating with this\nenemy is ######.")
					  case 1:
					}
				  case 1:
					goto flw_279
				}
			  case 1:
				printf("I have observed that it has a tendency\nto move with its back toward its prey\nto prevent its weak point from being\nexposed.\nTherefore, you must find a way to flip\nthe beast over to access its weak point.")
				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
				goto flw_279
			}
		  case 1:
			goto flw_279
		}
	  case 1:
		printf("This giant species of spider inhabits the\ndeepest areas of forests. It attacks\nwith highly adhesive webbing in order\nto prevent its prey from escaping.\nIt has a tough outer carapace, but its\nstomach may be vulnerable to attack.\n\n\nI am currently conducting additional\nanalysis into its movement patterns.")
		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
		goto flw_279
	}
}

void entrypoint_006_648() {
	start()
	printf("The cursed energy supply Ghirahim\nprovided to this contraption has\ngiven it power far beyond its\nconventional limits.\nThe #####red, orb-shaped cores #####embedded\nin its torso and arms provide it limited\nstability and prevent it from falling\nto pieces.\n#####More info!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		goto flw_27
	  case 1:
	}
}

void entrypoint_006_665() {
	start()
	printf("Its body is completely covered in rock,\nbut you can see its weak point, the #####eye#####,\nthrough the cracks in this outer shell.\n\nIf you are able to remove parts of this\ncreature's rocky shell, you will vastly\nincrease your probability of success.#####More info!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		goto flw_231
	  case 1:
	}
}

void entrypoint_006_649() {
	start()
	printf("I have no confirmed information about\nthis man, other than he refers to\nhimself as a #Demon Lord.\"\n\nI sense a powerful and evil aura, and I\nestimate his level of ability as highly\nadept. However, according to analysis,\nhe has yet to reveal his true power.\n#####More info!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		goto flw_69
	  case 1:
	}
}

void entrypoint_006_666() {
	start()
	printf("A report, ######Master. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n#####Yes.#####No.")
	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		goto flw_241
	  case 1:
		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold ##### \nto lock on to the enemy and then press\n##### to call me.##########")
	}
}

void entrypoint_006_667() {
	start()
	printf("A report, ######Master. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n#####Yes.#####No.")
	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		goto flw_242
	  case 1:
		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold ##### \nto lock on to the enemy and then press\n##### to call me.##########")
	}
}

void entrypoint_006_650() {
	start()
	printf("Ghirahim is the #####Demon Lord #####leading\nthe monsters. He displays superior\nmental and physical prowess, as well\nas expert command of magic.\nThough possessing some gentleman-\nlike qualities, he will devolve to his\ntrue nature when enraged.\n#####Tell me more!#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		goto flw_87
	  case 1:
	}
}

void entrypoint_006_668() {
	start()
	printf("A report, ######Master. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n#####Yes.#####No.")
	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		flw_238:
		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
		  case 0:
			flw_116:
			printf("He is now revealing his true power.\nI am detecting a significant increase\nin muscular strength.\n\nUnfortunately, I must also conclude\nthat none of your weapons will be\neffective against him.\n#####Tell me more!#####Got it.")
			switch (choice(2, 0)) {
			  case 0:
				printf("Analysis indicates that attacks from\nyour sword #####may drive Ghirahim back#####,\nif ever so slightly, ######Master.\n#####More info!#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("I have noted that Ghirahim has a\ntendency to stand near the center of\nthe platform, ######Master.\n\nThere is an 85% probability he does\nthis to avoid falling off.\n#####More info!#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("######Master, there is a 95% chance that\nGhirahim will attempt #####to intercept\nyour sword #####in order to defend against\nyour attacks, just like last time.\nIf you notice a large change in his\nstance, take care to note the #####position\nof his hand#####.")
					  case 1:
					}
				  case 1:
				}
			  case 1:
			}
		  case 1:
			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
			  case 0:
				goto flw_116
			  case 1:
				printf("He is now revealing his true power.\nI am detecting a significant increase\nin muscular strength.\n\nUnfortunately, I must also conclude\nthat none of your weapons will be\neffective against him.\n#####Tell me more!#####Got it.")
				switch (choice(2, 0)) {
				  case 0:
					printf("Analysis indicates that attacks from\nyour sword #####may drive Ghirahim back#####,\nif ever so slightly, ######Master.\n#####More info!#####Got it.")
					switch (choice(2, 0)) {
					  case 0:
						printf("I have noted that Ghirahim has a\ntendency to stand near the center of\nthe platform, ######Master.\n\nThere is an 85% probability he does\nthis to avoid falling off.\n#####More info!#####Got it.")
						switch (choice(2, 0)) {
						  case 0:
							printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, ######Master, your sword will flash.\nYou can always press ##### to call on me.#####\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n#####Analysis#####.")
						  case 1:
						}
					  case 1:
					}
				  case 1:
				}
			}
		}
	  case 1:
		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold ##### \nto lock on to the enemy and then press\n##### to call me.##########")
	}
}

void entrypoint_006_651() {
	start()
	printf("There is a 90% change in outward\nappearance compared to previous\nencounters with him. I detect a dark\naura emanating from his entire body.\nBe cautious, ######Master. This opponent is \nextremely dangerous and likely to\nfell you with a single blow.\n#####Tell me more.#####Understood.")
	switch (choice(2, 0)) {
	  case 0:
		goto flw_238
	  case 1:
	}
}

void entrypoint_006_669() {
	start()
	printf("A report, ######Master. My preliminary\nanalysis of #####Demise##### is now complete.\nWould you like to hear what I have\ndiscovered?\n#####Yes.#####No.")
	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
	switch (choice(2, 0)) {
	  case 0:
		printf("It is clear that #####Skyward Strikes #####cannot\nbe called down to your sword because\nthis place is under the magical\ninfluence of Demise.\nAttacks using #####Skyward Strike energy\n#####will not be possible here.\n#####Tell me more.#####Got it.")
		switch (choice(2, 0)) {
		  case 0:
			printf("It is highly probable that the only\nweapon capable of wounding Demise\nis the #####Master Sword #####itself. No other\nweapon can affect it.\n#####Tell me more!#####Got it.")
			switch (choice(2, 0)) {
			  case 0:
				switch (scene_flags[120 /* 0xE 01 */]) {
				  case 0:
					printf("I can confirm it is possible for Demise\nto store the electrical energy of a\nlightning strike in his sword and use it\nto his advantage.\n######Master, should your sword come into\ncontact with Demise's sword once it\nhas electrified, you will receive a\npainful shock.#####Tell me more.#####Understood.")
					switch (choice(2, 0)) {
					  case 0:
						flw_229:
						printf("I need more time to complete my\nanalysis of Demise.\n\n\nIn a few moments, use ##### to lock on to\nDemise, and then call me with #####.\nI will report my findings then.##########")
					  case 1:
					}
				  case 1:
					goto flw_229
				}
			  case 1:
			}
		  case 1:
		}
	  case 1:
		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold ##### \nto lock on to the enemy and then press\n##### to call me.##########")
	}
}

