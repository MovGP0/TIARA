/* Ghidra address: 00ced070 */
/* Ghidra symbol: FUN_00ced070 */


undefined1 FUN_00ced070(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_28 = 0;
  FUN_008b05c0(&local_28,param_2);
  local_9 = local_28 != 0;
  FUN_0041b800(&local_28);
  return local_9;
}

