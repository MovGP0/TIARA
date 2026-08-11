/* Ghidra address: 015f49b0 */
/* Ghidra symbol: FUN_015f49b0 */


void FUN_015f49b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)PTR_DAT_02004208 != 0) {
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)PTR_DAT_02004208;
    *(undefined8 *)PTR_DAT_02004208 = 0;
    FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}

