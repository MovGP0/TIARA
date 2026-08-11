/* Ghidra address: 00f75470 */
/* Ghidra symbol: FUN_00f75470 */


longlong FUN_00f75470(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
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
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar4);
      if (*(char *)(lVar2 + 0x30) == '\v') {
        lVar3 = FUN_004113f0(lVar2,&PTR_FUN_00f6b680);
        iVar1 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x130),local_res10[0]);
        if (iVar1 == 0) {
          local_30 = lVar2;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(local_res10);
  return local_30;
}

