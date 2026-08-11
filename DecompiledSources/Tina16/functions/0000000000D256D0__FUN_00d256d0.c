/* Ghidra address: 00d256d0 */
/* Ghidra symbol: FUN_00d256d0 */


void FUN_00d256d0(longlong param_1)

{
  uint uVar1;
  
  FUN_00d21900(param_1);
  uVar1 = *(uint *)(param_1 + 0x48) >> 1;
  FUN_00409a70(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar1,*(longlong *)(param_1 + 0x68),
               uVar1);
  return;
}

