/* Ghidra address: 011a2220 */
/* Ghidra symbol: FUN_011a2220 */


undefined1 FUN_011a2220(longlong param_1)

{
  int iVar1;
  longlong local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = 0;
  if (local_res8[0] != 0) {
    iVar1 = *(int *)(local_res8[0] + -4);
  }
  if (iVar1 == 0) {
    local_9 = 0;
  }
  else {
    if (-1 < iVar1 + -1) {
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_9 = 1;
  }
  FUN_00414480(local_res8);
  return local_9;
}

