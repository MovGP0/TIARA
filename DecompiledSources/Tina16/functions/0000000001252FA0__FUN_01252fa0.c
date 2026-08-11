/* Ghidra address: 01252fa0 */
/* Ghidra symbol: FUN_01252fa0 */


void FUN_01252fa0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_004170c0(&DAT_01253144,local_res8[0],1);
  if (iVar1 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"GetFPGAValuesFromString");
    FUN_004134c0(uVar3);
  }
  FUN_00416dc0(local_20,local_res8[0],4,iVar1 + -4);
  uVar2 = FUN_0043fc00(local_20[0]);
  *param_2 = uVar2;
  uVar2 = 0;
  if (local_res8[0] != 0) {
    uVar2 = *(undefined4 *)(local_res8[0] + -4);
  }
  FUN_00416dc0(local_res8,local_res8[0],iVar1 + 1,uVar2);
  iVar1 = FUN_004170c0(&DAT_01253144,local_res8[0],1);
  if (iVar1 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"GetFPGAValuesFromString");
    FUN_004134c0(uVar3);
  }
  FUN_00416dc0(local_20,local_res8[0],6,iVar1 + -6);
  uVar2 = FUN_0043fc00(local_20[0]);
  *param_3 = uVar2;
  uVar2 = 0;
  if (local_res8[0] != 0) {
    uVar2 = *(undefined4 *)(local_res8[0] + -4);
  }
  FUN_00416dc0(local_res8,local_res8[0],iVar1 + 1,uVar2);
  uVar2 = FUN_0043fc00(local_res8[0]);
  *param_4 = uVar2;
  FUN_00414480(local_20);
  FUN_00414480(local_res8);
  return;
}

