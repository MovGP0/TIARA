/* Ghidra address: 01446be0 */
/* Ghidra symbol: FUN_01446be0 */


void FUN_01446be0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(lVar2 + 0x30);
  cVar1 = *(char *)(lVar2 + 0x38);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar2 + 0x40);
  }
  else if (cVar1 == '\x04') {
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar2 + 0x50);
    *(undefined1 *)(param_1 + 0xf7) = 0;
  }
  else if (cVar1 == '\a') {
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar2 + 0x50);
    *(undefined1 *)(param_1 + 0xf7) = 1;
  }
  else {
    FUN_00ef4260(0xb);
  }
  return;
}

