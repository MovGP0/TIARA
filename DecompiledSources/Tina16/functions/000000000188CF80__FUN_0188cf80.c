/* Ghidra address: 0188cf80 */
/* Ghidra symbol: FUN_0188cf80 */


void FUN_0188cf80(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_0188cfe0(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

