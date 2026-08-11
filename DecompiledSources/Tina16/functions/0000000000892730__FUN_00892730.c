/* Ghidra address: 00892730 */
/* Ghidra symbol: FUN_00892730 */


undefined8 FUN_00892730(longlong *param_1,undefined2 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  
  local_30 = auStack_58;
  local_28 = FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*param_1 + 400))(param_1,param_2,local_28);
  return local_28;
}

