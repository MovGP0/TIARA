/* Ghidra address: 015a9420 */
/* Ghidra symbol: FUN_015a9420 */


void FUN_015a9420(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_015a9220(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_015a9220(param_1);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3,param_4);
  }
  return;
}

