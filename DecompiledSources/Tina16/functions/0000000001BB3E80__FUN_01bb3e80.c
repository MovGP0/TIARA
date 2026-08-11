/* Ghidra address: 01bb3e80 */
/* Ghidra symbol: FUN_01bb3e80 */


void FUN_01bb3e80(longlong param_1,double param_2,double param_3)

{
  if (*PTR_DAT_020033c0 == '\x01') {
    param_2 = param_2 / 1000.0;
    param_3 = param_3 / 1000.0;
  }
  else {
    param_2 = param_2 / 39.37007874015748;
    param_3 = param_3 / 39.37007874015748;
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x738),param_2);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x740),param_3);
  return;
}

