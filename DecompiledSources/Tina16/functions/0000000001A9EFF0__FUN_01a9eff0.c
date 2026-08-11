/* Ghidra address: 01a9eff0 */
/* Ghidra symbol: FUN_01a9eff0 */


longlong * FUN_01a9eff0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_0060a330(param_2);
  (**(code **)(*param_2 + 0x80))(param_2,0);
  plVar2 = (longlong *)FUN_01a9ee80(param_1,param_2,param_3);
  (**(code **)(*plVar2 + 0x80))(plVar2,1);
  FUN_0060be30(plVar2,uVar1);
  return plVar2;
}

