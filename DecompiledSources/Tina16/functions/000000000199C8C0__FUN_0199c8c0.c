/* Ghidra address: 0199c8c0 */
/* Ghidra symbol: FUN_0199c8c0 */


void FUN_0199c8c0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  
  FUN_00414610(param_5);
  plVar1 = (longlong *)FUN_010b5750(0,&PTR_FUN_010b5580,param_2,param_3,param_4,param_6);
  FUN_0149eb90(plVar1,param_5);
  (**(code **)(*param_1 + 0x20))(param_1,plVar1);
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_1[0x42]);
  FUN_00414480(&param_5);
  return;
}

