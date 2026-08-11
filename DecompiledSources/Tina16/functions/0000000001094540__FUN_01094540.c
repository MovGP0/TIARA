/* Ghidra address: 01094540 */
/* Ghidra symbol: FUN_01094540 */


undefined8 FUN_01094540(longlong param_1,int param_2)

{
  if (param_2 < 3) {
    if (param_2 == 2) {
      return *(undefined8 *)(param_1 + 0x1968);
    }
    if (param_2 == 0) {
      return *(undefined8 *)(param_1 + 0x1958);
    }
    if (param_2 == 1) {
      return *(undefined8 *)(param_1 + 0x1960);
    }
  }
  else {
    if (param_2 == 3) {
      return *(undefined8 *)(param_1 + 0x1980);
    }
    if (param_2 == 4) {
      return *(undefined8 *)(param_1 + 0x1978);
    }
  }
  return 0;
}

