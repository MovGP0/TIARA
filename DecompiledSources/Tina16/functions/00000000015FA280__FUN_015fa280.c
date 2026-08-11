/* Ghidra address: 015fa280 */
/* Ghidra symbol: FUN_015fa280 */


int FUN_015fa280(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar3 = 0;
  iVar4 = 0;
  if (local_res8[0] != 0) {
    iVar4 = *(int *)(local_res8[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      uVar1 = FUN_015fa240(*(undefined2 *)(local_res8[0] + -2 + (longlong)iVar2 * 2));
      iVar3 = iVar3 * 2 + (uint)uVar1;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_res8);
  return iVar3;
}

