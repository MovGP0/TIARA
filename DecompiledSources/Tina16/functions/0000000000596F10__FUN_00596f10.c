/* Ghidra address: 00596f10 */
/* Ghidra symbol: FUN_00596f10 */


ulonglong FUN_00596f10(longlong *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined1 auStack_28 [32];
  
  if (param_1[5] == 0) {
    piVar3 = (int *)(*param_1 + -4 + (longlong)(int)param_1[1] * 4);
    uVar1 = (int)param_1[1] - 1;
    if (-1 < (int)uVar1) {
      do {
        if (*piVar3 == *param_2) {
          return (ulonglong)uVar1;
        }
        piVar3 = piVar3 + -1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0xffffffff);
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00596ea0(auStack_28);
  }
  return uVar2;
}

