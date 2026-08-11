/* Ghidra address: 008fb270 */
/* Ghidra symbol: FUN_008fb270 */


undefined1 FUN_008fb270(undefined2 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 *local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  uVar2 = 0;
  if (local_res8[0] != (undefined2 *)0x0) {
    uVar2 = *(uint *)(local_res8[0] + -2) >> 1;
  }
  if (uVar2 == 0) {
    local_29 = 0;
  }
  else {
    cVar1 = FUN_008f9bb0(*local_res8[0]);
    if (cVar1 == '\0') {
      local_29 = 0;
    }
    else {
      local_29 = 1;
      iVar3 = 2;
      if (1 < uVar2) {
        iVar4 = uVar2 - 1;
        do {
          cVar1 = FUN_008f9bb0(local_res8[0][(longlong)iVar3 + -1]);
          if (cVar1 == '\0') {
            cVar1 = FUN_008f9bd0(local_res8[0][(longlong)iVar3 + -1]);
            if ((((cVar1 == '\0') && (local_res8[0][(longlong)iVar3 + -1] != 0x2b)) &&
                (local_res8[0][(longlong)iVar3 + -1] != 0x2d)) &&
               (local_res8[0][(longlong)iVar3 + -1] != 0x2e)) {
              local_29 = 0;
              break;
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  FUN_00414520(local_res8);
  return local_29;
}

