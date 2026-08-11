/* Ghidra address: 00bd1070 */
/* Ghidra symbol: FUN_00bd1070 */


void FUN_00bd1070(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x24) < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    while (*(int *)(param_1 + 0x24) < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
      uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x18),0);
      FUN_00410f20(uVar1);
      FUN_004ae870(*(undefined8 *)(param_1 + 0x18));
    }
  }
  return;
}

