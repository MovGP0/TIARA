/* Ghidra address: 01d03190 */
/* Ghidra symbol: FUN_01d03190 */


void FUN_01d03190(longlong param_1,undefined4 param_2,char param_3)

{
  *(undefined4 *)(param_1 + 0x154) = param_2;
  if (param_3 == '\x02') {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) | 0x1000;
  }
  return;
}

