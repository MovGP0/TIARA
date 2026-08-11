/* Ghidra address: 014b1dd0 */
/* Ghidra symbol: FUN_014b1dd0 */


undefined8 FUN_014b1dd0(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_014b1dc0(param_1);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      return *(undefined8 *)(param_1 + 0x438);
    }
    if (bVar1 == 0) {
      return *(undefined8 *)(param_1 + 0x418);
    }
    if (bVar1 == 1) {
      return *(undefined8 *)(param_1 + 0x420);
    }
    if (bVar1 == 2) {
      return *(undefined8 *)(param_1 + 0x428);
    }
    if (bVar1 == 4) {
      return *(undefined8 *)(param_1 + 0x430);
    }
  }
  else {
    if (bVar1 == 6) {
      return *(undefined8 *)(param_1 + 0x440);
    }
    if (bVar1 == 7) {
      return *(undefined8 *)(param_1 + 0x448);
    }
    if (bVar1 == 8) {
      return *(undefined8 *)(param_1 + 0x450);
    }
    if (bVar1 == 9) {
      return *(undefined8 *)(param_1 + 0x420);
    }
  }
  return 0;
}

