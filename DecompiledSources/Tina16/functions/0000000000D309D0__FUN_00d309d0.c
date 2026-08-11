/* Ghidra address: 00d309d0 */
/* Ghidra symbol: FUN_00d309d0 */


void FUN_00d309d0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res8 [2];
  longlong local_res18 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  FUN_00414630(param_1);
  FUN_00414630(local_res18[0]);
  (**(code **)(*param_2 + 0x90))(param_2);
  while( true ) {
    iVar2 = FUN_00417250(local_res18[0],local_res8[0],1);
    if (iVar2 < 1) break;
    iVar2 = FUN_00417250(local_res18[0],local_res8[0],1);
    FUN_00415ad0(local_20,local_res8[0],1,iVar2 + -1);
    FUN_00416880(local_30,local_20[0]);
    (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
    iVar1 = FUN_00417250(local_res18[0],local_res8[0],1);
    iVar2 = 0;
    if (local_res18[0] != 0) {
      iVar2 = *(int *)(local_res18[0] + -4);
    }
    FUN_00415b50(local_res8,1,iVar1 + iVar2 + -1);
  }
  FUN_00416880(&local_38,local_res8[0]);
  (**(code **)(*param_2 + 0x78))(param_2,local_38);
  FUN_00414560(&local_38,2);
  FUN_004144d0(local_20);
  FUN_004144d0(local_res8);
  FUN_004144d0(local_res18);
  return;
}

