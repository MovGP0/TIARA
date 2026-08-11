/* Ghidra address: 00b37360 */
/* Ghidra symbol: FUN_00b37360 */


undefined8 * FUN_00b37360(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  int local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  longlong local_40;
  longlong local_38;
  longlong local_30 [2];
  
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_004144d0(param_1);
  FUN_0061d8e0(&local_60,param_2);
  FUN_004156b0(local_30,local_60,&DAT_00b378cc);
  iVar1 = FUN_00417250(&DAT_00b378dc,local_30[0],1);
  while (0 < iVar1) {
    FUN_00415ad0(&local_38,local_30[0],1,iVar1);
    iVar2 = FUN_00417250(&DAT_00b378ec,local_38,1);
    FUN_00415ad0(&local_40,local_38,1,iVar2 + -1);
    uVar3 = 0;
    if (local_38 != 0) {
      uVar3 = *(undefined4 *)(local_38 + -4);
    }
    FUN_00415ad0(&local_38,local_38,iVar2 + 1,uVar3);
    iVar2 = FUN_00417250(&DAT_00b378fc,local_40,1);
    FUN_00416880(&local_78,local_40);
    FUN_00416dc0(&local_70,local_78,1,iVar2 + -1);
    FUN_0043ea00(&local_68,local_70);
    local_44 = FUN_0043fc00(local_68);
    uVar3 = 0;
    if (local_40 != 0) {
      uVar3 = *(undefined4 *)(local_40 + -4);
    }
    FUN_00416880(&local_90,local_40);
    FUN_00416dc0(&local_88,local_90,iVar2 + 1,uVar3);
    FUN_0043ea00(&local_80,local_88);
    local_48 = FUN_0043fc00(local_80);
    local_44 = local_44 + -1;
    local_4c = FUN_00b36520(local_38,param_3,param_4);
    if (3 < local_4c) {
      local_4c = local_4c + 1;
    }
    local_50 = param_3;
    if (3 < param_3) {
      local_50 = param_3 + 1;
    }
    FUN_00409a70(&local_44,&local_54,2);
    FUN_00409a70(&local_4c,&local_52,2);
    FUN_004153d0(&local_98,local_54,0);
    FUN_004153d0(&local_a0,local_53,0);
    FUN_004153d0(&local_a8,local_52,0);
    FUN_004153d0(&local_b0,local_51,0);
    FUN_00415980(param_1,5,*param_1,local_98,local_a0,local_a8,local_b0);
    FUN_00409a70(&local_48,&local_54,2);
    FUN_00409a70(&local_50,&local_52,2);
    FUN_004153d0(&local_b8,local_54,0);
    FUN_004153d0(&local_c0,local_53,0);
    FUN_004153d0(&local_c8,local_52,0);
    FUN_004153d0(&local_d0,local_51,0);
    FUN_00415980(param_1,5,*param_1,local_b8,local_c0,local_c8,local_d0);
    uVar3 = 0;
    if (local_30[0] != 0) {
      uVar3 = *(undefined4 *)(local_30[0] + -4);
    }
    FUN_00415ad0(local_30,local_30[0],iVar1 + 2,uVar3);
    iVar1 = FUN_00417250(&DAT_00b378dc,local_30[0],1);
  }
  FUN_00414590(&local_d0,8);
  FUN_00414560(&local_90,6);
  FUN_004144d0(&local_60);
  FUN_00414590(&local_40,3);
  return param_1;
}

