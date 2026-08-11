/* Ghidra address: 0041ca60 */
/* Ghidra symbol: FUN_0041ca60 */


void FUN_0041ca60(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  LOCK();
  puVar1 = param_1 + 2;
  uVar3 = *puVar1;
  *(int *)puVar1 = (int)*puVar1 + 1;
  UNLOCK();
  if ((int)uVar3 + 1 < 0x201) {
    LOCK();
    puVar1 = param_1 + 1;
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    do {
      uVar2 = *param_1;
      *param_2 = uVar2 & 0xffffffffffff | ~((uVar2 & 0x800000000000) - 1);
      LOCK();
      uVar4 = *param_1;
      if (uVar2 == uVar4) {
        *param_1 = (ulonglong)param_2 & 0xffffffffffff | uVar3 + 1 << 0x30;
        uVar4 = uVar2;
      }
      UNLOCK();
    } while (uVar4 != uVar2);
  }
  else {
    LOCK();
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    UNLOCK();
    FUN_0041c3c0(param_2);
  }
  return;
}

