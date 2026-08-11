/* Ghidra address: 01bd4280 */
/* Ghidra symbol: FUN_01bd4280 */


void FUN_01bd4280(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_01c07120(param_1);
  if (lVar1 == 0) {
    FUN_01bd3410(param_1);
  }
  else {
    lVar1 = FUN_01c07120(param_1);
    if (*(byte *)(lVar1 + 0xad) < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)lVar1 >> 8),1) << (*(byte *)(lVar1 + 0xad) & 0x1f) &
              6U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_0064cc50(param_1,0xd);
    }
    else {
      FUN_0064cbf0(param_1,0xb);
    }
  }
  return;
}

