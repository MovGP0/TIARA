/* Ghidra address: 01b7fc30 */
/* Ghidra symbol: FUN_01b7fc30 */


undefined1 FUN_01b7fc30(undefined8 param_1)

{
  undefined8 local_res8 [4];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414630(param_1);
  local_9 = 1;
  FUN_00416880(&local_28,local_res8[0]);
  FUN_0043fc00(local_28);
  FUN_00414480(&local_28);
  FUN_004144d0(local_res8);
  return local_9;
}

