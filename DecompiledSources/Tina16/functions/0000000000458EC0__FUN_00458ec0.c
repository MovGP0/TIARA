/* Ghidra address: 00458ec0 */
/* Ghidra symbol: FUN_00458ec0 */


undefined8
FUN_00458ec0(undefined8 param_1,longlong param_2,int param_3,longlong param_4,int param_5)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 1;
  param_5 = param_5 + 1;
  if (param_3 + 1 < param_5) {
    uVar1 = 0;
  }
  else {
    iVar2 = 1;
    if (0 < param_5) {
      do {
        if (*(char *)(param_2 + (iVar2 + -1)) != *(char *)(param_4 + (iVar2 + -1))) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  return uVar1;
}

