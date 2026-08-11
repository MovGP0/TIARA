/* Ghidra address: 005b82f0 */
/* Ghidra symbol: FUN_005b82f0 */


undefined1 FUN_005b82f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_005b8180(&DAT_005b7678,1,param_2);
  local_11 = FUN_005b82e0(local_10,param_1);
  FUN_00410f20(local_10);
  return local_11;
}

