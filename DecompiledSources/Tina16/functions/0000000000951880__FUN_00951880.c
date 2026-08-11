/* Ghidra address: 00951880 */
/* Ghidra symbol: FUN_00951880 */


undefined8 FUN_00951880(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,param_3);
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

