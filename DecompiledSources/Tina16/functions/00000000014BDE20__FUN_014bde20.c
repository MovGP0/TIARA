/* Ghidra address: 014bde20 */
/* Ghidra symbol: FUN_014bde20 */


longlong FUN_014bde20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res10 [3];
  longlong local_30;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = 0;
  iVar1 = FUN_006decb0();
  iVar4 = 0;
  lVar3 = local_30;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x550),iVar4);
      iVar2 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 0x10),local_res10[0]);
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
      lVar3 = local_30;
    } while (iVar1 != 0);
  }
  local_30 = lVar3;
  FUN_00414480(local_res10);
  return local_30;
}

