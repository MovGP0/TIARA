/* Ghidra address: 01094b20 */
/* Ghidra symbol: FUN_01094b20 */


undefined8 FUN_01094b20(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_01094b10(param_1);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      return *(undefined8 *)(param_1 + 0x1970);
    }
    if (bVar1 == 0) {
      return *(undefined8 *)(param_1 + 0x1958);
    }
    if (bVar1 == 1) {
      return *(undefined8 *)(param_1 + 0x1960);
    }
    if (bVar1 == 2) {
      return *(undefined8 *)(param_1 + 0x1968);
    }
  }
  else {
    if (bVar1 == 5) {
      return *(undefined8 *)(param_1 + 0x1978);
    }
    if (bVar1 == 6) {
      return *(undefined8 *)(param_1 + 0x1980);
    }
    if (bVar1 == 7) {
      return *(undefined8 *)(param_1 + 0x1960);
    }
  }
  return 0;
}

