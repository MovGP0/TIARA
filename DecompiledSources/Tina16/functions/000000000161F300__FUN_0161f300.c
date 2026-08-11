/* Ghidra address: 0161f300 */
/* Ghidra symbol: FUN_0161f300 */


void FUN_0161f300(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *local_20;
  
  FUN_016ee260(param_1,&local_20,0x18,0);
  lVar1 = *local_20;
  if (lVar1 == 0) {
    FUN_016fd940(L"VerilogA: EvalVACodeBox: design=NIL");
  }
  else if (lVar1 != 0) {
    FUN_01645ab0(lVar1,param_2,param_3);
  }
  return;
}

