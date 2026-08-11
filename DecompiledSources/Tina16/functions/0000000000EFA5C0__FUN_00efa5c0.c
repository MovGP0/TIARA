/* Ghidra address: 00efa5c0 */
/* Ghidra symbol: FUN_00efa5c0 */


void FUN_00efa5c0(undefined8 *param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  
  uVar5 = 0;
  sVar1 = FUN_019b60b0(*param_1,0,param_2);
  if ((ushort)(sVar1 - 0x28U) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)(sVar1 - 0x28U) & 0x1f) &
            0x28U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (!bVar6) {
    iVar2 = FUN_019b5ce0(*param_1,param_2);
    if (0 < iVar2) {
      do {
        uVar3 = FUN_019b60b0(*param_1,iVar2 + -1,param_2);
        FUN_019b5bb0(param_1,iVar2,uVar3,param_2);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_019b5bb0(param_1,0,0x2b,param_2);
  }
  iVar2 = 0;
  while( true ) {
    iVar4 = FUN_019b5ce0(*param_1,param_2);
    if (iVar4 <= iVar2) break;
    sVar1 = FUN_019b60b0(*param_1,iVar2,param_2);
    if (sVar1 == 0x28) {
      while( true ) {
        sVar1 = FUN_019b60b0(*param_1,iVar2,param_2);
        if (sVar1 == 0x29) break;
        iVar2 = iVar2 + 1;
      }
    }
    else if (sVar1 == 0x2b) {
      FUN_019b5bb0(param_1,iVar2,0x2d,param_2);
    }
    else if (sVar1 == 0x2d) {
      FUN_019b5bb0(param_1,iVar2,0x2b,param_2);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

