/* Ghidra address: 008830b0 */
/* Ghidra symbol: FUN_008830b0 */


void FUN_008830b0(void)

{
  if (DAT_01e21a40 != 0) {
    thunk_FUN_041c8c2f(DAT_01e21a40);
    DAT_01e21a40 = 0;
  }
  if (DAT_01e21a38 != 0) {
    (*(code *)PTR_FUN_01e21680)();
    thunk_FUN_041c8c2f(DAT_01e21a38);
    DAT_01e21a38 = 0;
  }
  return;
}

