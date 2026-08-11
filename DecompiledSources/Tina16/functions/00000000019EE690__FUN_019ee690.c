/* Ghidra address: 019ee690 */
/* Ghidra symbol: FUN_019ee690 */


undefined8
FUN_019ee690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414b50(&local_10,local_res20);
  if (local_10 == 0) {
    FUN_00414b50(&local_10,L"Noname");
  }
  cVar1 = FUN_005b8540(local_res18,local_res20);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_10,local_res18,local_10);
  }
  FUN_00b90780(&local_30,local_10);
  FUN_019ee3d0(param_1,&local_28,local_30);
  FUN_019ee270(param_1,local_20,local_28);
  FUN_019ee590(param_1,param_2,local_20[0],param_5);
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res18,2);
  return param_2;
}

