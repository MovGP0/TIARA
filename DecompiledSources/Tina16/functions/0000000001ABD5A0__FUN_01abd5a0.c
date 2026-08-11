/* Ghidra address: 01abd5a0 */
/* Ghidra symbol: FUN_01abd5a0 */


int FUN_01abd5a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong local_res8 [4];
  int local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_c = 0x1505;
  iVar1 = 0;
  if (local_res8[0] != 0) {
    iVar1 = *(int *)(local_res8[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar1) {
    do {
      local_c = local_c * 0x21 + (uint)*(ushort *)(local_res8[0] + -2 + (longlong)iVar2 * 2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_res8);
  return local_c;
}

