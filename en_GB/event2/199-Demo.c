          void entrypoint_199_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x06\x02\x1CDSo...how do I look?\x0E\x01\x04\x02\x1E\n[1]Great! [2]Uh...[3]Nice...costume.")
/*<  2>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_01() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 1 */ "I can't imagine what could've happened\nto him. Do you think his tiny brain got\nconfused by all the clouds and got lost?\x0E\x01\x04\x02\x1E\n[1]Bring it on.[2]Give him back![3]Nice hair.")
/*<  8>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_02() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 1 */ "What we've seen here today defies\nexplanation, but it is only the start of\nyour journey. Please, see it through\nand prove the legends true.\n[1]OK![2]No way.[3]It's so much...")
/*<  5>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_71() {
/*< 12>*/ 	start()
/*< 13>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 14), ('param3', 58)])
/*< 14>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 4), ('next', 21), ('param3', 56)])
          	flw_21:
/*< 21>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_199_03() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 1 */ "\x0E\x01\x06\x02\xFECDYou...~~~do know what happens at the\nend, right?\x0E\x01\x04\x02\x1E \n\n\n[1]Nope.[2]Uh-oh...[3]Sort of...")
/*< 11>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 37)])
          }

          void entrypoint_199_72() {
/*< 15>*/ 	start()
/*< 16>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 17), ('param3', 58)])
/*< 17>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 6), ('next', 21), ('param3', 56)])
          	goto flw_21
          }

          void entrypoint_199_73() {
/*< 18>*/ 	start()
/*< 19>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 20), ('param3', 58)])
/*< 20>*/ 	OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 8), ('next', 21), ('param3', 56)])
          	goto flw_21
          }

