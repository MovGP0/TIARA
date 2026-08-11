/* Ghidra address: 014936e0 */
/* Ghidra symbol: FUN_014936e0 */


undefined1 FUN_014936e0(undefined2 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_29 = 1;
  iVar3 = 0;
  if (local_res8[0] != (undefined2 *)0x0) {
    iVar3 = *(int *)(local_res8[0] + -2);
  }
  if (iVar3 == 1) {
    cVar1 = FUN_01b215c0(*local_res8[0],1);
    if (cVar1 != '\0') goto LAB_01493780;
  }
  if (iVar3 == 1) {
    local_29 = 0;
  }
  else {
    iVar2 = 2;
    if (1 < iVar3) {
      iVar3 = iVar3 + -1;
      do {
        cVar1 = FUN_01b215f0(local_res8[0][(longlong)iVar2 + -1]);
        if (cVar1 == '\0') {
          cVar1 = FUN_01b215c0(local_res8[0][(longlong)iVar2 + -1],1);
          if (cVar1 == '\0') {
            local_29 = 0;
            break;
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
LAB_01493780:
  FUN_00414480(local_res8);
  return local_29;
}

