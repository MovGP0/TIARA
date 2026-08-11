/* Ghidra address: 0106a110 */
/* Ghidra symbol: FUN_0106a110 */


undefined8 FUN_0106a110(longlong param_1,int param_2)

{
  if (param_2 < 4) {
    if (param_2 == 3) {
      return *(undefined8 *)(param_1 + 0x1730);
    }
    if (param_2 == 0) {
      return *(undefined8 *)(param_1 + 0x16e0);
    }
    if (param_2 == 1) {
      return *(undefined8 *)(param_1 + 0x16f0);
    }
    if (param_2 == 2) {
      return *(undefined8 *)(param_1 + 0x1700);
    }
  }
  else {
    if (param_2 == 4) {
      return *(undefined8 *)(param_1 + 0x1728);
    }
    if (param_2 == 5) {
      return *(undefined8 *)(param_1 + 0x1740);
    }
  }
  return 0;
}

