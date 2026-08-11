/* Ghidra address: 01be2d30 */
/* Ghidra symbol: FUN_01be2d30 */


void FUN_01be2d30(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x360))(param_1);
  if (lVar1 == 0) {
    plVar2 = (longlong *)FUN_01c07a90(*(undefined8 *)PTR_DAT_020029b8,0);
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x360))(param_1);
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  }
  return;
}

