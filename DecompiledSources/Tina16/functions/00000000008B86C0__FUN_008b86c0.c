/* Ghidra address: 008b86c0 */
/* Ghidra symbol: FUN_008b86c0 */


void FUN_008b86c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_008b87a0(param_1,param_2);
  lVar1 = (**(code **)(*param_2 + 0x90))(param_2);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x90))(param_2);
    (**(code **)(*plVar2 + 0xd0))(plVar2,param_2);
  }
  FUN_008b8c70(param_1,param_1,param_2);
  return;
}

