/* Ghidra address: 00c59a30 */
/* Ghidra symbol: FUN_00c59a30 */


void FUN_00c59a30(longlong param_1)

{
  int local_20;
  int local_1c [3];
  
  FUN_00651da0(param_1);
  local_1c[0] = *(int *)(param_1 + 0x98);
  local_20 = *(int *)(param_1 + 0x9c);
  FUN_00c59480(param_1,local_1c,&local_20);
  if ((local_1c[0] != *(int *)(param_1 + 0x98)) || (local_20 != *(int *)(param_1 + 0x9c))) {
    FUN_0065aa90(param_1,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),local_1c[0]
                 ,local_20);
  }
  return;
}

