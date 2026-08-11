/* Ghidra address: 00814c40 */
/* Ghidra symbol: FUN_00814c40 */


void FUN_00814c40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    thunk_FUN_041c90ed(*(longlong *)(param_1 + 0xa0));
  }
  DAT_02012680 = 0;
  DAT_02012678 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  return;
}

