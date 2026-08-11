/* Ghidra address: 00879280 */
/* Ghidra symbol: FUN_00879280 */


undefined8 FUN_00879280(longlong param_1,undefined8 param_2,short param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  iVar2 = (int)param_2;
  if (iVar2 < 1) {
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    iVar2 = (int)uVar3;
    param_3 = -0x6d24;
    param_1 = FUN_0086dfd0(&PTR_FUN_0086d2e8,uVar3,L"Invalid ACharPos");
    FUN_004134c0();
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (ulonglong)*(uint *)(param_1 + -4);
  }
  bVar4 = false;
  if (iVar2 <= (int)uVar1) {
    bVar4 = *(short *)(param_1 + -2 + (longlong)iVar2 * 2) == param_3;
  }
  return CONCAT71((int7)(uVar1 >> 8),bVar4);
}

