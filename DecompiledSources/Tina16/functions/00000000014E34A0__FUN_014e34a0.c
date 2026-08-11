/* Ghidra address: 014e34a0 */
/* Ghidra symbol: FUN_014e34a0 */


longlong *
FUN_014e34a0(longlong *param_1,longlong param_2,short *param_3,char param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,longlong param_9)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  longlong *local_1a0;
  longlong local_198;
  short *local_190;
  longlong *local_188;
  undefined *local_180;
  undefined *local_178;
  char local_16b;
  undefined2 local_16a;
  undefined8 local_168;
  undefined1 local_160 [256];
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined2 *local_40 [2];
  longlong local_30;
  
  local_168 = 0;
  local_60 = 0;
  local_50 = 0;
  if (param_4 == 'N') {
    local_16a = 0x40a;
  }
  else if (param_4 == 'O') {
    local_16a = 0x40b;
  }
  local_1a0 = param_1;
  local_198 = param_2;
  local_190 = param_3;
  local_16b = param_4;
  plVar6 = (longlong *)FUN_014db750(local_16a);
  local_188 = plVar6;
  FUN_017bf050(plVar6,0,local_190);
  *(bool *)((longlong)plVar6 + 0x531) = *local_190 == 0x58;
  uVar7 = FUN_01d347d0(param_5,0);
  FUN_014dbb80(local_188,0,uVar7,param_9);
  uVar2 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
  lVar8 = FUN_00409570(uVar2);
  plVar6[0x18] = lVar8;
  FUN_01d38290(local_188,1);
  lVar8 = FUN_016c7b00(param_9,param_7);
  if (lVar8 == 0) {
    FUN_016a4020(*(undefined8 *)(param_9 + 0x10),0xd,param_7,0xffffffff);
  }
  cVar1 = FUN_014db910(&DAT_014e3a58,param_6,&local_48);
  if (cVar1 == '\0') {
    FUN_00414480(&local_50);
  }
  else {
    FUN_004169a0(&local_50,*(undefined8 *)(local_48 + 0x28));
  }
  for (iVar5 = 0; iVar5 < *(int *)(*(longlong *)(lVar8 + 0x10) + 0x10); iVar5 = iVar5 + 1) {
    lVar9 = FUN_01d347d0(*(longlong *)(lVar8 + 0x10),iVar5);
    FUN_004169a0(&local_60,*(undefined8 *)(lVar9 + 8));
    iVar4 = FUN_00416db0(local_60,local_50);
    if (iVar4 == 0) break;
  }
  if (iVar5 < *(int *)(*(longlong *)(lVar8 + 0x10) + 0x10)) {
    lVar8 = FUN_01d347d0(param_8,iVar5);
  }
  else {
    lVar8 = 0;
  }
  if (lVar8 == 0) {
    FUN_00416910(local_160,local_50,0xff);
    FUN_016a4020(*(undefined8 *)(param_9 + 0x10),0x20,local_160,0xffffffff);
  }
  sVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (sVar3 == 0x40b) {
    (**(code **)(*plVar6 + 0x2d0))(plVar6,6,local_40);
    lVar9 = FUN_01d347d0(param_5,1);
    FUN_00415020(local_40[0],*(undefined8 *)(lVar9 + 8),0x1e);
    *(undefined2 *)((longlong)local_40[0] + 0x1f) = *(undefined2 *)(lVar9 + 0x18);
    *(undefined2 *)((longlong)local_40[0] + 0x23) = *(undefined2 *)(lVar9 + 0x1c);
    (**(code **)(*plVar6 + 0x2d0))(plVar6,7,local_40);
    *local_40[0] = *(undefined2 *)(lVar8 + 0x18);
    local_180 = PTR_DAT_020033a0;
    local_178 = &DAT_01f5b42d;
    (**(code **)(*plVar6 + 0x2d0))(plVar6,0xc,local_40);
  }
  sVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (sVar3 == 0x40a) {
    (**(code **)(*plVar6 + 0x2d0))(plVar6,5,local_40);
    lVar9 = FUN_01d347d0(param_5,1);
    FUN_00415020(local_40[0],*(undefined8 *)(lVar9 + 8),0x1e);
    *(undefined2 *)((longlong)local_40[0] + 0x1f) = *(undefined2 *)(lVar9 + 0x18);
    *(undefined2 *)((longlong)local_40[0] + 0x23) = *(undefined2 *)(lVar9 + 0x1c);
    (**(code **)(*plVar6 + 0x2d0))(plVar6,4,local_40);
    lVar9 = FUN_01d347d0(param_5,2);
    FUN_00415020(local_40[0],*(undefined8 *)(lVar9 + 8),0x1e);
    *(undefined2 *)((longlong)local_40[0] + 0x1f) = *(undefined2 *)(lVar9 + 0x18);
    *(undefined2 *)((longlong)local_40[0] + 0x23) = *(undefined2 *)(lVar9 + 0x1c);
    (**(code **)(*plVar6 + 0x2d0))(plVar6,6,local_40);
    *local_40[0] = *(undefined2 *)(lVar8 + 0x18);
    local_180 = PTR_DAT_02003398;
    local_178 = &DAT_01f5b86d;
    (**(code **)(*plVar6 + 0x2d0))(plVar6,0xb,local_40);
  }
  lVar8 = *(longlong *)(local_40[0] + 0x13);
  FUN_00409a70(local_180,*(undefined8 *)(lVar8 + 9),*(undefined2 *)(lVar8 + 0x23));
  local_1c8 = 0;
  local_1c0 = param_6;
  local_1b8 = local_178;
  FUN_014dd530(local_188,*(undefined2 *)(lVar8 + 0x21),*(undefined8 *)(lVar8 + 9),
               *(undefined8 *)(lVar8 + 1));
  (**(code **)(*local_1a0 + 0x20))(local_1a0,local_188);
  if ((local_198 != 0) && (*(longlong *)(local_198 + 0xe8) != 0)) {
    local_30 = FUN_014cdd20(*(undefined8 *)(local_198 + 0xe8));
    if ((local_30 != 0) && (*(longlong *)(local_30 + 0x9c0) != 0)) {
      iVar5 = FUN_004170c0(&DAT_014e3a6c,local_190,1);
      FUN_00416dc0(&local_168,local_190,1,iVar5 + -1);
      cVar1 = FUN_014e33c0(auStack_1e8,local_168,&local_54);
      if (cVar1 != '\0') {
        lVar8 = FUN_004aeac0(*(undefined8 *)(local_30 + 0x9c0),local_54);
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 8))(*(undefined8 **)(lVar8 + 8));
        FUN_00418590(uVar7,&DAT_01cf1390);
        lVar8 = FUN_004aeac0(*(undefined8 *)(local_30 + 0x9c0),local_54);
        *(longlong **)(lVar8 + 8) = local_188;
      }
    }
  }
  FUN_00414480(&local_168);
  FUN_00414480(&local_60);
  FUN_00414480(&local_50);
  return local_188;
}

