/* Ghidra address: 017f4370 */
/* Ghidra symbol: FUN_017f4370 */


void FUN_017f4370(longlong param_1)

{
  FUN_00419260(param_1 + 0x18,&DAT_017f3558,1,
               (longlong)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10)));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  return;
}

