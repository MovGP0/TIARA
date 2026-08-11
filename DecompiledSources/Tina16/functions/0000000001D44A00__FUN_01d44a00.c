/* Ghidra address: 01d44a00 */
/* Ghidra symbol: FUN_01d44a00 */


undefined8 FUN_01d44a00(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00414c70(&local_30,local_res10[0]);
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = *(int *)(local_res10[0] + -4);
  }
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      bVar1 = *(byte *)(local_res10[0] + -1 + (longlong)iVar3);
      lVar2 = FUN_00414df0(&local_30);
      *(byte *)(lVar2 + -1 + (longlong)iVar3) = bVar1 ^ 0x13;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414bf0(param_1,local_30);
  FUN_004144d0(&local_30);
  FUN_004144d0(local_res10);
  return param_1;
}

