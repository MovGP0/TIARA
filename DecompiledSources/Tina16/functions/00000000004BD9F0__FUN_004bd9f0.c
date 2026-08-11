/* Ghidra address: 004bd9f0 */
/* Ghidra symbol: FUN_004bd9f0 */


void FUN_004bd9f0(void)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  uint local_34;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_70 = auStack_98;
  (**(code **)(*DAT_020115f0 + 0x28))(DAT_020115f0);
  local_30 = FUN_004f2c60(DAT_02011648);
  if (0 < *(int *)(local_30 + 0x10)) {
    local_20 = FUN_004f4550(&PTR_FUN_004cc1a0,1);
    local_28 = FUN_004f4550(&PTR_FUN_004cc1a0,1);
    local_34 = 0;
    while ((int)local_34 < (int)*(uint *)(local_30 + 0x10)) {
      if (*(uint *)(local_30 + 0x10) <= local_34) {
        FUN_00594f90();
      }
      local_58 = *(undefined8 **)(*(longlong *)(local_30 + 8) + (longlong)(int)local_34 * 8);
      local_40 = FUN_004a4fd0(local_58[4]);
      if ((local_40 == 0) && (lVar2 = FUN_0058ada0(local_58[1],local_58[3]), lVar2 == 0)) {
        FUN_004bd950(auStack_98,local_58[1]);
        local_34 = local_34 + 1;
      }
      else if (local_40 == 0) {
LAB_004bdb0f:
        if ((int)local_34 < *(int *)(local_30 + 0x10)) {
          FUN_004bd8c0(auStack_98,local_58[1]);
          FUN_00599670(local_30 + 8,local_34,5);
          FUN_00410f20(local_58);
        }
      }
      else {
        if ((*(ushort *)(local_40 + 0x34) & 2) == 0) {
          local_50 = FUN_004bd730(local_40,local_58[5]);
          (**(code **)*local_58)(local_58,local_50);
          goto LAB_004bdb0f;
        }
        FUN_004bd950(auStack_98,local_58[1]);
        local_34 = local_34 + 1;
      }
    }
    FUN_00410f20(local_28);
    iVar3 = *(int *)(local_20 + 0x10);
    local_34 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (*(uint *)(local_20 + 0x10) <= local_34) {
          FUN_00594f90();
        }
        local_48 = *(longlong *)(*(longlong *)(local_20 + 8) + (longlong)(int)local_34 * 8);
        cVar1 = FUN_004113d0(local_48,&PTR_FUN_00486f38);
        if (cVar1 != '\0') {
          *(ushort *)(local_48 + 0x34) = *(ushort *)(local_48 + 0x34) & 0xff7f;
        }
        local_34 = local_34 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(local_20);
  }
  FUN_00412130(*(undefined8 *)(DAT_02011648 + 0x10));
  (**(code **)(*DAT_020115f0 + 0x30))(DAT_020115f0);
  return;
}

