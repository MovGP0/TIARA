/* Ghidra address: 00cd57a0 */
/* Ghidra symbol: FUN_00cd57a0 */


void FUN_00cd57a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_00cd55d0(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_00cd55d0(param_1);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3,param_4);
  }
  return;
}

