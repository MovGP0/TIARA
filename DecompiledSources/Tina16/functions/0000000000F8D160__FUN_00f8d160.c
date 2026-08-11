/* Ghidra address: 00f8d160 */
/* Ghidra symbol: FUN_00f8d160 */


void FUN_00f8d160(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3472) = param_2;
  _MCU_SetAnimate(*(undefined8 *)(param_1 + 0x60));
  return;
}

