/* Ghidra address: 00442a40 */
/* Ghidra symbol: FUN_00442a40 */


longlong FUN_00442a40(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    iVar2 = 0;
    if (-1 < param_3 - param_4) {
      iVar3 = (param_3 - param_4) + 1;
      do {
        if ((*(short *)(param_1 + (longlong)iVar2 * 2) != 0) &&
           (iVar1 = FUN_00442880(param_1 + iVar2 * 2,param_2,param_4), iVar1 == 0)) {
          return param_1 + iVar2 * 2;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return 0;
}

