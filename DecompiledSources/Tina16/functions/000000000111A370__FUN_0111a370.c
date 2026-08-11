/* Ghidra address: 0111a370 */
/* Ghidra symbol: FUN_0111a370 */


undefined8 FUN_0111a370(longlong param_1,int param_2)

{
  if (param_2 < 3) {
    if (param_2 == 2) {
      return *(undefined8 *)(param_1 + 0x968);
    }
    if (param_2 == 0) {
      return *(undefined8 *)(param_1 + 0x958);
    }
    if (param_2 == 1) {
      return *(undefined8 *)(param_1 + 0x960);
    }
  }
  else {
    if (param_2 == 3) {
      return *(undefined8 *)(param_1 + 0x980);
    }
    if (param_2 == 4) {
      return *(undefined8 *)(param_1 + 0x978);
    }
  }
  return 0;
}

