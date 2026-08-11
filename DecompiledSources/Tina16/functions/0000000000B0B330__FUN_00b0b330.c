/* Ghidra address: 00b0b330 */
/* Ghidra symbol: FUN_00b0b330 */


void FUN_00b0b330(longlong param_1)

{
  code *pcVar1;
  
  FUN_008494d0(param_1);
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xff95);
    (*pcVar1)(param_1);
  }
  return;
}

