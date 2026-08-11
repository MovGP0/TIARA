/* Ghidra address: 004d63a0 */
/* Ghidra symbol: FUN_004d63a0 */


void FUN_004d63a0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar4 = (undefined8 *)0x0;
  puVar1 = DAT_02011660;
  puVar5 = DAT_02011660;
  while (DAT_02011660 = puVar5, puVar3 = puVar1, puVar2 = puVar4, puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    iVar6 = FUN_004d6360(DAT_02011668,puVar3);
    puVar4 = puVar3;
    puVar5 = DAT_02011660;
    if (iVar6 == 0xc1) {
      FUN_004d6310(puVar3,(longlong)puVar3 + 0xfec);
      thunk_FUN_04184b1a(puVar3,0,0x8000);
      puVar4 = puVar2;
      puVar5 = puVar1;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = puVar1;
        puVar5 = DAT_02011660;
      }
    }
  }
  return;
}

