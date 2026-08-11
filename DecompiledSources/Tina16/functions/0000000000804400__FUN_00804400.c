/* Ghidra address: 00804400 */
/* Ghidra symbol: FUN_00804400 */


void FUN_00804400(longlong param_1)

{
  code *pcVar1;
  
  if ((*(ushort *)(param_1 + 0x34) & 2) == 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffaa);
    (*pcVar1)(param_1);
  }
  else {
    *(byte *)(param_1 + 0x6a8) = *(byte *)(param_1 + 0x6a8) & 0xdf;
  }
  return;
}

