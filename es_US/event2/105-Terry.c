          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 73), ('param3', 12)])
/*< 73>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 84), ('param3', 13)])
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Eso es un <y<medallón de vida>>!\n¡Llévatelo y verás los efectos taaan\ninteresantes que tiene, amiiigo!\n\n¿Quieres saber qué efectos son esos?\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n\n¡Pues lo cierto es que no lo sé! ¿Por qué\nno lo averiguas tú mismo, amigo?\n¡Seguro que son geniales!\nY es una ganga increíble... ¡solo\ncuesta <r<800 rupias>>! ¿Qué me dices?\n\n[1]Me lo llevo[2-]No, gracias")
          		flw_13:
/*< 13>*/ 		switch (choice(2)) {
          		  case 0:
/*< 15>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 26)])
          		  case 1:
/*< 14>*/ 			entrypoint_105_08();
          		}
          	  case 1:
/*< 83>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Eso es un <y<medallón de vida>>!\n¡Llévatelo y verás los efectos taaan\ninteresantes que tiene, amiiigo!\n\n¿Quieres saber qué efectos son esos?\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n\n¡Pues lo cierto es que no lo sé! ¿Por qué\nno lo averiguas tú mismo, amigo?\n¡Seguro que son geniales!\nAdemás te lo dejo a mitad de\nprecio. Es taaan barato... Son solo\n<r<400 rupias>>. ¿Qué, lo quieres?\n[1]Me lo llevo[2-]No, gracias")
          			goto flw_13
          		  case 1:
          			goto flw_41
          		}
          	}
          }

          void entrypoint_105_01() {
          	start()
/*< 64>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 66>*/ 		switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          		  case 0:
/*<168>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 67), ('param3', 13)])
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Heeey! ¡Hola! ¡Qué genial verte\nde nuevo por mi tienda, amiiigo!\nPasa, pasa y llévate lo que más\nte guste, ¡no seas tímido!")
          		  case 1:
/*<167>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 65), ('param3', 13)])
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Oye! ¡Tú eres el mismo que encontró\nmi <b<escarabero rex>>! ¡Eres genial!\nNo sé cómo darte las gracias...\n\nPara que veas lo agradable que soy,\npuedes tomar cualquier artículo y te\nlo dejaré a mitad de precio.")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 164), ('param3', 31)])
/*<164>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 162), ('param3', 13)])
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Bienvenido a mi tienda, amiiigo!\n\n\n\n¡¿Eh?! ¿Ha habido suerte con la\nbúsqueda? Cuidado que, si me\nparo ahora a hablar del tema,\npuede que nos demos un golpe...\n¿Por qué no lo dejamos mejor\npara la noche, eh? Puedes dormir\nun buen rato en esa cama\nhasta que se haga de noche.")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 165), ('param3', 13)])
/*<165>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¡Hooola, amiiigo! ¡¿Qué tal estás?!\n¡Bienvenido a la tienda de Terry!\n\n\n¡Oye, tienes que ayudarme, por\nfavor! ¡Mi pobre <b<escarabero rex >>se ha\nperdido! Estoy taaan preocupado...\n\n¡No me lo puedo quitar de la cabeza!\n¡Ha debido de caerse mientras estaba\npedaleando! ¡Qué tragedia!")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (loadzone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0 */ "Ejem... ¿Quieres saber por qué voy\nmontado en esta bici?\n\n[1]¡Cuéntame![2-]No me\nimporta")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x07\x04\x00\x15¡Amiiigo, eres lo máximo!\n¡Se nota que tienes interés por las cosas\nde la vida!\n\nCon el movimiento de la bici genero\nelectricidad para mover toda esta\ntienda. ¡Es sano a la par que <b<ecológico>>!\n\nAunque ahora, contigo a bordo, hay\nmás peso y tengo que hacer más\nesfuerzo pedaleando...")
          							flw_27:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 0 */ "¡Ooh\x0E\x01\x06\x02\xFECD!...\x0E\x01\x06\x02Í ¡Perdona, amiiigo! \nPuedes echar un ojo a la mercancía \ntranquilamente. ¡Tengo montones\nde cosas impresionantes!")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							loadzone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1558), ('next', 28), ('param3', 13)])
