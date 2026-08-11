/* Ghidra address: 0137a620 */
/* Ghidra symbol: FUN_0137a620 */


void FUN_0137a620(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00e1a490(param_2);
  uVar1 = FUN_00e1a500();
  *(uint *)(param_1 + 0x108) = uVar1 & 0xff;
  return;
}

