/* Ghidra address: 00f2e320 */
/* Ghidra symbol: FUN_00f2e320 */


void FUN_00f2e320(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  while( true ) {
    if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
       (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
      bVar4 = false;
    }
    else {
      if (*(char *)(param_1 + 0x20) == '\0') {
        cVar1 = **(char **)(param_1 + 8);
      }
      else if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
        uVar2 = (ulonglong)*(int *)(param_1 + 0x30);
        lVar3 = *(longlong *)(param_1 + 0x28);
        if ((lVar3 == 0) || (*(ulonglong *)(lVar3 + -8) <= uVar2)) {
          param_1 = FUN_00410a90();
        }
        cVar1 = *(char *)(lVar3 + uVar2);
      }
      else {
        cVar1 = **(char **)(param_1 + 8);
      }
      if ((byte)(cVar1 - 8U) < 0x20) {
        bVar4 = (1 << (cVar1 - 8U & 0x1f) & 0x1000026U) != 0;
      }
      else {
        bVar4 = false;
      }
    }
    if (!bVar4) break;
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x34)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    else {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    }
  }
  return;
}

