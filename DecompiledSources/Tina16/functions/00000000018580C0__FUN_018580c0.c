/* Ghidra address: 018580c0 */
/* Ghidra symbol: FUN_018580c0 */


undefined8 FUN_018580c0(undefined8 param_1,char param_2)

{
  if ((byte)(param_2 - 1U) != 0xff) {
    if ((byte)(param_2 - 1U) < 3) {
      return 1;
    }
    if (4 < (byte)(param_2 - 4U)) {
      return 0;
    }
  }
  return 0;
}

