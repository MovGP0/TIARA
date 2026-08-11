/* Ghidra address: 01aa10d0 */
/* Ghidra symbol: FUN_01aa10d0 */


int FUN_01aa10d0(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
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
  uVar2 = 1;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar1 = FUN_01aa1090(*(undefined2 *)(local_res8[0] + -2 + (ulonglong)uVar2 * 2));
    iVar3 = iVar3 * 2 + (uint)uVar1;
    uVar2 = uVar2 + 1;
  }
  FUN_00414480(local_res8);
  return iVar3;
}

