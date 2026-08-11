/* Ghidra address: 00afd160 */
/* Ghidra symbol: FUN_00afd160 */


undefined8 FUN_00afd160(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [2];
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  local_b8 = param_3;
  if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x8b8) == 0) {
    FUN_00414b50(&local_38,L"unsaved:///THtmlViewer.htm");
  }
  else {
    iVar5 = FUN_004170c0(&DAT_00afd620,
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x8b8),1);
    if (iVar5 < 1) {
      FUN_00416ba0(&local_38,L"file://",
                   *(undefined8 *)(*(longlong *)(*(longlong *)(local_c0 + 0x60) + 0x70) + 0x8b8));
    }
    else {
      FUN_00414b50(&local_38,
                   *(undefined8 *)(*(longlong *)(*(longlong *)(local_c0 + 0x60) + 0x70) + 0x8b8));
    }
  }
  FUN_00414b50(&local_30,PTR_u_Version_1_0_StartHTML__EndHTML__S_01e7f250);
  FUN_00afd110(auStack_e8,&local_30,L"SourceURL:",local_38);
  FUN_0041d830(&local_40,local_30);
  FUN_0041d830(&local_48,local_b8);
  iVar5 = 0;
  if (local_40 != 0) {
    iVar5 = *(int *)(local_40 + -4);
  }
  iVar5 = iVar5 + 0x28;
  iVar1 = 0;
  if (local_48 != 0) {
    iVar1 = *(int *)(local_48 + -4);
  }
  FUN_00415dd0(&local_50,PTR_u_<___StartFragment__>_01e7f240,0);
  iVar2 = FUN_00417250(local_50,local_48,1);
  iVar3 = 0;
  if (PTR_u_<___StartFragment__>_01e7f240 != (undefined *)0x0) {
    iVar3 = *(int *)(PTR_u_<___StartFragment__>_01e7f240 + -4);
  }
  FUN_00415dd0(&local_58,PTR_u_<___EndFragment__>_01e7f248,0);
  iVar4 = FUN_00417250(local_58,local_48,1);
  local_70 = 0;
  local_78[0] = iVar5;
  FUN_00442f70(&local_68,L"%.10d",local_78,0);
  FUN_009ec420(&local_60,local_68);
  FUN_00afd110(auStack_e8,&local_30,L"StartHTML:",local_60);
  local_70 = 0;
  local_78[0] = iVar5 + iVar1;
  FUN_00442f70(&local_88,L"%.10d",local_78,0);
  FUN_009ec420(&local_80,local_88);
  FUN_00afd110(auStack_e8,&local_30,L"EndHTML:",local_80);
  local_70 = 0;
  local_78[0] = iVar5 + iVar2 + iVar3 + -1;
  FUN_00442f70(&local_98,L"%.10d",local_78,0);
  FUN_009ec420(&local_90,local_98);
  FUN_00afd110(auStack_e8,&local_30,L"StartFragment:",local_90);
  local_70 = 0;
  local_78[0] = iVar5 + iVar4 + -1;
  FUN_00442f70(&local_a8,L"%.10d",local_78,0);
  FUN_009ec420(&local_a0,local_a8);
  FUN_00afd110(auStack_e8,&local_30,L"EndFragment:",local_a0);
  FUN_0041d830(&local_b0,local_30);
  FUN_004156b0(local_c8,local_b0,local_48);
  FUN_004144d0(&local_b0);
  FUN_00414560(&local_a8,6);
  FUN_00414560(&local_68,2);
  FUN_00414590(&local_58,2);
  FUN_00414590(&local_48,2);
  FUN_00414560(&local_38,2);
  return local_c8;
}

