/* Ghidra address: 0106a220 */
/* Ghidra symbol: FUN_0106a220 */


undefined8 FUN_0106a220(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_0106a1c0(param_1);
  *(byte *)(param_1 + 0x162) = bVar1;
  if (bVar1 < 9) {
    if (bVar1 == 8) {
      return *(undefined8 *)(param_1 + 0x1730);
    }
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        return *(undefined8 *)(param_1 + 0x16f0);
      }
      if (bVar1 == 0) {
        return *(undefined8 *)(param_1 + 0x16d8);
      }
      if (bVar1 == 1) {
        return *(undefined8 *)(param_1 + 0x16e0);
      }
      if (bVar1 == 2) {
        return *(undefined8 *)(param_1 + 0x16e8);
      }
    }
    else {
      if (bVar1 == 4) {
        return *(undefined8 *)(param_1 + 0x1700);
      }
      if (bVar1 == 6) {
        return *(undefined8 *)(param_1 + 0x1708);
      }
      if (bVar1 == 7) {
        return *(undefined8 *)(param_1 + 0x1728);
      }
    }
  }
  else if (bVar1 < 0xd) {
    if (bVar1 == 0xc) {
      return *(undefined8 *)(param_1 + 0x1710);
    }
    if (bVar1 == 9) {
      return *(undefined8 *)(param_1 + 0x1740);
    }
    if (bVar1 == 10) {
      return *(undefined8 *)(param_1 + 0x16f8);
    }
    if (bVar1 == 0xb) {
      return *(undefined8 *)(param_1 + 0x1738);
    }
  }
  else {
    if (bVar1 == 0xd) {
      return *(undefined8 *)(param_1 + 0x1718);
    }
    if (bVar1 == 0xe) {
      return *(undefined8 *)(param_1 + 0x1720);
    }
  }
  return 0;
}

