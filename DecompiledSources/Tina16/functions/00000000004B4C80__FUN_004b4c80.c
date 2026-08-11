/* Ghidra address: 004b4c80 */
/* Ghidra symbol: FUN_004b4c80 */


void FUN_004b4c80(longlong *param_1,ushort *param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_4c;
  longlong local_48;
  int local_3c;
  undefined8 local_38;
  ushort *local_30;
  ushort *local_28;
  ushort *local_20;
  
  local_60 = auStack_88;
  local_38 = 0;
  FUN_004b3260(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  local_20 = param_2;
  if (param_2 != (ushort *)0x0) {
    iVar2 = FUN_0043e210(param_1[3],&DAT_004b4ef4);
    if (iVar2 == 0) {
      while (puVar1 = local_20, *local_20 != 0) {
        local_28 = local_20;
        while( true ) {
          if (*local_20 < 0x10) {
            bVar4 = ((int)CONCAT62((int6)((ulonglong)local_20 >> 0x10),1) <<
                     ((byte)*local_20 & 0x1f) & 0x2401U) != 0;
          }
          else {
            bVar4 = false;
          }
          if (bVar4) break;
          local_20 = local_20 + 1;
        }
        FUN_00414740(&local_38,puVar1,((longlong)local_20 - (longlong)puVar1) / 2 & 0xffffffff);
        (**(code **)(*param_1 + 0x78))(param_1,local_38);
        if (*local_20 == 0xd) {
          local_20 = local_20 + 1;
        }
        if (*local_20 == 10) {
          local_20 = local_20 + 1;
        }
      }
    }
    else {
      local_48 = param_1[3];
      local_4c = 0;
      if (local_48 != 0) {
        local_4c = *(int *)(local_48 + -4);
      }
      local_3c = local_4c;
      while (*local_20 != 0) {
        local_28 = local_20;
        uVar3 = FUN_00416740(param_1[3]);
        local_30 = (ushort *)FUN_0044fe40(local_20,uVar3);
        for (; (*local_20 != 0 && (local_20 != local_30)); local_20 = local_20 + 1) {
        }
        FUN_00414740(&local_38,local_28,((longlong)local_20 - (longlong)local_28) / 2 & 0xffffffff);
        (**(code **)(*param_1 + 0x78))(param_1,local_38);
        if (local_20 == local_30) {
          local_20 = local_20 + local_3c;
        }
      }
    }
  }
  FUN_004b3390(param_1);
  FUN_00414480(&local_38);
  return;
}

