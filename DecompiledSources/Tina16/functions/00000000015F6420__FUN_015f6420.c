/* Ghidra address: 015f6420 */
/* Ghidra symbol: FUN_015f6420 */


undefined4 FUN_015f6420(byte param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_1 & 0x1f);
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 & param_2 & 0xff) != 0);
}

