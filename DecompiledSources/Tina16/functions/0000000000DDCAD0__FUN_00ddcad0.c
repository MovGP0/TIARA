/* Ghidra address: 00ddcad0 */
/* Ghidra symbol: FUN_00ddcad0 */


void FUN_00ddcad0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00417840(*(longlong *)(param_1 + 0x10),&DAT_00dda8b0,(longlong)*(int *)(param_1 + 0xc));
    FUN_004095f0(*(undefined8 *)(param_1 + 0x10),(longlong)(*(int *)(param_1 + 0xc) << 4));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

