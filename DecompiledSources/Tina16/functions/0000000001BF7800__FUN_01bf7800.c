/* Ghidra address: 01bf7800 */
/* Ghidra symbol: FUN_01bf7800 */


void FUN_01bf7800(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  longlong local_60;
  longlong local_58;
  bool local_4d;
  int local_4c;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  int local_2c;
  longlong local_28;
  
  local_70 = auStack_98;
  FUN_0061cf60(param_1,param_2,param_3);
  if (*(char *)(*(longlong *)PTR_DAT_02004030 + 0x148) == '\0') {
    local_4d = false;
  }
  else {
    local_48 = *(longlong *)(param_1 + 0x128);
    local_4c = 0;
    if (local_48 != 0) {
      local_4c = *(int *)(local_48 + -4);
    }
    local_4d = 0 < local_4c;
  }
  if ((local_4d != false) && (*(char *)(param_1 + 0x160) == '\0')) {
    FUN_01bf7c50(param_1,*(undefined8 *)(param_1 + 0x128));
    *(undefined1 *)(param_1 + 0x160) = 1;
  }
  if (param_3 == '\x01') {
    if (param_2 == *(longlong *)(param_1 + 0x148)) {
      FUN_01bf88d0(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x138)) {
      FUN_01bf80c0(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x108)) {
      FUN_01bf7f30(param_1,0);
    }
    if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_005aebf0);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf3cc0);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061b768);
          if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x118) != 0)) {
            local_60 = *(longlong *)(param_1 + 0x118);
            local_2c = *(int *)(*(longlong *)(local_60 + 0x10) + 0x10) + -1;
            if (-1 < local_2c) {
              do {
                lVar3 = FUN_01bf95e0(*(undefined8 *)(param_1 + 0x118),local_2c);
                if (*(longlong *)(lVar3 + 0x18) == param_2) {
                  FUN_004b25e0(*(undefined8 *)(param_1 + 0x118),local_2c);
                  return;
                }
                local_2c = local_2c + -1;
              } while (local_2c != -1);
            }
          }
        }
        else {
          local_40 = FUN_01bf72f0(param_1,param_2,*(undefined8 *)(param_1 + 0xe0));
          if (local_40 != 0) {
            *(undefined8 *)(local_40 + 0x18) = 0;
          }
          lVar3 = FUN_01bf72f0(param_1,param_2,*(undefined8 *)(param_1 + 0x120));
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x18) = 0;
          }
        }
      }
      else {
        local_38 = FUN_01bf71f0(param_1,param_2,0);
        local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        while (local_38 != 0) {
          lVar3 = FUN_01bfd960(local_38);
          if (*(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x18) != 0) {
            lVar3 = FUN_01bfd960(local_38);
            local_58 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x18);
            *(short *)(local_58 + 0x318) = *(short *)(local_58 + 0x318) + 1;
            lVar3 = FUN_01bfd960(local_38);
            FUN_004ae7e0(local_28,*(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x18));
          }
          uVar4 = FUN_01bfd960(local_38);
          uVar2 = FUN_004b1870(local_38);
          FUN_004b25e0(uVar4,uVar2);
          local_38 = FUN_01bf71f0(param_1,param_2,0);
        }
        iVar5 = *(int *)(local_28 + 0x10);
        local_2c = 0;
        local_38 = 0;
        if (-1 < iVar5 + -1) {
          do {
            lVar3 = FUN_004aeac0(local_28,local_2c);
            if (lVar3 != 0) {
              uVar4 = FUN_004aeac0(local_28,local_2c);
              FUN_00654410(uVar4);
            }
            local_2c = local_2c + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_00410f20(local_28);
      }
    }
  }
  return;
}

