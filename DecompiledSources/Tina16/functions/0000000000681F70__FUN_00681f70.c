/* Ghidra address: 00681f70 */
/* Ghidra symbol: FUN_00681f70 */


void FUN_00681f70(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((*(short *)(param_2 + 10) == 0x300) && (*(char *)(param_1 + 0x4a2) == '\0')) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
  }
  return;
}

