/* Ghidra address: 018249b0 */
/* Ghidra symbol: FUN_018249b0 */


undefined1 FUN_018249b0(undefined8 param_1)

{
  undefined8 local_res8 [4];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_9 = 1;
  FUN_0044b200(local_res8[0],PTR_DAT_02004830);
  FUN_00414480(local_res8);
  return local_9;
}

