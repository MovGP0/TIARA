/* Ghidra address: 00c53500 */
/* Ghidra symbol: FUN_00c53500 */


undefined8 FUN_00c53500(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = *(int *)(local_res10[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      uVar3 = *(ushort *)(local_res10[0] + -2 + (longlong)iVar2 * 2);
      if ((ushort)(uVar3 - 0x61) < 0x1a) {
        uVar3 = uVar3 & 0xffdf;
      }
      lVar1 = FUN_00414de0(local_res10);
      *(ushort *)(lVar1 + -2 + (longlong)iVar2 * 2) = uVar3;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

