/* Ghidra address: 014cd940 */
/* Ghidra symbol: FUN_014cd940 */


undefined4 FUN_014cd940(longlong param_1,char param_2,byte param_3,char param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_44;
  undefined8 *local_40;
  undefined4 local_2c;
  
  local_50 = auStack_78;
  local_2c = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    puVar3 = auStack_78;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      local_50 = auStack_78;
      if ((param_3 != 3) && (local_50 = auStack_78, *(longlong *)(param_1 + 0x1280) != 0)) {
        local_50 = auStack_78;
        _write_log2(*(longlong *)(param_1 + 0x1280));
      }
      plVar1 = *(longlong **)(param_1 + 0x30);
      if (((undefined **)*plVar1 == &PTR_FUN_014db5f8) || ((undefined1 *)*plVar1 == &LAB_014db6c8))
      {
        *(undefined8 *)(param_1 + 0x30) = 0;
        puVar3 = local_50;
      }
      else {
        FUN_019a0af0(plVar1);
        FUN_014cd780(auStack_78,param_1 + 0x30);
        puVar3 = local_50;
      }
    }
  }
  else {
    puVar3 = auStack_78;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      plVar1 = *(longlong **)(param_1 + 0x30);
      if (((undefined **)*plVar1 == &PTR_FUN_014db5f8) || ((undefined1 *)*plVar1 == &LAB_014db6c8))
      {
        *(undefined8 *)(param_1 + 0x30) = 0;
        puVar3 = auStack_78;
      }
      else {
        FUN_019a0af0(plVar1);
        FUN_014cd780(auStack_78,param_1 + 0x30);
        puVar3 = local_50;
      }
    }
  }
  local_50 = puVar3;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
    local_44 = 0;
    if (-1 < iVar6 + -1) {
      do {
        local_40 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_44);
        uVar4 = (**(code **)*local_40)(local_40);
        FUN_00418590(uVar4,&DAT_01cf1390);
        local_44 = local_44 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(char *)(param_1 + 0x22ba) != '\0') {
    puVar2 = *(undefined8 **)(param_1 + 0x23d8);
    if (puVar2 != (undefined8 *)0x0) {
      uVar4 = (**(code **)*puVar2)(puVar2);
      FUN_00418590(uVar4,&DAT_01cf1390);
    }
    *(undefined1 *)(param_1 + 0x22ba) = 0;
  }
  if (*(longlong *)(param_1 + 0x23d0) != 0) {
    FUN_01566780(*(longlong *)(param_1 + 0x23d0));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x23d0));
    *(undefined8 *)(param_1 + 0x23d0) = 0;
  }
  if ((*(uint *)(param_1 + 0x22c0) & 8) != 0) {
    uVar4 = FUN_014c0b50();
    FUN_014c47f0(uVar4);
    FUN_01ca4330(*(undefined8 *)PTR_DAT_02004e40);
  }
  if (*(longlong *)(param_1 + 0x23e8) != 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x23e8));
  }
  FUN_014cd270(param_1);
  lVar5 = param_1;
  if (*(char *)(param_1 + 0x20) != '\0') {
    lVar5 = *(longlong *)PTR_DAT_02004e40;
    *(undefined8 *)(lVar5 + 0x27f8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(lVar5 + 0x2800) = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_4 == '\0') {
    if (param_3 < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (param_3 & 0x1f) & 0x4cU) != 0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) {
      FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
    }
  }
  if ((param_2 == '\x02') && (*(longlong *)PTR_DAT_020023c0 != 0)) {
    FUN_01530e20(*(undefined8 *)PTR_DAT_020023c0);
  }
  return local_2c;
}

