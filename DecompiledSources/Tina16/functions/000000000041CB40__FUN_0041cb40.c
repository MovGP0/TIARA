/* Ghidra address: 0041cb40 */
/* Ghidra symbol: FUN_0041cb40 */


ulonglong * FUN_0041cb40(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  LOCK();
  puVar4 = param_1 + 1;
  uVar1 = *puVar4;
  *puVar4 = *puVar4 + 1;
  UNLOCK();
  do {
    uVar2 = *param_1;
    puVar4 = (ulonglong *)(uVar2 & 0xffffffffffff | ~((uVar2 & 0x800000000000) - 1));
    if (puVar4 == (ulonglong *)0x0) break;
    LOCK();
    uVar3 = *param_1;
    if (uVar2 == uVar3) {
      *param_1 = *puVar4 & 0xffffffffffff | uVar1 + 1 << 0x30;
      uVar3 = uVar2;
    }
    UNLOCK();
  } while (uVar3 != uVar2);
  if (puVar4 != (ulonglong *)0x0) {
    LOCK();
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    UNLOCK();
  }
  return puVar4;
}

