/* Ghidra address: 00951780 */
/* Ghidra symbol: FUN_00951780 */


void FUN_00951780(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
    (**(code **)(*plVar2 + 0x2c0))(plVar2,param_2,param_3,param_4);
  }
  return;
}

