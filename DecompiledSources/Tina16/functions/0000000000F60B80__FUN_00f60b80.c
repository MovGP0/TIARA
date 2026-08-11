/* Ghidra address: 00f60b80 */
/* Ghidra symbol: FUN_00f60b80 */


undefined1 FUN_00f60b80(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined1 local_19;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] == 0) {
    local_19 = 0;
  }
  else {
    iVar3 = 0;
    if (local_res8[0] != 0) {
      iVar3 = *(int *)(local_res8[0] + -4);
    }
    local_19 = 1;
    iVar2 = 1;
    if (0 < iVar3) {
      do {
        cVar1 = FUN_01b215f0(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar2 * 2));
        if (cVar1 == '\0') {
          local_19 = 0;
          break;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414480(local_res8);
  return local_19;
}

