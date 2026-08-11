/* Ghidra address: 004c2500 */
/* Ghidra symbol: FUN_004c2500 */


void FUN_004c2500(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  while( true ) {
    cVar1 = FUN_004be290(*(undefined8 *)(param_1 + 0x40));
    if (cVar1 != '\0') break;
    uVar2 = FUN_004bea50(*(undefined8 *)(param_1 + 0x40));
    if ((byte)uVar2 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x1cU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_004c25a0(*(undefined8 *)(param_1 + 0x40));
    }
    FUN_004c3080(*(undefined8 *)(param_1 + 0x40),1);
    while( true ) {
      cVar1 = FUN_004be290(*(undefined8 *)(param_1 + 0x40));
      if (cVar1 != '\0') break;
      FUN_004c2d10(*(undefined8 *)(param_1 + 0x40));
    }
    FUN_004be030(*(undefined8 *)(param_1 + 0x40),0);
  }
  FUN_004be030(*(undefined8 *)(param_1 + 0x40),0);
  return;
}

