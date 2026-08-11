/* Ghidra address: 01b50450 */
/* Ghidra symbol: FUN_01b50450 */


double FUN_01b50450(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong local_res8 [4];
  double local_10;
  
  local_res8[0] = param_1;
  FUN_00419500();
  local_10 = 0.0;
  iVar2 = 0;
  if (local_res8[0] != 0) {
    iVar2 = (int)*(undefined8 *)(local_res8[0] + -8);
  }
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      if (local_10 < *(double *)(local_res8[0] + (longlong)iVar1 * 8)) {
        local_10 = *(double *)(local_res8[0] + (longlong)iVar1 * 8);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00419430(local_res8,&DAT_01b4b7e0);
  return local_10;
}

