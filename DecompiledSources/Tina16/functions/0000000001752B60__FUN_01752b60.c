/* Ghidra address: 01752b60 */
/* Ghidra symbol: FUN_01752b60 */


undefined1 FUN_01752b60(undefined8 param_1,ushort param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((0x2e < param_2) && (param_2 < 0x3a)) {
    uVar1 = (&DAT_01f9b191)[param_2];
  }
  return uVar1;
}

