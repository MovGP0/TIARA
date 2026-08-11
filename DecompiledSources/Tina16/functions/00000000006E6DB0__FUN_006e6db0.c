/* Ghidra address: 006e6db0 */
/* Ghidra symbol: FUN_006e6db0 */


byte FUN_006e6db0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 local_8c [4];
  uint local_88;
  
  bVar3 = 0;
  cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 8));
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
    FUN_006e6d80(param_1,local_8c);
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
    FUN_004701b0(uVar2,0x43a,*(char *)(param_1 + 0x10) == '\0',local_8c,1);
    bVar3 = (local_88 & 1) != 0;
    if ((local_88 & 0x40000000) != 0) {
      bVar3 = bVar3 | 2;
    }
    if ((local_88 & 0x20000000) != 0) {
      bVar3 = bVar3 | 4;
    }
    if ((local_88 & 2) != 0) {
      bVar3 = bVar3 | 8;
    }
    if ((local_88 & 0x80000000) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    if ((local_88 & 8) != 0) {
      bVar3 = bVar3 | 0x20;
    }
    if ((local_88 & 4) != 0) {
      bVar3 = bVar3 | 0x40;
    }
    if ((local_88 & 0x10) != 0) {
      bVar3 = bVar3 | 0x80;
    }
  }
  return bVar3;
}

