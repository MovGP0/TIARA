/* Ghidra address: 006fea10 */
/* Ghidra symbol: FUN_006fea10 */


undefined1 FUN_006fea10(longlong param_1,int *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  int local_60;
  int iStack_5c;
  int local_4c;
  int iStack_48;
  undefined8 local_44;
  int local_3c;
  int iStack_38;
  bool local_31;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_21;
  longlong local_20;
  
  local_70 = auStack_98;
  local_21 = 1;
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    local_28 = FUN_006fd980(param_1);
    local_28 = local_28 + -1;
    if ((-1 < local_28) || ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
      local_20 = 0;
      local_3c = FUN_0064d0b0(param_1);
      iStack_38 = FUN_0064d120(param_1);
      local_2c = *(int *)(param_1 + 0x98) - local_3c;
      local_30 = *(int *)(param_1 + 0x9c) - iStack_38;
      local_4c = local_3c;
      iStack_48 = iStack_38;
      FUN_006fe240(auStack_98,&local_3c,&iStack_38);
      local_60 = *param_2 - local_2c;
      iStack_5c = *param_3 - local_30;
      local_44 = CONCAT44(iStack_5c,local_60);
      bVar1 = *(byte *)(param_1 + 0xad);
      if (bVar1 == 0) {
        uVar5 = local_60 - local_4c >> 0x1f;
        uVar7 = iStack_5c - iStack_48 >> 0x1f;
        local_31 = (int)((local_60 - local_4c ^ uVar5) - uVar5) <
                   (int)((iStack_5c - iStack_48 ^ uVar7) - uVar7);
      }
      else {
        local_31 = bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x18U) != 0;
      }
      if (*(char *)(param_1 + 0x4e6) == '\0') {
        FUN_006fe240(auStack_98,&local_44,(longlong)&local_44 + 4);
      }
      else {
        local_20 = FUN_00410e60(&DAT_00474918,1);
        FUN_004b0d60(local_20,*(undefined4 *)(*(longlong *)(param_1 + 0x4b0) + 0x10));
        if (local_31 == false) {
          FUN_006fe960(auStack_98,&local_44,(longlong)&local_44 + 4);
        }
        else {
          FUN_006fe850(auStack_98,&local_44,(longlong)&local_44 + 4);
        }
        FUN_006fe240(auStack_98,&local_44,(longlong)&local_44 + 4);
        if ((((local_31 == false) && (*(char *)(param_1 + 0xad) != '\0')) ||
            ((int)local_44 == local_3c)) && (local_44._4_4_ == iStack_38)) {
          FUN_006fc900(param_1);
        }
        else {
          iVar6 = *(int *)(local_20 + 8);
          local_28 = 0;
          if (-1 < iVar6 + -1) {
            do {
              uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),local_28);
              cVar2 = FUN_004113d0(uVar4,&PTR_FUN_006cb0d0);
              if (cVar2 != '\0') {
                uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),local_28);
                uVar3 = FUN_004b0f00(local_20,local_28);
                FUN_006fa7d0(uVar4,uVar3);
              }
              local_28 = local_28 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          FUN_006fb920(param_1,0);
        }
        FUN_00410f20(local_20);
      }
      if ((*(char *)(param_1 + 0xae) != '\0') && (*(char *)(param_1 + 0xad) != '\x05')) {
        if ((local_31 != false) || (*(char *)(param_1 + 0xad) == '\0')) {
          *param_2 = (int)local_44 + local_2c;
        }
        if ((local_31 == false) || (*(char *)(param_1 + 0xad) == '\0')) {
          *param_3 = local_44._4_4_ + local_30;
        }
      }
    }
  }
  return local_21;
}

