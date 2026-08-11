/* Ghidra address: 017f3fb0 */
/* Ghidra symbol: FUN_017f3fb0 */


void FUN_017f3fb0(longlong param_1)

{
  FUN_00419260(param_1 + 0x18,&DAT_004066f0,1,
               (longlong)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10)));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  return;
}

