/* Ghidra address: 0163de40 */
/* Ghidra symbol: FUN_0163de40 */


void FUN_0163de40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00416ba0(&local_10,&DAT_0163dfe4,local_res18[0]);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x139c8) + 0xb0))
                    (*(longlong **)(param_1 + 0x139c8),local_10);
  if (iVar1 < 0) {
    (**(code **)(**(longlong **)(param_1 + 0x139c8) + 0x78))
              (*(longlong **)(param_1 + 0x139c8),local_10);
  }
  else {
    FUN_0163dc80(param_1,local_20,param_2);
    FUN_00416cd0(&local_10,3,local_10,&DAT_0163dff8,local_20[0]);
  }
  iVar1 = FUN_004170c0(L"bvams_",local_10,1);
  if (0 < iVar1) {
    FUN_01626090(&local_28,local_10);
    FUN_00414b50(&local_10,local_28);
  }
  FUN_017bf050(param_2,0,local_10);
  FUN_00416ba0(&local_30,L"Set label: ",local_10);
  FUN_0163cf20(param_1,local_30);
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return;
}

