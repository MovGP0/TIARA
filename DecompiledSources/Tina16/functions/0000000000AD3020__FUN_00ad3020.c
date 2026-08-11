/* Ghidra address: 00ad3020 */
/* Ghidra symbol: FUN_00ad3020 */


void FUN_00ad3020(longlong param_1)

{
  bool bVar1;
  ushort uVar2;
  
  while( true ) {
    if ((((ushort)(*(short *)(param_1 + 0x20) - 9U) < 2) ||
        (uVar2 = *(short *)(param_1 + 0x20) - 0xc, uVar2 < 2)) || (uVar2 == 0x14)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    FUN_00ad1170(param_1);
  }
  return;
}

