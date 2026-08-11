/* Ghidra address: 00619630 */
/* Ghidra symbol: FUN_00619630 */


undefined4 FUN_00619630(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) & 0x80000000;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == 0x80000000);
}

