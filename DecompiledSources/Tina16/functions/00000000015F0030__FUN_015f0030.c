/* Ghidra address: 015f0030 */
/* Ghidra symbol: FUN_015f0030 */


int FUN_015f0030(longlong param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong local_res8 [4];
  int local_20;
  ushort local_1a;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_20 = -1;
  bVar2 = false;
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
    local_20 = 0;
    while( true ) {
      cVar3 = FUN_01b215f0(local_1a);
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
      local_20 = local_20 * 10;
      if ((0x2f < local_1a) && (local_1a < 0x3a)) {
        local_20 = local_20 + (uint)local_1a + -0x30;
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
  if ((!bVar2) || (((local_1a != 0x20 && (local_1a != 0x3b)) && (local_1a != 0xd)))) {
    local_20 = -1;
  }
  FUN_00414480(local_res8);
  return local_20;
}

