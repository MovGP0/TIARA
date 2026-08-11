/* Ghidra address: 00c7c1d0 */
/* Ghidra symbol: FUN_00c7c1d0 */


undefined1 FUN_00c7c1d0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 local_res8;
  undefined4 *local_res10;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  uVar1 = FUN_00c7c270(local_res8);
  *local_res10 = uVar1;
  local_9 = 1;
  FUN_00414480(&local_res8);
  return local_9;
}

