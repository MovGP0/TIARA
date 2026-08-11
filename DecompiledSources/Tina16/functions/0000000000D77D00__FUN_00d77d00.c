/* Ghidra address: 00d77d00 */
/* Ghidra symbol: FUN_00d77d00 */


void FUN_00d77d00(longlong param_1,int param_2)

{
  undefined1 local_28 [24];
  
  FUN_004238d0(local_28,*(int *)(param_1 + 0x7c),*(int *)(param_1 + 0x80),
               *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x84),
               *(int *)(param_1 + 0x80) + param_2);
  FUN_00d77b90(param_1,local_28);
  return;
}

