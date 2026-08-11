/* Ghidra address: 017a6870 */
/* Ghidra symbol: FUN_017a6870 */


void FUN_017a6870(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x34)) =
       *(undefined1 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  for (lVar2 = FUN_006dd580(param_2); lVar2 != 0; lVar2 = FUN_006dd3e0(lVar2)) {
    cVar1 = FUN_006dd2b0(lVar2);
    if (cVar1 == '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x34)) =
           *(undefined1 *)(lVar2 + 0x18);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    }
    else {
      FUN_017a6870(param_1,lVar2);
    }
  }
  return;
}

