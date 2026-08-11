/* Ghidra address: 010c0f20 */
/* Ghidra symbol: FUN_010c0f20 */


void FUN_010c0f20(double param_1,double param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  
  FUN_00c43d10(param_1 / param_2);
  iVar1 = FUN_010bf8e0();
  dVar4 = (double)FUN_00c43d20((double)iVar1);
  dVar4 = (param_1 / param_2) / dVar4;
  if ((dVar4 <= 1.0) || (2.0 < dVar4)) {
    if (5.0 < dVar4) {
      iVar2 = 3;
    }
    else {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 1;
  }
  uVar3 = FUN_00b905e0(iVar2 + iVar1 * 3 + (param_3 & 0xff),0);
  FUN_00b905f0(uVar3,0xff);
  return;
}

