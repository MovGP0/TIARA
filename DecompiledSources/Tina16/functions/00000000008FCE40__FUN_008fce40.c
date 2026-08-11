/* Ghidra address: 008fce40 */
/* Ghidra symbol: FUN_008fce40 */


undefined1 FUN_008fce40(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar3 = 0;
  if (local_res8[0] != (undefined2 *)0x0) {
    iVar3 = *(int *)(local_res8[0] + -2);
  }
  if (iVar3 == 0) {
    local_29 = 0;
  }
  else {
    cVar1 = FUN_008f9bf0(*local_res8[0]);
    if (cVar1 == '\0') {
      local_29 = 0;
    }
    else {
      local_29 = 1;
      iVar2 = 2;
      if (1 < iVar3) {
        iVar3 = iVar3 + -1;
        do {
          cVar1 = FUN_008f9bf0(local_res8[0][(longlong)iVar2 + -1]);
          if (cVar1 == '\0') {
            cVar1 = FUN_008f9c10(local_res8[0][(longlong)iVar2 + -1]);
            if ((((cVar1 == '\0') && (local_res8[0][(longlong)iVar2 + -1] != 0x2b)) &&
                (local_res8[0][(longlong)iVar2 + -1] != 0x2d)) &&
               (local_res8[0][(longlong)iVar2 + -1] != 0x2e)) {
              local_29 = 0;
              break;
            }
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00414480(local_res8);
  return local_29;
}

