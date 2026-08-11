/* Ghidra address: 0133fdc0 */
/* Ghidra symbol: FUN_0133fdc0 */


undefined8 FUN_0133fdc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong local_res18 [2];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  FUN_00414c70(local_30,local_res18[0]);
  iVar3 = 0;
  if (local_res18[0] != 0) {
    iVar3 = *(int *)(local_res18[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      *(undefined1 *)(param_1 + 0x11f) = *(undefined1 *)(local_res18[0] + -1 + (longlong)iVar2);
      *(byte *)(param_1 + 0x11f) = *(byte *)(param_1 + 0x11f) ^ 0x1d;
      lVar1 = FUN_00414df0(local_30);
      *(undefined1 *)(lVar1 + -1 + (longlong)iVar2) = *(undefined1 *)(param_1 + 0x11f);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414bf0(param_2,local_30[0]);
  FUN_004144d0(local_30);
  FUN_004144d0(local_res18);
  return param_2;
}

