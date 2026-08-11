/* Ghidra address: 004b0f00 */
/* Ghidra symbol: FUN_004b0f00 */


undefined4 FUN_004b0f00(longlong param_1,int param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 8) <= param_2) || (param_2 < 0)) {
    FUN_004b0d20(param_1);
  }
  uVar1 = 1 << ((byte)((longlong)param_2 % 0x20) & 0x1f);
  return CONCAT31((int3)(uVar1 >> 8),
                  (uVar1 & *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)(param_2 / 0x20) * 4)
                  ) != 0);
}

