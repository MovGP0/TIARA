/* Ghidra address: 015efa30 */
/* Ghidra symbol: FUN_015efa30 */


int FUN_015efa30(longlong param_1,int *param_2,undefined1 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong local_res8 [4];
  int local_20;
  ushort local_1a;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar5 = 0;
  bVar2 = false;
  local_20 = 0;
  *param_3 = 0;
  iVar4 = 0;
  if (local_res8[0] != 0) {
    iVar4 = *(int *)(local_res8[0] + -4);
  }
  if (0 < iVar4) {
    iVar4 = 0;
    if (local_res8[0] != 0) {
      iVar4 = *(int *)(local_res8[0] + -4);
    }
    if (iVar4 < *param_2) {
      local_1a = 0xd;
    }
    else {
      local_1a = *(ushort *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
    }
    iVar5 = 0;
    while( true ) {
      cVar3 = FUN_015ef6d0(local_1a);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        iVar4 = 0;
        if (local_res8[0] != 0) {
          iVar4 = *(int *)(local_res8[0] + -4);
        }
        bVar1 = *param_2 <= iVar4;
      }
      if (!bVar1) break;
      bVar2 = true;
      iVar5 = iVar5 * 0x10;
      if ((local_1a < 0x30) || (0x39 < local_1a)) {
        if ((local_1a < 0x41) || (0x46 < local_1a)) {
          if ((0x60 < local_1a) && (local_1a < 0x67)) {
            iVar5 = iVar5 + (uint)local_1a + -0x57;
          }
        }
        else {
          iVar5 = iVar5 + (uint)local_1a + -0x37;
        }
      }
      else {
        iVar5 = iVar5 + (uint)local_1a + -0x30;
      }
      *param_2 = *param_2 + 1;
      iVar4 = 0;
      if (local_res8[0] != 0) {
        iVar4 = *(int *)(local_res8[0] + -4);
      }
      if (iVar4 < *param_2) {
        local_1a = 0xd;
      }
      else {
        local_1a = *(ushort *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
      }
    }
    if (bVar2) {
      iVar4 = 0;
      if (local_res8[0] != 0) {
        iVar4 = *(int *)(local_res8[0] + -4);
      }
      bVar1 = *param_2 <= iVar4;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_1a = *(short *)(local_res8[0] + -2 + (longlong)*param_2 * 2);
    }
    else {
      local_1a = 0xd;
    }
  }
  if ((!bVar2) || (local_1a != 0x20)) {
    *param_3 = 1;
    iVar5 = local_20;
  }
  local_20 = iVar5;
  FUN_00414480(local_res8);
  return local_20;
}

