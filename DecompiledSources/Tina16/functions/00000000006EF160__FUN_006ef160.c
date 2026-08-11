/* Ghidra address: 006ef160 */
/* Ghidra symbol: FUN_006ef160 */


void FUN_006ef160(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_2 != *(longlong *)(param_1 + 0x40)) {
    *(longlong *)(param_1 + 0x40) = param_2;
    lVar1 = FUN_006eed60(param_1);
    if (*(byte *)(lVar1 + 0x4d9) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)lVar1 >> 8),1) << (*(byte *)(lVar1 + 0x4d9) & 0x1f) &
              10U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = FUN_006eed60(param_1);
      FUN_006f67c0(uVar2);
    }
  }
  return;
}

