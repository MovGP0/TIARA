/* Ghidra address: 00b77c10 */
/* Ghidra symbol: FUN_00b77c10 */


uint FUN_00b77c10(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = 0;
  puVar2 = &DAT_01e8ebdc;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 | *puVar2;
    }
    puVar2 = puVar2 + 1;
  }
  return uVar1;
}

