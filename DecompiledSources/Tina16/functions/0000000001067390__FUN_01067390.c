/* Ghidra address: 01067390 */
/* Ghidra symbol: FUN_01067390 */


undefined8 FUN_01067390(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_1 + 0x140) = param_2;
  uVar2 = FUN_01067320(param_1);
  if (uVar2 < 0x157) {
    uVar3 = (ulonglong)uVar2;
    lVar5 = uVar3 * 2;
    if (SEXT816(lVar5) != SEXT816((longlong)uVar3) * SEXT816(2)) {
      uVar3 = FUN_00410ab0();
    }
    puVar1 = (undefined8 *)(param_1 + 0x168 + lVar5 * 8);
    uVar4 = (*(code *)*puVar1)(puVar1[1],(&DAT_01f09db0)[uVar3]);
  }
  else {
    uVar4 = 3;
  }
  return uVar4;
}

