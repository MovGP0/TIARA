/* Ghidra address: 0108c720 */
/* Ghidra symbol: FUN_0108c720 */


longlong FUN_0108c720(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res10 [3];
  longlong local_30;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_30 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x9f8);
  iVar2 = FUN_006decb0();
  iVar5 = 0;
  lVar4 = local_30;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = FUN_006df500(*(undefined8 *)(lVar1 + 0x550),iVar5);
      iVar3 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x10),local_res10[0]);
      if (iVar3 == 0) break;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
      lVar4 = local_30;
    } while (iVar2 != 0);
  }
  local_30 = lVar4;
  FUN_00414480(local_res10);
  return local_30;
}

