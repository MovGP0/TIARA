/* Ghidra address: 0143e820 */
/* Ghidra symbol: FUN_0143e820 */


undefined8
FUN_0143e820(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d0 [5];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_10;
  
  local_40 = auStack_108;
  local_a0 = 0;
  local_a8 = 0;
  local_d0[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_98 = 0;
  local_58 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  *param_7 = 0;
  local_e8 = *(undefined8 *)(param_1 + 0x300);
  local_30 = FUN_013fe560(local_res10,local_res18,local_res20,*(undefined8 *)(param_1 + 0x318));
  FUN_00414480(local_d0);
  FUN_00414560(&local_a8,3);
  FUN_00414560(&local_60,2);
  FUN_00414520(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res10);
  return local_30;
}

