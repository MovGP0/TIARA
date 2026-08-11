/* Ghidra address: 01a7ab10 */
/* Ghidra symbol: FUN_01a7ab10 */


void FUN_01a7ab10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  undefined1 local_2a;
  char local_29;
  int local_28;
  int local_24;
  
  local_70 = auStack_c8;
  local_a0 = 0;
  local_98 = 0;
  local_78 = 0;
  FUN_01aee720(&local_78,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFPrintMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_78);
  local_2a = *(undefined1 *)(*(longlong *)(param_1 + 0x798) + 0xb0);
  local_38 = (longlong *)FUN_00722380(&PTR_FUN_0071b250,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined1 *)((longlong)local_38 + 0xd9) = 0x3e;
  *(undefined1 *)((longlong)local_38 + 0xdb) = 1;
  *(undefined1 *)((longlong)local_38 + 0xda) = 0;
  *(undefined1 *)(local_38 + 0x1b) = 0;
  *(undefined4 *)((longlong)local_38 + 0xdc) = 1;
  *(undefined4 *)(local_38 + 0x1a) = 1;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x7a0) + 0x10);
  uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
  *(undefined4 *)(local_38 + 0x1c) = uVar3;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x7a0) + 0x10);
  uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
  *(undefined4 *)((longlong)local_38 + 0xd4) = uVar3;
  FUN_00725ea0(local_38,1);
  *(undefined4 *)((longlong)local_38 + 0x7c) = 0x1fc;
  cVar2 = (**(code **)(*local_38 + 0xa8))(local_38);
  if (cVar2 != '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x910) + 0x80) == '\0') {
      local_29 = '\0';
    }
    else {
      local_29 = '\x01';
      FUN_007e2d20(*(longlong *)(param_1 + 0x910),0);
      local_40 = *(longlong *)(param_1 + 0x798);
      *PTR_DAT_02002478 = 1;
      *(undefined1 *)(local_40 + 0xb0) = 0;
      FUN_01a782f0(param_1,local_88);
      FUN_01acf9e0(local_40,local_88);
      local_90 = FUN_00498310(0,0);
      FUN_01ace140(local_40,param_1,*(undefined8 *)(param_1 + 0x780),&local_90);
      FUN_01acfa60(local_40);
      *(undefined4 *)(local_40 + 0x100) = 0;
      *(undefined4 *)(local_40 + 0x104) = 0;
    }
    local_48 = FUN_0069e8a0();
    uVar4 = FUN_007fc180(&PTR_FUN_018000a8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02002660 = uVar4;
    FUN_00414ad0(local_48 + 0x30,L"TINA Diagram");
    FUN_0069d590(local_48);
    FUN_00441920(&local_98,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02002660 + 0x6c8),local_98);
    plVar5 = (longlong *)FUN_0069e100(local_48);
    uVar3 = FUN_0069df70(local_48);
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_a0,uVar3);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02002660 + 0x6d8),local_a0);
    FUN_008059a0(*(undefined8 *)PTR_DAT_02002660);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    local_28 = 1;
    cVar2 = *(char *)((longlong)local_38 + 0xdb);
    if (cVar2 == '\x02') {
      iVar7 = 1;
      local_24 = 1;
      do {
        FUN_01ceca50(*(undefined8 *)(param_1 + 0x7a0),(int)local_38[0x1a],
                     *(undefined4 *)((longlong)local_38 + 0xd4));
        if (local_24 < local_28) {
          FUN_0069d690(local_48);
        }
        local_24 = local_24 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    else if (cVar2 == '\x01') {
      iVar7 = 1;
      local_24 = 1;
      do {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x7a0) + 0x18) + 1;
        FUN_01ceca50(*(longlong *)(param_1 + 0x7a0),iVar6,iVar6);
        if (local_24 < local_28) {
          FUN_0069d690(local_48);
        }
        local_24 = local_24 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    else if (cVar2 == '\0') {
      iVar7 = 1;
      local_24 = 1;
      do {
        lVar1 = *(longlong *)(param_1 + 0x7a0);
        plVar5 = *(longlong **)(lVar1 + 0x10);
        uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_01ceca50(lVar1,1,uVar3);
        if (local_24 < local_28) {
          FUN_0069d690(local_48);
        }
        local_24 = local_24 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(char *)(local_48 + 0x39) == '\0') {
      FUN_0069d650(local_48);
    }
    FUN_00410f20(*(undefined8 *)PTR_DAT_02002660);
    *(undefined8 *)PTR_DAT_02002660 = 0;
    if (local_29 != '\0') {
      FUN_007e2d20(*(undefined8 *)(param_1 + 0x910),1);
      local_58 = *(longlong *)(param_1 + 0x798);
      *(undefined1 *)(local_58 + 0xb0) = local_2a;
      *PTR_DAT_02002478 = 1;
      FUN_01a782f0(param_1,local_88);
      FUN_01acf9e0(local_58,local_88);
      local_90 = FUN_00498310(0,0);
      FUN_01ace140(local_58,param_1,*(undefined8 *)(param_1 + 0x780),&local_90);
      FUN_01acfa60(local_58);
      *(undefined4 *)(local_58 + 0x100) = 0;
      *(undefined4 *)(local_58 + 0x104) = 0;
    }
  }
  FUN_00410f20(local_38);
  local_60 = *(longlong *)(param_1 + 0x7a0);
  iVar7 = (**(code **)(**(longlong **)(local_60 + 0x10) + 0x28))();
  local_24 = 0;
  if (-1 < iVar7 + -1) {
    do {
      local_68 = (**(code **)(**(longlong **)(local_60 + 0x10) + 0x30))
                           (*(longlong **)(local_60 + 0x10),local_24);
      *(undefined4 *)(local_68 + 0x100) = 0;
      *(undefined4 *)(local_68 + 0x104) = 0;
      local_24 = local_24 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_01a77f90(param_1,param_2);
  FUN_00414560(&local_a0,2);
  FUN_00414480(&local_78);
  return;
}

