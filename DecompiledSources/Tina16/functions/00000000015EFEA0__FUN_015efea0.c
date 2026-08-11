/* Ghidra address: 015efea0 */
/* Ghidra symbol: FUN_015efea0 */


undefined1 FUN_015efea0(longlong param_1,int param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong local_res8 [4];
  int local_2c;
  undefined1 local_1b;
  short local_1a;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_3 = -1;
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
    if (iVar4 < param_2) {
      local_1a = 0xd;
    }
    else {
      local_1a = *(undefined2 *)(local_res8[0] + -2 + (longlong)param_2 * 2);
    }
    *param_3 = 0;
    local_2c = param_2;
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
        bVar1 = local_2c <= iVar4;
      }
      if (!bVar1) break;
      bVar2 = true;
      *param_3 = *param_3 + 1;
      local_2c = local_2c + 1;
      iVar4 = 0;
      if (local_res8[0] != 0) {
        iVar4 = *(int *)(local_res8[0] + -4);
      }
      if (iVar4 < local_2c) {
        local_1a = 0xd;
      }
      else {
        local_1a = *(undefined2 *)(local_res8[0] + -2 + (longlong)local_2c * 2);
      }
    }
    if (bVar2) {
      iVar4 = 0;
      if (local_res8[0] != 0) {
        iVar4 = *(int *)(local_res8[0] + -4);
      }
      bVar1 = local_2c <= iVar4;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_1a = *(short *)(local_res8[0] + -2 + (longlong)local_2c * 2);
    }
    else {
      local_1a = 0xd;
    }
  }
  if ((bVar2) && (local_1a == 0x20)) {
    local_1b = 1;
  }
  else {
    local_1b = 0;
  }
  FUN_00414480(local_res8);
  return local_1b;
}

