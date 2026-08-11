/* Ghidra address: 018d4040 */
/* Ghidra symbol: FUN_018d4040 */


void FUN_018d4040(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_018d4250(param_1);
  if (iVar2 != 0) {
    uVar1 = FUN_018d3d00(&DAT_018d1ce8,1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),uVar1);
  }
  return;
}

