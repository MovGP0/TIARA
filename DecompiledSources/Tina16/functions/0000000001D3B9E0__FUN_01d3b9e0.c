/* Ghidra address: 01d3b9e0 */
/* Ghidra symbol: FUN_01d3b9e0 */


undefined8 FUN_01d3b9e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x46293e5939a08cea;
  uVar6 = 0x46293e5939a08cea;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      lVar1 = FUN_00b94e60(param_1,iVar3);
      lVar2 = FUN_00b94e60(param_1,iVar3 + -1);
      dVar5 = *(double *)(lVar1 + 8) - *(double *)(lVar2 + 8);
      uVar6 = uVar7;
      if (1e-30 < dVar5) {
        uVar6 = FUN_00b90650(uVar7,dVar5);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
      uVar7 = uVar6;
    } while (iVar4 != 0);
  }
  return uVar6;
}

