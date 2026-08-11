/* Ghidra address: 00a01990 */
/* Ghidra symbol: FUN_00a01990 */


undefined2 FUN_00a01990(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_12;
  longlong *local_10;
  
  local_30 = auStack_58;
  local_28 = *param_1;
  local_20 = local_28;
  local_10 = (longlong *)FUN_00a01840(local_28,1,param_1);
  local_12 = (**(code **)(*local_10 + 0x10))(local_10);
  FUN_00410f20(local_10);
  return local_12;
}

