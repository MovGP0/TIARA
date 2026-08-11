/* Ghidra address: 00951f60 */
/* Ghidra symbol: FUN_00951f60 */


bool FUN_00951f60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
  lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  return lVar2 != 0;
}

