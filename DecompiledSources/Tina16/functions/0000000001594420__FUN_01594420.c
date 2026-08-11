/* Ghidra address: 01594420 */
/* Ghidra symbol: FUN_01594420 */


undefined8 FUN_01594420(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  iVar4 = 0;
  if (local_res18[0] != 0) {
    iVar4 = *(int *)(local_res18[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      cVar3 = *(char *)(local_res18[0] + -1 + (longlong)iVar2);
      if ((byte)(cVar3 + 0xa0U) < 0x20 && (1 << (cVar3 + 0xa0U & 0x1f) & 0x7fffffeU) != 0) {
        cVar3 = cVar3 + -0x20;
      }
      lVar1 = FUN_00414df0(local_res18);
      *(char *)(lVar1 + -1 + (longlong)iVar2) = cVar3;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414bf0(param_2,local_res18[0]);
  FUN_004144d0(local_res18);
  return param_2;
}

