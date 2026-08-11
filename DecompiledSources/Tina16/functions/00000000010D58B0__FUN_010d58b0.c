/* Ghidra address: 010d58b0 */
/* Ghidra symbol: FUN_010d58b0 */


undefined1 FUN_010d58b0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_28 = 0;
  FUN_010d56f0(&local_28);
  FUN_00414ad0(param_1,local_28);
  local_9 = FUN_00440b00(*param_1,1);
  FUN_00414480(&local_28);
  return local_9;
}

