/* Ghidra address: 004ae3e0 */
/* Ghidra symbol: FUN_004ae3e0 */


int FUN_004ae3e0(ulonglong *param_1,ulonglong *param_2,ushort *param_3,longlong *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  ulonglong *local_80;
  ushort local_74;
  char local_72;
  char local_71;
  ushort *local_70;
  ushort *local_68;
  int local_5c;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  local_90 = auStack_b8;
  local_80 = (ulonglong *)0x0;
  local_38 = *param_1;
  uStack_30 = param_1[1];
  uStack_28 = param_1[2];
  uStack_20 = param_1[3];
  local_58 = *param_2;
  uStack_50 = param_2[1];
  uStack_48 = param_2[2];
  uStack_40 = param_2[3];
  local_5c = 0;
  puVar3 = auStack_b8;
  if (((param_3 != (ushort *)0x0) && (puVar3 = auStack_b8, *param_3 != 0)) &&
     (puVar3 = auStack_b8, param_4 != (longlong *)0x0)) {
    local_72 = '\0';
    local_74 = 0;
    local_70 = param_3;
    FUN_004b3260(param_4);
    local_58 = local_58 | 0x2400;
    local_38 = local_38 | 0x8400002401;
    do {
      while( true ) {
        puVar2 = local_70;
        uVar1 = *local_70;
        if (uVar1 < 0x100) {
          bVar5 = (*(byte *)((longlong)&local_58 + ((longlong)(ulonglong)uVar1 >> 3)) >>
                   ((ulonglong)uVar1 & 7) & 1) != 0;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) break;
        local_70 = local_70 + 1;
      }
      local_68 = local_70;
LAB_004ae4f5:
      if (((local_72 != '\0') && (*local_70 != 0)) && (*local_70 != local_74)) {
LAB_004ae4f0:
        local_70 = local_70 + 1;
        goto LAB_004ae4f5;
      }
      uVar1 = *local_70;
      if (uVar1 < 0x100) {
        bVar5 = (*(byte *)((longlong)&local_38 + ((longlong)(ulonglong)uVar1 >> 3)) >>
                 ((ulonglong)uVar1 & 7) & 1) != 0;
      }
      else {
        bVar5 = false;
      }
      if (!bVar5) goto LAB_004ae4f0;
      if ((ushort)(*local_70 - 0x20) < 8) {
        uVar4 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) <<
                ((byte)(*local_70 - 0x20) & 0x1f);
        param_2 = (ulonglong *)(ulonglong)uVar4;
        bVar5 = (uVar4 & 0x84) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        if ((local_74 == 0) || (local_74 != *local_70)) {
          if (local_74 == 0) {
            local_74 = *local_70;
          }
        }
        else {
          local_74 = 0;
        }
        local_72 = local_74 != 0;
        local_70 = local_70 + 1;
        goto LAB_004ae4f5;
      }
      local_71 = *local_70 == 0;
      if ((puVar2 != local_70) && (*puVar2 != 0)) {
        if (param_4 != (longlong *)0x0) {
          FUN_00414740(&local_80,puVar2,((longlong)local_70 - (longlong)puVar2) / 2 & 0xffffffff);
          param_2 = local_80;
          (**(code **)(*param_4 + 0x78))(param_4,local_80);
        }
        local_5c = local_5c + 1;
      }
      local_70 = local_70 + 1;
    } while (local_71 == '\0');
    FUN_004b3390(param_4);
    puVar3 = local_90;
  }
  local_90 = puVar3;
  FUN_00414480(&local_80);
  return local_5c;
}

