/* Ghidra address: 019b5ce0 */
/* Ghidra symbol: FUN_019b5ce0 */


int FUN_019b5ce0(ushort *param_1)

{
  int iVar1;
  
  if (param_1 == (ushort *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    while (*(ushort **)(param_1 + 0x1f8) != (ushort *)0x0) {
      iVar1 = iVar1 + 500;
      param_1 = *(ushort **)(param_1 + 0x1f8);
    }
    iVar1 = iVar1 + (uint)*param_1;
    if (1499999 < iVar1) {
      FUN_00ef4260(CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),2));
    }
  }
  return iVar1;
}

