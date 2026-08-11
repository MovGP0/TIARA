/* Ghidra address: 01389900 */
/* Ghidra symbol: FUN_01389900 */


void FUN_01389900(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  lVar2 = *(longlong *)(param_1 + 0xe78);
  if ((*(char *)(param_1 + 0x990) == '\x06') || ((byte)(*(char *)(param_1 + 0x990) - 8U) < 2)) {
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0x80);
    lVar2 = *(longlong *)(lVar2 + 0x50);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar1 + 0x90);
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0x98);
    }
  }
  else {
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0x98);
    lVar2 = *(longlong *)(lVar2 + 0x50);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar1 + 0xa8);
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0xb0);
    }
  }
  return;
}

