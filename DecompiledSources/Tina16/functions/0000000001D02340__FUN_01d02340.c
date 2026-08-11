/* Ghidra address: 01d02340 */
/* Ghidra symbol: FUN_01d02340 */


/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_01d02340(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined2 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong local_res18 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58 [4];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [4];
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28[3] = 0;
  local_28[2] = 0;
  local_28[1] = 0;
  local_28[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar2 = 0;
  if (local_res18[0] != 0) {
    iVar2 = *(int *)(local_res18[0] + -4);
  }
  if (iVar2 < 0x29) {
    FUN_00414ad0(param_2,local_res18[0]);
  }
  else {
    FUN_00414480(local_28);
    FUN_0043ea00(local_28 + 2,local_res18[0]);
    while (local_28[2] != 0) {
      uVar1 = FUN_004170c0(&DAT_01d02778,local_28[2],1);
      FUN_00416dc0(&local_30,local_28[2],1,uVar1);
      FUN_0043ea00(local_28 + 3,local_30);
      uVar1 = FUN_004170c0(&DAT_01d02778,local_28[2],1);
      FUN_00416e20(local_28 + 2,1,uVar1);
      FUN_0043ea00(&local_38,local_28[2]);
      FUN_00414b50(local_28 + 2,local_38);
      FUN_00416780(&local_40,param_4);
      iVar2 = FUN_004170c0(local_40,local_28[2],1);
      if (iVar2 < 1) {
        uVar1 = 0;
        if (local_28[2] != 0) {
          uVar1 = *(undefined4 *)(local_28[2] + -4);
        }
        FUN_00416dc0(local_28 + 1,local_28[2],1,uVar1);
        local_58[0] = param_4;
        FUN_00457c30(local_28 + 1,&local_68,local_58,0);
        FUN_00416ad0(local_28 + 3,local_68);
        uVar1 = 0;
        if (local_28[2] != 0) {
          uVar1 = *(undefined4 *)(local_28[2] + -4);
        }
        FUN_00416e20(local_28 + 2,1,uVar1);
      }
      else {
        FUN_00416780(&local_48,param_4);
        uVar1 = FUN_004170c0(local_48,local_28[2],1);
        FUN_00416dc0(local_28 + 1,local_28[2],1,uVar1);
        local_58[0] = param_4;
        FUN_00457c30(local_28 + 1,&local_50,local_58,0);
        FUN_00416ad0(local_28 + 3,local_50);
        FUN_00416780(&local_60,param_4);
        uVar1 = FUN_004170c0(local_60,local_28[2],1);
        FUN_00416e20(local_28 + 2,1,uVar1);
      }
      FUN_0043ea00(&local_70,local_28[2]);
      FUN_00414b50(local_28 + 2,local_70);
      iVar2 = 0;
      if (local_28[0] != 0) {
        iVar2 = *(int *)(local_28[0] + -4);
      }
      iVar3 = 0;
      if (local_28[3] != 0) {
        iVar3 = *(int *)(local_28[3] + -4);
      }
      if (iVar2 + iVar3 < 0x29) {
        FUN_00416cd0(local_28,3,local_28[0],local_28[3],&DAT_01d02788);
      }
      else {
        FUN_00416cd0(param_2,4,*param_2,local_28[0],local_28[3],&LAB_01d02798);
        FUN_00414480(local_28);
      }
    }
    FUN_00416ad0(param_2,local_28[0]);
  }
  FUN_00414560(&local_70,3);
  FUN_00414560(&local_50,9);
  FUN_00414480(local_res18);
  return param_2;
}

