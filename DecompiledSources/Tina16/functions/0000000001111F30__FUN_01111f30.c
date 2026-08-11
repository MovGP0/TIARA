/* Ghidra address: 01111f30 */
/* Ghidra symbol: FUN_01111f30 */


void FUN_01111f30(longlong param_1,byte param_2)

{
  if (param_2 < 5) {
    if (param_2 == 4) {
      if (*(char *)(param_1 + 0x613) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 1;
      }
      if (*(char *)(param_1 + 0x616) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x80;
      }
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) & 0xfff9;
    }
    else if (param_2 == 0) {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) & 0xff7e;
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 6;
    }
    else if (param_2 == 1) {
      if (*(char *)(param_1 + 0x613) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 1;
      }
      if (*(char *)(param_1 + 0x616) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x80;
      }
    }
    else if (param_2 == 2) {
      if (*(char *)(param_1 + 0x613) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 1;
      }
      if (*(char *)(param_1 + 0x616) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x80;
      }
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) & 0xfff9;
    }
    else if (param_2 == 3) {
      if (*(char *)(param_1 + 0x613) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 1;
      }
      if (*(char *)(param_1 + 0x616) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x80;
      }
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) & 0xfff9;
    }
  }
  else if (param_2 == 5) {
    if (*(char *)(param_1 + 0x613) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 1;
    }
    if (*(char *)(param_1 + 0x616) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x80;
    }
    *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) & 0xfff9;
  }
  else if (param_2 == 6) {
    if (*(char *)(param_1 + 0x613) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 1;
    }
    if (*(char *)(param_1 + 0x616) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x80;
    }
    *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) & 0xfff9;
  }
  else if (param_2 == 7) {
    *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) & 0xff7e;
    *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 6;
  }
  else if (param_2 == 8) {
    if (*(char *)(param_1 + 0x613) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 1;
    }
    if (*(char *)(param_1 + 0x616) != '\0') {
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x80;
    }
    *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) & 0xfff9;
  }
  return;
}

