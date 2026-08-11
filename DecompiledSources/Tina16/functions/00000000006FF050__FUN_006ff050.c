/* Ghidra address: 006ff050 */
/* Ghidra symbol: FUN_006ff050 */


void FUN_006ff050(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  FUN_0065a9c0(param_1,param_2);
  if (*(short *)(param_2 + 8) == 0x12) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
  }
  return;
}

