/* Ghidra address: 0185f0f0 */
/* Ghidra symbol: FUN_0185f0f0 */


void FUN_0185f0f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar1 + 0x9030) <= *(int *)(lVar1 + 0x902c)) {
    if (*(int *)(lVar1 + 0x9020) < 0xc) {
      *(int *)(lVar1 + 0x9030) = *(int *)(lVar1 + 0x9030) << 1;
      *(int *)(lVar1 + 0x9020) = *(int *)(lVar1 + 0x9020) + 1;
    }
    else {
      *(undefined1 *)(lVar1 + 0x9034) = 1;
    }
  }
  return;
}

