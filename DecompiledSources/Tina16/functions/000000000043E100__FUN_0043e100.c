/* Ghidra address: 0043e100 */
/* Ghidra symbol: FUN_0043e100 */


bool FUN_0043e100(ushort param_1,longlong param_2)

{
  bool bVar1;
  
  if (param_1 < 0x100) {
    bVar1 = (*(byte *)(param_2 + ((longlong)(ulonglong)param_1 >> 3)) >> ((ulonglong)param_1 & 7) &
            1) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

