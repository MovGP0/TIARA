/* Ghidra address: 0196a070 */
/* Ghidra symbol: FUN_0196a070 */


void FUN_0196a070(longlong param_1,double param_2)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  
  FUN_01950d30(param_1,param_2);
  cVar1 = FUN_01950810(param_1);
  if ((cVar1 == '\0') || (*(double *)(param_1 + 0x1e8) == 0.0)) {
    fVar3 = (float)FUN_0196a360(param_1);
    uVar2 = FUN_0040c770(param_2 * (double)fVar3);
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x180),uVar2);
  }
  return;
}

