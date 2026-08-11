/* Ghidra address: 00c43f10 */
/* Ghidra symbol: FUN_00c43f10 */


undefined8 FUN_00c43f10(double param_1,double *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = 0;
  dVar4 = (double)FUN_0040c850(*param_2);
  if (dVar4 <= param_1) {
    cVar1 = FUN_00526f10(*param_2);
    if (cVar1 != '\0') {
      *param_2 = 0.0;
      uVar3 = 1;
    }
  }
  else {
    iVar2 = FUN_00c42630(*param_2);
    *param_2 = (double)iVar2 * param_1;
    uVar3 = 1;
  }
  return uVar3;
}

