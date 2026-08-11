/* Ghidra address: 00ed0950 */
/* Ghidra symbol: FUN_00ed0950 */


void FUN_00ed0950(undefined1 param_1,undefined8 param_2,undefined8 *param_3,undefined2 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414610(param_5);
  lVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)(lVar1 + 0x2c) = param_4;
  FUN_00ed0470(param_1,local_res10[0],lVar1,param_5);
  FUN_004b3880(lVar1,local_20);
  FUN_00414ad0(param_3,local_20[0]);
  FUN_00416780(&local_30,*(undefined2 *)(lVar1 + 0x2e));
  FUN_00450070(&local_28,*param_3,local_30,0,1);
  FUN_00414ad0(param_3,local_28);
  FUN_00410f20(lVar1);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  FUN_00414480(&param_5);
  return;
}

