/* Ghidra address: 013a7340 */
/* Ghidra symbol: FUN_013a7340 */


void FUN_013a7340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [24];
  undefined8 local_270;
  
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_290 = 0;
  local_298 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416ba0(&local_2a0,local_res8,local_res10);
  iVar1 = FUN_00441230(local_2a0,0x20,local_288);
  while (iVar1 == 0) {
    FUN_00416ba0(&local_290,local_res8,local_270);
    FUN_00441920(&local_2a8,local_290);
    FUN_00416cd0(&local_298,3,local_res18,&DAT_013a7520,local_2a8);
    FUN_015f21c0(local_290,local_298);
    FUN_00441920(&local_2b0,local_298);
    FUN_0043e1a0(&local_290,local_2b0);
    iVar1 = FUN_00416db0(local_290,L"macros.props");
    if (iVar1 == 0) {
      FUN_013a70a0(local_298);
    }
    iVar1 = FUN_00441290(local_288);
  }
  FUN_004412c0(local_288);
  FUN_00414560(&local_2b0,5);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414560(&local_res8,3);
  return;
}