/*< 28>*/ 							printf(/* textboxtype: 1, unk: 0 */ "Amiiigo, ¿entonces para qué me\ninterrumpes?\n\n\nContigo a bordo esto pesa más y tengo\nque hacer más esfuerzo pedaleando...\n")
/*< 88>*/ 							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -256), ('next', 27), ('param3', 13)])
          							goto flw_27
          						}
          					  case 1:
/*<185>*/ 						switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          						  case 0:
/*<184>*/ 							switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          							  case 0:
/*<191>*/ 								OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2838), ('next', 188), ('param3', 13)])
/*<188>*/ 								switch (loadzone_temp_flags[12 /* 0x0 10 */]) {
          								  case 0:
/*<190>*/ 									printf(/* textboxtype: 1, unk: 0 */ "Amiiigo, si no te importa, mejor\nhablamos de eso por la noche.\n\n\nTú échate a dormir en esa cama\nque tengo allí. ¡Con toda confianza! \nEstás en tu casa.")
          								  case 1:
/*<186>*/ 									OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 187), ('param3', 31)])
/*<187>*/ 									printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xB00Amiiigo\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n\nVamos, pasa,\x0E\x01\x04\x02\x14 pasa\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n.\x0E\x01\x04\x02\n\n\n\n¿Qué?\x0E\x01\x04\x02\x14... ¿Dices que tengo mala cara?\n\n\n\nPor más que trate de disimular,\ntú me conoces, ¿eh? No he podido\nengañarte.\n\nPero ahora mismo estoy ocupado.\n¿Por qué no hablamos por la noche?\n¡Échate un rato en esa cama y\ndescansa un poco!")
/*<189>*/ 									loadzone_temp_flags[12 /* 0x0 10 */] = true;
          								}
          							  case 1:
          								goto flw_1
          							}
          						  case 1:
          							goto flw_1
          						}
          					}
          				  case 1:
          					goto flw_1
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_36() {
/*<135>*/ 	start()
/*<137>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 138), ('param3', 12)])
/*<138>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 149), ('param3', 13)])
/*<149>*/ 	loadzone_temp_flags[11 /* 0x0 08 */] = true;
/*<140>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_145:
/*<145>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Con eso podrás llevar un objeto\nmás en tu <y<alforja de aventurero>>!\n\n\n¡Es de lo más práctico para irse\npor ahí buscando aventuras! \nY solo por <r<600>><r< rupias>>, amiiigo...\n\n¿Dices que ha subido de precio?\n¡Claro que no! ¡Qué cosas dices!\nSerán imaginaciones tuyas...\n\nBueno, ¿lo quieres? Son <r<600>><r< rupias>>.\n[1]Me lo llevo[2-]Mejor no")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Con eso podrás llevar un objeto\nmás en tu <y<alforja de aventurero>>!\n\n\n¡Es de lo más práctico para irse\npor ahí buscando aventuras! \nY solo por <r<300>><r< rupias>>, amiiigo...\n\nNormalmente cuesta <r<600 rupias>>,\nasí que te estoy ofreciendo una oferta\nincreíble. ¡Deberías aprovechar esta\nocasión única!\nBueno, ¿lo quieres? Son <r<300>><r< rupias>>.\n[1]Me lo llevo[2-]Mejor no")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x07\x04\x00\x15¡Vaaaya, un cliente!...\nÚltimamente casi nadie viene por aquí.\n¡Se me hace taaan raro tener clientes!\n\nMi tienda volante tiene todo lo que\nnecesitas, ¡es súper genial!\nNo seas tímido, mira lo que quieras.\n\nAunque estaría muy bien que además\nde mirar compraras alguna cosilla...\n¡Tú ya me entiendes, amigo!")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 142), ('param3', 12)])
/*<142>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 144), ('param3', 13)])
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Con eso tendrás sitio para un objeto\nmás en tu <y<alforja de aventurero>>.\n¡Aunque reconozco que es caríiisima,\namigo!\nUn consejo de experto: piensa bien\nsi realmente lo necesitas...\nSon nada menos que <r<1200 rupias>>.\n¿Qué dices?\n[1]Me lo llevo[2-]Mejor no")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Con eso tendrás sitio para un objeto\nmás en tu <y<alforja de aventurero>>.\n¡Aunque reconozco que es caríiisima,\namigo!\nSu precio normal es <r<1200 rupias>>,\npero a ti te lo dejo por <r<600 rupias>>.\n¡Porque eres genial!\n\nUn consejo de experto: piensa bien\nsi realmente lo necesitas...\n[1]Me lo llevo[2-]Mejor no")
          			goto flw_13
          		  case 1:
          			goto flw_147
          		}
          	}
          }

          void entrypoint_105_38() {
/*<177>*/ 	start()
/*<178>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 179), ('param3', 12)])
/*<179>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 181), ('param3', 13)])
/*<181>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_182:
/*<182>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Eso es un <y<medallón de insecto>>.\nCon él, las áreas donde haya insectos\naparecerán señaladas en el mapa.\n¡Es genial!\n¡Amiiigo, es taaan útil!... Es caro,\npero si te gusta eso de cazar\ninsectos no deberías salir sin él.\n\nTe lo vendo por <r<1000 rupias>>.\n¿Qué me dices? Te gusta, ¿eh?\n[1]Me lo llevo[2-]No, gracias")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Eso es un <y<medallón de insecto>>.\nCon él, las áreas donde haya insectos\naparecerán señaladas en el mapa.\n¡Es genial!\n¡Amiiigo, es taaan útil!... Es caro,\npero si te gusta eso de cazar\ninsectos no deberías salir sin él.\n\nNormalmente cuesta <r<1000 rupias>>,\npero hoy te lo vendo por <r<500 rupias>>.\n¿Qué me dices? Te gusta, ¿eh?\n[1]Me lo llevo[2-]No, gracias")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 4), ('param3', 13)])
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡Noooo! ¡Pero amiiigo, tienes la <r<alforja>>\nsúper llenísima de cosas! \n¡No puedes llevar más cosas!\n\nY por lo que parece la consigna\ntambién está completamente llena...\n¡Eso sí que es vivir al máximo!\n\nAnda, saca cosas de la <r<alforja >>o\nde la <r<consigna >>y después vuelve\npor aquí, amigo.")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 12), ('param2', 1558), ('next', 35), ('param3', 13)])
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¿Cómo? ¡Amiiigo! ¡Si no tienes rupias!\nQuerer reírse de un amigo está muy\nfeo... Muy feo, sí señor...")
/*<151>*/ 		loadzone_temp_flags[10 /* 0x0 04 */] = false;
/*<152>*/ 		loadzone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<169>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_5
          		  case 1:
/*< 32>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_5
          		}
          	}
          }

          void entrypoint_105_07() {
/*<  6>*/ 	start()
/*< 90>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 18), ('param2', 1304), ('next', 7), ('param3', 13)])
/*<  7>*/ 	switch (random(2)) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Muchísimas gracias, amiiigo!\nMe has dado justo la motivación que\nnecesitaba para seguir pedaleando.\n¡Eres súper genial!")
          		flw_33:
/*< 33>*/ 		loadzone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Amiiigo, no te arrepentirás de\nla compra que acabas de hacer!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 37), ('param3', 13)])
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Oh! Bueno, pero deberías mirar mis\notros artículos, amigo. Hazme caso.")
/*<153>*/ 		loadzone_temp_flags[10 /* 0x0 04 */] = false;
/*<154>*/ 		loadzone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<170>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_11
          		  case 1:
