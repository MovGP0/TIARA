/* Ghidra address: 01955200 */
/* Ghidra symbol: FUN_01955200 */


undefined4 FUN_01955200(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1a0) + 0xa0);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 & 1) != 0);
}

