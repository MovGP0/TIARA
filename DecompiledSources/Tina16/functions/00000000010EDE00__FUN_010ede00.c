/* Ghidra address: 010ede00 */
/* Ghidra symbol: FUN_010ede00 */


void FUN_010ede00(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1[0x11]);
  FUN_005fd4e0(param_1[0x11],0xffffff);
  (**(code **)(*param_1 + 0x70))(param_1,param_2);
  (**(code **)(*(longlong *)param_1[0x11] + 0x10))((longlong *)param_1[0x11],plVar1);
  FUN_00410f20(plVar1);
  return;
}

