/* Ghidra address: 00711c60 */
/* Ghidra symbol: FUN_00711c60 */


bool FUN_00711c60(ushort param_1,longlong param_2)

{
  bool bVar1;
  
  if (param_1 < 0x100) {
    bVar1 = (*(byte *)(param_2 + ((longlong)(ulonglong)(byte)param_1 >> 3)) >>
             ((ulonglong)(byte)param_1 & 7) & 1) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

