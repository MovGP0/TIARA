/* Ghidra address: 01992530 */
/* Ghidra symbol: FUN_01992530 */


void FUN_01992530(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_0198a580(param_2);
      if (cVar1 != '\x06') {
        iVar2 = (**(code **)(*param_2 + 0x1f8))
                          (param_2,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
        if (iVar2 == -1) {
          if ((undefined **)*param_2 == &PTR_FUN_017c0190) {
            cVar1 = FUN_017c25c0(param_2,*(undefined4 *)(param_1 + 0x78),
                                 *(undefined4 *)(param_1 + 0x80));
            if (cVar1 != '\0') {
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 2;
            }
          }
        }
        else {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        }
      }
    }
  }
  return;
}

