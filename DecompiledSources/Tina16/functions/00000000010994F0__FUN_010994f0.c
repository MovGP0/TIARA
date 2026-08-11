/* Ghidra address: 010994f0 */
/* Ghidra symbol: FUN_010994f0 */


undefined8 FUN_010994f0(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_010994e0(param_1);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      return *(undefined8 *)(param_1 + 0x1938);
    }
    if (bVar1 == 0) {
      return *(undefined8 *)(param_1 + 0x1918);
    }
    if (bVar1 == 1) {
      return *(undefined8 *)(param_1 + 0x1920);
    }
    if (bVar1 == 2) {
      return *(undefined8 *)(param_1 + 0x1928);
    }
    if (bVar1 == 3) {
      return *(undefined8 *)(param_1 + 0x1930);
    }
  }
  else {
    if (bVar1 == 6) {
      return *(undefined8 *)(param_1 + 0x1940);
    }
    if (bVar1 == 7) {
      return *(undefined8 *)(param_1 + 0x1948);
    }
    if (bVar1 == 8) {
      return *(undefined8 *)(param_1 + 0x1928);
    }
  }
  return 0;
}

