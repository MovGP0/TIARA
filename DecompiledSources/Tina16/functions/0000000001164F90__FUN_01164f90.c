/* Ghidra address: 01164f90 */
/* Ghidra symbol: FUN_01164f90 */


double FUN_01164f90(double param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  double dVar5;
  undefined8 local_30 [4];
  
  local_30[0] = 0;
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0xa08),local_30);
  iVar4 = 1000;
  iVar2 = FUN_00416db0(local_30[0],&DAT_011650b4);
  if (iVar2 == 0) {
    iVar4 = 10;
  }
  else {
    iVar2 = FUN_00416db0(local_30[0],&LAB_011650c8);
    if (iVar2 == 0) {
      iVar4 = 100;
    }
  }
  dVar5 = 1000000000000.0;
  bVar1 = false;
  while ((!bVar1 && (0.0 < param_1))) {
    if ((double)iVar4 * dVar5 < param_1) {
      lVar3 = FUN_0040c770(param_1 / dVar5);
      param_1 = (double)lVar3 * dVar5;
      bVar1 = true;
    }
    dVar5 = dVar5 / 10.0;
  }
  FUN_00414480(local_30);
  return param_1;
}

