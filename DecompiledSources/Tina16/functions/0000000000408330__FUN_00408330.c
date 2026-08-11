/* Ghidra address: 00408330 */
/* Ghidra symbol: FUN_00408330 */


void FUN_00408330(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = param_1 - 1U & 0xfffffffffffffff8;
  lVar2 = FUN_004079c0();
  puVar1 = (undefined8 *)(uVar3 + lVar2);
  uVar3 = uVar3 | -(ulonglong)(lVar2 == 0);
  if (uVar3 != 0) {
    if (0x40a27 < uVar3) {
      return;
    }
    lVar2 = -uVar3;
    do {
      *(undefined1 (*) [16])(lVar2 + (longlong)puVar1) = (undefined1  [16])0x0;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 < 0);
  }
  *puVar1 = 0;
  return;
}

