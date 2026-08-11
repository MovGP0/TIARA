/* Ghidra address: 004adf20 */
/* Ghidra symbol: FUN_004adf20 */


void FUN_004adf20(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = FUN_0041f930();
  FUN_00410f20(*(undefined8 *)(lVar2 + 0x238));
  lVar2 = FUN_0041f930();
  lVar2 = *(longlong *)(lVar2 + 0x240);
  uVar4 = *(uint *)(lVar2 + 0x10) - 1;
  if (*(uint *)(lVar2 + 0x10) <= uVar4) {
    FUN_00594f90();
  }
  uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar4 * 8);
  lVar3 = FUN_0041f930();
  *(undefined8 *)(lVar3 + 0x238) = uVar1;
  FUN_00599670(lVar2 + 8,*(int *)(lVar2 + 0x10) + -1,5);
  if (*(int *)(lVar2 + 0x10) == 0) {
    lVar3 = FUN_0041f930();
    *(undefined8 *)(lVar3 + 0x240) = 0;
    FUN_00410f20(lVar2);
  }
  FUN_00545d30();
  return;
}

