/* Ghidra address: 004dc530 */
/* Ghidra symbol: FUN_004dc530 */


undefined8 FUN_004dc530(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar2 = FUN_00423f90();
    LOCK();
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (lVar3 == 0) {
      *(longlong *)(param_1 + 0x28) = lVar2;
      lVar3 = 0;
    }
    UNLOCK();
    if (lVar3 != 0) {
      FUN_00410f20();
    }
    cVar1 = FUN_004dc5b0(param_1);
    if (cVar1 != '\0') {
      FUN_00424580(*(undefined8 *)(param_1 + 0x28));
    }
  }
  return *(undefined8 *)(param_1 + 0x28);
}

