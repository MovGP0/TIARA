/* Ghidra address: 01a37700 */
/* Ghidra symbol: FUN_01a37700 */


undefined1
FUN_01a37700(longlong param_1,longlong param_2,wchar_t *param_3,undefined8 param_4,
            undefined8 param_5,char param_6)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res10;
  wchar_t *local_res18;
  undefined8 local_res20;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  int local_84;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_b0 = auStack_118;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_68 = 0;
  local_70 = 0;
  local_48 = 0;
  local_78 = 0;
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  local_49 = 1;
  FUN_00419260(&local_38,&DAT_01a37070,1,1000);
  if (local_res10 == 0) {
    FUN_00414480(param_1 + 0x60);
  }
  else {
    local_f8 = local_res18;
    local_f0 = &DAT_01a37eb8;
    local_e8 = local_res20;
    local_e0 = &DAT_01a37eb8;
    local_d8 = param_5;
    FUN_00416cd0(param_1 + 0x60,7,local_res10,&DAT_01a37eb8);
  }
  if (*(char *)(param_1 + 0xa2) == '\0') {
    FUN_00416ba0(&local_68,*(undefined8 *)(param_1 + 0x50),L"\\temp");
    local_f8 = L"temp.ini";
    FUN_00416cd0(&local_b8,3,local_68,&DAT_01a37ee0);
    uVar3 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_b8);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    local_f8 = L"_dctable.xml";
    FUN_00416cd0(&local_48,3,local_68,&DAT_01a37ee0);
  }
  else {
    FUN_00441640(&local_c0,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8));
    FUN_00416ba0(&local_68,local_c0,*(undefined8 *)(param_1 + 0x68));
    FUN_00416ba0(&local_48,local_68,L"_dctable.xml");
  }
  local_60 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01a361d0(param_1);
  local_f8 = (wchar_t *)((ulonglong)local_f8 & 0xffffffffffffff00);
  local_f0 = (undefined *)local_60;
  local_e8 = CONCAT71(local_e8._1_7_,4);
  local_e0 = (undefined *)CONCAT71(local_e0._1_7_,0xf);
  iVar2 = FUN_019a9ed0(*(undefined8 *)(param_1 + 0x10),PTR_DAT_02003e38,*PTR_DAT_02004638,
                       *PTR_DAT_020044c8);
  local_84 = (int)((longlong)iVar2 % 100000);
  if (local_84 != 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,
                         CONCAT71((uint7)((ulonglong)((longlong)iVar2 % 100000) >> 8) & 0xffffff,1),
                         L"Electric rule check error: some wires are not connected");
    FUN_004134c0(uVar3);
  }
  uVar3 = FUN_00f33100(&LAB_00f256b8,1);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  uVar3 = FUN_00f33100(&LAB_00f256b8,1);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  FUN_01a35040(param_1,*(undefined8 *)(param_1 + 0x10));
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  local_7c = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (1 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10)) {
        FUN_01a370c0(auStack_118);
      }
      local_20 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),local_7c);
      (**(code **)(*local_20 + 0x288))(local_20,&local_28);
      uVar1 = (**(code **)(*local_20 + 0xf8))(local_20);
      local_2c = (uint)uVar1;
      if ((1 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10)) &&
         ((local_2c == 0xe || (local_2c == 0xd)))) {
        FUN_01a37340(auStack_118,local_7c);
      }
      FUN_01a37480(auStack_118,0);
      if (1 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10)) {
        FUN_01a37200(auStack_118);
      }
      local_7c = local_7c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01a37480(auStack_118,1);
  FUN_01a34800(param_1,0,*(undefined8 *)(param_1 + 0x10));
  FUN_01a34ae0(param_1,*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_01a35ae0(param_1,L"circuit_no_gens",1);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  FUN_01a35410(param_1,&local_c8,*(undefined4 *)(param_1 + 0xb8));
  if (*(char *)(param_1 + 0xa2) != '\0' || param_6 != '\0') {
    FUN_01a360c0(param_1);
    local_49 = FUN_01a369c0(param_1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30));
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20));
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x90))(*(longlong **)(param_1 + 0x38));
  FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
  FUN_00419430(&local_38,&DAT_01a37070);
  FUN_00410f20(local_60);
  if (*(char *)(param_1 + 0xa2) == '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_00414560(&local_c8,3);
  FUN_00414560(&local_78,3);
  FUN_00414480(&local_48);
  FUN_0041b800(&local_40);
  FUN_00419430(&local_38,&DAT_01a37070);
  FUN_00414480(&local_28);
  FUN_00414560(&local_res10,4);
  return local_49;
}

