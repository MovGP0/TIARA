/* Ghidra address: 00723100 */
/* Ghidra symbol: FUN_00723100 */


void FUN_00723100(longlong param_1)

{
  byte bVar1;
  uint *puVar2;
  bool bVar3;
  
  bVar1 = 0;
  puVar2 = &DAT_01e05274;
  do {
    if (bVar1 < 0x20) {
      bVar3 = (1 << (bVar1 & 0x1f) & *(uint *)(*(longlong *)(param_1 + 0x10) + 0xd8)) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      *(uint *)(*(longlong *)(param_1 + 8) + 0xd8) =
           *(uint *)(*(longlong *)(param_1 + 8) + 0xd8) | *puVar2;
    }
    bVar1 = bVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (bVar1 != 0x16);
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x170) & 1) != 0) {
    *(uint *)(*(longlong *)(param_1 + 8) + 0xd8) =
         *(uint *)(*(longlong *)(param_1 + 8) + 0xd8) | 0x8000;
  }
  return;
}

