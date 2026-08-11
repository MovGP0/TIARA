/* Ghidra address: 00cd5760 */
/* Ghidra symbol: FUN_00cd5760 */


void FUN_00cd5760(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_00cd55d0(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_00cd55d0(param_1);
    (**(code **)(*plVar2 + 8))(plVar2,param_2);
  }
  return;
}

