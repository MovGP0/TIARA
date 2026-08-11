/* Ghidra address: 00f40550 */
/* Ghidra symbol: FUN_00f40550 */


void FUN_00f40550(longlong param_1,longlong param_2)

{
  int local_20;
  int local_1c;
  
  FUN_00c596a0(param_1,param_2);
  local_1c = *(int *)(param_1 + 0x98);
  local_20 = *(int *)(param_1 + 0x9c);
  FUN_00f40430(param_1,&local_1c,&local_20);
  if ((local_1c != *(int *)(param_1 + 0x98)) || (local_20 != *(int *)(param_1 + 0x9c))) {
    FUN_00c59540(param_1,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),local_1c,
                 local_20);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}

