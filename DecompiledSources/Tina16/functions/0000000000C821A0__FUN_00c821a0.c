/* Ghidra address: 00c821a0 */
/* Ghidra symbol: FUN_00c821a0 */


void FUN_00c821a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 local_res10;
  longlong *local_res18 [2];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_0041b910(local_res18[0]);
  local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b9f40(local_10,local_res10);
  FUN_00b88af0(local_10,local_18,"blowfish","N=g4W9%x2?-(A+\\q#K1}");
  (**(code **)(*local_res18[0] + 0x178))(local_res18[0],local_18);
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00414480(&local_res10);
  FUN_0041b800(local_res18);
  return;
}

