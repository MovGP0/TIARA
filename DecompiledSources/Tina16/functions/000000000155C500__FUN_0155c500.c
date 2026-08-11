/* Ghidra address: 0155c500 */
/* Ghidra symbol: FUN_0155c500 */


void FUN_0155c500(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)PTR_DAT_02004208 != 0) {
    *(undefined8 *)(param_2 + 0x25b8) = *(undefined8 *)PTR_DAT_02004208;
    *(undefined8 *)PTR_DAT_02004208 = 0;
    FUN_00410f20(*(undefined8 *)(param_2 + 0x25b8));
  }
  return;
}

