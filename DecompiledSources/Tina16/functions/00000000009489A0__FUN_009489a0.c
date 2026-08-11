/* Ghidra address: 009489a0 */
/* Ghidra symbol: FUN_009489a0 */


double FUN_009489a0(double param_1)

{
  char cVar1;
  int iVar2;
  double dVar3;
  
  cVar1 = FUN_00526f10(param_1);
  dVar3 = param_1;
  if ((((cVar1 == '\0') && (cVar1 = FUN_00526f30(param_1), cVar1 == '\0')) &&
      (cVar1 = FUN_00947030(param_1), cVar1 == '\0')) &&
     (cVar1 = FUN_00947040(param_1), cVar1 == '\0')) {
    iVar2 = FUN_005263f0(param_1 + 0.5);
    dVar3 = (double)iVar2;
  }
  if ((dVar3 == 0.0) && (param_1 < 0.0)) {
    dVar3 = -0.0;
  }
  return dVar3;
}

