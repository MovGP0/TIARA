/* Ghidra address: 015ffa40 */
/* Ghidra symbol: FUN_015ffa40 */


void FUN_015ffa40(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res8 [2];
  longlong local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res18[0]);
  (**(code **)(*param_2 + 0x90))(param_2);
  while( true ) {
    iVar2 = FUN_004170c0(local_res18[0],local_res8[0],1);
    if (iVar2 < 1) break;
    iVar2 = FUN_004170c0(local_res18[0],local_res8[0],1);
    FUN_00416dc0(local_20,local_res8[0],1,iVar2 + -1);
    (**(code **)(*param_2 + 0x78))(param_2,local_20[0]);
    iVar1 = FUN_004170c0(local_res18[0],local_res8[0],1);
    iVar2 = 0;
    if (local_res18[0] != 0) {
      iVar2 = *(int *)(local_res18[0] + -4);
    }
    FUN_00416e20(local_res8,1,iVar1 + iVar2 + -1);
  }
  (**(code **)(*param_2 + 0x78))(param_2,local_res8[0]);
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  FUN_00414480(local_res18);
  return;
}

