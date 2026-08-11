/* Ghidra address: 00cd5dc0 */
/* Ghidra symbol: FUN_00cd5dc0 */


undefined4 FUN_00cd5dc0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  local_31 = param_4;
  local_1c = param_3;
  (**(code **)*param_1)(param_1,param_4);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,local_31);
  (**(code **)(*param_1 + 8))(param_1,param_4);
  return local_1c;
}

