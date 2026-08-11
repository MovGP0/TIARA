/* Ghidra address: 01870500 */
/* Ghidra symbol: FUN_01870500 */


void FUN_01870500(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

