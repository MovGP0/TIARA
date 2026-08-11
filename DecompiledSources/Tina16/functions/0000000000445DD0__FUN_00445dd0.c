/* Ghidra address: 00445dd0 */
/* Ghidra symbol: FUN_00445dd0 */


undefined4
FUN_00445dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,byte param_5,
            int param_6,int param_7,undefined8 *param_8)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  int local_68;
  undefined8 local_58;
  char local_49;
  longlong local_48;
  int local_3c;
  int local_38;
  ushort local_34;
  char local_32;
  char local_31 [21];
  undefined4 local_1c;
  
  local_48 = 0;
  local_38 = 0;
  local_1c = 0;
  if (param_4 == '\0') {
    if (param_6 < 2) {
      param_6 = 2;
    }
    else if (0x11 < param_6) {
      param_6 = 0x11;
    }
  }
  else {
    param_6 = 0x13;
  }
  if (param_5 < 8 && (1 << (param_5 & 0x1f) & 3U) != 0) {
    local_3c = 9999;
  }
  else {
    local_3c = param_7;
  }
  local_68 = local_3c;
  local_58 = param_3;
  local_49 = param_4;
  uVar4 = FUN_00447930(&local_34,param_3,param_4,param_6);
  if (local_34 - 0x7ff < 2) {
    if (local_32 != '\0') {
      FUN_00445a20(auStack_88,DAT_01dc04d4);
    }
    FUN_00445a70(auStack_88,(&PTR_DAT_01dc04e0)[local_34 - 0x7ff]);
  }
  else {
    if (param_5 < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (param_5 & 0x1f) & 0x1fU) != 0;
    }
    else {
      bVar7 = false;
    }
    if ((!bVar7) || ((param_6 < (short)local_34 && (param_5 != 1)))) {
      param_5 = 0;
    }
    if (param_5 == 0) {
      if (local_32 != '\0') {
        FUN_00445a20(auStack_88,DAT_01dc04d4);
      }
      bVar7 = false;
      local_3c = (int)(short)local_34;
      if ((param_6 < local_3c) || (local_3c < -3)) {
        local_3c = 1;
        bVar7 = true;
      }
      if (local_3c < 1) {
        FUN_00445a20(auStack_88,DAT_01dc04d8);
        if (local_31[0] != '\0') {
          FUN_00445a20(auStack_88,*(undefined2 *)((longlong)param_8 + 0x17a));
          local_3c = -local_3c;
          while (0 < local_3c) {
            FUN_00445a20(auStack_88,DAT_01dc04d8);
            local_3c = local_3c + -1;
          }
          while (local_31[local_38] != '\0') {
            uVar2 = FUN_00445b30(auStack_88);
            FUN_00445a20(auStack_88,uVar2);
          }
        }
      }
      else {
        while (0 < local_3c) {
          uVar2 = FUN_00445b30(auStack_88);
          FUN_00445a20(auStack_88,uVar2);
          local_3c = local_3c + -1;
        }
        if (local_31[local_38] != '\0') {
          FUN_00445a20(auStack_88,*(undefined2 *)((longlong)param_8 + 0x17a));
          while (local_31[local_38] != '\0') {
            uVar2 = FUN_00445b30(auStack_88);
            FUN_00445a20(auStack_88,uVar2);
          }
        }
        if (bVar7) {
          FUN_00445ca0(auStack_88);
        }
      }
    }
    else if (param_5 == 1) {
      if (local_32 != '\0') {
        FUN_00445a20(auStack_88,DAT_01dc04d4);
      }
      uVar2 = FUN_00445b30(auStack_88);
      FUN_00445a20(auStack_88,uVar2);
      FUN_00445a20(auStack_88,*(undefined2 *)((longlong)param_8 + 0x17a));
      param_6 = param_6 + -1;
      do {
        uVar2 = FUN_00445b30(auStack_88);
        FUN_00445a20(auStack_88,uVar2);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      FUN_00445ca0(auStack_88);
    }
    else if ((byte)(param_5 - 2) < 2) {
      if (local_32 != '\0') {
        FUN_00445a20(auStack_88,DAT_01dc04d4);
      }
      FUN_00445b60(auStack_88);
    }
    else if (param_5 == 4) {
      if (local_32 == '\0') {
        if (*(byte *)(param_8 + 1) < 4) {
          FUN_00414b50(&local_48,(&PTR_u_______01dc04f0)[*(byte *)(param_8 + 1)]);
        }
        else {
          FUN_00414b50(&local_48,PTR_u_______01dc0508);
        }
      }
      else if (*(byte *)((longlong)param_8 + 0x17e) < 0x10) {
        FUN_00414b50(&local_48,(&PTR_u_______01dc0510)[*(byte *)((longlong)param_8 + 0x17e)]);
      }
      else {
        FUN_00414b50(&local_48,PTR_u_______01dc0588);
      }
      iVar6 = 0;
      if (local_48 != 0) {
        iVar6 = *(int *)(local_48 + -4);
      }
      iVar5 = 1;
      if (0 < iVar6) {
        do {
          sVar1 = *(short *)(local_48 + -2 + (longlong)iVar5 * 2);
          if (sVar1 == 0x24) {
            iVar3 = FUN_00416db0(*param_8,DAT_01dbe770);
            if (iVar3 != 0) {
              FUN_00445a70(auStack_88,*param_8);
            }
          }
          else if (sVar1 == 0x2a) {
            FUN_00445b60(auStack_88);
          }
          else {
            if (sVar1 == 0x40) break;
            FUN_00445a20(auStack_88,sVar1);
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  FUN_00414480(&local_48);
  return local_1c;
}

