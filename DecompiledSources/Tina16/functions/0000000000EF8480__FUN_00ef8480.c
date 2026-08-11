/* Ghidra address: 00ef8480 */
/* Ghidra symbol: FUN_00ef8480 */


void FUN_00ef8480(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  
  bVar1 = 0;
  do {
    bVar2 = 0;
    do {
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)bVar1 * 0x40 + (ulonglong)bVar2) =
           0xff;
      bVar2 = bVar2 + 1;
    } while (bVar2 != 0x40);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 0x40);
  bVar1 = 0;
  cVar4 = *(char *)(param_1 + 0x6f) + '\x01';
  do {
    bVar3 = 0;
    bVar2 = 0;
    cVar5 = *(char *)(param_1 + 0x6f) + '\x01';
    do {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x58) + (ulonglong)bVar2 * 0x200 + (ulonglong)bVar1 * 8) != 0) {
        *(byte *)(*(longlong *)(param_1 + 0x60) + (ulonglong)bVar3 * 0x40 + (ulonglong)bVar1) =
             bVar2;
        bVar3 = bVar3 + 1;
      }
      bVar2 = bVar2 + 1;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    bVar1 = bVar1 + 1;
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  return;
}

