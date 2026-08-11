/* Ghidra address: 0137a5b0 */
/* Ghidra symbol: FUN_0137a5b0 */


void FUN_0137a5b0(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00e1a330(param_2);
  FUN_00e1a1b0(param_1 + 0xc0,param_1 + 0xcc);
  uVar1 = FUN_00e1a3a0();
  *(uint *)(param_1 + 0x104) = uVar1 & 0xff;
  return;
}

