/* Ghidra address: 010c0d70 */
/* Ghidra symbol: FUN_010c0d70 */


void FUN_010c0d70(byte *param_1,double *param_2,char param_3,byte param_4,double param_5)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  double dVar6;
  
  if (param_3 == '\0') {
    if (*param_2 <= param_5 * 1e-10 && param_5 * 1e-10 != *param_2) {
      *param_2 = param_5 * 1e-10;
    }
    if (param_5 * 10000000000.0 < *param_2) {
      *param_2 = param_5 * 10000000000.0;
    }
    *param_2 = *param_2 * 0.999999999;
    uVar4 = FUN_0040c770((double)param_4 / 2.0);
    uVar2 = FUN_010c0f20(*param_2,param_5,uVar4);
    bVar3 = FUN_00b905f0(uVar2,param_4);
    *param_1 = bVar3;
    uVar4 = FUN_0040c770((double)param_4 / 2.0);
    dVar6 = (double)FUN_010c0ff0(*param_1,uVar4,param_5);
    *param_2 = dVar6;
  }
  else {
    lVar5 = FUN_0040c770((double)param_4 / 2.0);
    if ((longlong)(ulonglong)*param_1 < lVar5 + -0x1e) {
      cVar1 = FUN_0040c770((double)param_4 / 2.0);
      *param_1 = cVar1 - 0x1e;
    }
    lVar5 = FUN_0040c770((double)param_4 / 2.0);
    if (lVar5 + 0x1e < (longlong)(ulonglong)*param_1) {
      cVar1 = FUN_0040c770((double)param_4 / 2.0);
      *param_1 = cVar1 + 0x1e;
    }
    uVar4 = FUN_0040c770((double)param_4 / 2.0);
    dVar6 = (double)FUN_010c0ff0(*param_1,uVar4,param_5);
    *param_2 = dVar6;
  }
  return;
}