/*< 36>*/ 			loadzone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_11
          		}
          	}
          }

          void entrypoint_105_09() {
/*< 29>*/ 	start()
/*< 91>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 22), ('next', 30), ('param3', 13)])
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡Espera, amiiigo!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 28), ('next', 31), ('param3', 13)])
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 2 */ "¡¿Sabes cuánto pesas?!\nContigo aquí tengo que pedalear\nmuchísimo más, amiiigo...\n\n¿Y ahora te vas sin comprar nada?\n¡Lárgate de aquí, amigo!")
/*<201>*/ 	scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
          }

          void entrypoint_105_11() {
/*<155>*/ 	start()
/*< 93>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 94>*/ 		story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */] = true;
          		flw_157:
/*<157>*/ 		switch (loadzone_temp_flags[10 /* 0x0 04 */]) {
          		  case 0:
/*<158>*/ 			story_flags[746 /* us: 805A9B29 0x04, jp: 805ACDA9 0x04 */] = true;
          			flw_159:
/*<159>*/ 			switch (loadzone_temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<160>*/ 				story_flags[747 /* us: 805A9B29 0x08, jp: 805ACDA9 0x08 */] = true;
          			  case 1:
          			}
          		  case 1:
          			goto flw_159
          		}
          	  case 1:
          		goto flw_157
          	}
          }

          void entrypoint_105_30() {
/*< 12>*/ 	start()
/*<171>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 31), ('next', 18), ('param3', 13)])
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0 */ "¡Lo siento, amiiigo! Ese cartel significa\nque el artículo está agotado.\n\n\nEl negocio va cada vez mejor, y todo\ngracias a ti. ¡Eres genial!")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 49), ('param3', 12)])
/*< 49>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 150), ('param3', 13)])
/*<150>*/ 	loadzone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0 */ "¡Con eso podrás llevar un objeto\nmás en tu <y<alforja de aventurero>>!\n\n\n¡Es de lo más práctico para irse\npor ahí buscando aventuras!\nSolo cuesta <r<300 rupias>>.\n[1]Me lo llevo[2-]Mejor no")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf(/* textboxtype: 1, unk: 0 */ "¡Con eso podrás llevar un objeto\nmás en tu <y<alforja de aventurero>>!\n\n\n¡Es de lo más práctico para irse\npor ahí buscando aventuras! Y ahora\nestá a mitad de precio, <r<150 rupias>>.\n[1]Me lo llevo[2-]Mejor no")
          			goto flw_13
          		  case 1:
          			goto flw_19
          		}
          	}
          }

          void entrypoint_105_32() {
/*< 17>*/ 	start()
/*< 44>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 70), ('param3', 12)])
/*< 70>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 76), ('param3', 13)])
/*< 76>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_20:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Está bien, ¿eh? Tienes buen gusto.\nLo encontré por aquí cerca, ¿sabes?\n¡Me pareció genial!\n\nSi te digo la verdad, no tengo idea\nde lo que es, ¡pero puede ser tuyo por\nsolo <r<1600 rupias>>! ¿Qué dices?\n[1]Me lo llevo[2-]No, gracias")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Está bien, ¿eh? Tienes buen gusto.\nLo encontré por aquí cerca, ¿sabes?\n¡Me pareció genial!\n\nSi te digo la verdad, no tengo idea\nde lo que es, ¡pero puede ser tuyo\npor solo <r<1600 rupias>>!\n\nNo, espera, que hoy lo dejo a mitad\nde precio. Te lo puedes llevar por solo\n<r<800 rupias>>. ¿Qué me dices, amigo?\n[1]Me lo llevo[2-]Mejor no")
          			goto flw_13
          		  case 1:
          			goto flw_20
          		}
          	}
          }

          void entrypoint_105_33() {
/*< 21>*/ 	start()
/*< 45>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 71), ('param3', 12)])
/*< 71>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 79), ('param3', 13)])
/*< 79>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_22:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Eso es un <y<zurrón suplementario>>.\n¡Amiiigo, no sabes lo útil que es!\n¡Es súper genial!\n\n¡Esta maravilla te permite guardar\n300 rupias más!\n\n\n¡Así no volverás a estar de mal humor\npor no poder llevar más dinero encima!\n\n\nDeberías comprarlo, en serio. Además,\nsolo cuesta <r<100 rupias>>! ¡Una ganga!\n¿Te animas a comprarlo?\n[1]Me lo llevo[2-]No, gracias")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0 */ "Eso es un <y<zurrón suplementario>>.\n¡Amiiigo, no sabes lo útil que es!\n¡Es súper genial!\n\n¡Esta maravilla te permite guardar\n300 rupias más!\n\n\n¡Así no volverás a estar de mal humor\npor no poder llevar más dinero encima!\n\n\nDeberías comprarlo, en serio. Además,\ncuesta <r<100 rupias>>, pero por ser tú te \nlo dejo en <r<50>><r<<r< <r<rupias>>. ¿Qué me dices?\n[1]Me lo llevo[2-]Mejor no")
          			goto flw_13
          		  case 1:
          			goto flw_22
          		}
          	}
          }

          void entrypoint_105_50() {
/*< 50>*/ 	start()
/*<175>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x18¡Amigo mío, muchas gracias!\n¡Esto no lo voy a olvidar en la vida!\n\n\n¡Ay, mi <b<escarabero rex >>precioso!\nA partir de ahora te voy a tener bien\nvigilado día y noche...")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x18¡Amigo mío, muchas gracias!\n¡Esto no lo voy a olvidar en la vida!\n\n\nPara que veas lo agradecido que te\nestoy, te vendo el artículo que quieras\nde mi tienda a mitad de precio.\n¡Puedes visitarme cuando quieras!")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 129), ('param3', 31)])
/*<129>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 130), ('param3', 47)])
/*<130>*/ 				OrderedDict([('type', 'type3'), ('subType', 2), ('param1', 1), ('param2', 356), ('next', 132), ('param3', 15)])
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 117), ('param3', 48)])
/*<117>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 16), ('param2', 538), ('next', 108), ('param3', 13)])
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0 */ "¿Qué pasa? ¿Eh?...\n¿Tienes algo para mí?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1A\x815¡¡Ah!! ¡¿Has encontrado a mi precioso\n<b<escarabero rex>>?! ¡¿En serio?!")
/*<120>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 127), ('param3', 47)])
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 31), ('param2', 3328), ('next', 123), ('param3', 13)])
/*<123>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 134), ('param3', 48)])
/*<134>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 50), ('next', 121), ('param3', 6)])
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xF00¡Es verdad, lo has encontrado!\n¡Amigo mío, muchas gracias!\n\n\n¡No se hable más! La próxima vez que\nvayas a mi tienda, te puedes llevar el\nartículo que quieras a mitad de precio.\n\n\x0E\x01\x09\x04\x00\x18¡Es mi forma de darte las gracias!")
/*<133>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 115), ('param3', 42)])
/*<115>*/ 				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 43)])
          			  case 1:
