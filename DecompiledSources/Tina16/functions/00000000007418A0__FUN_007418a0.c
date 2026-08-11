/* Ghidra address: 007418a0 */
/* Ghidra symbol: FUN_007418a0 */


undefined4 * FUN_007418a0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  iVar1 = FUN_00605610(*(undefined8 *)(param_1 + 0x318));
  iVar2 = FUN_00605640(*(undefined8 *)(param_1 + 0x318));
  iVar3 = FUN_0064d0b0(param_1);
  iVar4 = FUN_0064d120(param_1);
  if ((((*(char *)(param_1 + 0x340) != '\0') ||
       ((iVar6 = iVar1, iVar5 = iVar2, *(char *)(param_1 + 0x345) != '\0' &&
        ((iVar3 < iVar1 || (iVar4 < iVar2)))))) &&
      (iVar6 = iVar3, iVar5 = iVar4, *(char *)(param_1 + 0x345) != '\0')) &&
     ((0 < iVar1 && (0 < iVar2)))) {
    dVar7 = (double)iVar1 / (double)iVar2;
    if (iVar2 < iVar1) {
      iVar5 = FUN_0040c840((double)iVar3 / dVar7);
      if (iVar4 < iVar5) {
        iVar6 = FUN_0040c840((double)iVar4 * dVar7);
        iVar5 = iVar4;
      }
    }
    else {
      iVar6 = FUN_0040c840((double)iVar4 * dVar7);
      if (iVar3 < iVar6) {
        iVar5 = FUN_0040c840((double)iVar3 / dVar7);
        iVar6 = iVar3;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = iVar6;
  param_2[3] = iVar5;
  if (*(char *)(param_1 + 0x341) != '\0') {
    FUN_00423b50(param_2,(longlong)(iVar3 - iVar6) / 2 & 0xffffffff,
                 (longlong)(iVar4 - iVar5) / 2 & 0xffffffff);
  }
  return param_2;
}

