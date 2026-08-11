/* Ghidra address: 014b49f0 */
/* Ghidra symbol: FUN_014b49f0 */


void FUN_014b49f0(longlong param_1,char param_2)

{
  int iVar1;
  
  if (param_2 != *(char *)(param_1 + 0x896)) {
    *(char *)(param_1 + 0x896) = param_2;
    if (param_2 == '\0') {
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x6d0),0);
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x6d8),0);
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x6e0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f0),0);
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x7f0) + 0x98) + 2;
      FUN_0064cb30(*(longlong *)(param_1 + 0x7f8),
                   *(int *)(*(longlong *)(param_1 + 0x7f8) + 0x90) - iVar1);
      FUN_0064cb30(*(longlong *)(param_1 + 0x800),
                   *(int *)(*(longlong *)(param_1 + 0x800) + 0x90) - iVar1);
      FUN_0064cb30(*(longlong *)(param_1 + 0x808),
                   *(int *)(*(longlong *)(param_1 + 0x808) + 0x90) - iVar1);
      FUN_0064cb30(*(longlong *)(param_1 + 0x810),
                   *(int *)(*(longlong *)(param_1 + 0x810) + 0x90) - iVar1);
    }
    else {
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x6d0),1);
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x6d8),1);
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x6e0),1);
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x6e8),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f0),1);
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x7f0) + 0x98) + 2;
      FUN_0064cb30(*(longlong *)(param_1 + 0x7f8),
                   *(int *)(*(longlong *)(param_1 + 0x7f8) + 0x90) + iVar1);
      FUN_0064cb30(*(longlong *)(param_1 + 0x800),
                   *(int *)(*(longlong *)(param_1 + 0x800) + 0x90) + iVar1);
      FUN_0064cb30(*(longlong *)(param_1 + 0x808),
                   *(int *)(*(longlong *)(param_1 + 0x808) + 0x90) + iVar1);
      FUN_0064cb30(*(longlong *)(param_1 + 0x810),
                   *(int *)(*(longlong *)(param_1 + 0x810) + 0x90) + iVar1);
    }
  }
  return;
}

