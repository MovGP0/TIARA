/* Ghidra address: 018d42f0 */
/* Ghidra symbol: FUN_018d42f0 */


undefined8 FUN_018d42f0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_018d4250(param_1);
  uVar2 = FUN_018d4260(param_1,iVar1 + -1);
  iVar1 = FUN_018d3e80(uVar2);
  if (iVar1 < 2) {
    iVar1 = FUN_018d4250(param_1);
    if (1 < iVar1) {
      iVar1 = FUN_018d4250(param_1);
      uVar2 = FUN_018d4260(param_1,iVar1 + -2);
      iVar1 = FUN_018d3e80(uVar2);
      uVar3 = FUN_018d3e60(uVar2,iVar1 + -1);
    }
  }
  else {
    iVar1 = FUN_018d3e80(uVar2);
    uVar3 = FUN_018d3e60(uVar2,iVar1 + -2);
  }
  return uVar3;
}

