/* Ghidra address: 01cf29b0 */
/* Ghidra symbol: FUN_01cf29b0 */


int FUN_01cf29b0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined7 uVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined *local_a0;
  int local_98;
  int local_94;
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
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  local_94 = FUN_017bdd00(param_1,param_2);
  iVar5 = FUN_00416db0(param_1[0xb],param_1[0x32]);
  if ((iVar5 == 0) || (param_1[0x32] == 0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  FUN_01b240b0(&local_48,param_1[0xb],param_1[0xc]);
  local_a8 = param_1[0x32];
  local_a0 = &DAT_01cf2fc0;
  FUN_00416cd0(local_40,4,local_48,&DAT_01cf2fb0);
  iVar6 = FUN_01d31350(local_40[0]);
  FUN_01b240b0(&local_50,param_1[0xb],param_1[0xc]);
  iVar5 = FUN_01d31350(local_50);
  if (bVar11) {
    iVar5 = iVar6;
  }
  uVar10 = (undefined7)((ulonglong)param_2 >> 8);
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar11 = ((int)CONCAT71(uVar10,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar11 = false;
  }
  iVar6 = FUN_01d31350(param_1[0xb]);
  if (!bVar11) {
    iVar5 = iVar6;
  }
  iVar6 = FUN_01d31350(param_1[0x30]);
  FUN_004169a0(&local_58,param_1 + 0x36);
  iVar7 = FUN_01d31350(local_58);
  iVar8 = FUN_01d31f80(param_1[0x7c]);
  iVar9 = FUN_01d31f80(param_1[0x9f]);
  local_94 = local_94 +
             iVar5 + iVar6 + iVar7 + iVar8 + *(int *)(param_1[0x7e] + 0x10) * 0x18 + iVar9 + 0x2d;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar11 = ((int)CONCAT71(uVar10,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x3dU) != 0;
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    FUN_004169a0(&local_60,param_1 + 0x7f);
    iVar5 = FUN_01d31350(local_60);
    local_94 = local_94 + iVar5;
  }
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar11 = ((int)CONCAT71(uVar10,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    local_94 = local_94 + 1;
  }
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar3 == 0x39) {
    local_94 = local_94 + 4;
    cVar2 = FUN_01d04d40(param_1);
    if (cVar2 != '\0') {
      if (param_1[0x76] != 0) {
        if (*(byte *)(param_2 + 0x78) < 8) {
          bVar11 = ((int)CONCAT71(uVar10,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x21U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          FUN_004168e0(&local_70,param_1[0x76]);
          FUN_00b0cea0(&local_68,local_70,0xfde9);
          FUN_00416880(&local_30,local_68);
          FUN_00b92430(&local_78,local_30);
          FUN_00414b50(&local_30,local_78);
          FUN_00415dd0(&local_80,local_30,0);
          iVar5 = FUN_01d31230(local_80);
          local_94 = local_94 + iVar5;
          goto LAB_01cf2d9b;
        }
      }
      iVar5 = (**(code **)(*(longlong *)param_1[0x35] + 0x58))((longlong *)param_1[0x35],param_2);
      local_94 = local_94 + iVar5;
    }
  }
LAB_01cf2d9b:
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar3 != 0xa1) {
    uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d420f0(uVar4);
    if (cVar2 == '\0') goto LAB_01cf2e3c;
  }
  local_94 = local_94 + 2;
  plVar1 = (longlong *)param_1[0xa2];
  if (plVar1 != (longlong *)0x0) {
    iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
    local_94 = local_94 + iVar5;
  }
  uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
  cVar2 = FUN_01d420f0(uVar4);
  if (cVar2 != '\0') {
    local_94 = local_94 + 0x10;
  }
LAB_01cf2e3c:
  iVar5 = 0;
  while ((iVar5 < 0x14 && (*(short *)((longlong)param_1 + (longlong)iVar5 * 2 + 0x26) != -1))) {
    iVar5 = iVar5 + 1;
  }
  local_94 = local_94 + iVar5 * 2 + 2;
  FUN_01cf4a10(param_1,&local_88);
  FUN_00414ad0(param_1 + 0xad,local_88);
  if (*(char *)(param_2 + 0x78) == '\0') {
    local_94 = local_94 + 1;
    FUN_004168e0(&local_90,param_1[0xad]);
    iVar5 = FUN_01d31290(local_90);
    local_94 = local_94 + iVar5;
  }
  local_98 = FUN_01cf2500(auStack_c8);
  local_98 = local_94 + local_98;
  FUN_00414520(&local_90);
  FUN_00414480(&local_88);
  FUN_004144d0(&local_80);
  FUN_00414480(&local_78);
  FUN_00414520(&local_70);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,5);
  FUN_00414480(&local_30);
  return local_98;
}

