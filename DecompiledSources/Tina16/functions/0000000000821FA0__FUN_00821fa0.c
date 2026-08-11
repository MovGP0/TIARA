/* Ghidra address: 00821fa0 */
/* Ghidra symbol: FUN_00821fa0 */


void FUN_00821fa0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_00821f80(param_1,param_2);
  if ((cVar2 != '\0') || (param_3 != 0)) {
    lVar1 = FUN_00821e60(param_1,param_2);
    *(longlong *)(lVar1 + 8) = param_3;
  }
  return;
}

