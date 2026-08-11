/* Ghidra address: 0174b730 */
/* Ghidra symbol: FUN_0174b730 */


void FUN_0174b730(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                 undefined1 param_9,undefined8 param_10)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_10);
  FUN_0173b9d0(&local_10,*(undefined8 *)(param_1 + 0x28),local_res10,local_res18,param_5,param_6,
               param_7,param_8,local_res20,0xff0000,param_9,1,0,param_10);
  FUN_0041b800(&local_10);
  FUN_0041b800(&local_res10);
  FUN_0041b800(&local_res18);
  FUN_00414480(&local_res20);
  FUN_00414480(&param_10);
  return;
}

