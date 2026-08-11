/* Ghidra address: 019a3a90 */
/* Ghidra symbol: FUN_019a3a90 */


undefined1 FUN_019a3a90(undefined8 param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined1 local_b0;
  undefined1 local_a5;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  longlong *local_90;
  char *local_88;
  longlong local_80;
  int local_74;
  short *local_70;
  undefined8 local_68;
  undefined8 local_30 [2];
  
  local_70 = (short *)0x0;
  local_30[0] = 0;
  local_a5 = 1;
  local_80 = param_2;
  uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x38),0);
  local_94 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_88 = (char *)FUN_004095c0(0x2e);
  FUN_00c3d330(uVar4,&local_68,local_94);
  puVar7 = &local_68;
  pcVar8 = local_88;
  for (lVar5 = 5; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pcVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    pcVar8 = pcVar8 + 8;
  }
  *(undefined4 *)pcVar8 = *(undefined4 *)puVar7;
  *(undefined2 *)(pcVar8 + 4) = *(undefined2 *)((longlong)puVar7 + 4);
  local_90 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined1 *)((longlong)local_90 + 0x49) = 1;
  FUN_004b67b0(local_90,1);
  while ((*local_88 != '\0' && (*(short *)(local_88 + 0x15) != -0x7fff))) {
    cVar1 = local_88[0x14];
    if (cVar1 == '\0') {
      (**(code **)(*local_90 + 0x80))(local_90,&DAT_019a3eb4,local_88);
      local_a4 = local_a4 + 1;
    }
    else if (cVar1 == '\x01') {
      (**(code **)(*local_90 + 0x80))(local_90,&DAT_019a3ec4,local_88);
      local_a0 = local_a0 + 1;
    }
    else if (cVar1 == '\x02') {
      (**(code **)(*local_90 + 0x80))(local_90,&DAT_019a3ed4,local_88);
      local_9c = local_9c + 1;
    }
    else if (cVar1 == '\x03') {
      (**(code **)(*local_90 + 0x80))(local_90,&LAB_019a3ee4,local_88);
      local_98 = local_98 + 1;
    }
    local_94 = local_94 + 1;
    local_88 = (char *)FUN_004095c0(0x2e);
    FUN_00c3d330(uVar4,&local_68,local_94);
    puVar7 = &local_68;
    pcVar8 = local_88;
    for (lVar5 = 5; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pcVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      pcVar8 = pcVar8 + 8;
    }
    *(undefined4 *)pcVar8 = *(undefined4 *)puVar7;
    *(undefined2 *)(pcVar8 + 4) = *(undefined2 *)((longlong)puVar7 + 4);
  }
  local_74 = local_98;
  if (local_98 < local_a0) {
    local_74 = local_a0;
  }
  iVar6 = local_a4;
  if (local_a4 < local_9c) {
    iVar6 = local_9c;
  }
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  iVar3 = (**(code **)(*local_90 + 0x28))();
  local_94 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*local_90 + 0x18))(local_90,&local_70,local_94);
      sVar2 = *local_70;
      local_88 = (char *)(**(code **)(*local_90 + 0x30))(local_90,local_94);
      FUN_004169a0(local_30,local_88);
      bVar9 = (local_88[0x13] & 4U) != 0;
      if (sVar2 == 0x45) {
        local_b8 = local_9c * 0x10 + 0x58;
        local_b0 = bVar9;
        FUN_019a39e0(auStack_d8,local_30[0],0,local_74 * 0x10 + 0x60);
        local_9c = local_9c + 1;
      }
      else if (sVar2 == 0x4e) {
        local_b8 = 0x50;
        local_b0 = bVar9;
        FUN_019a39e0(auStack_d8,local_30[0],1,local_a0 * 0x10 + 0x58);
        local_a0 = local_a0 + 1;
      }
      else if (sVar2 == 0x53) {
        local_b8 = iVar6 * 0x10 + 0x60;
        local_b0 = bVar9;
        FUN_019a39e0(auStack_d8,local_30[0],3,local_98 * 0x10 + 0x58);
        local_98 = local_98 + 1;
      }
      else if (sVar2 == 0x57) {
        local_b8 = local_a4 * 0x10 + 0x58;
        local_b0 = bVar9;
        FUN_019a39e0(auStack_d8,local_30[0],2,0x50);
        local_a4 = local_a4 + 1;
      }
      FUN_004095f0(local_88);
      local_94 = local_94 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_90);
  FUN_00414480(&local_70);
  FUN_00414480(local_30);
  return local_a5;
}

