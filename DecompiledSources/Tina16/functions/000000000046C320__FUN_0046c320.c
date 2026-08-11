/* Ghidra address: 0046c320 */
/* Ghidra symbol: FUN_0046c320 */


undefined4 FUN_0046c320(ushort param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 < 0x20) {
    uVar1 = 1 << ((byte)param_1 & 0x1f);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x3f080c) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

