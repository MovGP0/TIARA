/* Ghidra address: 00a3ba60 */
/* Ghidra symbol: FUN_00a3ba60 */


undefined8 FUN_00a3ba60(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_00a39e90(*(undefined8 *)(param_1 + 0xc0));
  cVar2 = FUN_00a3c2e0(*(undefined8 *)(param_1 + 0xc0));
  if (cVar2 == '\x02') {
    return 6;
  }
  bVar1 = *(byte *)(lVar3 + 0x490);
  if (bVar1 < 5) {
    if (bVar1 != 4) {
      if (bVar1 == 1) {
        return 1;
      }
      if (bVar1 != 2) goto LAB_00a3bb1b;
    }
    uVar4 = 2;
  }
  else {
    if ((bVar1 == 8) || (bVar1 == 0x10)) {
      cVar2 = *(char *)(lVar3 + 0x491);
      if ((cVar2 != '\0') && (cVar2 != '\x02')) {
        if (cVar2 == '\x03') {
          return 3;
        }
        uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
        uVar4 = FUN_004134c0(uVar4);
        return uVar4;
      }
      return 6;
    }
LAB_00a3bb1b:
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
    uVar4 = FUN_004134c0(uVar4);
  }
  return uVar4;
}

