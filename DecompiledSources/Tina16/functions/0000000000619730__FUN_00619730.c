/* Ghidra address: 00619730 */
/* Ghidra symbol: FUN_00619730 */


void FUN_00619730(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_2c [12];
  
  FUN_00619290(local_2c);
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x10);
    LOCK();
    uVar2 = *(uint *)(param_1 + 0x10);
    if (uVar1 == uVar2) {
      *(uint *)(param_1 + 0x10) = uVar1 & ~param_3 | param_2;
      uVar2 = uVar1;
    }
    UNLOCK();
    if (uVar2 == uVar1) break;
    FUN_006192a0(local_2c);
  }
  return;
}

