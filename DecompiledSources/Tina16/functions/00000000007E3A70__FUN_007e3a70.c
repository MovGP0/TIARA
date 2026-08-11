/* Ghidra address: 007e3a70 */
/* Ghidra symbol: FUN_007e3a70 */


void FUN_007e3a70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = FUN_007e2ec0(param_1);
  if (param_2 == lVar1) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar2)(param_1,param_2,0);
  }
  return;
}

