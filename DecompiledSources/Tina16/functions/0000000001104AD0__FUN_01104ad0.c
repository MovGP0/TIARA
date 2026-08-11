/* Ghidra address: 01104ad0 */
/* Ghidra symbol: FUN_01104ad0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01104ad0(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_var;
  
  cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((cVar2 == '\0') ||
     (cVar2 = FUN_01d2dd00((longlong)param_1 + 0x14,param_3,param_4), cVar2 == '\0')) {
    return 0;
  }
  if ((*(int *)((longlong)param_1 + 0x24) <= param_3) &&
     (((param_3 <= *(int *)((longlong)param_1 + 0x2c) && ((int)param_1[5] <= param_4)) &&
      (param_4 <= (int)param_1[6])))) {
    return CONCAT71((int7)((ulonglong)((longlong)param_1 + 0x24) >> 8),1);
  }
  piVar1 = (int *)((longlong)param_1 + 0x14);
  iVar3 = FUN_004230d0(piVar1);
  uVar4 = FUN_0040c770(((double)(*(int *)((longlong)param_1 + 0x1c) - *piVar1) / 400.0) *
                       (double)iVar3);
  FUN_004230d0(piVar1);
  uVar5 = FUN_0040c770(((double)((int)param_1[4] - (int)param_1[3]) / 250.0) * (double)extraout_var)
  ;
  uVar4 = FUN_00b905e0(uVar4,uVar5);
  FUN_00b905e0(uVar4,2);
  iVar3 = FUN_00b905e0(*(undefined4 *)((longlong)param_1 + 0x5c),2);
  iVar6 = (int)((longlong)iVar3 / 2);
  if (((((double)(*(int *)((longlong)param_1 + 0x54) - iVar6) - (double)_DAT_01f21b10 <=
         (double)param_3) &&
       ((double)param_3 <=
        (double)(*(int *)((longlong)param_1 + 0x54) + iVar6) + (double)_DAT_01f21b10)) &&
      ((double)((int)param_1[0xb] - iVar6) - (double)_DAT_01f21b10 <= (double)param_4)) &&
     ((double)param_4 <= (double)((int)param_1[0xb] + iVar6) + (double)_DAT_01f21b10)) {
    return CONCAT71((uint7)((ulonglong)((longlong)iVar3 / 2) >> 8) & 0xffffff,1);
  }
  return 0;
}

