/* Ghidra address: 00b38540 */
/* Ghidra symbol: FUN_00b38540 */


undefined8 * FUN_00b38540(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_004144d0(param_1);
  FUN_0061d8e0(local_50,param_2);
  FUN_004156b0(&local_30,local_50[0],&DAT_00b38948);
  iVar1 = FUN_00417250(&DAT_00b38958,local_30,1);
  while (0 < iVar1) {
    FUN_00415ad0(&local_38,local_30,1,iVar1);
    iVar2 = FUN_00417250(&DAT_00b38968,local_38,1);
    FUN_00415ad0(&local_40,local_38,1,iVar2 + -1);
    uVar3 = 0;
    if (local_38 != 0) {
      uVar3 = *(undefined4 *)(local_38 + -4);
    }
    FUN_00415ad0(&local_38,local_38,iVar2 + 1,uVar3);
    iVar2 = FUN_00417250(&LAB_00b38978,local_40,1);
    FUN_00416880(&local_68,local_40);
    FUN_00416dc0(&local_60,local_68,1,iVar2 + -1);
    FUN_0043ea00(&local_58,local_60);
    iVar4 = FUN_0043fc00(local_58);
    uVar3 = 0;
    if (local_40 != 0) {
      uVar3 = *(undefined4 *)(local_40 + -4);
    }
    FUN_00416880(&local_80,local_40);
    FUN_00416dc0(&local_78,local_80,iVar2 + 1,uVar3);
    FUN_0043ea00(&local_70,local_78);
    iVar2 = FUN_0043fc00(local_70);
    FUN_0043f750(&local_88,iVar4 + param_3);
    FUN_00415dd0(&local_90,local_88,0);
    FUN_0043f750(&local_98,iVar2 + param_3);
    FUN_00415dd0(&local_a0,local_98,0);
    FUN_00415980(param_1,7,*param_1,local_90,&LAB_00b38978,local_a0,&DAT_00b38968,local_38,
                 &DAT_00b38948);
    uVar3 = 0;
    if (local_30 != 0) {
      uVar3 = *(undefined4 *)(local_30 + -4);
    }
    FUN_00415ad0(&local_30,local_30,iVar1 + 2,uVar3);
    iVar1 = FUN_00417250(&DAT_00b38958,local_30,1);
  }
  FUN_004144d0(&local_a0);
  FUN_00414480(&local_98);
  FUN_004144d0(&local_90);
  FUN_00414560(&local_88,7);
  FUN_004144d0(local_50);
  FUN_00414590(&local_40,3);
  return param_1;
}

