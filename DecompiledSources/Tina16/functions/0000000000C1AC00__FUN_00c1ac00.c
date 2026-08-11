/* Ghidra address: 00c1ac00 */
/* Ghidra symbol: FUN_00c1ac00 */


void FUN_00c1ac00(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(*plVar1 + 0xf0))(plVar1,param_1,param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

