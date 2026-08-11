/* Ghidra address: 00d21120 */
/* Ghidra symbol: FUN_00d21120 */


void FUN_00d21120(longlong param_1,byte param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  if (param_3 == '\0') {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & ~uVar1;
  }
  else {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | uVar1;
  }
  return;
}

