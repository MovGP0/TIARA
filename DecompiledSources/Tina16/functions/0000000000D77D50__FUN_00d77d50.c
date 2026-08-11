/* Ghidra address: 00d77d50 */
/* Ghidra symbol: FUN_00d77d50 */


void FUN_00d77d50(longlong param_1,int param_2)

{
  undefined1 local_28 [24];
  
  FUN_004238d0(local_28,*(int *)(param_1 + 0x7c),*(int *)(param_1 + 0x80),
               *(int *)(param_1 + 0x7c) + param_2,
               *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x88));
  FUN_00d77b90(param_1,local_28);
  return;
}

