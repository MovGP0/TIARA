/* Ghidra address: 014b1bd0 */
/* Ghidra symbol: FUN_014b1bd0 */


undefined8 FUN_014b1bd0(longlong param_1,int param_2)

{
  if (param_2 < 3) {
    if (param_2 == 2) {
      return *(undefined8 *)(param_1 + 0x428);
    }
    if (param_2 == 0) {
      return *(undefined8 *)(param_1 + 0x418);
    }
    if (param_2 == 1) {
      return *(undefined8 *)(param_1 + 0x420);
    }
  }
  else {
    if (param_2 == 3) {
      return *(undefined8 *)(param_1 + 0x450);
    }
    if (param_2 == 4) {
      return *(undefined8 *)(param_1 + 0x448);
    }
  }
  return 0;
}

