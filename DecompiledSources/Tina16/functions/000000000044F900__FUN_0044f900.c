/* Ghidra address: 0044f900 */
/* Ghidra symbol: FUN_0044f900 */


int FUN_0044f900(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = 0;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(param_2 + -4);
  }
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined4 *)(param_1 + -4);
  }
  lVar1 = FUN_00416740(param_2);
  uVar2 = FUN_00416740(param_1);
  lVar3 = FUN_00442a40(lVar1,uVar2,uVar5,uVar6);
  if (lVar3 != 0) {
    iVar4 = (int)((lVar3 - lVar1) / 2) + 1;
  }
  return iVar4;
}

