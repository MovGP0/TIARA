/* Ghidra address: 006ef1c0 */
/* Ghidra symbol: FUN_006ef1c0 */


bool FUN_006ef1c0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_006eed60(param_1);
  (**(code **)(*plVar3 + 600))(plVar3);
  uVar1 = FUN_006eeda0(param_1);
  iVar2 = FUN_006ef6e0(param_1);
  lVar4 = thunk_FUN_041b2403(uVar1,0x1076,(longlong)iVar2,0);
  return lVar4 != 0;
}

