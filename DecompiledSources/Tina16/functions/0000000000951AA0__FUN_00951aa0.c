/* Ghidra address: 00951aa0 */
/* Ghidra symbol: FUN_00951aa0 */


undefined8 FUN_00951aa0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1,param_3,param_4);
  if (plVar1 == (longlong *)0x0) {
    FUN_00414520(param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x160))(plVar1,local_20);
    FUN_00947c70(param_2,local_20[0]);
  }
  FUN_00414520(local_20);
  return param_2;
}

