/* Ghidra address: 0064a340 */
/* Ghidra symbol: FUN_0064a340 */


void FUN_0064a340(longlong *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  DAT_02012300 = param_1;
  param_1[4] = 0;
  thunk_FUN_03cc0d62(&DAT_02012318);
  DAT_02012300[3] = CONCAT44(DAT_0201231c,DAT_02012318);
  DAT_02012320 = thunk_FUN_041a6076();
  DAT_02012310 = FUN_00648ea0(DAT_02012300);
  DAT_02012328 = param_3;
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_00637e70);
  if (cVar1 == '\0') {
    if (param_2 == '\0') {
      DAT_0201232c = '\0';
    }
    else {
      DAT_0201232c = '\x01';
    }
  }
  else {
    iVar3 = (int)param_1[0xd] - (int)param_1[0xc];
    if (iVar3 < 1) {
      param_1[7] = 0;
    }
    else {
      param_1[7] = (longlong)((double)((int)param_1[3] - (int)param_1[0xc]) / (double)iVar3);
    }
    iVar3 = *(int *)((longlong)param_1 + 0x6c) - *(int *)((longlong)param_1 + 100);
    if (iVar3 < 1) {
      param_1[8] = 0;
    }
    else {
      param_1[8] = (longlong)
                   ((double)(*(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 100))
                   / (double)iVar3);
    }
    if (param_2 == '\0') {
      DAT_0201232c = '\0';
    }
    else {
      DAT_0201232c = '\x02';
      (**(code **)(*param_1 + 0x60))(param_1);
    }
  }
  DAT_02012330 = (**(code **)(*DAT_02012300 + 0x10))(DAT_02012300);
  if (DAT_02012330 != 0) {
    uVar2 = thunk_FUN_0417695f();
    FUN_00660030(DAT_02012330,uVar2,DAT_02012318,DAT_0201231c);
  }
  DAT_02012340 = FUN_00410e60(&PTR_FUN_00648a90,1);
  if (DAT_0201232c != '\0') {
    FUN_00649f90(&DAT_02012318);
  }
  return;
}

