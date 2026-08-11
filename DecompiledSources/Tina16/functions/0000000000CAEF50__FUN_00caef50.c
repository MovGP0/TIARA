/* Ghidra address: 00caef50 */
/* Ghidra symbol: FUN_00caef50 */


void FUN_00caef50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_004b6da0(param_1);
  FUN_004b6e40(param_1,param_2);
  lVar2 = FUN_004b6da0(param_1);
  if (lVar2 != lVar1) {
    FUN_004b6dc0(param_1,lVar1);
  }
  return;
}

