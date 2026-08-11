/* Ghidra address: 00596740 */
/* Ghidra symbol: FUN_00596740 */


ulonglong FUN_00596740(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_28 [32];
  
  if (param_1[5] == 0) {
    pcVar2 = (char *)*param_1;
    iVar3 = *(int *)(param_1 + 1);
    uVar1 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (*pcVar2 == *param_2) {
          return uVar1;
        }
        pcVar2 = pcVar2 + 1;
        uVar1 = (ulonglong)((int)uVar1 + 1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_005966c0(auStack_28);
  }
  return uVar1;
}

