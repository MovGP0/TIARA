/* Ghidra address: 01276230 */
/* Ghidra symbol: FUN_01276230 */


void FUN_01276230(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong local_a0;
  int local_94;
  undefined1 local_8d;
  undefined1 *local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_5a;
  char local_59;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  char local_39;
  longlong local_38 [3];
  
  local_b0 = auStack_d8;
  local_b8 = 0;
  local_38[0] = 0;
  local_48 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  cVar2 = FUN_01b23030();
  local_8d = cVar2 == '\0';
  if ((bool)local_8d) {
    local_94 = 10;
  }
  else {
    local_94 = 1;
  }
  local_54 = local_94;
  cVar2 = FUN_0199c7c0(param_2);
  if (cVar2 != '\0') {
    local_59 = '\0';
    cVar2 = FUN_01275c10(local_res18,0,7,&local_48);
    if (cVar2 != '\0') {
      local_59 = FUN_0043fc50(local_48,0);
    }
    cVar2 = FUN_01d07fe0(param_2,*(undefined8 *)(param_1 + 0x478),&local_50);
    if ((cVar2 == '\0') ||
       (plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50),
       *plVar3 != param_2)) {
      local_5a = '\0';
    }
    else {
      local_5a = '\x01';
    }
    if (local_59 == '\0') {
      if (local_5a == '\0') {
        local_39 = '\x03';
      }
      else {
        local_39 = '\x02';
      }
    }
    else if (local_5a == '\0') {
      local_39 = '\x03';
      if (*(int *)(*(longlong *)(param_1 + 0x478) + 0x10) < local_54) {
        local_39 = '\0';
      }
    }
    else {
      local_39 = '\x01';
    }
    if (local_39 != '\x03') {
      (**(code **)(*local_res18 + 0xd8))(local_res18,&local_b8,&DAT_012768fc);
      FUN_0041b890(local_38,local_b8,&DAT_0127691e);
      if (local_38[0] != 0) {
        local_4c = 0;
        cVar2 = FUN_01275c10(local_38[0],L"parameter[1]",7,&local_48);
        if (cVar2 != '\0') {
          local_4c = FUN_0043fc50(local_48,1);
        }
        FUN_01275c10(local_38[0],L"parameter[2]",5,&local_68);
        FUN_01275c10(local_38[0],L"parameter[3]",5,&local_70);
        if (local_39 == '\0') {
          local_78 = (longlong *)FUN_004095c0(0x37);
          *local_78 = param_2;
          *(undefined1 *)(local_78 + 1) = 0;
          *(undefined8 *)((longlong)local_78 + 9) = *(undefined8 *)(PTR_DAT_02001120 + 0x577);
          *(undefined1 *)((longlong)local_78 + 0x11) = 0;
          *(undefined1 *)((longlong)local_78 + 0x12) = 0;
          uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)local_78 + 0x13) = uVar5;
          uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)local_78 + 0x1b) = uVar5;
          uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
          *(undefined8 *)((longlong)local_78 + 0x23) = uVar5;
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x478),local_78);
          local_80 = (undefined1 *)FUN_004095c0(0x29);
          *local_80 = (undefined1)local_4c;
          *(undefined8 *)(local_80 + 1) = local_68;
          *(undefined8 *)(local_80 + 9) = local_70;
          FUN_004ae7e0(*(undefined8 *)((longlong)local_78 + 0x23),local_80);
        }
        else if (local_39 == '\x01') {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
          local_88 = (undefined1 *)FUN_004aeac0(*(undefined8 *)(lVar4 + 0x23),0);
          *local_88 = (undefined1)local_4c;
          *(undefined8 *)(local_88 + 1) = local_68;
          *(undefined8 *)(local_88 + 9) = local_70;
          local_80 = local_88;
        }
        else if (local_39 == '\x02') {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
          iVar7 = *(int *)(*(longlong *)(lVar4 + 0x13) + 0x10);
          local_58 = 0;
          if (-1 < iVar7 + -1) {
            do {
              lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
              uVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x13),local_58);
              FUN_004095f0(uVar5);
              local_58 = local_58 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
          FUN_00410f20(*(undefined8 *)(lVar4 + 0x13));
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
          iVar7 = *(int *)(*(longlong *)(lVar4 + 0x1b) + 0x10);
          local_58 = 0;
          if (-1 < iVar7 + -1) {
            do {
              lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
              uVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x1b),local_58);
              FUN_004095f0(uVar5);
              local_58 = local_58 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
          FUN_00410f20(*(undefined8 *)(lVar4 + 0x1b));
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
          iVar7 = *(int *)(*(longlong *)(lVar4 + 0x23) + 0x10);
          local_58 = 0;
          if (-1 < iVar7 + -1) {
            do {
              lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
              uVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x23),local_58);
              FUN_004095f0(uVar5);
              local_58 = local_58 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
          FUN_00410f20(*(undefined8 *)(lVar4 + 0x23));
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x478),local_50);
          FUN_004095f0(uVar5);
          FUN_004ae870(*(undefined8 *)(param_1 + 0x478),local_50);
        }
      }
    }
    puVar1 = PTR_DAT_02001120;
    lVar4 = *(longlong *)(param_1 + 0x478);
    if (*(int *)(lVar4 + 0x10) < 1) {
      puVar6 = (undefined8 *)(PTR_DAT_02001120 + 0x576);
      *(undefined8 *)(param_1 + 0xa00) = *(undefined8 *)(PTR_DAT_02001120 + 0x56e);
      *(undefined8 *)(param_1 + 0xa08) = *puVar6;
      *(undefined *)(param_1 + 0xa10) = puVar1[0x57e];
    }
    else {
      local_a0 = lVar4;
      puVar6 = (undefined8 *)FUN_004aeac0(lVar4,0);
      *(undefined8 *)(param_1 + 0xa00) = *puVar6;
      *(undefined8 *)(param_1 + 0xa08) = puVar6[1];
      *(undefined1 *)(param_1 + 0xa10) = *(undefined1 *)(puVar6 + 2);
    }
  }
  FUN_0041b800(&local_b8);
  FUN_00414480(&local_48);
  FUN_0041b800(local_38);
  FUN_0041b800(&local_res18);
  return;
}

