/* Ghidra address: 01bfd920 */
/* Ghidra symbol: FUN_01bfd920 */


void FUN_01bfd920(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = FUN_01bfd980(param_1);
  if (param_2 == lVar1) {
    pcVar2 = (code *)FUN_00411550(param_1,0xfffd);
    (*pcVar2)(param_1,param_2,1);
  }
  return;
}

