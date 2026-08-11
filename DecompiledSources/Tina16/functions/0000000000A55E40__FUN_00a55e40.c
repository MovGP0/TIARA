/* Ghidra address: 00a55e40 */
/* Ghidra symbol: FUN_00a55e40 */


void FUN_00a55e40(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [32];
  
  if (param_2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x78);
    if (0 < iVar1) {
      iVar2 = *(int *)(param_1 + 0x20);
      if (0 < iVar2) {
        if (iVar2 <= iVar1) {
          iVar1 = iVar2;
        }
        *(int *)(param_1 + 0x78) = iVar1;
      }
      iVar1 = *(int *)(param_1 + 0x18);
      if (0 < iVar1) {
        iVar2 = *(int *)(param_1 + 0x78);
        if (*(int *)(param_1 + 0x78) <= iVar1) {
          iVar2 = iVar1;
        }
        *(int *)(param_1 + 0x78) = iVar2;
      }
    }
    if (*(char *)(param_1 + 0x24) == '\x01') {
      FUN_00a55e00(auStack_28,param_1);
    }
  }
  else {
    FUN_00a55e00(auStack_28,param_1);
  }
  return;
}

