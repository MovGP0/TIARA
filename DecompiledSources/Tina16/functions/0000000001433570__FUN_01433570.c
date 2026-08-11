/* Ghidra address: 01433570 */
/* Ghidra symbol: FUN_01433570 */


undefined8 FUN_01433570(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00b8fd60(param_2,*(undefined8 *)(param_1 + 0x70),*PTR_DAT_02005310,0,1);
  }
  else {
    FUN_0043f750(param_2,*(undefined4 *)(param_1 + 0x78));
  }
  return param_2;
}

