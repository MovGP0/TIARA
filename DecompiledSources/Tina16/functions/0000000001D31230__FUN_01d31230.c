/* Ghidra address: 01d31230 */
/* Ghidra symbol: FUN_01d31230 */


int FUN_01d31230(longlong param_1)

{
  int iVar1;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414630(param_1);
  iVar1 = 0;
  if (local_res8[0] != 0) {
    iVar1 = *(int *)(local_res8[0] + -4);
  }
  FUN_004144d0(local_res8);
  return iVar1 + 4;
}

