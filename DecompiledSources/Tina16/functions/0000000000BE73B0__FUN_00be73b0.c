/* Ghidra address: 00be73b0 */
/* Ghidra symbol: FUN_00be73b0 */


int FUN_00be73b0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x42) == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar3 = param_2 + param_3 + -1;
    iVar1 = 0;
    if (param_2 <= iVar3) {
      iVar3 = (iVar3 - param_2) + 1;
      do {
        iVar1 = FUN_00be7500(param_1,param_2);
        iVar2 = iVar2 + iVar1;
        param_2 = param_2 + 1;
        iVar3 = iVar3 + -1;
        iVar1 = iVar2;
      } while (iVar3 != 0);
    }
  }
  return iVar1;
}

