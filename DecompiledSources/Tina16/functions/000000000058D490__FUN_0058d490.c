/* Ghidra address: 0058d490 */
/* Ghidra symbol: FUN_0058d490 */


double FUN_0058d490(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  
  bVar1 = *(byte *)(*(longlong *)*param_2 + 2 + (ulonglong)*(byte *)(*(longlong *)*param_2 + 1));
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      dVar4 = (double)FUN_00591770(&LAB_0058eb70,param_1,param_2);
      return dVar4;
    }
    if (bVar1 == 0) {
      fVar3 = (float)FUN_005914b0(&LAB_0058e730,param_1,param_2);
      return (double)fVar3;
    }
    if (bVar1 == 1) {
      dVar4 = (double)FUN_00591610(&LAB_0058e950,param_1,param_2);
      return dVar4;
    }
  }
  else {
    if (bVar1 == 3) {
      lVar2 = FUN_005918d0(&LAB_0058ed98,param_1,param_2);
      return (double)lVar2;
    }
    if (bVar1 == 4) {
      lVar2 = FUN_00591a20(&LAB_0058efb0,param_1,param_2);
      return (double)lVar2 / 10000.0;
    }
  }
  return 0.0;
}

