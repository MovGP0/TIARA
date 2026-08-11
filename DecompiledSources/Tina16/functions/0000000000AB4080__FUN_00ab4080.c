/* Ghidra address: 00ab4080 */
/* Ghidra symbol: FUN_00ab4080 */


void FUN_00ab4080(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_60;
  char local_51;
  ulonglong local_50;
  longlong local_48;
  undefined1 local_3d;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_d0 = auStack_118;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  puVar2 = auStack_118;
  if (*(int *)(param_2 + 0x14) == 0) goto LAB_00ab46ef;
  local_70 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68);
  local_60 = FUN_004aeac0(local_70,*(int *)(local_70 + 0x10) + -1);
  cVar3 = FUN_00a54300(local_60);
  if ((cVar3 == '\x11') &&
     (bVar4 = *(char *)(local_60 + 0x31) - 0x28, puVar2 = local_d0,
     bVar4 < 0x40 && (1L << (bVar4 & 0x3f) & 0x878003f800fff30U) != 0)) goto LAB_00ab46ef;
  cVar3 = FUN_00a54e70(local_60);
  if (cVar3 == '\x01') {
    FUN_00414480(local_20);
    FUN_00a74e40(param_2,&local_d8);
    local_78 = local_d8;
    FUN_0043e5a0(local_20,local_d8);
    FUN_00414b50(&local_48,local_20[0]);
    FUN_00414480(local_20);
  }
  else if (cVar3 == '\x02') {
    FUN_00414480(&local_28);
    FUN_00a74e40(param_2,&local_e0);
    local_80 = local_e0;
    FUN_0043e600(&local_28,local_e0);
    FUN_00414b50(&local_48,local_28);
    FUN_00414480(&local_28);
  }
  else {
    FUN_00a74e40(param_2,&local_48);
  }
  local_34 = *(int *)(param_1 + 0x6c) + *(int *)(param_2 + 0x14);
  local_88 = *(longlong *)(param_1 + 0x108);
  local_90 = local_88;
  if (local_88 != 0) {
    local_90 = *(longlong *)(local_88 + -8);
  }
  if (local_90 < local_34 + 3) {
    FUN_00ab50a0(param_1,local_34 + 500);
  }
  FUN_00409a70(*(longlong *)(param_2 + 0x20) + 4,
               *(longlong *)(param_1 + 0x108) + (longlong)*(int *)(param_1 + 0x6c) * 4,
               (longlong)(*(int *)(param_2 + 0x14) * 4));
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x309) == '\0') {
    if (*(byte *)(param_1 + 0x128) < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
               (*(byte *)(param_1 + 0x128) & 0x1f) & 0x16U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) goto LAB_00ab437c;
    local_3d = 1;
  }
  else {
LAB_00ab437c:
    local_3d = 0;
  }
  local_98 = *(longlong *)(param_1 + 0xe0);
  local_a0 = local_98;
  if (local_98 != 0) {
    local_a0 = *(longlong *)(local_98 + -8);
  }
  local_3c = (int)local_a0;
  FUN_00419260(param_1 + 0xe0,&DAT_00a84d10,1,(longlong)((int)local_a0 + *(int *)(param_2 + 0x14)));
  iVar7 = local_3c + *(int *)(param_2 + 0x14) + -1;
  local_38 = local_3c;
  if (local_3c <= iVar7) {
    iVar7 = (iVar7 - local_3c) + 1;
    do {
      *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + (longlong)local_38) = local_3d;
      local_38 = local_38 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00a54f10(local_60,&local_e8);
  iVar7 = FUN_00416db0(local_e8,L"small-caps");
  if (iVar7 == 0) {
    FUN_00414480(&local_30);
    FUN_0043e5a0(&local_30,local_48);
    FUN_00414b50(&local_50,local_30);
    FUN_00414480(&local_30);
    FUN_00416ad0(param_1 + 0xd0,local_50);
    local_51 = '\0';
    local_a4 = 0;
    if (local_48 != 0) {
      local_a4 = *(int *)(local_48 + -4);
    }
    local_38 = 1;
    iVar7 = local_a4;
    if (0 < local_a4) {
      do {
        lVar5 = (longlong)local_38;
        sVar1 = *(short *)(local_48 + -2 + lVar5 * 2);
        if ((sVar1 != 0x20) && (9 < (ushort)(sVar1 - 0x30U))) {
          if (local_51 == '\0') {
            if (*(short *)((local_50 - 2) + lVar5 * 2) != sVar1) {
              local_f8 = 0;
              FUN_00ac0980(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),0x3a,0,0);
              local_b0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68);
              uVar6 = FUN_004aeac0(local_b0,*(int *)(local_b0 + 0x10) + -1);
              FUN_00ab50e0(param_1,uVar6);
              local_51 = '\x01';
            }
          }
          else if (*(short *)((local_50 - 2) + lVar5 * 2) == sVar1) {
            FUN_00ac0ab0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),0x3a);
            local_b8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68);
            uVar6 = FUN_004aeac0(local_b8,*(int *)(local_b8 + 0x10) + -1);
            FUN_00ab50e0(param_1,uVar6);
            local_51 = '\0';
          }
        }
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
        local_38 = local_38 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (local_51 != '\0') {
      FUN_00ac0ab0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68),0x3a);
      local_c0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68);
      uVar6 = FUN_004aeac0(local_c0,*(int *)(local_c0 + 0x10) + -1);
      FUN_00ab50e0(param_1,uVar6);
    }
  }
  else {
    FUN_00416ad0(param_1 + 0xd0,local_48);
    *(int *)(param_1 + 0x6c) = local_34;
  }
  uVar6 = FUN_00416740(*(undefined8 *)(param_1 + 0xd0));
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  puVar2 = local_d0;
LAB_00ab46ef:
  local_d0 = puVar2;
  FUN_00414560(&local_e8,3);
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_30,3);
  return;
}

