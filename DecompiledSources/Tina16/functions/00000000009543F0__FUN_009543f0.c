/* Ghidra address: 009543f0 */
/* Ghidra symbol: FUN_009543f0 */


undefined8 FUN_009543f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar1 == 0) {
    FUN_0094f020(param_1,param_2,param_3);
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
    (**(code **)(*plVar2 + 0x288))(plVar2,param_2,param_3);
  }
  return param_2;
}

