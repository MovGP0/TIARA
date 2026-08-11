/* Ghidra address: 01ca30f0 */
/* Ghidra symbol: FUN_01ca30f0 */


void FUN_01ca30f0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  longlong local_a0;
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  longlong *local_30 [2];
  longlong *local_20;
  
  local_40 = auStack_108;
  local_80 = 0;
  local_98[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_48 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = 0;
  local_20 = *(longlong **)(param_1 + 0xb40);
  FUN_00414ad0(local_20 + 0x20,&DAT_01ca3540);
  FUN_00724270(local_20,&local_50);
  FUN_00441640(&local_48,local_50);
  FUN_00441920(&local_60,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_00416ba0(&local_68,&DAT_01ca3554,local_20[0x20]);
  FUN_004414c0(&local_58,local_60,local_68);
  FUN_00416ad0(&local_48,local_58);
  FUN_00724380(local_20,local_48);
  FUN_00414b50(&local_38,local_20[0x1c]);
  FUN_00414ad0(local_20 + 0x1c,L"XML File|*.XML");
  *(undefined4 *)(local_20 + 0x1d) = 1;
  cVar1 = (**(code **)(*local_20 + 0xa8))(local_20);
  if (cVar1 != '\0') {
    FUN_00bac3d0(local_30);
    (**(code **)(*local_30[0] + 0x118))(local_30[0],0);
    local_a0 = *(longlong *)(param_1 + 0x2788);
    FUN_00417c40(local_a0 + 0x492,PTR_DAT_02004010,&DAT_01d0d0b8);
    local_e8 = 2;
    local_e0 = *(undefined8 *)PTR_DAT_02001f18;
    local_d8 = 0;
    local_d0 = 1;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    FUN_0128ee00(&local_70,local_a0,local_30[0],*PTR_DAT_02002480 == '\0');
    FUN_00724270(local_20,&local_78);
    (**(code **)(*local_30[0] + 0x180))(local_30[0],local_78,2);
  }
  FUN_00414ad0(local_20 + 0x1c,local_38);
  FUN_00414480(local_98);
  FUN_00414480(&local_80);
  FUN_00414480(&local_78);
  FUN_0041b800(&local_70);
  FUN_00414560(&local_68,3);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_38);
  FUN_0041b800(local_30);
  return;
}

