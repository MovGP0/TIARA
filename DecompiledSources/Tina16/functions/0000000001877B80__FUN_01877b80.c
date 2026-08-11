/* Ghidra address: 01877b80 */
/* Ghidra symbol: FUN_01877b80 */


undefined8 FUN_01877b80(double *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  lVar1 = FUN_0040c770(*param_1 * 100.0);
  lVar2 = FUN_0040c770(*param_2 * 100.0);
  if (lVar2 < lVar1) {
    uVar3 = 1;
  }
  else {
    lVar1 = FUN_0040c770(*param_1 * 100.0);
    lVar2 = FUN_0040c770(*param_2 * 100.0);
    if (lVar1 < lVar2) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

