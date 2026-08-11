/* Ghidra address: 01aa02c0 */
/* Ghidra symbol: FUN_01aa02c0 */


void FUN_01aa02c0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined1 auStack_d8 [32];
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
  undefined1 *local_60;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined **local_40;
  char local_31;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_60 = auStack_d8;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_68 = 0;
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_01a9fe00(local_30,param_1,param_3);
  iVar1 = FUN_004170c0(&DAT_01aa06c0,local_30[0],1);
  if (iVar1 != 1) {
    FUN_00416ba0(local_30,&DAT_01aa06c0,local_30[0]);
  }
  FUN_00416ba0(&local_68,local_30[0],L"Name");
  FUN_004168e0(&local_78,param_2);
  FUN_00b0cea0(&local_70,local_78,0xfde9);
  FUN_00416880(&local_80,local_70);
  (**(code **)(*param_1 + 0x18))(param_1,L"Schematic Editor Color Sets",local_68,local_80);
  FUN_00416ba0(&local_88,local_30[0],&DAT_01aa0730);
  (**(code **)(*param_1 + 0x18))(param_1,L"Schematic Editor Color Sets",local_88,param_3);
  FUN_00414480(&local_20);
  local_31 = param_4;
  FUN_0043f750(&local_20,(longlong)param_4);
  FUN_00416ba0(&local_90,local_30[0],L"Mode");
  (**(code **)(*param_1 + 0x18))(param_1,L"Schematic Editor Color Sets",local_90,local_20);
  FUN_00414480(&local_20);
  iVar1 = 0x1b;
  local_40 = &PTR_u_COL_Bckgrnd_01fcd578;
  local_48 = param_5;
  do {
    FUN_00416ba0(&local_98,local_30[0],*local_40);
    FUN_005fbf40(&local_a0,*local_48);
    (**(code **)(*param_1 + 0x18))(param_1,L"Schematic Editor Color Sets",local_98,local_a0);
    local_48 = local_48 + 1;
    local_40 = local_40 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x10;
  local_50 = param_6;
  do {
    FUN_005fbf40(&local_b0,*local_50);
    FUN_00416ba0(&local_a8,local_30[0],local_b0);
    FUN_005fbf40(&local_b8,local_50[1]);
    (**(code **)(*param_1 + 0x18))(param_1,L"Schematic Editor Color Sets",local_a8,local_b8);
    local_50 = local_50 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00414560(&local_b8,8);
  FUN_00414520(&local_78);
  FUN_004144d0(&local_70);
  FUN_00414480(&local_68);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

