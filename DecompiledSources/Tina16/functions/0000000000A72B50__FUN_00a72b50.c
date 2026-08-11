/* Ghidra address: 00a72b50 */
/* Ghidra symbol: FUN_00a72b50 */


longlong * FUN_00a72b50(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x20));
  local_30 = 0;
  if (*param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar2 = FUN_00a72910(param_1,iVar4);
        if (*(char *)(lVar2 + 8) == '#') {
          bVar1 = true;
          local_30 = FUN_00a72910(param_1,iVar4);
          goto code_r0x00a72bc7;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    bVar1 = false;
code_r0x00a72bc7:
    if (bVar1) {
      FUN_0043e1a0(param_2,*(undefined8 *)(local_30 + 0x28));
      FUN_00414ad0(param_1 + 0x20,*param_2);
    }
  }
  return param_2;
}

