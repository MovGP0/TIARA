/* Ghidra address: 01798fe0 */
/* Ghidra symbol: FUN_01798fe0 */


void FUN_01798fe0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 *local_a0;
  int local_8c;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_a0 = auStack_d8;
  plVar2 = (longlong *)FUN_006a6030();
  (**(code **)(*plVar2 + 0x30))(plVar2);
  uVar3 = FUN_006a6030();
  cVar1 = FUN_006a5ff0(uVar3,DAT_01fa0ba0);
  if (cVar1 != '\0') {
    uVar3 = FUN_006a6030();
    local_28 = FUN_006a5da0(uVar3,DAT_01fa0ba0);
    if (local_28 == 0) {
      FUN_01799300(0,local_a0);
      return;
    }
    local_40 = thunk_FUN_0416a623(local_28);
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    uVar3 = thunk_FUN_0420b4c4(local_28);
    (**(code **)(*local_20 + 0x10))(local_20,uVar3);
    uVar3 = thunk_FUN_0420b4c4(local_28);
    FUN_004b89e0(local_20,local_40,uVar3);
    thunk_FUN_04172795(local_28);
    local_b8 = 0;
    local_38 = FUN_01d30b30(&DAT_01d2e8e8,1,local_20,0);
    local_30 = FUN_01d331a0(&PTR_FUN_00c39d20,1,local_38);
    FUN_017956f0(param_1);
    local_80 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_017967b0(param_1,local_30,1,local_80);
    iVar4 = *(int *)(local_80 + 0x10);
    local_8c = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar3 = FUN_004aeac0(local_80,local_8c);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd10),uVar3);
        local_8c = local_8c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (0 < *(int *)(local_80 + 0x10)) {
      local_b8 = 0;
      local_88 = FUN_00c5c340(&DAT_00c5bba8,1,*(undefined8 *)(param_1 + 0xd10),local_80);
      FUN_00c5c790(*(undefined8 *)(param_1 + 0xd50),local_88);
    }
    FUN_00410f20(local_80);
    FUN_01795670(param_1,1);
    FUN_00410f20(local_30);
    FUN_00410f20(local_38);
    FUN_00410f20(local_20);
    FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
  }
  plVar2 = (longlong *)FUN_006a6030();
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}

