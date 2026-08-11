/* Ghidra address: 00951f20 */
/* Ghidra symbol: FUN_00951f20 */


bool FUN_00951f20(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
  lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  return lVar2 != 0;
}

