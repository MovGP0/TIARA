/* Ghidra address: 011568e0 */
/* Ghidra symbol: FUN_011568e0 */


void FUN_011568e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  *local_res18 = 0;
  local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res8,0x20);
  FUN_011566c0(local_10,local_res10,local_res18);
  FUN_00410f20(local_10);
  FUN_00414480(&local_res8);
  return;
}

