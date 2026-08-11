/* Ghidra address: 015fd070 */
/* Ghidra symbol: FUN_015fd070 */


void FUN_015fd070(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_00414610(param_1);
  FUN_015fcdf0(&local_28,local_res8);
  FUN_015fcd70(local_20,local_res8);
  FUN_00416cd0(&local_30,3,local_20[0],&DAT_015fd22c,*(undefined8 *)PTR_PTR_02001aa8);
  uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,local_30,0xff00);
  FUN_004b89e0(uVar1,param_4,0x38);
  FUN_004b89e0(uVar1,param_3 + 0x7f0,4);
  FUN_004b89e0(uVar1,param_3 + 0x7f4,4);
  FUN_015f4610(uVar1,*(undefined8 *)(param_3 + 0x990));
  FUN_00416cd0(&local_38,3,local_28,&DAT_015fd22c,*(undefined8 *)(param_3 + 0x788));
  FUN_015f4580(uVar1,local_38);
  FUN_004b89e0(uVar1,local_res10,8);
  FUN_00410f20(uVar1);
  FUN_00414560(&local_38,4);
  FUN_00414480(&local_res8);
  return;
}

