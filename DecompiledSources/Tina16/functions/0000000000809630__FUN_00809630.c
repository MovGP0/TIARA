/* Ghidra address: 00809630 */
/* Ghidra symbol: FUN_00809630 */


undefined8 FUN_00809630(undefined8 param_1,longlong param_2)

{
  while( true ) {
    if (param_2 == 0) {
      FUN_00414480(param_1);
      return param_1;
    }
    if (*(longlong *)(param_2 + 0xf0) != 0) break;
    param_2 = *(longlong *)(param_2 + 0x78);
  }
  FUN_00414ad0(param_1,*(undefined8 *)(param_2 + 0xf0));
  return param_1;
}

