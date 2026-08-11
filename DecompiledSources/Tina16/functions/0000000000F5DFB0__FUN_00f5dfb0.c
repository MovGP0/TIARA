/* Ghidra address: 00f5dfb0 */
/* Ghidra symbol: FUN_00f5dfb0 */


void FUN_00f5dfb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f5d280(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6d8),
                       *(undefined8 *)(param_1 + 0x6d0));
  FUN_0064cc50(param_1,*(int *)(param_1 + 0x9c) + iVar1);
  FUN_0064cf60(param_1,0x451);
  return;
}

