/* Ghidra address: 00e0f160 */
/* Ghidra symbol: FUN_00e0f160 */


longlong FUN_00e0f160(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  lVar2 = local_38;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar3);
      FUN_017ff4a0(param_2,local_30);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x850),local_30[0]);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
      lVar2 = local_38;
    } while (iVar4 != 0);
  }
  local_38 = lVar2;
  FUN_00414480(local_30);
  return local_38;
}

