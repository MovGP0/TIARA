/* Ghidra address: 008fd7b0 */
/* Ghidra symbol: FUN_008fd7b0 */


undefined1 FUN_008fd7b0(undefined2 *param_1)

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
    cVar1 = FUN_008fde90(*local_res8[0]);
    if (cVar1 != '\0') {
      cVar1 = FUN_008fde70(local_res8[0][(longlong)iVar3 + -1]);
      if (cVar1 != '\0') {
        local_29 = 1;
        iVar2 = 1;
        if (1 < iVar3) {
          do {
            iVar2 = iVar2 + 1;
            cVar1 = FUN_008fde70(local_res8[0][(longlong)iVar2 + -1]);
            if ((cVar1 == '\0') && (local_res8[0][(longlong)iVar2 + -1] != 0x2d)) {
              local_29 = 0;
              break;
            }
          } while (iVar2 < iVar3);
        }
        goto LAB_008fd850;
      }
    }
    local_29 = 0;
  }
LAB_008fd850:
  FUN_00414480(local_res8);
  return local_29;
}

