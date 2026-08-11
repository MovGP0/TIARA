/* Ghidra address: 015ef810 */
/* Ghidra symbol: FUN_015ef810 */


undefined1 FUN_015ef810(longlong param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_9 = 1;
  iVar3 = 0;
  if (local_res8[0] != 0) {
    iVar3 = *(int *)(local_res8[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      sVar1 = *(short *)(local_res8[0] + -2 + (longlong)iVar2 * 2);
      if ((sVar1 != 0x20) && (sVar1 != 9)) {
        local_9 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_res8);
  return local_9;
}

