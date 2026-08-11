/* Ghidra address: 01389820 */
/* Ghidra symbol: FUN_01389820 */


void FUN_01389820(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  lVar2 = *(longlong *)(param_1 + 0xe78);
  if ((*(char *)(param_1 + 0x990) == '\x06') || ((byte)(*(char *)(param_1 + 0x990) - 8U) < 2)) {
    *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(lVar2 + 0x48);
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0x40);
      *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0x48);
    }
  }
  else {
    *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_1 + 0xe50);
    *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0xe58);
    if (*(char *)(param_1 + 0xe74) == '\0') {
      *(undefined1 *)(lVar1 + 0x88) = 2;
    }
    else {
      *(undefined1 *)(lVar1 + 0x88) = 0;
    }
    *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(lVar2 + 0x48);
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0x40);
      *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0x48);
    }
  }
  return;
}

