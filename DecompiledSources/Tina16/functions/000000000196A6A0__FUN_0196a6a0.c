/* Ghidra address: 0196a6a0 */
/* Ghidra symbol: FUN_0196a6a0 */


void FUN_0196a6a0(longlong param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)FUN_0196a360(param_1);
  iVar1 = FUN_007fd7d0(*(undefined8 *)(param_1 + 0x180));
  *(double *)(param_1 + 0x98) = (double)iVar1 / (double)fVar2;
  iVar1 = FUN_007fd800(*(undefined8 *)(param_1 + 0x180));
  *(double *)(param_1 + 0xa0) = (double)iVar1 / (double)fVar2;
  *(double *)(param_1 + 0xa8) =
       (double)*(int *)(*(longlong *)(param_1 + 0x180) + 0x98) / (double)fVar2;
  *(double *)(param_1 + 0xb0) =
       (double)*(int *)(*(longlong *)(param_1 + 0x180) + 0x9c) / (double)fVar2;
  return;
}

