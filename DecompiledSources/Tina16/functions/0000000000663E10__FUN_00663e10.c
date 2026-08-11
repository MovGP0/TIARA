/* Ghidra address: 00663e10 */
/* Ghidra symbol: FUN_00663e10 */


void FUN_00663e10(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != *(longlong *)(param_1 + 0x58)) &&
     (*(char *)(*(longlong *)(param_2 + 0x28) + 0x20) ==
      *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x28) + 0x20))) {
    iVar1 = FUN_00660cd0(param_2);
    iVar2 = FUN_00660cd0(*(undefined8 *)(param_1 + 0x58));
    if ((iVar2 < iVar1) &&
       ((*(longlong *)(param_2 + 8) == 0 ||
        ((*(longlong *)(param_2 + 8) != 0 && (*(char *)(*(longlong *)(param_2 + 8) + 0xa9) != '\0'))
        )))) {
      iVar1 = *(int *)(param_1 + 0x2c);
      iVar2 = FUN_00660cd0(param_2);
      if (iVar1 < iVar2) {
        iVar2 = iVar1;
      }
      *(int *)(param_1 + 0x2c) = iVar2;
    }
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_00663e10(param_1,*(longlong *)(param_2 + 0x18));
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_00663e10(param_1,*(longlong *)(param_2 + 0x10));
  }
  return;
}

