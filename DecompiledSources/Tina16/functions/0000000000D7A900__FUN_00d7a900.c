/* Ghidra address: 00d7a900 */
/* Ghidra symbol: FUN_00d7a900 */


void FUN_00d7a900(longlong param_1,undefined2 param_2)

{
  byte bVar1;
  
  FUN_00d780e0(param_1,param_2);
  bVar1 = *(byte *)(param_1 + 0x140);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      if (*(char *)(param_1 + 0x99) == '\x02') {
        *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 0x40) != 0;
      }
      else {
        *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 0x10) != 0;
      }
    }
    else if (bVar1 == 1) {
      *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 2) != 0;
    }
    else if (bVar1 == 2) {
      *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 4) != 0;
    }
    else if (bVar1 == 3) {
      *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 8) != 0;
    }
    else if (bVar1 == 4) {
      *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 0x20) != 0;
    }
  }
  else if (bVar1 == 6) {
    *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 0x80) != 0;
  }
  else if (bVar1 == 7) {
    *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 0x100) != 0;
  }
  else if (bVar1 == 8) {
    *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 0x200) != 0;
  }
  else if (bVar1 == 9) {
    *(bool *)(param_1 + 0x8c) = (*(ushort *)(param_1 + 0xf6) & 1) != 0;
  }
  return;
}

