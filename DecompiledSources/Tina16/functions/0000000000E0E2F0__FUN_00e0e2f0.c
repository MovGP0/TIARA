/* Ghidra address: 00e0e2f0 */
/* Ghidra symbol: FUN_00e0e2f0 */


void FUN_00e0e2f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_res8 [4];
  undefined8 local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_004170c0(&DAT_00e0e478,local_res8[0],1);
  FUN_00416dc0(param_2,local_res8[0],1,iVar1 + -1);
  iVar2 = FUN_004170c0(&DAT_00e0e488,local_res8[0],1);
  FUN_00416dc0(&local_20,local_res8[0],iVar1 + 1,(iVar2 - iVar1) + -1);
  FUN_00416e20(&local_20,1,1);
  iVar1 = 0;
  if (local_20 != 0) {
    iVar1 = *(int *)(local_20 + -4);
  }
  iVar2 = FUN_004170c0(&LAB_00e0e498,local_20,1);
  FUN_00416dc0(&local_28,local_20,1,iVar2 + -1);
  uVar3 = FUN_0043fc00(local_28);
  *param_3 = uVar3;
  FUN_00416dc0(&local_28,local_20,iVar2 + 1,iVar1 - iVar2);
  uVar3 = FUN_0043fc00(local_28);
  *param_4 = uVar3;
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res8);
  return;
}

