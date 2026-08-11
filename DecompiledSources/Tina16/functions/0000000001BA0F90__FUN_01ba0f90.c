/* Ghidra address: 01ba0f90 */
/* Ghidra symbol: FUN_01ba0f90 */


bool FUN_01ba0f90(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  bool local_19;
  
  local_res8[0] = param_1;
  FUN_00414630(param_1);
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  local_19 = iVar3 != 0;
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      cVar1 = FUN_01ba0f30(*(undefined1 *)(local_res8[0] + -1 + (longlong)iVar2));
      if (cVar1 == '\0') {
        local_19 = false;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004144d0(local_res8);
  return local_19;
}

