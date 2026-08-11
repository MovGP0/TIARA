/* Ghidra address: 00618db0 */
/* Ghidra symbol: FUN_00618db0 */


undefined8 FUN_00618db0(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_00618e50(param_1);
  local_18 = FUN_00618e20(param_1,&local_10);
  FUN_006191b0(param_1,local_10);
  return local_18;
}

