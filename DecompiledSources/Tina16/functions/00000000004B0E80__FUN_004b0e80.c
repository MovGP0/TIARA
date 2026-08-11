/* Ghidra address: 004b0e80 */
/* Ghidra symbol: FUN_004b0e80 */


void FUN_004b0e80(longlong param_1,int param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_2 < 0) {
    FUN_004b0d20(param_1);
  }
  if (*(int *)(param_1 + 8) <= param_2) {
    FUN_004b0d60(param_1,param_2 + 1);
  }
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + (longlong)(param_2 / 0x20) * 4);
  uVar2 = 1 << ((byte)((longlong)param_2 % 0x20) & 0x1f);
  if (param_3 == '\0') {
    *puVar1 = *puVar1 & ~uVar2;
  }
  else {
    *puVar1 = *puVar1 | uVar2;
  }
  return;
}

