/* Ghidra address: 010673f0 */
/* Ghidra symbol: FUN_010673f0 */


void FUN_010673f0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = 0;
  piVar3 = &DAT_01f09db0;
  do {
    if (*piVar3 == -1) {
      lVar4 = (longlong)iVar2 * 2;
      if (SEXT816(lVar4) != SEXT816((longlong)iVar2) * SEXT816(2)) {
        iVar2 = FUN_00410ab0();
      }
      puVar1 = (undefined8 *)(param_1 + 0x168 + lVar4 * 8);
      puVar1[1] = param_1;
      *puVar1 = FUN_010674d0;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 0x157);
  *(longlong *)(param_1 + 0x5d0) = param_1;
  *(code **)(param_1 + 0x5c8) = FUN_01067520;
  *(longlong *)(param_1 + 0xd60) = param_1;
  *(code **)(param_1 + 0xd58) = FUN_01067520;
  *(longlong *)(param_1 + 0xd40) = param_1;
  *(code **)(param_1 + 0xd38) = FUN_01067520;
  iVar2 = 0;
  do {
    lVar4 = (longlong)iVar2;
    lVar5 = lVar4 * 2;
    if (SEXT816(lVar5) != SEXT816(lVar4) * SEXT816(2)) {
      iVar2 = FUN_00410ab0();
    }
    if (*(longlong *)(param_1 + 0x168 + lVar5 * 8) == 0) {
      lVar5 = lVar4 * 2;
      if (SEXT816(lVar5) != SEXT816(lVar4) * SEXT816(2)) {
        iVar2 = FUN_00410ab0();
      }
      puVar1 = (undefined8 *)(param_1 + 0x168 + lVar5 * 8);
      puVar1[1] = param_1;
      *puVar1 = FUN_010674e0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x157);
  return;
}

