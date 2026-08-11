/* Ghidra address: 00596e40 */
/* Ghidra symbol: FUN_00596e40 */


ulonglong FUN_00596e40(longlong *param_1,short *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  short *psVar3;
  undefined1 auStack_28 [32];
  
  if (param_1[5] == 0) {
    psVar3 = (short *)(*param_1 + -2 + (longlong)(int)param_1[1] * 2);
    uVar1 = (int)param_1[1] - 1;
    if (-1 < (int)uVar1) {
      do {
        if (*psVar3 == *param_2) {
          return (ulonglong)uVar1;
        }
        psVar3 = psVar3 + -1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0xffffffff);
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_00596dd0(auStack_28);
  }
  return uVar2;
}

