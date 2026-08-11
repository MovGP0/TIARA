/* Ghidra address: 00951990 */
/* Ghidra symbol: FUN_00951990 */


undefined8 FUN_00951990(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,param_3);
  if (local_20 == (longlong *)0x0) {
    FUN_00414520(param_2);
  }
  else {
    (**(code **)(*local_20 + 0x2e0))(local_20,param_2);
  }
  return param_2;
}

