/* Ghidra address: 00688e60 */
/* Ghidra symbol: FUN_00688e60 */


void FUN_00688e60(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(short *)(param_2 + 10) == 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffea);
    (*pcVar1)(param_1);
  }
  return;
}

