/* Ghidra address: 00b917a0 */
/* Ghidra symbol: FUN_00b917a0 */


undefined8 FUN_00b917a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  
  lVar1 = (longlong)(param_5 - param_1);
  lVar4 = (longlong)(param_6 - param_2);
  lVar2 = (longlong)(param_3 - param_1);
  lVar3 = (longlong)(param_4 - param_2);
  if ((lVar2 == 0) && (lVar3 == 0)) {
    uVar5 = FUN_0040c760((double)(lVar1 * lVar1 + lVar4 * lVar4));
  }
  else {
    dVar6 = (double)FUN_0040c760((double)(lVar2 * lVar2 + lVar3 * lVar3));
    uVar5 = FUN_0040c850((double)(lVar4 * lVar2 - lVar1 * lVar3) / dVar6);
  }
  return uVar5;
}

