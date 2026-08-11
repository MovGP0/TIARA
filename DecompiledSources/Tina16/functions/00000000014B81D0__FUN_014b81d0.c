/* Ghidra address: 014b81d0 */
/* Ghidra symbol: FUN_014b81d0 */


void FUN_014b81d0(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  bool bVar1;
  
  if (*(byte *)(param_2 + 0xc0) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 0xc0) & 0x1f) &
            0x38U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)PTR_DAT_02004208;
    *(undefined8 *)PTR_DAT_02004208 = 0;
    FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  }
  return;
}

