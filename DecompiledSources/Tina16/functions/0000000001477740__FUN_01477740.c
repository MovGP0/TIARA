/* Ghidra address: 01477740 */
/* Ghidra symbol: FUN_01477740 */


void FUN_01477740(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00414480(param_4);
  iVar1 = FUN_004170c0(&DAT_014778e4,local_res8[0],1);
  FUN_00416dc0(param_2,local_res8[0],1,iVar1 + -1);
  iVar1 = FUN_004170c0(&LAB_014778f4,local_res8[0],1);
  if (iVar1 < 1) {
    iVar1 = FUN_004170c0(&DAT_014778e4,local_res8[0],1);
    uVar4 = 0;
    if (local_res8[0] != 0) {
      uVar4 = *(undefined4 *)(local_res8[0] + -4);
    }
    FUN_00416dc0(param_3,local_res8[0],iVar1 + 1,uVar4);
  }
  else {
    iVar1 = FUN_004170c0(&DAT_014778e4,local_res8[0],1);
    iVar2 = FUN_004170c0(&LAB_014778f4,local_res8[0],1);
    iVar3 = FUN_004170c0(&DAT_014778e4,local_res8[0],1);
    FUN_00416dc0(param_3,local_res8[0],iVar1 + 1,(iVar2 - iVar3) + -1);
    iVar1 = FUN_004170c0(&LAB_014778f4,local_res8[0],1);
    uVar4 = 0;
    if (local_res8[0] != 0) {
      uVar4 = *(undefined4 *)(local_res8[0] + -4);
    }
    FUN_00416dc0(param_4,local_res8[0],iVar1 + 1,uVar4);
  }
  FUN_00414480(local_res8);
  return;
}

