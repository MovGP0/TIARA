/* Ghidra address: 0074e3d0 */
/* Ghidra symbol: FUN_0074e3d0 */


void FUN_0074e3d0(longlong param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 0xa0) + 0x14);
  *puVar1 = *puVar1 | 0x10;
  *(uint *)(*(longlong *)(param_1 + 0xa0) + 0x3b4) = (uint)*(byte *)(param_1 + 0x90);
  FUN_0074e130(param_1,1);
  return;
}

