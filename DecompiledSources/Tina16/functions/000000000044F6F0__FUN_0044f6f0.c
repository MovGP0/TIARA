/* Ghidra address: 0044f6f0 */
/* Ghidra symbol: FUN_0044f6f0 */


undefined8 FUN_0044f6f0(longlong param_1,int param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 2;
  uVar1 = *(ushort *)(param_1 + -2 + (longlong)param_2 * 2);
  if ((0xd7ff < uVar1) && (uVar1 < 0xe000)) {
    lVar3 = FUN_00416740();
    uVar2 = FUN_0044f680(lVar3 + -2 + (longlong)param_2 * 2);
  }
  return uVar2;
}

