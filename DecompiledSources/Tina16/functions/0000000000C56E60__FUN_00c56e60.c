/* Ghidra address: 00c56e60 */
/* Ghidra symbol: FUN_00c56e60 */


void FUN_00c56e60(longlong param_1,byte param_2)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x50c) != param_2) {
    *(byte *)(param_1 + 0x50c) = param_2;
    *(uint *)(param_1 + 0x504) = 0x10 >> (param_2 & 0x1f);
    iVar1 = 1 << (*(byte *)(param_1 + 0x50c) & 0x1f);
    *(int *)(param_1 + 0x508) = iVar1;
    FUN_00c56f60(param_1,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
  }
  return;
}

