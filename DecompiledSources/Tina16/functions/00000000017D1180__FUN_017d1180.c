/* Ghidra address: 017d1180 */
/* Ghidra symbol: FUN_017d1180 */


void FUN_017d1180(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8 [4];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [24];
  undefined8 local_270;
  
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_004b67b0(param_2,1);
  FUN_00416ba0(&local_290,local_res8[0],L"\\*.PRM");
  iVar2 = FUN_00441230(local_290,0x20,local_288);
  while (iVar2 == 0) {
    cVar1 = FUN_005b83d0(local_270,L"transient");
    if (cVar1 != '\0') {
      FUN_00416cd0(&local_298,3,local_res8[0],&LAB_017d1378,local_270);
      iVar2 = (**(code **)(*param_2 + 0xb0))(param_2,local_298);
      if (iVar2 == -1) {
        FUN_00416cd0(&local_2a0,3,local_res8[0],&LAB_017d1378,local_270);
        (**(code **)(*param_2 + 0x78))(param_2,local_2a0);
      }
    }
    iVar2 = FUN_00441290(local_288);
  }
  FUN_004412c0(local_288);
  FUN_00414560(&local_2a0,3);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414480(local_res8);
  return;
}

