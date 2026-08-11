/* Ghidra address: 006d8290 */
/* Ghidra symbol: FUN_006d8290 */


int FUN_006d8290(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (-1 < param_2) {
    iVar3 = param_2 + 1;
    do {
      lVar1 = FUN_006d7610(param_1,iVar2);
      if (*(char *)(lVar1 + 0x4a0) == '\0') {
        param_2 = param_2 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_2;
}

