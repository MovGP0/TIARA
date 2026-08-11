/* Ghidra address: 0112a2c0 */
/* Ghidra symbol: FUN_0112a2c0 */


void FUN_0112a2c0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) - *(short *)(param_2 + 8);
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) - *(short *)(param_2 + 10);
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) - *(short *)(param_2 + 0xc);
  *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) - *(short *)(param_2 + 0xe);
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) - *(short *)(param_2 + 0x10);
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) - *(short *)(param_2 + 0x12);
  iVar1 = *(int *)(param_2 + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - iVar1;
  FUN_0112a210(param_1,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
  return;
}

