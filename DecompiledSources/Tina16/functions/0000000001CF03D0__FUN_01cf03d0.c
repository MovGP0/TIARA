/* Ghidra address: 01cf03d0 */
/* Ghidra symbol: FUN_01cf03d0 */


bool FUN_01cf03d0(short param_1,ushort param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == 0x108) {
    bVar1 = 0x17 < param_2;
  }
  else if (param_1 == 0x109) {
    bVar1 = 0x21 < param_2;
  }
  else if (param_1 == 0x111) {
    bVar1 = 0x3f < param_2;
  }
  else if (param_1 == 0x112) {
    bVar1 = 0x14 < param_2;
  }
  return bVar1;
}

