/* Ghidra address: 005bbff0 */
/* Ghidra symbol: FUN_005bbff0 */


longlong FUN_005bbff0(double param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 == '\0') {
    param_1 = (double)FUN_005c01a0(DAT_02011f30,param_1,0);
  }
  lVar1 = FUN_005bbc00(0x40d8f84000000000,param_1);
  if (param_1 < 25569.0) {
    lVar1 = -lVar1;
  }
  return lVar1;
}