/*< 99>*/ 				switch (scene_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<111>*/ 					switch (loadzone_temp_flags[4 /* 0x1 10 */]) {
          					  case 0:
/*<113>*/ 						switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          						  case 0:
/*<198>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 114), ('param3', 31)])
/*<114>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1EPor favor, encuentra a mi precioso\n<b<escarabero rex>>.")
          						  case 1:
/*<203>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 112), ('param3', 31)])
/*<112>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1ESi tienes tiempo, ¿podrías ir a buscar\na mi precioso <b<escarabero rex>>?\n¡No sabes cuánto te lo agradecería!\n[1]¡Claro![2-]Resígnate")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x11\x220¡¿En serio?! ¡Te lo agradecería mucho!\n¡Serías mi mejor amigo!")
/*< 61>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x1D\x200Mi precioso <b<escarabero rex>>...\n¡Tienes que encontrarlo!\n\n\n\x0E\x01\x09\x04\x11\xB00¡Te lo pido por favor!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								loadzone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01!¡Para ti es fácil decirlo porque no\nte importa nada, pero yo no puedo\nolvidarlo así como así!")
/*<109>*/ 								loadzone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (loadzone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1ESi quieres volver a Neburia, basta con\nque te eches en la cama a dormir.")
          								flw_98:
/*< 98>*/ 								loadzone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 63), ('param3', 31)])
/*< 63>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\xB00¿Y?\n\n\n\n\x0E\x01\x09\x04\x1D\xB00¿Has encontrado a mi precioso\n<b<escarabero rex>>? Ay, lo extraño tanto...")
          										  case 1:
/*<197>*/ 											OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 56), ('param3', 31)])
/*< 56>*/ 											printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x01\x600¿Sabes? Estoy bastante preocupado...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Mi <b<escarabero rex>> ha desaparecido...\nIncluso he perdido su <r<jaula>>... \n\n\n\x0E\x01\x09\x04\x1D\xB00No me lo puedo creer, era un animalito\ntan especial...\n\n[1]Yo te lo\nbusco[2-]Solo era\nun insecto...")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\xC00Mmm\x0E\x01\x06\x02\xFBCD...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1EPor tu cara, veo que te interesa\nbastante, ¿eh?\n\n\n\x0E\x01\x09\x04\x1C\xA00Verás, este es un insecto muy poco\ncomún: un <b<escarabero rex>>.\n\n\n\x0E\x01\x09\x04\x1B\x500Es mi posesión más preciada...\nMi tesoro, por así decirlo.\n\n\nPodría pasarme todo el día mirándolo\ncomo un bobo...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x1E¡Oye amigo, veo que te has vuelto\na quedar dormido en mi cama!\nSupongo que estabas muy cansado...\n\n\x0E\x01\x09\x04\x00\xB00Yo también estoy cansadísimo\ndespués de tanto pedalear...\nContigo dentro, la tienda pesa mucho.\n\n\x0E\x01\x09\x04\x00\xC00¡No, no te preocupes, en serio!~~.~~.~~.~~\x0E\x01\x09\x04\x00\x200\nNo es para tanto, ya casi me\nhe acostumbrado...")
          							goto flw_98
          						}
          					}
          				  case 1:
