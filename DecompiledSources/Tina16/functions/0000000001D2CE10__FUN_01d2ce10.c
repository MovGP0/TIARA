/* Ghidra address: 01d2ce10 */
/* Ghidra symbol: FUN_01d2ce10 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01d2ce10(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_01d2dd00((longlong)param_1 + 0x14,param_3,param_4), cVar1 == '\0')) {
    uVar2 = 0;
  }
  else if ((((param_3 < *(int *)((longlong)param_1 + 0x24)) ||
            (*(int *)((longlong)param_1 + 0x2c) < param_3)) || (param_4 < (int)param_1[5])) ||
          ((int)param_1[6] < param_4)) {
    iVar5 = (int)param_1[9];
    if (iVar5 < 2) {
      uVar2 = 0;
    }
    else {
      uVar3 = 1;
      if (0 < iVar5) {
        do {
          lVar4 = (longlong)(int)uVar3;
          if ((((double)*(int *)(param_1[10] + -0x10 + lVar4 * 0x10) - (double)_DAT_01ff3f8c <=
                (double)param_3) &&
              ((double)param_3 <=
               (double)*(int *)(param_1[10] + -8 + lVar4 * 0x10) + (double)_DAT_01ff3f8c)) &&
             (((double)*(int *)(param_1[10] + -0xc + lVar4 * 0x10) - (double)_DAT_01ff3f8c <=
               (double)param_4 &&
              ((double)param_4 <=
               (double)*(int *)(param_1[10] + -4 + lVar4 * 0x10) + (double)_DAT_01ff3f8c)))) {
            return CONCAT71((int7)(uVar3 >> 8),1);
          }
          uVar3 = (ulonglong)((int)uVar3 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)((longlong)param_1 + 0x24) >> 8),1);
  }
  return uVar2;
}

