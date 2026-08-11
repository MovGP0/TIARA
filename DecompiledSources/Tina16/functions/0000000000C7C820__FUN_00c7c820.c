/* Ghidra address: 00c7c820 */
/* Ghidra symbol: FUN_00c7c820 */


void FUN_00c7c820(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30 [2];
  longlong *local_20 [2];
  
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_30[0] = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_0041b910(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  FUN_00c7bc70(local_30,local_res8);
  (**(code **)(*local_30[0] + 0x120))(local_30[0],local_20,local_res10);
  (**(code **)(*local_20[0] + 0x70))(local_20[0],local_res18);
  (**(code **)(*local_res8 + 0x18))(local_res8,&local_40);
  (**(code **)(*local_40 + 0x68))(local_40,&local_38,local_20[0]);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res8);
  FUN_00414560(&local_res10,2);
  return;
}

