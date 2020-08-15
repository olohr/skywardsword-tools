          void entrypoint_202_04() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 7, unk: 0 */ "A gemstone shines deep within\nthe eye. Strike it to shut the\nmouth and dam the flow.")
          }

          void entrypoint_202_05() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Carved into the <r<great statue\n>>are inscriptions of gratitude.\nThey reveal the <r<secret order >>of\nthis temple.\nFirst the <r<back>>, then the <r<rear>>,\nthen the <r<back of the right hand>>,\nand finally the <r<back of the left\nhand>>.")
/*< 48>*/ 	story_flags[1195 /* us: 805A9B61 0x02, jp: 805ACDE1 0x02 */] = true;
          }

          void entrypoint_202_11() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 2, unk: 0 */ "Based on the patterns we have seen\nso far, I believe the <r<key >>mentioned on\nthe stone marker is the <r<key >>required\nto unlock the device ahead of us.")
          }

          void entrypoint_202_12() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 2, unk: 0 */ "")
          }

          void entrypoint_202_13() {
/*<  9>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x0BMaster, I have some important\ninformation that I am certain\nyou will want to hear. There is a\nlarge treasure chest in the area.\nThere is an 85% probability it\ncontains the <r<key >>that will open the \ndoor we observed at the top of the\nstone statue.")
          }

          void entrypoint_202_30() {
/*< 14>*/ 	start()
/*< 40>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1007), ('next', 17), ('param3', 24)])
/*< 17>*/ 	set_camera(1, 0)
/*< 28>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 13), ('next', 32), ('param3', 32)])
/*< 32>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 13), ('param2', -1), ('next', 38), ('param3', 16)])
/*< 38>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 1), ('next', 25), ('param3', 40)])
/*< 25>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3330), ('param2', 256), ('next', 18), ('param3', 13)])
/*< 18>*/ 	set_camera(2, 0)
/*< 36>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 33), ('param3', 6)])
/*< 33>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 13), ('next', 35), ('param3', 33)])
/*< 35>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 26), ('param3', 6)])
/*< 26>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3331), ('param2', 512), ('next', 15), ('param3', 13)])
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0 */ "You certainly are persistent.~~.~~.")
/*< 19>*/ 	set_camera(3, 0)
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0 */ "I'm terribly busy trying to find the\nclues that will help me revive the\ndemon king.")
/*< 20>*/ 	set_camera(4, 0)
/*< 30>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3334), ('param2', 512), ('next', 23), ('param3', 13)])
/*< 23>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 22), ('param3', 6)])
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0 */ "Your incessant buzzing around my\nhead like some irksome gadfly\nwhen I'm THIS busy is... Well, it's\nmaking me very disagreeable.")
/*< 34>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 13), ('next', 37), ('param3', 33)])
/*< 37>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 27), ('param3', 6)])
/*< 27>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3332), ('param2', 768), ('next', 39), ('param3', 13)])
/*< 39>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 21), ('param3', 6)])
/*< 21>*/ 	set_camera(5, 0)
/*< 29>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 63), ('next', 31), ('param3', 6)])
/*< 31>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 41), ('param3', 6)])
/*< 41>*/ 	loadzone_temp_flags[18 /* 0x3 04 */] = true;
/*< 24>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', -1), ('param3', 42)])
          }

          void entrypoint_202_14() {
/*< 10>*/ 	start()
/*< 42>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 13), ('param3', 46)])
/*< 13>*/ 	printf(/* textboxtype: 2, unk: 0 */ "\x0E\x01\x12\x04\x00\x01Master, I have taken the liberty to\nconfirm that a door is located at\nthe uppermost section of this statue.\nThe lock is unfamiliar to me.")
/*< 43>*/ 	scene_flags[12 'Faron: Ancient Cistern'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_202_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Strike the <r<gemstones pointing in\nfour directions >>wisely. The way\nwill only open for one who knows\nthe temple's <r<secret order>>.")
          }

          void entrypoint_202_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Return the stone giant to its\noriginal form, and descend\nbelow the earth again along\nthe thread.\nThere you will find the <r<key >>to\nthe path ahead.")
          }

          void entrypoint_202_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 7, unk: 0 */ "Look for the <r<key >>that lies\nbeneath the earth.")
          }

