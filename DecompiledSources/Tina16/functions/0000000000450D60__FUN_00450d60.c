/* Ghidra address: 00450d60 */
/* Ghidra symbol: FUN_00450d60 */


undefined8
FUN_00450d60(undefined8 param_1,ushort *param_2,ushort *param_3,ushort *param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort *puVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  char local_31;
  ushort local_30;
  ushort local_2e;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  ushort *local_10;
  
  local_60 = auStack_88;
  local_10 = (ushort *)0x0;
  local_18 = 0;
  local_1c = 1;
  local_20 = 1;
  local_24 = 1;
  local_2c = 0;
  local_2e = 0;
  local_31 = '\0';
  local_3c = 0;
  if (param_3 != (ushort *)0x0) {
    local_3c = *(int *)(param_3 + -2);
  }
  local_28 = local_3c;
  puVar5 = param_2;
  FUN_00414480(param_1);
  do {
    do {
      local_40 = 0;
      if (param_2 != (ushort *)0x0) {
        local_40 = *(int *)(param_2 + -2);
      }
      if (local_40 < local_20) {
        FUN_00414480(&local_18);
        local_4c = 0;
        if (param_2 != (ushort *)0x0) {
          local_4c = *(undefined4 *)(param_2 + -2);
        }
        FUN_00416dc0(&local_18,param_2,local_24,local_4c);
        FUN_00416ad0(param_1,local_18);
        FUN_00414480(&local_18);
        FUN_00414560(&local_18,2);
        return param_1;
      }
      local_30 = param_2[(longlong)local_20 + -1];
      if ((local_30 < 0xd800) || (0xdfff < local_30)) {
        if ((ushort)(local_30 - 0x20) < 8) {
          uVar4 = (int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) <<
                  ((byte)(local_30 - 0x20) & 0x1f);
          puVar5 = (ushort *)(ulonglong)uVar4;
          bVar6 = (uVar4 & 0x84) != 0;
        }
        else {
          bVar6 = false;
        }
        uVar1 = local_2e;
        if (((bVar6) && (uVar1 = local_30, local_2e != 0)) &&
           (uVar1 = local_2e, local_30 == local_2e)) {
          local_2e = 0;
          uVar1 = local_2e;
        }
        local_2e = uVar1;
        if (local_2e == 0) {
          if (local_30 == *param_3) {
            uVar3 = FUN_00416740(param_3);
            puVar5 = param_2 + (longlong)local_20 + -1;
            iVar2 = FUN_00442880(uVar3,puVar5,local_28);
            local_31 = iVar2 == 0;
            if ((bool)local_31) {
              local_2c = local_20 + local_28 + -1;
              local_20 = local_2c;
            }
          }
          if (local_31 == '\0') {
            if (local_30 < 0x100) {
              bVar6 = (*(byte *)((longlong)param_4 + ((longlong)(ulonglong)local_30 >> 3)) >>
                       ((ulonglong)local_30 & 7) & 1) != 0;
            }
            else {
              bVar6 = false;
            }
            if (bVar6) {
              local_2c = local_20;
            }
          }
        }
      }
      else {
        iVar2 = FUN_0044f6f0(param_2,local_20);
        puVar5 = (ushort *)((longlong)iVar2 % 2 & 0xffffffff);
        local_38 = iVar2 / 2 + -1;
        local_20 = local_20 + local_38;
        local_1c = local_1c + local_38;
      }
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      if ((ushort)(local_2e - 0x20) < 8) {
        uVar4 = (int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << ((byte)(local_2e - 0x20) & 0x1f);
        puVar5 = (ushort *)(ulonglong)uVar4;
        bVar6 = (uVar4 & 0x84) != 0;
      }
      else {
        bVar6 = false;
      }
    } while ((bVar6) || ((local_31 == '\0' && ((local_1c <= param_5 || (local_2c <= local_24))))));
    local_1c = 1;
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,param_2,local_24,(local_2c - local_24) + 1);
    puVar5 = local_10;
    FUN_00416ad0(param_1,local_10);
    FUN_00414480(&local_10);
    if ((ushort)(local_30 - 0x20) < 8) {
      uVar4 = (int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << ((byte)(local_30 - 0x20) & 0x1f);
      puVar5 = (ushort *)(ulonglong)uVar4;
      bVar6 = (uVar4 & 0x84) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) {
      while( true ) {
        local_44 = 0;
        if (param_2 != (ushort *)0x0) {
          local_44 = *(int *)(param_2 + -2);
        }
        if (local_44 < local_20) break;
        uVar1 = param_2[(longlong)local_20 + -1];
        if (uVar1 < 0x100) {
          bVar6 = (*(byte *)((longlong)param_4 + ((longlong)(ulonglong)uVar1 >> 3)) >>
                   ((ulonglong)uVar1 & 7) & 1) != 0;
          puVar5 = param_4;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          local_20 = local_20 + 1;
          local_31 = '\0';
        }
        else {
          puVar5 = (ushort *)&LAB_004511de;
          iVar2 = FUN_00442880(param_2 + (longlong)local_20 + -1,&LAB_004511de,2);
          if (iVar2 != 0) break;
          local_20 = local_20 + 2;
          local_31 = '\x01';
        }
      }
    }
    local_48 = 0;
    if (param_2 != (ushort *)0x0) {
      local_48 = *(int *)(param_2 + -2);
    }
    if ((local_20 <= local_48) && (local_31 == '\0')) {
      puVar5 = param_3;
      FUN_00416ad0(param_1,param_3);
    }
    local_2c = local_2c + 1;
    local_31 = '\0';
    local_24 = local_2c;
    local_20 = local_2c;
  } while( true );
}

