/* Ghidra address: 004dbe10 */
/* Ghidra symbol: FUN_004dbe10 */


void FUN_004dbe10(longlong param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = *(uint *)(param_1 + 8);
    LOCK();
    uVar2 = *(uint *)(param_1 + 8);
    if (uVar1 == uVar2) {
      *(uint *)(param_1 + 8) = (uint)param_2;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return;
}

