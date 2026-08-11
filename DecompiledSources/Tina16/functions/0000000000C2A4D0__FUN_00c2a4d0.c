/* Ghidra address: 00c2a4d0 */
/* Ghidra symbol: FUN_00c2a4d0 */


void FUN_00c2a4d0(longlong param_1)

{
  byte bVar1;
  
  *(byte *)(param_1 + 0x51) = *(byte *)(param_1 + 0x51) & 0x50;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x10)) {
    *(byte *)(param_1 + 0x51) = *(byte *)(param_1 + 0x51) | 0x80;
    if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x14) != '\0') {
      *(byte *)(param_1 + 0x51) = *(byte *)(param_1 + 0x51) | 0x20;
    }
    bVar1 = FUN_00c29e40(param_1);
    *(byte *)(param_1 + 0x51) = *(byte *)(param_1 + 0x51) & 0xf8 | bVar1 & 7;
  }
  return;
}

