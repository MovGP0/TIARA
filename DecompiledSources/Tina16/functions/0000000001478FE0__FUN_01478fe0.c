/* Ghidra address: 01478fe0 */
/* Ghidra symbol: FUN_01478fe0 */


void FUN_01478fe0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 local_60 [8];
  undefined8 local_58;
  longlong local_30;
  undefined1 local_25;
  int local_24;
  longlong *local_20;
  longlong local_18;
  longlong local_10;
  
  local_70 = auStack_b8;
  local_78 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_25 = *PTR_DAT_020052b0;
  local_10 = 0;
  local_18 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *local_res18 = 0;
  FUN_00416ba0(&local_78,L"_ipr_temp_var := ",local_res10);
  (**(code **)(*local_20 + 0x78))(local_20,local_78);
  local_98 = *(undefined8 *)(param_1 + 0x288);
  local_90 = 0;
  local_88 = 0;
  uVar2 = FUN_017e1bd0(&DAT_017df868,1,0,0);
  *(undefined8 *)(param_1 + 8) = uVar2;
  FUN_017e2440(uVar2,2);
  FUN_01695540(*(undefined8 *)(param_1 + 8),local_20);
  FUN_01695da0(*(undefined8 *)(param_1 + 8),local_25);
  FUN_016942f0(*(undefined8 *)(param_1 + 8));
  FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x550),1,
               *(undefined8 *)(param_1 + 0x278),4);
  FUN_01478380(param_1);
  local_18 = FUN_013bdbe0(&DAT_013bda78,1,*(undefined8 *)(param_1 + 8));
  local_24 = FUN_013bfdc0(local_18);
  if (local_24 != 0) {
    FUN_01478630(param_1);
  }
  FUN_01696180(*(undefined8 *)(param_1 + 8));
  local_10 = FUN_010c2660(&DAT_010c2500,1,*(undefined8 *)(param_1 + 8));
  local_24 = FUN_010c7360(local_10);
  if (local_24 != 0) {
    FUN_01478630(param_1);
  }
  cVar1 = FUN_00c53220(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x4f8));
  if (cVar1 == '\0') {
    FUN_017e2760(*(undefined8 *)(param_1 + 8),2);
  }
  cVar1 = FUN_017e28e0(*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    FUN_01478630(param_1);
  }
  local_30 = FUN_013b3ad0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x4e8),&DAT_014793c8);
  if (local_30 != 0) {
    FUN_013b4b70(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x4e8),local_30,local_60);
    *local_res18 = local_58;
  }
  if (local_10 != 0) {
    FUN_00410f20(local_10);
  }
  if (local_18 != 0) {
    FUN_00410f20(local_18);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(local_20);
  FUN_00414480(&local_78);
  FUN_00414480(&local_res10);
  return;
}

