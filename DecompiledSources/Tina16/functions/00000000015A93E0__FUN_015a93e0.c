/* Ghidra address: 015a93e0 */
/* Ghidra symbol: FUN_015a93e0 */


void FUN_015a93e0(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_015a9220(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_015a9220(param_1);
    (**(code **)(*plVar2 + 8))(plVar2,param_2);
  }
  return;
}

