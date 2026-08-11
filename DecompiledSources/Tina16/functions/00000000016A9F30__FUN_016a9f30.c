/* Ghidra address: 016a9f30 */
/* Ghidra symbol: FUN_016a9f30 */


double FUN_016a9f30(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = FUN_00c43c40(*param_1,0x401921fb54442d18);
  dVar3 = (double)FUN_0040bcd0(uVar2);
  if (dVar3 == 0.0) {
    iVar1 = FUN_00c42630(uVar2);
    dVar4 = (double)iVar1 * 1e+50;
  }
  else {
    dVar4 = (double)FUN_0040bdd0(uVar2);
    dVar4 = dVar4 / dVar3;
  }
  return dVar4;
}

