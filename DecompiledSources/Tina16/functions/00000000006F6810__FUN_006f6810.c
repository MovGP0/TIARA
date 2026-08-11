/* Ghidra address: 006f6810 */
/* Ghidra symbol: FUN_006f6810 */


void FUN_006f6810(longlong param_1,char param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x4d9) != param_2) {
    *(char *)(param_1 + 0x4d9) = param_2;
    bVar1 = *(byte *)(param_1 + 0x4d9);
    if (bVar1 < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (bVar1 & 0x1f) & 10U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (((bVar2) && (*(longlong *)(param_1 + 0x640) != 0)) ||
       (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0xcU) != 0)) {
      FUN_006f67c0(param_1);
    }
  }
  return;
}

