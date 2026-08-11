/* Ghidra address: 00414480 */
/* Ghidra symbol: FUN_00414480 */


longlong * FUN_00414480(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    *param_1 = 0;
    if (0 < *(int *)(lVar3 + -8)) {
      LOCK();
      piVar1 = (int *)(lVar3 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FUN_004095f0(lVar3 + -0x10);
      }
    }
  }
  return param_1;
}

