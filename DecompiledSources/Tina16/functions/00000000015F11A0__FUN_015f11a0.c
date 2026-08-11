/* Ghidra address: 015f11a0 */
/* Ghidra symbol: FUN_015f11a0 */


undefined8
FUN_015f11a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
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
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_2);
  FUN_00414630(local_res18);
  FUN_00414630(local_res20);
  FUN_00414630(param_5);
  FUN_00416880(&local_38,local_res10);
  FUN_00416880(&local_40,local_res18);
  FUN_00450070(&local_30,local_38,local_40,0,1);
  FUN_00415dd0(&local_res10,local_30,0);
  FUN_00416880(&local_50,local_res10);
  FUN_00416880(&local_58,local_res20);
  FUN_00450070(&local_48,local_50,local_58,0,1);
  FUN_00415dd0(&local_res10,local_48,0);
  while( true ) {
    iVar4 = FUN_00417250(param_5,local_res10,1);
    if (iVar4 < 1) break;
    iVar2 = FUN_00417250(param_5,local_res10,1);
    iVar4 = 0;
    if (param_5 != 0) {
      iVar4 = *(int *)(param_5 + -4);
    }
    iVar2 = iVar2 + iVar4;
    FUN_004144d0(&local_20);
    while( true ) {
      cVar1 = FUN_00c53600(*(undefined1 *)(local_res10 + -1 + (longlong)iVar2));
      if (cVar1 == '\0') break;
      FUN_004153d0(&local_60,*(undefined1 *)(local_res10 + -1 + (longlong)iVar2),0);
      FUN_004155b0(&local_20,local_60);
      iVar2 = iVar2 + 1;
    }
    FUN_00416880(&local_68,local_20);
    uVar3 = FUN_0043fc00(local_68);
    FUN_00416880(&local_78,param_5);
    FUN_0043f750(&local_80,uVar3);
    FUN_00416cd0(&local_70,3,local_78,local_80,&LAB_015f15c0);
    FUN_00415dd0(&local_28,local_70,0);
    FUN_00416880(&local_90,local_res10);
    FUN_00416880(&local_98,local_28);
    FUN_00416760(&local_a0,uVar3);
    FUN_00450070(&local_88,local_90,local_98,local_a0,1);
    FUN_00415dd0(&local_res10,local_88,0);
  }
  FUN_00414bf0(param_1,local_res10);
  FUN_00414560(&local_a0,8);
  FUN_004144d0(&local_60);
  FUN_00414560(&local_58,6);
  FUN_00414590(&local_28,2);
  FUN_00414590(&local_res10,4);
  return param_1;
}

