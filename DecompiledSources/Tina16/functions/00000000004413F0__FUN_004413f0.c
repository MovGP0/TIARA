/* Ghidra address: 004413f0 */
/* Ghidra symbol: FUN_004413f0 */


int FUN_004413f0(undefined8 param_1,longlong param_2)

{
  short sVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  uVar2 = FUN_00416740();
  while ((0 < iVar4 &&
         ((sVar1 = *(short *)(param_2 + (longlong)(iVar4 + -1) * 2), sVar1 == 0 ||
          (lVar3 = FUN_00442980(uVar2,sVar1), lVar3 == 0))))) {
    iVar4 = iVar4 + -1;
  }
  return iVar4;
}

