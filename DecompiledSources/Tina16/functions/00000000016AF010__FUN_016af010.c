/* Ghidra address: 016af010 */
/* Ghidra symbol: FUN_016af010 */


undefined4 FUN_016af010(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 4);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (*(int *)(param_1 + 0x24) + -1 < *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return uVar1;
}

