/* Ghidra address: 016d61f0 */
/* Ghidra symbol: FUN_016d61f0 */


double FUN_016d61f0(longlong param_1,double param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_58 [64];
  
  if (param_3 == 0) {
    dVar4 = 0.0;
    iVar1 = 1;
    for (uVar2 = (uint)*(byte *)(param_1 + 0x24); uVar2 != 0; uVar2 = uVar2 - 1) {
      dVar3 = (double)FUN_016d61f0(param_1,param_2,iVar1);
      dVar4 = dVar4 + dVar3;
      iVar1 = iVar1 + 1;
    }
    dVar4 = dVar4 / (double)*(byte *)(param_1 + 0x24);
  }
  else {
    param_2 = param_2 * (double)*(int *)(param_1 + 0x1c);
    iVar1 = FUN_0040c840(param_2);
    dVar4 = (double)FUN_016d6140(auStack_58,iVar1);
    dVar3 = (double)FUN_016d6140(auStack_58,iVar1 + 1);
    dVar4 = dVar4 + (dVar3 - dVar4) * (param_2 - (double)iVar1);
  }
  return dVar4;
}

