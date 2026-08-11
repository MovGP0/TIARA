/* Ghidra address: 0137a2e0 */
/* Ghidra symbol: FUN_0137a2e0 */


void FUN_0137a2e0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00e19a70(param_2);
  uVar1 = FUN_00e19ae0();
  *(uint *)(param_1 + 0xfc) = uVar1 & 0xff;
  return;
}

