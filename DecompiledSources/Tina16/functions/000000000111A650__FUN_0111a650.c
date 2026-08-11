/* Ghidra address: 0111a650 */
/* Ghidra symbol: FUN_0111a650 */


undefined8 FUN_0111a650(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_0111a640(param_1);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      return *(undefined8 *)(param_1 + 0x970);
    }
    if (bVar1 == 0) {
      return *(undefined8 *)(param_1 + 0x958);
    }
    if (bVar1 == 1) {
      return *(undefined8 *)(param_1 + 0x960);
    }
    if (bVar1 == 2) {
      return *(undefined8 *)(param_1 + 0x968);
    }
  }
  else {
    if (bVar1 == 5) {
      return *(undefined8 *)(param_1 + 0x978);
    }
    if (bVar1 == 6) {
      return *(undefined8 *)(param_1 + 0x980);
    }
    if (bVar1 == 7) {
      return *(undefined8 *)(param_1 + 0x960);
    }
  }
  return 0;
}

