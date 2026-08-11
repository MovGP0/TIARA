/* Ghidra address: 015c1f20 */
/* Ghidra symbol: FUN_015c1f20 */


undefined8 FUN_015c1f20(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = FUN_015c1b10(param_2);
  if ((cVar2 != '\0') && (0 < *(longlong *)(param_1 + 0x10))) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  bVar1 = *(byte *)(param_1 + 0x18);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      return 0xfa00000;
    }
    if (bVar1 < 3) {
      if (bVar1 == 2) {
        return 0x163e00;
      }
      if (bVar1 == 0) {
        return 0xffffffffffffffff;
      }
      if (bVar1 == 1) {
        return *(undefined8 *)(param_1 + 0x20);
      }
    }
    else {
      if (bVar1 == 3) {
        return 0x6400000;
      }
      if (bVar1 == 4) {
        return 0xc800000;
      }
    }
  }
  else {
    if (bVar1 == 6) {
      return 0x25800000;
    }
    if (bVar1 == 7) {
      return 0x28a00000;
    }
    if (bVar1 == 8) {
      return 0x2bc00000;
    }
    if (bVar1 == 9) {
      return 0x125c00000;
    }
  }
  return 0xffffffffffffffff;
}

