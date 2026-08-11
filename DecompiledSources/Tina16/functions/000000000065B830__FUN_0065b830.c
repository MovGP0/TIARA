/* Ghidra address: 0065b830 */
/* Ghidra symbol: FUN_0065b830 */


void FUN_0065b830(longlong *param_1)

{
  if (param_1[0x8d] == 0) {
    if (param_1[0xf] != 0) {
      FUN_0065b830(param_1[0xf]);
    }
    (**(code **)(*param_1 + 0x1b8))(param_1);
  }
  return;
}

