/* Ghidra address: 00837d20 */
/* Ghidra symbol: FUN_00837d20 */


uint FUN_00837d20(longlong param_1,uint param_2,short param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar6 = (ulonglong)param_2;
  do {
    iVar3 = 0;
    if (*(longlong *)(param_1 + 0x4d8) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x4d8) + -4);
    }
    if (iVar3 <= (int)uVar6) {
      return 0xffffffff;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    uVar4 = uVar6;
    bVar1 = FUN_008317e0(*(undefined8 *)(param_1 + 0x4d8),uVar6);
    if (bVar1 < 8) {
      bVar8 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (bVar1 & 0x1f) & 6U) != 0;
    }
    else {
      bVar8 = false;
    }
  } while (!bVar8);
  sVar2 = *(short *)(*(longlong *)(param_1 + 0x4d8) + -2 + (longlong)(int)uVar5 * 2);
  if (bVar1 == 2) {
    sVar2 = FUN_00831b30();
  }
  uVar7 = 0xffffffff;
  if (sVar2 == param_3) {
    uVar7 = uVar5;
  }
  return uVar7;
}

