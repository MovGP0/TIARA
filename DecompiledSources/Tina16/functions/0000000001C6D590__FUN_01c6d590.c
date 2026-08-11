/* Ghidra address: 01c6d590 */
/* Ghidra symbol: FUN_01c6d590 */


void FUN_01c6d590(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    lVar1 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8));
    if (lVar1 != 0) {
      lVar1 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      lVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      *(bool *)(lVar2 + 299) = *(char *)(lVar1 + 299) == '\0';
      FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
    }
  }
  return;
}

