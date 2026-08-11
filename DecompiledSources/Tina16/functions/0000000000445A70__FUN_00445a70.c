/* Ghidra address: 00445a70 */
/* Ghidra symbol: FUN_00445a70 */


void FUN_00445a70(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  if (0 < iVar4) {
    if (*(char *)(param_1 + 0x98) == '\0') {
      iVar3 = 0;
      if (param_2 != 0) {
        iVar3 = *(int *)(param_2 + -4);
      }
      iVar1 = 1;
      if (0 < iVar3) {
        do {
          **(undefined1 **)(param_1 + 0x90) = *(undefined1 *)(param_2 + -2 + (longlong)iVar1 * 2);
          *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + 1;
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      uVar2 = FUN_00416740(param_2);
      FUN_00409a70(uVar2,*(undefined8 *)(param_1 + 0x90),(longlong)(iVar4 * 2));
      *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + (longlong)(iVar4 * 2);
    }
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar4;
  }
  return;
}

