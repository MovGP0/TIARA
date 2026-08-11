/* Ghidra address: 00cbb270 */
/* Ghidra symbol: FUN_00cbb270 */


longlong * FUN_00cbb270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  
  local_30 = auStack_58;
  local_28 = (longlong *)FUN_00cbb1e0(param_1);
  (**(code **)(*local_28 + 0x98))(local_28,param_2,param_3);
  return local_28;
}

