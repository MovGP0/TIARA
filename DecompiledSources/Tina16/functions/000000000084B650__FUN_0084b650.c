/* Ghidra address: 0084b650 */
/* Ghidra symbol: FUN_0084b650 */


void FUN_0084b650(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((param_3 == 0) && (lVar1 = FUN_0084b550(param_1,param_2), lVar1 == 0)) {
    return;
  }
  plVar2 = (longlong *)FUN_0084b5c0(param_1,param_2);
  *plVar2 = param_3;
  if (param_3 == 0) {
    FUN_0084ba10(param_1);
  }
  return;
}

