/* Ghidra address: 008043c0 */
/* Ghidra symbol: FUN_008043c0 */


void FUN_008043c0(longlong param_1)

{
  code *pcVar1;
  
  if ((*(ushort *)(param_1 + 0x34) & 2) == 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
  }
  else {
    *(byte *)(param_1 + 0x6a8) = *(byte *)(param_1 + 0x6a8) | 0x20;
  }
  return;
}

