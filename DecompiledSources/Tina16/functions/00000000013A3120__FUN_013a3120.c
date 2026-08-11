/* Ghidra address: 013a3120 */
/* Ghidra symbol: FUN_013a3120 */


void FUN_013a3120(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x98))
            (*(longlong **)(param_1 + 0x6b8),&DAT_013a3178);
  *(undefined1 *)(param_1 + 0x6f1) = 1;
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_01b1e1c0();
  }
  *(undefined1 *)(param_1 + 0x700) = 2;
  return;
}

