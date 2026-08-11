/* Ghidra address: 0040d7c0 */
/* Ghidra symbol: FUN_0040d7c0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_0040d7c0(longlong param_1,char *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined7 uVar8;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined2 local_4a;
  undefined2 *local_40;
  undefined8 local_38;
  undefined1 local_2c [12];
  
  local_38 = 0;
  local_40 = (undefined2 *)0x0;
  *param_2 = '\0';
  if ('\0' < *(char *)(param_1 + 0x2ea)) {
    if (*(char *)(param_1 + 0x2eb) == '\0') {
      iVar4 = FUN_00414710(local_2c,2,param_1 + 0x2ec,(longlong)*(char *)(param_1 + 0x2ea),
                           _DAT_02006a28);
      *(char *)(param_1 + 0x2ea) = -(char)iVar4;
      FUN_00409a70(local_2c,param_1 + 0x2ec,(longlong)(iVar4 * 2));
    }
    else {
      *(undefined1 *)(param_1 + 0x2ea) = 0;
    }
  }
  if (*(char *)(param_1 + 0x2ea) < '\0') {
    local_4a = *(undefined2 *)(param_1 + 0x2ec + (ulonglong)*(byte *)(param_1 + 0x2eb) * 2);
  }
  else if (*(short *)(param_1 + 0x2e8) == 0x4b0) {
    local_4a = FUN_0040d4c0(param_1,param_2);
    if (*param_2 == '\0') {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -2;
    }
  }
  else {
    pcVar5 = param_2;
    uVar3 = FUN_0040d420(param_1,param_2);
    if (*param_2 == '\0') {
      cVar2 = (char)uVar3;
      if (*(short *)(param_1 + 0x2e8) == -0x217) {
        if ((byte)(cVar2 + 0x40U) < 0x20) {
          uVar9 = 1 << (cVar2 + 0x40U & 0x1f);
          pcVar5 = (char *)(ulonglong)uVar9;
          bVar11 = (uVar9 & 0xfffffffc) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          iVar4 = 2;
        }
        else {
          if ((byte)(cVar2 + 0x20U) < 0x10) {
            bVar11 = (short)((int)CONCAT62((int6)((ulonglong)pcVar5 >> 0x10),1) <<
                            (cVar2 + 0x20U & 0x1f)) != 0;
            uVar8 = 0xff;
          }
          else {
            bVar11 = false;
            uVar8 = 0;
          }
          if (bVar11) {
            iVar4 = 3;
          }
          else {
            if ((byte)(cVar2 + 0x10U) < 8) {
              bVar11 = ((int)CONCAT71(uVar8,1) << (cVar2 + 0x10U & 0x1f) & 0x1fU) != 0;
            }
            else {
              bVar11 = false;
            }
            if (bVar11) {
              iVar4 = 4;
            }
            else {
              iVar4 = 1;
            }
          }
        }
      }
      else {
        iVar4 = thunk_FUN_03cc9058(_DAT_02006a28,uVar3);
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        else {
          iVar4 = 2;
        }
      }
      FUN_00415d10(&local_38,iVar4,0);
      FUN_004173d0(&local_38,*(undefined2 *)(param_1 + 0x2e8),0);
      pcVar5 = (char *)FUN_00414df0(&local_38);
      *pcVar5 = cVar2;
      iVar10 = 2;
      while (iVar4 = iVar4 + -1, 0 < iVar4) {
        uVar1 = FUN_0040d420(param_1,param_2);
        lVar6 = FUN_00414df0(&local_38);
        *(undefined1 *)(lVar6 + -1 + (longlong)iVar10) = uVar1;
        iVar10 = iVar10 + 1;
      }
      FUN_00416880(&local_40,local_38);
      iVar4 = FUN_00414cb0(local_40);
      if (iVar4 < 1) {
        local_4a = 0;
      }
      else {
        uVar7 = FUN_00414de0(&local_40);
        FUN_00409a70(uVar7,param_1 + 0x2ec,(longlong)(iVar4 * 2));
        *(undefined1 *)(param_1 + 0x2eb) = 0;
        cVar2 = FUN_00414cb0(local_40);
        *(char *)(param_1 + 0x2ea) = -cVar2;
        local_4a = *local_40;
      }
    }
    else {
      local_4a = 0x1a;
    }
  }
  FUN_00414480(&local_40);
  FUN_004144d0(&local_38);
  return local_4a;
}

