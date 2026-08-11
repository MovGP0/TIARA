/* Ghidra address: 015a4190 */
/* Ghidra symbol: FUN_015a4190 */


int FUN_015a4190(longlong param_1)

{
  int local_18;
  
  FUN_015a3240(param_1,param_1 + 0xad,*(undefined4 *)(param_1 + 0xb39));
  FUN_015a3240(param_1,param_1 + 0x9a1,*(undefined4 *)(param_1 + 0xb4d));
  FUN_015a2cf0(param_1,param_1 + 0xb59);
  local_18 = 0x12;
  while ((2 < local_18 &&
         (*(short *)(param_1 + 0xa97 + (ulonglong)(byte)(&DAT_01f69640)[local_18] * 4) == 0))) {
    local_18 = local_18 + -1;
  }
  *(int *)(param_1 + 0x16de) = (local_18 + 1) * 3 + 0xe + *(int *)(param_1 + 0x16de);
  return local_18;
}

