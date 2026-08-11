/* Ghidra address: 012f5e70 */
/* Ghidra symbol: FUN_012f5e70 */


void FUN_012f5e70(undefined8 param_1,longlong param_2)

{
  *PTR_DAT_02003768 = *(undefined1 *)(param_2 + 0x347);
  if (*(longlong *)PTR_DAT_020013f8 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020013f8);
    *(undefined8 *)PTR_DAT_020013f8 = 0;
  }
  return;
}

