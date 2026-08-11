/* Ghidra address: 0181e4e0 */
/* Ghidra symbol: FUN_0181e4e0 */


void FUN_0181e4e0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_004aee30(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),param_1);
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}

