/* Ghidra address: 01709830 */
/* Ghidra symbol: FUN_01709830 */


void FUN_01709830(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [24];
  undefined8 local_270;
  
  local_298 = 0;
  local_290 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416ba0(&local_290,local_res8,local_res10);
  iVar1 = FUN_00441230(local_290,0x20,local_288);
  while (iVar1 == 0) {
    FUN_00416ba0(&local_298,local_res8,local_270);
    (**(code **)(*param_3 + 0x78))(param_3,local_298);
    iVar1 = FUN_00441290(local_288);
  }
  FUN_004412c0(local_288);
  FUN_00414560(&local_298,2);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414560(&local_res8,2);
  return;
}

