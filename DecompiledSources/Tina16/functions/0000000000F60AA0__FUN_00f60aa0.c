/* Ghidra address: 00f60aa0 */
/* Ghidra symbol: FUN_00f60aa0 */


undefined1 FUN_00f60aa0(undefined2 *param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 *local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] == (undefined2 *)0x0) {
    local_29 = 0;
  }
  else {
    iVar4 = 0;
    if (local_res8[0] != (undefined2 *)0x0) {
      iVar4 = *(int *)(local_res8[0] + -2);
    }
    local_29 = 1;
    cVar2 = FUN_01b215c0(*local_res8[0],1);
    if (cVar2 == '\0') {
      local_29 = 0;
    }
    else {
      iVar3 = 2;
      if (1 < iVar4) {
        iVar4 = iVar4 + -1;
        do {
          uVar1 = local_res8[0][(longlong)iVar3 + -1];
          cVar2 = FUN_01b215c0(uVar1,1);
          if ((cVar2 == '\0') && (cVar2 = FUN_01b215f0(uVar1), cVar2 == '\0')) {
            local_29 = 0;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  FUN_00414480(local_res8);
  return local_29;
}

