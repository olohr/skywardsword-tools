          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Retourne vite voir le <b<dragon d'eau>>,\nglou!")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Attention quand tu<r< fais exploser>>\nles poissons pleins d'épines, glou.\nLa détonation est aussi puissante\nque celle d'une bombe, glou!")
          				  case 1:
/*<117>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 118), ('param3', 31)])
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_116
          		}
          	}
          }

          void entrypoint_204_26() {
/*< 99>*/ 	start()
/*<100>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Retourne vite voir le <b<dragon d'eau>>,\nglou!")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Les fironotes sont amies avec tout\nle monde, glou. Elles nagent souvent\n<r<avec les petits poissons>>, glou!")
          				  case 1:
/*<139>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 140), ('param3', 31)])
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x00\x0EKwaa, Link!\nOn dirait que des poissons\nmalcommodes sont arrivés!\n\nS'ils te trouvent, tu risques de passer\nun mauvais quart d'heure! Kwaaa.\nFais attention!")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0 */ "La forêt est tout inondée, glou!")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 2 */ "\x0E\x01\x09\x04\x00\x0EKwaaa, Link!\nOn dirait que tu as rassemblé\ntoutes les fironotes. Bon travail!\n\nMaintenant, retourne vite voir\nle <b<dragon d'eau>>. Kwa.")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Le grand dragon d'eau est\ntrès fâché, glou!")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Il y a moins de monstres dans la forêt,\nmaintenant, glou!")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0 */ "C'est un humain! Par ici, le courant\nest trop fort!\n\n\nC'est trop dangereux pour les humains!\nPasse par l'autre côté!")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 23), ('param2', 0), ('next', 145), ('param3', 35)])
/*<145>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 42), ('param3', 16)])
/*< 42>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Tout indique que le Vénérable fait\nréférence à la <r<détection>>.\n\n\nSon conseil est pertinent, \x0E\x01\x12\x04\x00\x02Maître.\nJ'ai en effet pu analyser les\ncaractéristiques des fironotes.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 9), ('next', 53), ('param3', 56)])
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 0 */ "J'ai configuré la <r<<pling>détection>> pour\nréagir aux fironotes.\nUtilisez\x2010la pour vos recherches.\n\nToutefois, il est <r<impossible d'utiliser\nla détection sous l'eau>>.\nSoyez\x2010en conscient.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 36)])
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Hé, où tu vas, glou? Le courant est\ntrop fort par ici, glou. Si tu veux sortir,\npasse par en haut, glou.")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0 */ "La forêt est pleine d'eau, glou!")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf(/* textboxtype: 1, unk: 0 */ "")
          	  case 1:
/*<177>*/ 		printf(/* textboxtype: 1, unk: 0 */ "")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Retourne vite voir le <b<dragon d'eau>>,\nglou!")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Quand tu attrapes une fironote, ta\n<r<jauge d'oxygène se remplit >>un peu,\nglou.")
          				  case 1:
/*<192>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 193), ('param3', 31)])
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_191
          		}
          	}
          }

          void entrypoint_204_01() {
          	start()
/*<  2>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Même si tout est inondé, on va\nse débrouiller! Passe le bonjour\nau <b<dragon d'eau>>! Kwo-ko!")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Je vais te donner un conseil!\nAttaque les pierres pour les faire\nrouler! Kwo-ko!")
          				  case 1:
/*<122>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Le Vénérable t'appelle! Kwii!\nVa écouter ce qu'il a à te dire!")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 1), ('param3', 31)])
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Koro-kwo! Il y a plein d'eau qui est\nsortie de la <r<base du grand arbre>><pling>.\nÇa nous a tous surpris!\n\nAvec toute cette eau, on peut\nplus se cacher nulle part. Kwa!\n\x0E\x01\x09\x04\x11\x05Est\x2010ce que la forêt pourrait\npas redevenir comme avant?")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x0CQuand est\x2010ce que cette eau va s'en\naller? Je sais pas nager, moi! Kwo!")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x0CUtilise ta fonction détection, ou \nn'importe quoi... mais trouve vite ces\nfironotes! Kwo-ko!")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Le Vénérable t'appelle! Kwii!\nVa écouter ce qu'il a à te dire!")
          				}
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x0CC'est le <b<dragon d'eau>> qui a tout\ninondé? Les Kikwis vont tous se faire\ndévorer! Kwo-ko!")
          			}
          		}
          	  case 1:
/*< 44>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 4), ('param3', 31)])
/*<  4>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x09\x0CC'est la fin! Qu'est\x2010ce que va\ndevenir notre forêt? Kwo?")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Même si c'est inondé, on va se\ndébrouiller! Passe le bonjour\nau <b<dragon d'eau>>! Kwii-kwii!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x0BSi tu cherches les fironotes, demande\nconseil aux Paraduses, ils connaissent\nle sujet. Kii-kwii!\n[1]Paraduses?[2-]Oui, je sais")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0C\x01Kwaa. C'est les créatures avec\nune bouche toute longue qui se\npromènent dans l'eau!")
          						flw_179:
/*<179>*/ 						printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x0B\x05Si tu en croises un dans l'eau,\nparle\x2010lui! Kwaa!")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Le Vénérable t'appelle! Kwii!\nVa écouter ce qu'il a à te dire!")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 7), ('param3', 31)])
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0FLe <b<dragon d'eau>> est arrivé! Si la forêt\nest dans cet état, c'est à cause d'elle,\nc'est clair! Kii-kwii!")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Retourne vite voir le <b<dragon d'eau>>,\nglou!")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Tu peux poursuivre les <b<fironotes >>qui\ns'enfuient à l'aide d'un <g<tourbillon>>, glou.\nElles seront aspirées et tu pourras\nles attraper, glou.\nAh, glou...\x0E\x01\x04\x02\x1E Mais il paraît que les\nhumains <r<consomment >>de l'oxygène\nquand ils font ça, alors n'exagère\npas, glou.")
          				  case 1:
