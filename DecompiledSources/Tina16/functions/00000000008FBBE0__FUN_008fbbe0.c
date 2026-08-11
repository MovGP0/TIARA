/* Ghidra address: 008fbbe0 */
/* Ghidra symbol: FUN_008fbbe0 */


undefined1 FUN_008fbbe0(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined2 *local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  uVar3 = 0;
  if (local_res8[0] != (undefined2 *)0x0) {
    uVar3 = *(uint *)(local_res8[0] + -2) >> 1;
  }
  if (uVar3 == 0) {
    local_29 = 0;
  }
  else {
    cVar1 = FUN_008fc380(*local_res8[0]);
    if (cVar1 != '\0') {
      cVar1 = FUN_008fc350(local_res8[0][(longlong)(int)uVar3 + -1]);
      if (cVar1 != '\0') {
        local_29 = 1;
        iVar2 = 1;
        do {
          if ((int)uVar3 <= iVar2) goto LAB_008fbc80;
          iVar2 = iVar2 + 1;
          cVar1 = FUN_008fc350(local_res8[0][(longlong)iVar2 + -1]);
        } while ((cVar1 != '\0') || (local_res8[0][(longlong)iVar2 + -1] == 0x2d));
        local_29 = 0;
        goto LAB_008fbc80;
      }
    }
    local_29 = 0;
  }
LAB_008fbc80:
  FUN_00414520(local_res8);
  return local_29;
}

