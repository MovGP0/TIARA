/* Ghidra address: 014c0620 */
/* Ghidra symbol: FUN_014c0620 */


void FUN_014c0620(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [24];
  undefined8 local_270;
  
  local_298 = 0;
  local_290 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416ba0(&local_290,local_res8[0],&LAB_014c073c);
  iVar1 = FUN_00441230(local_290,0,local_288);
  if (iVar1 == 0) {
    do {
      FUN_00416ba0(&local_298,local_res8[0],local_270);
      FUN_004412f0(local_298);
      iVar1 = FUN_00441290(local_288);
    } while (iVar1 == 0);
    FUN_004412c0(local_288);
  }
  FUN_00414560(&local_298,2);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414480(local_res8);
  return;
}

