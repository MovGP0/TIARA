/* Ghidra address: 00803c40 */
/* Ghidra symbol: FUN_00803c40 */


void FUN_00803c40(undefined8 param_1,longlong param_2,undefined1 *param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  if (*(char *)(param_2 + 0x298) == '\x01') {
    *param_3 = 1;
    *param_4 = *(undefined4 *)(param_2 + 0x2a8);
  }
  else {
    *param_3 = 0;
    FUN_00414ad0(param_5,*(undefined8 *)(param_2 + 0x2a0));
  }
  return;
}

