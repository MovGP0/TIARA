/* Ghidra address: 018d4280 */
/* Ghidra symbol: FUN_018d4280 */


undefined8 FUN_018d4280(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00410e60(&DAT_018d1aa8,1);
  iVar1 = FUN_018d4250(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == -1) {
    uVar3 = FUN_018d3d00(&DAT_018d1ce8,1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),uVar3);
    iVar1 = 0;
  }
  uVar3 = FUN_018d4260(param_1,iVar1);
  FUN_018d3e90(uVar3,uVar2);
  return uVar2;
}

