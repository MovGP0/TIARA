/* Ghidra address: 0083df20 */
/* Ghidra symbol: FUN_0083df20 */


undefined4 FUN_0083df20(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x508) + 0x4d4);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x2000) != 0);
}

