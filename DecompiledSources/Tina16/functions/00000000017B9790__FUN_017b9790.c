/* Ghidra address: 017b9790 */
/* Ghidra symbol: FUN_017b9790 */


void FUN_017b9790(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_01cf0940(param_1,param_2,param_3,param_4);
  if (cVar1 != '\0') {
    FUN_017b96e0(param_1);
    plVar2 = (longlong *)FUN_017b9690(param_1);
    (**(code **)(*plVar2 + 0x58))(plVar2,param_3,param_4);
  }
  return;
}

