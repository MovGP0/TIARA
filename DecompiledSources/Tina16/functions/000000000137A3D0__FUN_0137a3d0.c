/* Ghidra address: 0137a3d0 */
/* Ghidra symbol: FUN_0137a3d0 */


void FUN_0137a3d0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00e19e30(param_2);
  uVar1 = FUN_00e19ea0();
  *(uint *)(param_1 + 0x100) = uVar1 & 0xff;
  return;
}

