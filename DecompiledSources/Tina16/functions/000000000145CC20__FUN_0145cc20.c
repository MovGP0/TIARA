/* Ghidra address: 0145cc20 */
/* Ghidra symbol: FUN_0145cc20 */


void FUN_0145cc20(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x108) = 0;
  lVar2 = *(longlong *)(param_1 + 0x100);
  FUN_004169a0(PTR_DAT_02004de0,lVar2 + 2);
  *(undefined1 *)(param_1 + 0xff) = *(undefined1 *)(lVar2 + 0x38);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar2 + 0x30);
  cVar1 = *(char *)(param_1 + 0xff);
  if (cVar1 < '\x05') {
    if (cVar1 == '\x04') {
LAB_0145cdc8:
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar2 + 0x48);
      if (0.0 < *(double *)(param_1 + 0x98)) {
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar2 + 0x50);
        return;
      }
      *(double *)(param_1 + 0x98) = *(double *)(lVar2 + 0x50) + 360.0;
      return;
    }
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0x40);
      return;
    }
    if (cVar1 == '\x01') {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar2 + 0x70);
      return;
    }
    if (cVar1 == '\x02') {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar2 + 0x70);
      return;
    }
    if (cVar1 == '\x03') {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0x58);
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar2 + 0x58);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(lVar2 + 0x60);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar2 + 0x78);
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar2 + 0x88);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar2 + 0x90);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar2 + 0x98);
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar2 + 0x68);
      return;
    }
  }
  else {
    if (cVar1 == '\x05') {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar2 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar2 + 0x70);
      return;
    }
    if (cVar1 == '\x06') {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar2 + 0x48);
      return;
    }
    if (cVar1 == '\a') goto LAB_0145cdc8;
    if (cVar1 == '\x10') {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      return;
    }
  }
  FUN_00ef4260(7,*(undefined8 *)(param_1 + 0x130));
  return;
}

