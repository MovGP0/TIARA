/* Ghidra address: 01a56a40 */
/* Ghidra symbol: FUN_01a56a40 */


void FUN_01a56a40(undefined8 param_1,longlong param_2)

{
  *PTR_DAT_02003f60 = *(undefined1 *)(param_2 + 0xe7);
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0xd8));
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0xd0));
  return;
}

