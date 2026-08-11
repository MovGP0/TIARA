/* Ghidra address: 014a0260 */
/* Ghidra symbol: FUN_014a0260 */


void FUN_014a0260(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x770)) {
    *(char *)(param_1 + 0x770) = param_2;
    if (param_2 == '\0') {
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x728),0);
    }
    else {
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x728),1);
    }
  }
  return;
}

