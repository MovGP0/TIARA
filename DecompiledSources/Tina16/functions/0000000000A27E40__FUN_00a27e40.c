/* Ghidra address: 00a27e40 */
/* Ghidra symbol: FUN_00a27e40 */


undefined8 FUN_00a27e40(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00414480(param_1);
  iVar1 = FUN_004170c0(&DAT_00a27f0c,param_2,1);
  if (iVar1 < 1) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + -4);
    }
  }
  else {
    iVar1 = iVar1 + -1;
  }
  iVar2 = FUN_004170c0(&DAT_00a27f1c,param_2,1);
  if ((0 < iVar2) && (iVar2 < iVar1)) {
    iVar1 = iVar2 + -1;
  }
  iVar2 = iVar1 + -5;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (iVar2 <= iVar1) {
    iVar3 = (iVar2 - iVar1) + -1;
    iVar2 = iVar1;
    do {
      if (*(short *)(param_2 + -2 + (longlong)iVar2 * 2) == 0x2e) {
        FUN_00416dc0(param_1,param_2,iVar2 + 1,iVar1 - iVar2);
        return param_1;
      }
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
  }
  return param_1;
}

