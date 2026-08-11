/* Ghidra address: 01bd3530 */
/* Ghidra symbol: FUN_01bd3530 */


void FUN_01bd3530(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_00651660(param_1);
  if ((*(char *)((longlong)param_1 + 0x365) != '\0') &&
     (*(char *)((longlong)param_1 + 0x363) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 != '\0') {
      lVar2 = thunk_FUN_041d93e9();
      if (lVar2 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x363) = 1;
        (**(code **)(*param_1 + 0x188))(param_1);
      }
    }
  }
  return;
}

