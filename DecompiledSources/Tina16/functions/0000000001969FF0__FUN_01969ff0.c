/* Ghidra address: 01969ff0 */
/* Ghidra symbol: FUN_01969ff0 */


void FUN_01969ff0(longlong param_1,double param_2)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  
  FUN_01950980(param_1,param_2);
  cVar1 = FUN_01950810(param_1);
  if ((cVar1 == '\0') || (*(double *)(param_1 + 0x1e0) == 0.0)) {
    fVar3 = (float)FUN_0196a360(param_1);
    uVar2 = FUN_0040c770(param_2 * (double)fVar3);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x180),uVar2);
  }
  return;
}

