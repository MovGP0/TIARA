/* Ghidra address: 004dc660 */
/* Ghidra symbol: FUN_004dc660 */


void FUN_004dc660(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = *(uint *)(param_1 + 0x20);
    LOCK();
    uVar2 = *(uint *)(param_1 + 0x20);
    if (uVar1 == uVar2) {
      *(uint *)(param_1 + 0x20) = uVar1 & ~param_3 | param_2;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return;
}