/*<106>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 107), ('param3', 31)])
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_105
          		}
          	}
          }

          void entrypoint_204_04() {
/*<  9>*/ 	start()
/*< 11>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 28>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Retourne vite voir le <b<dragon d'eau>>!")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Essaie d'utiliser la détection.\nTu trouveras les fironotes plus\nfacilement! Kwa.")
          				  case 1:
/*<134>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x07Le Vénérable t'appelle! Kwii!\nVa écouter ce qu'il a à te dire!")
          				}
          			  case 1:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x14Si tu rassembles les fironotes,\ntu peux reconstituer la partition!\nKwa! Retrouve\x2010les toutes!")
          			}
          		}
          	  case 1:
/*< 46>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 10), ('param3', 31)])
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x04Ka-kwa! J'ai vu le <b<dragon d'eau>>!\nElle doit sûrement se cacher\nquelque part! Kwa.\n")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Retourne vite voir le <b<dragon d'eau>>,\nglou!")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Les bulles violettes sont <r<empoisonnées>>,\nglou. Si tu les respires, elles te <r<coupent\nle souffle>>, glou. Alors fais attention,\nglou.")
          				  case 1:
/*<109>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 110), ('param3', 31)])
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_108
          		}
          	}
          }

          void entrypoint_204_05() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 18>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0ERetourne vite voir le <b<dragon d'eau>>.")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EKwaaa! Oui, c'est ça! La détection!\nTu devrais pouvoir t'en servir pour\ntrouver les fironotes restantes, kwa?")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 52), ('param3', 31)])
/*< 52>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x01Ah, te revoilà, Link!\n\n\n\nEst\x2010ce que ta collecte de <b<fironotes\n>>avance bien? Imagine\x2010toi que j'ai\neu une idée. Kwa.\n\n\x0E\x01\x09\x04\x04\x11Pourquoi tu n'utilises pas cette\nchose, là? Comment tu appelles\nça, déjà?\n\nT'avais bien utilisé un bidule pour\nretrouver mes camarades l'autre\nfois, kwaa?\n\n\x0E\x01\x09\x04\x06\x09Je me disais que tu pourrais peut\x2010être\naussi t'en servir pour retrouver les\nfironotes, kwaa?")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EOh! \x0E\x03\x01\x00Link!\n\n\n\n\x0E\x01\x09\x04\x06\x03Le <b<dragon d'eau>> a provoqué ce déluge?\nKwaa! Elle s'est fâchée contre les\nmonstres qui ravageaient la forêt?\n\n\x0E\x01\x09\x04\x01\x0CLa forêt va rester comme ça pendant\nun petit bout de temps. Kwaa...")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x04\x00De l'eau s'est brusquement mise à\ncouler de la <r<base du grand arbre<pling> >>\nderrière moi et la forêt s'est retrouvée\ninondée.\n\x0E\x01\x09\x04\x01\x06Je trouve que ça a son charme.\nHohoho!")
          		  case 1:
/*< 47>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 13), ('param3', 31)])
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EOoh! On se connaît, non? Tu es.~~~.~~~.\x0E\x01\x04\x02\x14\nKwaa. Je ne me souviens pas t'avoir\ndemandé ton nom.\n\n\x0E\x01\x09\x04\x00\x03...\x0E\x01\x04\x02\x19 Hmm... Link?\nC'est un drôle de nom, ça! Kwa!\n\n\n\x0E\x01\x09\x04\x00\x00Et qu'est\x2010ce que je peux faire\npour toi? Ka-kwa?\n[1]Cette eau...[2]La forêt...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x02Kwaa, tu as remarqué?\n\n\n\n\x0E\x01\x09\x04\x04\x00De l'eau s'est brusquement mise à\ncouler de la <r<base du grand arbre<pling> >>\nderrière moi et la forêt s'est retrouvée\ninondée.\n\x0E\x01\x09\x04\x00\x03Je ne sais pas ce qui a provoqué ça,\nmais au moins, ça va chasser les\nmonstres. Bon débarras. Kwa.")
/*< 32>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 165), ('param3', 6)])
/*<165>*/ 				scene_flags[3 'Flooded Faron Woods'][27 /* 0x2 08 */] = true;
          			  case 1:
          				goto flw_162
          			}
          		}
          	}
          }

          void entrypoint_204_22() {
/*< 65>*/ 	start()
/*< 67>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Retourne vite voir le <b<dragon d'eau>>,\nglou!")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Si tu n'attrapes pas toutes les fironotes\nd'un même groupe <r<l'une à la suite de\nl'autre>>, elles s'enfuiront de la \npartition, glou.\nPour toutes les attraper d'un\ncoup, <r<aspire\x2010les >>en créant un\ncourant avec un<g< tourbillon>>, glou.")
          				  case 1:
/*< 80>*/ 					printf(/* textboxtype: 1, unk: 0 */ "La forêt est tout inondée, glou!")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 66), ('param3', 31)])
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Tu cherches les fironotes, glou?\n[1]Oui[2]Non")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Je vais te donner un conseil, glou.\n\n\n\nSi tu n'attrapes pas toutes les\nfironotes d'un même groupe\n<r<l'une à la suite de l'autre>>, elles\ns'enfuiront de la partition, glou.\nPour toutes les attraper d'un\ncoup, <r<aspire\x2010les >>en créant un\ncourant avec un<g< tourbillon>>, glou.\n\nTout est question de...\n\x0E\x01\x04\x02\x1Edétermination, glou!")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Ah bon, glou... Excuse-moi, glou.")
          			}
          		}
          	}
          }

          void entrypoint_204_06() {
/*< 16>*/ 	start()
/*< 19>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 21>*/ 		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
/*<182>*/ 		story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = false;
/*<160>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = false;
/*< 36>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 37>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 38>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          				flw_34:
/*< 34>*/ 				changeScene(7, 0) // 
          			  case 1:
          				goto flw_34
          			}
          		  case 1:
          			goto flw_34
          		}
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x06Si tu veux que je reconnaisse ta valeur,\nrassemble vite les <r<fironotes>>.")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Retourne vite voir le <b<dragon d'eau>>,\nglou!")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Si tu n'attrapes pas toutes les fironotes\nd'une même couleur <r<l'une à la suite de\nl'autre>>, elles s'enfuiront de la\npartition, glou.\nMais garde ton calme, glou.")
          				  case 1:
