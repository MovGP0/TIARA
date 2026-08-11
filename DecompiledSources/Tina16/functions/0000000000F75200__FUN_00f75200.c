/* Ghidra address: 00f75200 */
/* Ghidra symbol: FUN_00f75200 */


longlong FUN_00f75200(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  longlong local_30;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  lVar3 = local_30;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(param_1,iVar4);
      cVar1 = FUN_00f6f8f0(lVar3);
      if ((cVar1 != '\0') &&
         (iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0xf8),local_res10[0]), iVar2 == 0)) break;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      lVar3 = local_30;
    } while (iVar5 != 0);
  }
  local_30 = lVar3;
  FUN_00414480(local_res10);
  return local_30;
}

