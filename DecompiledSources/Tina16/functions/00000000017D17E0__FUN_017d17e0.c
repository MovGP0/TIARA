/* Ghidra address: 017d17e0 */
/* Ghidra symbol: FUN_017d17e0 */


void FUN_017d17e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5
                 )

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double local_58 [2];
  double local_48;
  double local_40;
  
  iVar1 = FUN_017d1380(param_1);
  dVar3 = 0.0;
  iVar1 = iVar1 + -1;
  iVar2 = 1;
  dVar4 = 0.0;
  if (0 < iVar1) {
    do {
      FUN_017d1750(&local_48,param_1,iVar2,param_2,param_3);
      dVar3 = dVar3 + local_48 * local_48 + local_40 * local_40;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
      dVar4 = dVar3;
    } while (iVar1 != 0);
  }
  if (param_4 != '\0') {
    dVar4 = dVar4 / 2.0;
  }
  if (param_5 == '\0') {
    FUN_017d1750(local_58,param_1,0,param_2,param_3);
    dVar4 = dVar4 + local_58[0] * local_58[0];
  }
  FUN_0040c760(dVar4);
  return;
}