/*<113>*/ 					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 114), ('param3', 31)])
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_112
          		}
          	}
          }

          void entrypoint_204_24() {
/*< 90>*/ 	start()
/*< 91>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Retourne vite voir le <b<dragon d'eau>>,\nglou!")
          	  case 1:
/*< 93>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 95>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_96:
/*< 96>*/ 				switch (scene_flags[24 /* 0x2 01 */]) {
          				  case 0:
/*<196>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
          						flw_98:
/*< 98>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Les <b<poissons enragés>> sont revenus,\nglou! Nage qui peut, glou!\n\n\nIls viendront pas nous attaquer\nsi on se réfugie <r<dans les\nprofondeurs>>, glou!")
          					  case 1:
/*<152>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 197), ('param3', 31)])
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0 */ "Ils font peur ces gros poissons,\nà foncer sur tout ce qui bouge, glou!\nAu moins, pour le moment, il n'y en a\npas dans les parages, glou.")
          				}
          			  case 1:
/*< 94>*/ 				printf(/* textboxtype: 1, unk: 0 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_96
          		}
          	}
          }

          void entrypoint_204_07() {
/*<153>*/ 	start()
/*<154>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 155), ('param3', 47)])
/*<155>*/ 	set_camera(4, 0)
/*<156>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 15), ('next', 158), ('param3', 48)])
/*<158>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 157), ('param3', 6)])
/*<157>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x0EKwaa, Link!\nM'entends-tu?\n\n\nJe viens d'avoir une idée!\nViens me voir, que je t'explique!")
/*<159>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', -1), ('param3', 42)])
          }

