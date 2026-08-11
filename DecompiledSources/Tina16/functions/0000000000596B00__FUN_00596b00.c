/* Ghidra address: 00596b00 */
/* Ghidra symbol: FUN_00596b00 */


ulonglong FUN_00596b00(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_28 [32];
  
  if (param_1[5] == 0) {
    plVar2 = (longlong *)*param_1;
    iVar3 = *(int *)(param_1 + 1);
    uVar1 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (*plVar2 == *param_2) {
          return uVar1;
        }
        plVar2 = plVar2 + 1;
        uVar1 = (ulonglong)((int)uVar1 + 1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_00596a80(auStack_28);
  }
  return uVar1;
}

