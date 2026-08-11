/* Ghidra address: 012f46d0 */
/* Ghidra symbol: FUN_012f46d0 */


void FUN_012f46d0(undefined8 param_1,longlong param_2)

{
  FUN_00410f20(*(undefined8 *)(param_2 + 200));
  *(undefined1 *)(*(longlong *)PTR_DAT_02003e70 + 0x98) = 0;
  if (*(longlong *)PTR_DAT_020013f8 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020013f8);
    *(undefined8 *)PTR_DAT_020013f8 = 0;
  }
  return;
}