/*<173>*/ 					switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          					  case 0:
/*<172>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*<174>*/ 							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 116), ('param3', 31)])
          							flw_116:
/*<116>*/ 							story_flags[283 /* us: 805A9AFB 0x20, jp: 805ACD7B 0x20 */] = true;
/*< 53>*/ 							printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x21EOh, ¿ya estás despierto...?\n\n\n\nTenías cara de estar durmiendo bien\na gusto, por eso no he querido\ndespertarte.\n\n\x0E\x01\x09\x04\x00\x500Aunque con don dormilón a bordo, \nla tienda pesaba mucho más, je, je... \n\n[1]¿Pero\nqué...?[2]¿Dónde\nestoy?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf(/* textboxtype: 1, unk: 0 */ "¿Eh? ¿Dices que hablo como una\npersona completamente distinta?...\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200No sé... Puede que sea cierto...\x0E\x01\x04\x02\x1E\nPero no importa. Tampoco hay\nque fijarse tanto en los detalles... ")
/*<103>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x200Esta es mi casa, más o menos.\nPor las noches siempre paro por aquí\na descansar.\n\n\x0E\x01\x09\x04\x00\x200El sitio no es gran cosa, pero está\nbien para relajarse, ¿no?\nPonte cómodo, estás en tu casa. \n\nLos neburís no vuelan de noche, así\nque no te preocupes. Mañana te\nllevaré de vuelta.\n\nSi quieres volver a Neburia, solo tienes\nque tumbarte en la cama. Échate a\ndormir y verás como enseguida llega\nun nuevo día.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf(/* textboxtype: 1, unk: 0 */ "\x0E\x01\x09\x04\x00\x200Esta es mi casa, más o menos.\nPor las noches siempre paro por aquí\na descansar.\n\n\x0E\x01\x09\x04\x00\x200El sitio no es gran cosa, pero está\nbien para relajarse, ¿no?\nPonte cómodo, estás en tu casa. \n\nLos neburís no vuelan de noche, así\nque no te preocupes. Mañana te\nllevaré de vuelta.\n\nSi quieres volver a Neburia, solo tienes\nque tumbarte en la cama. Échate a\ndormir y verás como enseguida llega\nun nuevo día.")
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0 */ "¿Eh? ¿Dices que hablo como una\npersona completamente distinta?...\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200No sé... Puede que sea cierto...\x0E\x01\x04\x02\x1E\nPero no importa. Tampoco hay\nque fijarse tanto en los detalles... ")
          								goto flw_97
          							}
          						  case 1:
          							goto flw_116
          						}
          					  case 1:
          						goto flw_116
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_34() {
/*< 39>*/ 	start()
/*< 46>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 72), ('param3', 12)])
/*< 72>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 21), ('next', 82), ('param3', 13)])
/*< 82>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_42:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0 */ "Eso es un <y<cazamariposas>>.\n¡Sirve para atrapar insectos de esos\ntan interesantes! ¡Es geniaaal!\n\nAquí no hay muchos, ¡pero seguro que\nen algún otro sitio podrás atraparlos\na montones!\n\n¡No dejes pasar esta oportunidad!\nSolo son <r<50 rupias>>. ¿Qué me dices?\n\n[1]Me lo llevo[2-]Mejor no")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0 */ "")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

