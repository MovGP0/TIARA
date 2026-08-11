/* Ghidra address: 011680b0 */
/* Ghidra symbol: FUN_011680b0 */


undefined8 FUN_011680b0(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 1;
  bVar4 = true;
  while ((bool)(bVar4 & iVar3 <= DAT_0203a6f0)) {
    cVar1 = FUN_01167f30((&DAT_0203d9c0)[iVar3],param_1);
    iVar3 = iVar3 + 1;
    bVar4 = cVar1 == '\0';
  }
  if (bVar4) {
    uVar2 = 0;
  }
  else {
    uVar2 = (&DAT_0203d9c0)[iVar3 + -1];
  }
  return uVar2;
}

