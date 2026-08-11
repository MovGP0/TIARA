/* Ghidra address: 00a72c00 */
/* Ghidra symbol: FUN_00a72c00 */


undefined8 FUN_00a72c00(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  
  local_30 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar2 = FUN_00a72910(param_1,iVar4);
      if (*(char *)(lVar2 + 8) == 'T') {
        bVar1 = true;
        local_30 = FUN_00a72910(param_1,iVar4);
        goto code_r0x00a72c65;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  bVar1 = false;
code_r0x00a72c65:
  if (bVar1) {
    FUN_00414ad0(param_2,*(undefined8 *)(local_30 + 0x28));
  }
  else {
    FUN_00414480(param_2);
  }
  return param_2;
}

