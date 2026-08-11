/* Ghidra address: 01098f90 */
/* Ghidra symbol: FUN_01098f90 */


undefined8 FUN_01098f90(longlong param_1,int param_2)

{
  if (param_2 < 3) {
    if (param_2 == 2) {
      return *(undefined8 *)(param_1 + 0x1930);
    }
    if (param_2 == 0) {
      return *(undefined8 *)(param_1 + 0x1920);
    }
    if (param_2 == 1) {
      return *(undefined8 *)(param_1 + 0x1928);
    }
  }
  else {
    if (param_2 == 3) {
      return *(undefined8 *)(param_1 + 0x1948);
    }
    if (param_2 == 4) {
      return *(undefined8 *)(param_1 + 0x1940);
    }
  }
  return 0;
}

