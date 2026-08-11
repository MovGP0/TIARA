/* Ghidra address: 004128b0 */
/* Ghidra symbol: FUN_004128b0 */


uint * FUN_004128b0(longlong param_1,longlong param_2,int *param_3)

{
  uint *puVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = *param_3;
  iVar5 = 0;
  if (-1 < iVar7 + -1) {
    do {
      puVar1 = (uint *)(param_3 + (longlong)iVar5 * 2 + 1);
      if (*puVar1 == 0) {
        return puVar1;
      }
      lVar6 = param_2;
      if (param_2 != 0) {
        while( true ) {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)*puVar1);
          if (lVar2 == lVar6) {
            return puVar1;
          }
          if (*(int *)(lVar2 + -0x80) == *(int *)(lVar6 + -0x80)) {
            pcVar3 = *(char **)(lVar2 + -0x88);
            if ((*pcVar3 == **(char **)(lVar6 + -0x88)) &&
               (iVar4 = FUN_00414f50(pcVar3 + 1,*(char **)(lVar6 + -0x88) + 1,*pcVar3), iVar4 == 0))
            {
              return puVar1;
            }
          }
          if (*(longlong **)(lVar6 + -0x78) == (longlong *)0x0) break;
          lVar6 = **(longlong **)(lVar6 + -0x78);
        }
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return (uint *)0x0;
}

