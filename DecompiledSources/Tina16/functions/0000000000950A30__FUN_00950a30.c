/* Ghidra address: 00950a30 */
/* Ghidra symbol: FUN_00950a30 */


undefined8 FUN_00950a30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = FUN_00416420(param_3,0);
  if (iVar1 == 0) {
    FUN_00414520(param_2);
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar2 == 0) {
      FUN_0094f020(param_1,param_2,param_3);
    }
    else {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
      (**(code **)(*plVar3 + 0x288))(plVar3,param_2,param_3);
    }
  }
  return param_2;
}

