/* Ghidra address: 00596830 */
/* Ghidra symbol: FUN_00596830 */


ulonglong FUN_00596830(undefined8 *param_1,short *param_2)

{
  ulonglong uVar1;
  short *psVar2;
  int iVar3;
  undefined1 auStack_28 [32];
  
  if (param_1[5] == 0) {
    psVar2 = (short *)*param_1;
    iVar3 = *(int *)(param_1 + 1);
    uVar1 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (*psVar2 == *param_2) {
          return uVar1;
        }
        psVar2 = psVar2 + 1;
        uVar1 = (ulonglong)((int)uVar1 + 1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_005967b0(auStack_28);
  }
  return uVar1;
}

