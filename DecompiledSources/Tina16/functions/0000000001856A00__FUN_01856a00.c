/* Ghidra address: 01856a00 */
/* Ghidra symbol: FUN_01856a00 */


longlong * FUN_01856a00(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(param_1 + 0x68))(param_1);
  plVar2 = (longlong *)(**(code **)(lVar1 + 0xa0))(lVar1,1);
  (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
  (**(code **)(*plVar2 + 0x70))(plVar2,param_3);
  return plVar2;
}

