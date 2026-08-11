/* Ghidra address: 015efc20 */
/* Ghidra symbol: FUN_015efc20 */


int FUN_015efc20(longlong param_1,int *param_2,int param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong local_res8 [4];
  int local_40;
  ushort local_3a;
  char local_29 [9];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (param_3 == 0) {
    local_40 = -1;
    bVar2 = false;
    iVar5 = 0;
    if (local_res8[0] != 0) {
      iVar5 = *(int *)(local_res8[0] + -4);
    }
    if (0 < iVar5) {
      iVar5 = 0;
      if (local_res8[0] != 0) {
        iVar5 = *(int *)(local_res8[0] + -4);
      }
      if (iVar5 < *param_2) {
        local_3a = 0xd;
      }
      else {
        local_3a = *(ushort *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
      }
      local_40 = 0;
      while( true ) {
        cVar3 = FUN_015ef6d0(local_3a);
        if ((cVar3 == '\0') && ((param_4 == '\0' || (local_3a != 0x3f)))) {
          bVar1 = false;
        }
        else {
          iVar5 = 0;
          if (local_res8[0] != 0) {
            iVar5 = *(int *)(local_res8[0] + -4);
          }
          bVar1 = *param_2 <= iVar5;
        }
        if (!bVar1) break;
        bVar2 = true;
        local_40 = local_40 * 0x10;
        if ((local_3a < 0x30) || (0x39 < local_3a)) {
          if ((local_3a < 0x41) || (0x46 < local_3a)) {
            if ((0x60 < local_3a) && (local_3a < 0x67)) {
              local_40 = local_40 + (uint)local_3a + -0x57;
            }
          }
          else {
            local_40 = local_40 + (uint)local_3a + -0x37;
          }
        }
        else {
          local_40 = local_40 + (uint)local_3a + -0x30;
        }
        *param_2 = *param_2 + 1;
        iVar5 = 0;
        if (local_res8[0] != 0) {
          iVar5 = *(int *)(local_res8[0] + -4);
        }
        if (iVar5 < *param_2) {
          local_3a = 0xd;
        }
        else {
          local_3a = *(ushort *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
        }
      }
      if (bVar2) {
        iVar5 = 0;
        if (local_res8[0] != 0) {
          iVar5 = *(int *)(local_res8[0] + -4);
        }
        bVar1 = *param_2 <= iVar5;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_3a = *(short *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
      }
      else {
        local_3a = 0xd;
      }
    }
    if ((!bVar2) || ((local_3a != 0x20 && (local_3a != 9)))) {
      local_40 = -1;
    }
  }
  else {
    uVar4 = FUN_015efa30(local_res8[0],param_2,local_29);
    if (local_29[0] == '\0') {
      local_40 = (uVar4 & 0x1fffffff) - param_3;
    }
    else {
      local_40 = -1;
    }
  }
  FUN_00414480(local_res8);
  return local_40;
}

