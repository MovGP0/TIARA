/* Ghidra address: 01503a90 */
/* Ghidra symbol: FUN_01503a90 */


void FUN_01503a90(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 1;
  if (*(int *)(param_1 + 0x98) == 0) {
    if (*(longlong *)PTR_DAT_02001440 != 0) {
      FUN_01cc6030(*(undefined8 *)PTR_DAT_02001440);
      *(undefined8 *)PTR_DAT_020027c0 = 0;
    }
    FUN_0153bdf0(0);
  }
  return;
}

