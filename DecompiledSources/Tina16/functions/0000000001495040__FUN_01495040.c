/* Ghidra address: 01495040 */
/* Ghidra symbol: FUN_01495040 */


void FUN_01495040(longlong param_1)

{
  FUN_00410f20(*(undefined8 *)(param_1 + 0xbc0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xbc8));
  FUN_01b202f0(*(undefined8 *)(param_1 + 3000));
  FUN_00410f20(*(undefined8 *)(param_1 + 3000));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xbe0));
  if (*(longlong *)PTR_DAT_020025d8 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020025d8);
  }
  *(undefined8 *)PTR_DAT_020025d8 = 0;
  *(undefined1 *)(*(longlong *)PTR_DAT_02004e40 + 0x1829) = 0;
  DAT_0210ea90 = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0xc00));
  FUN_0149bd60(param_1);
  return;
}

