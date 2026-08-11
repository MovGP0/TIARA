/* Ghidra address: 01c7bfa0 */
/* Ghidra symbol: FUN_01c7bfa0 */


void FUN_01c7bfa0(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  int local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_50 = auStack_98;
  local_58 = 0;
  puVar3 = auStack_98;
  if ((param_2 < 0) ||
     (puVar3 = auStack_98, *(int *)(*(longlong *)(param_1 + 0xa48) + 0x4e0) <= param_2))
  goto LAB_01c7c760;
  puVar3 = auStack_98;
  if (*(int *)(param_1 + 0x17ec) == -1) {
    uVar5 = FUN_01b1d2f0();
    *(undefined4 *)(param_1 + 0x17ec) = uVar5;
    FUN_00742eb0(*(undefined8 *)(param_1 + 0xb20),1);
    puVar3 = local_50;
  }
  local_50 = puVar3;
  local_30 = FUN_01b1d2f0();
  local_28 = FUN_01c7acf0(param_1);
  if (local_28 != 0) {
    *(undefined1 *)(local_28 + 0x10) = 1;
    iVar8 = local_30 - *(int *)(param_1 + 0x17e8);
    *(int *)(local_28 + 0x18) = iVar8;
    if (iVar8 < 0) {
      *(undefined4 *)(local_28 + 0x18) = 0;
    }
    *(int *)(local_28 + 0x14) = *(int *)(local_28 + 0x14) + *(int *)(local_28 + 0x18);
    *(undefined4 *)(local_28 + 0xf4) = *(undefined4 *)(param_1 + 0x17f8);
    *(undefined4 *)(local_28 + 0xf8) = *(undefined4 *)(param_1 + 0x17fc);
    local_38 = local_28;
    uVar6 = FUN_01c7d9d0(param_1);
    uVar5 = FUN_012bec10(uVar6,*(undefined4 *)(param_1 + 0x17fc));
    *(undefined4 *)(local_38 + 0xfc) = uVar5;
  }
  *(int *)(param_1 + 0x17e4) = param_2;
  local_28 = FUN_01c7acf0(param_1);
  if (local_28 != 0) {
    local_78 = 0;
    local_70 = 0;
    local_68 = 1;
    local_40 = local_28;
    FUN_01c681b0(param_1,*(undefined8 *)(local_28 + 8),0,0);
    if (*PTR_DAT_02002ce0 != '\0') {
      *PTR_DAT_02002ce0 = 0;
      FUN_01c77470(param_1,1);
      uVar6 = FUN_00b89270();
      FUN_00b8e520(uVar6,&local_58,0x40b);
      FUN_0072d440(local_58,1,4,0);
      puVar3 = local_50;
      goto LAB_01c7c760;
    }
    *(undefined2 *)PTR_DAT_02005818 = 0;
    *(undefined2 *)PTR_DAT_02002200 = 0;
    *(undefined2 *)PTR_DAT_02004d68 = 0;
    *(undefined2 *)PTR_DAT_02003428 = 0;
    *(undefined2 *)PTR_DAT_02004528 = 0;
    *(undefined2 *)PTR_DAT_02002b60 = 0;
    *(undefined2 *)PTR_DAT_02003e28 = 0;
    FUN_01c7c970(param_1,*(undefined4 *)(local_40 + 0xf4),*(undefined4 *)(local_40 + 0xf8),
                 *(undefined1 *)(local_40 + 0x101));
    if (*(byte *)(local_40 + 0x1c) < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)local_40 >> 8),1) <<
               (*(byte *)(local_40 + 0x1c) & 0x1f) & 0x18U) != 0;
    }
    else {
      bVar9 = false;
    }
    *PTR_DAT_02003b28 = bVar9;
    if ((*(char *)(local_40 + 0xeb) == '\0') || (*PTR_DAT_02003b28 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *PTR_DAT_02001b10 = uVar4;
    *PTR_DAT_02001098 = *(char *)(local_40 + 0x1c) == '\x04';
    if ((*(char *)(local_40 + 0x100) == '\0') && (*PTR_DAT_02001098 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *PTR_DAT_020038e0 = uVar4;
    if ((((*(ushort *)(local_40 + 0xf0) & 4) == 0) || (*PTR_DAT_02003b28 == '\0')) ||
       (*PTR_DAT_02001098 != '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x182a) = uVar4;
    if ((((*(ushort *)(local_40 + 0xf0) & 2) == 0) || (*PTR_DAT_02003b28 == '\0')) ||
       (*PTR_DAT_02001098 != '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x182b) = uVar4;
    if (*PTR_DAT_02003b28 == '\0') {
      *(undefined4 *)(param_1 + 0x17f0) = 0;
    }
    else {
      if (*(short *)(local_40 + 0xee) != 0) {
        lVar7 = FUN_012bedf0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xd8),
                             *(short *)(local_40 + 0xee) + -1);
        if (lVar7 != 0) {
          *(uint *)(param_1 + 0x17f0) = *(ushort *)(local_40 + 0xee) - 1;
          goto LAB_01c7c3e7;
        }
      }
      uVar5 = FUN_012bf0d0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xd8));
      *(undefined4 *)(param_1 + 0x17f0) = uVar5;
    }
LAB_01c7c3e7:
    if (*PTR_DAT_020038e0 != '\0') {
      local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
      lVar7 = FUN_01c7d9d0(param_1);
      FUN_01b1d100(local_20,*(undefined8 *)(lVar7 + 0x10));
      if ((*PTR_DAT_02003b28 != '\0') && (*(int *)(param_1 + 0x17f4) != *(int *)(param_1 + 0x17f0)))
      {
        lVar7 = FUN_012bedf0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xd8),
                             *(undefined2 *)(param_1 + 0x17f0));
        FUN_01b1d100(local_20,*(undefined8 *)(lVar7 + 0x10));
      }
      FUN_01b1d1c0(local_20);
      FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x1448) + 0x4a0));
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1448) + 0x4a0);
      (**(code **)(*plVar2 + 0x90))(plVar2);
      FUN_01b1d100(*(undefined8 *)(*(longlong *)(param_1 + 0x1448) + 0x4a0),local_20);
      FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x1448) + 0x4a0));
      FUN_00410f20(local_20);
    }
    bVar1 = *(byte *)(local_40 + 0x1c);
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        FUN_006d78a0(*(undefined8 *)(param_1 + 0x1380),*(undefined8 *)(param_1 + 0x13f8));
      }
      else if (bVar1 == 1) {
LAB_01c7c552:
        (**(code **)(**(longlong **)(param_1 + 0x13a0) + 0x298))(*(longlong **)(param_1 + 0x13a0));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x13a8),0);
        FUN_006d78a0(*(undefined8 *)(param_1 + 0x1380),*(undefined8 *)(param_1 + 5000));
      }
      else if (bVar1 == 2) {
        if (PTR_DAT_02004010[3] == '\x05') {
          (**(code **)(**(longlong **)(param_1 + 0x13a0) + 0x298))(*(longlong **)(param_1 + 0x13a0))
          ;
          FUN_0064de00(*(undefined8 *)(param_1 + 0x13a8),0);
          FUN_006d78a0(*(undefined8 *)(param_1 + 0x1380),*(undefined8 *)(param_1 + 5000));
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x13d0) + 0x298))(*(longlong **)(param_1 + 0x13d0))
          ;
          FUN_0064de00(*(undefined8 *)(param_1 + 0x13d8),0);
          (**(code **)(**(longlong **)(param_1 + 0x13e0) + 0x298))(*(longlong **)(param_1 + 0x13e0))
          ;
          FUN_0064de00(*(undefined8 *)(param_1 + 0x13e8),0);
          FUN_006d78a0(*(undefined8 *)(param_1 + 0x1380),*(undefined8 *)(param_1 + 0x13b0));
        }
      }
    }
    else if (bVar1 == 4) {
      FUN_006d78a0(*(undefined8 *)(param_1 + 0x1380),*(undefined8 *)(param_1 + 0x13f0));
    }
    else if (bVar1 == 5) goto LAB_01c7c552;
    if (*PTR_DAT_020038e0 != '\0') {
      FUN_006d78a0(*(undefined8 *)(param_1 + 0x1380),*(undefined8 *)(param_1 + 0x13f0));
    }
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1358),1);
  *(undefined1 *)(local_28 + 0x10) = 1;
  FUN_01c7cd70(param_1);
  FUN_01c79370(param_1,0);
  uVar5 = FUN_01b1d2f0();
  *(undefined4 *)(param_1 + 0x17e8) = uVar5;
  FUN_01c779c0(param_1,*(undefined1 *)(param_1 + 0x182b));
  puVar3 = local_50;
LAB_01c7c760:
  local_50 = puVar3;
  FUN_00414480(&local_58);
  return;
}

