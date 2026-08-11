/* Ghidra address: 006ebe80 */
/* Ghidra symbol: FUN_006ebe80 */


void FUN_006ebe80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (*(int *)(lVar1 + 0x10) == -0x2d2) {
    cVar2 = FUN_006ebd60(param_1,*(int *)(lVar1 + 0x18) + *(int *)(lVar1 + 0x1c),
                         *(int *)(lVar1 + 0x1c));
    *(ulonglong *)(param_2 + 0x18) = (ulonglong)(cVar2 == '\0');
  }
  return;
}

