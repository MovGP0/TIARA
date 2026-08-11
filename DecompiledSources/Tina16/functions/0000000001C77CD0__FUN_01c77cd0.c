/* Ghidra address: 01c77cd0 */
/* Ghidra symbol: FUN_01c77cd0 */


void FUN_01c77cd0(longlong param_1)

{
  if (*PTR_DAT_020023b0 != '\0') {
    FUN_0064cc50(*(longlong *)(param_1 + 0xa28),
                 ((*(int *)(*(longlong *)(param_1 + 0xa18) + 0x9c) -
                  *(int *)(*(longlong *)(param_1 + 0x1358) + 0x9c)) -
                 *(int *)(*(longlong *)(param_1 + 0xa28) + 0x94)) + -2);
    FUN_0064cc50(*(longlong *)(param_1 + 0xa48),
                 (*(int *)(*(longlong *)(param_1 + 0xa28) + 0x9c) -
                 *(int *)(*(longlong *)(param_1 + 0xa48) + 0x94)) + -5);
  }
  return;
}

