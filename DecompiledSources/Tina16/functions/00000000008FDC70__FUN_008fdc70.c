/* Ghidra address: 008fdc70 */
/* Ghidra symbol: FUN_008fdc70 */


undefined1 FUN_008fdc70(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res8 [4];
  undefined1 local_29;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar4 = 0;
  if (local_res8[0] != 0) {
    iVar4 = *(int *)(local_res8[0] + -4);
  }
  if (iVar4 == 0) {
    local_29 = 0;
  }
  else {
    local_29 = 1;
    iVar2 = 0;
    if (0 < iVar4) {
      do {
        iVar3 = iVar2 + 1;
        if (*(short *)(local_res8[0] + -2 + (longlong)iVar3 * 2) == 0x25) {
          if (iVar3 == iVar4) {
            local_29 = 0;
            break;
          }
          cVar1 = FUN_008fde50(*(undefined2 *)(local_res8[0] + -2 + (longlong)(iVar2 + 2) * 2));
          if (cVar1 == '\0') {
            local_29 = 0;
            break;
          }
          if (iVar2 + 2 == iVar4) {
            local_29 = 0;
            break;
          }
          cVar1 = FUN_008fde50(*(undefined2 *)(local_res8[0] + -2 + (longlong)(iVar2 + 3) * 2));
          iVar2 = iVar2 + 3;
          if (cVar1 == '\0') {
            local_29 = 0;
            break;
          }
        }
        else {
          cVar1 = FUN_008fdd90(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar3 * 2));
          iVar2 = iVar3;
          if (cVar1 == '\0') {
            cVar1 = FUN_008fdde0(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar3 * 2));
            if (cVar1 == '\0') {
              local_29 = 0;
              break;
            }
          }
        }
      } while (iVar2 < iVar4);
    }
  }
  FUN_00414480(local_res8);
  return local_29;
}

