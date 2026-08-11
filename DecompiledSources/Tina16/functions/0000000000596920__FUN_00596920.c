/* Ghidra address: 00596920 */
/* Ghidra symbol: FUN_00596920 */


ulonglong FUN_00596920(undefined8 *param_1,int *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_28 [32];
  
  if (param_1[5] == 0) {
    piVar2 = (int *)*param_1;
    iVar3 = *(int *)(param_1 + 1);
    uVar1 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (*piVar2 == *param_2) {
          return uVar1;
        }
        piVar2 = piVar2 + 1;
        uVar1 = (ulonglong)((int)uVar1 + 1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_005968a0(auStack_28);
  }
  return uVar1;
}

