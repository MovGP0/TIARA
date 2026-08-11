/* Ghidra address: 0111eca0 */
/* Ghidra symbol: FUN_0111eca0 */


undefined8 FUN_0111eca0(longlong param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x163);
  if (bVar1 < 9) {
    if (bVar1 == 8) {
      return *(undefined8 *)(param_1 + 0x1a8);
    }
    if (bVar1 < 5) {
      if (bVar1 == 4) {
        return *(undefined8 *)(param_1 + 0x180);
      }
      if (bVar1 == 0) {
        return *(undefined8 *)(param_1 + 0x1c0);
      }
      if (bVar1 == 1) {
        return *(undefined8 *)(param_1 + 0x1c8);
      }
      if (bVar1 == 2) {
        return *(undefined8 *)(param_1 + 0x1a0);
      }
    }
    else {
      if (bVar1 == 5) {
        return *(undefined8 *)(param_1 + 0x1d0);
      }
      if (bVar1 == 6) {
        return *(undefined8 *)(param_1 + 0x170);
      }
      if (bVar1 == 7) {
        return *(undefined8 *)(param_1 + 0x1b8);
      }
    }
  }
  else if (bVar1 < 0xd) {
    if (bVar1 == 0xc) {
      return *(undefined8 *)(param_1 + 400);
    }
    if (bVar1 == 9) {
      return *(undefined8 *)(param_1 + 0x178);
    }
    if (bVar1 == 10) {
      return *(undefined8 *)(param_1 + 0x1b0);
    }
    if (bVar1 == 0xb) {
      return *(undefined8 *)(param_1 + 0x188);
    }
  }
  else {
    if (bVar1 == 0xd) {
      return *(undefined8 *)(param_1 + 0x198);
    }
    if (bVar1 == 0xe) {
      return *(undefined8 *)(param_1 + 0x1d8);
    }
  }
  return 0;
}

