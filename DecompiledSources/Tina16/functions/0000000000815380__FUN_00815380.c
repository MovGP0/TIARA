/* Ghidra address: 00815380 */
/* Ghidra symbol: FUN_00815380 */


int FUN_00815380(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  char local_35;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_70 = auStack_98;
  local_24 = FUN_00813d00(param_1,0xf);
  lVar5 = FUN_00814f80(param_1);
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0xc1) == '\0') {
      local_34 = 0;
    }
    else {
      local_34 = local_24 * 3;
    }
    local_40 = FUN_00814f80(param_1);
    local_48 = 0;
    lVar5 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
    if (*(char *)(lVar5 + 0x4d6) == '\x02') {
      local_50 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
      lVar5 = FUN_007ff990(local_50);
      if ((lVar5 != 0) && (lVar5 = FUN_007ff990(local_50), *(longlong *)(lVar5 + 0x500) != 0)) {
        lVar5 = FUN_007ff990(local_50);
        iVar2 = FUN_007e2ef0(*(undefined8 *)(*(longlong *)(lVar5 + 0x500) + 0x80));
        if (0 < iVar2) {
          uVar6 = FUN_007ff990(local_50);
          lVar5 = FUN_0065b870(uVar6);
          if (lVar5 != *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x58)) {
            lVar5 = FUN_007ff990(local_50);
            local_48 = *(undefined8 *)(lVar5 + 0x500);
          }
        }
      }
    }
    uVar3 = FUN_00815110(auStack_98,local_40,local_48);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    local_20 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    lVar5 = FUN_00609e10(local_20);
    (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x10))
              (*(longlong **)(lVar5 + 0x70),*(undefined8 *)(DAT_02012670 + 0x110));
    uVar6 = FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
    uVar6 = FUN_0065b870(uVar6);
    cVar1 = FUN_00647eb0(uVar6);
    if (cVar1 != '\0') {
      local_68 = FUN_00609e10(local_20);
      lVar5 = FUN_00609e10(local_20);
      local_60 = *(longlong *)(lVar5 + 0x70);
      plVar7 = (longlong *)FUN_008199e0(*(undefined8 *)(param_1 + 0x20));
      uVar3 = (**(code **)(*plVar7 + 0x98))(plVar7);
      uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(local_60 + 0x18) + 0x28),uVar3,
                                 *(undefined4 *)(DAT_02012670 + 0x98));
      FUN_005fcc80(*(undefined8 *)(local_68 + 0x70),uVar3);
    }
    if ((*(char *)(param_1 + 0xc1) == '\0') || (cVar1 = FUN_00813d90(param_1), cVar1 == '\0')) {
      local_35 = '\0';
    }
    else {
      local_35 = '\x01';
    }
    if (local_35 == '\0') {
      local_2c = 0;
    }
    else {
      local_2c = FUN_00813d00(param_1,0xf);
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    local_28 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar6 = FUN_00609e10(local_20);
        local_30 = FUN_008156c0(param_1,*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x40) + 8 +
                                         (longlong)local_28 * 0x20),uVar6);
        local_2c = local_2c + local_30;
        if ((param_2 < local_2c) && (local_2c != 0)) {
          local_2c = local_30;
          iVar4 = FUN_00813d00(param_1,0xf);
          local_24 = local_24 + iVar4;
        }
        local_28 = local_28 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(local_20);
    if ((local_34 != 0) && (param_2 < local_2c + local_34)) {
      iVar2 = FUN_00813d00(param_1,0xf);
      local_24 = local_24 + iVar2;
    }
  }
  return local_24;
}

