/* Ghidra address: 0041aea0 */
/* Ghidra symbol: FUN_0041aea0 */


void FUN_0041aea0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (DAT_01dbce28 != 0) {
    FUN_00407d90(DAT_01dbce28);
  }
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
  }
  if (iVar1 < 1) {
    DAT_01dbce28 = 0;
  }
  else {
    lVar3 = (longlong)((iVar1 + 1) * 2);
    DAT_01dbce28 = FUN_004079c0(lVar3);
    uVar2 = FUN_00416740(param_1);
    FUN_00409a70(uVar2,DAT_01dbce28,lVar3);
  }
  return;
}

