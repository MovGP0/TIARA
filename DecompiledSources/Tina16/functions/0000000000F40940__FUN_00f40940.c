/* Ghidra address: 00f40940 */
/* Ghidra symbol: FUN_00f40940 */


void FUN_00f40940(longlong param_1)

{
  int local_20;
  int local_1c [3];
  
  FUN_00c59a30(param_1);
  local_1c[0] = *(int *)(param_1 + 0x98);
  local_20 = *(int *)(param_1 + 0x9c);
  FUN_00f40430(param_1,local_1c,&local_20);
  if ((local_1c[0] != *(int *)(param_1 + 0x98)) || (local_20 != *(int *)(param_1 + 0x9c))) {
    FUN_00c59540(param_1,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),local_1c[0]
                 ,local_20);
  }
  return;
}

