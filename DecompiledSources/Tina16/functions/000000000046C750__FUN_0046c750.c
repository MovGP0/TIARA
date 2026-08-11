/* Ghidra address: 0046c750 */
/* Ghidra symbol: FUN_0046c750 */


ushort * FUN_0046c750(ushort *param_1,longlong param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int local_228 [128];
  
  if (((param_3 & 1) != 0) && ((int)param_3 < 0x80)) {
    cVar3 = FUN_0046cab0(param_4);
    if (cVar3 != '\0') goto LAB_0046c78a;
  }
  FUN_004603e0();
LAB_0046c78a:
  uVar2 = (longlong)(int)(param_3 + 1) / 2;
  iVar7 = (int)uVar2;
  iVar4 = 0;
  if (-1 < iVar7 + -1) {
    piVar6 = local_228;
    do {
      iVar1 = *(int *)(param_2 + (longlong)(iVar4 * 2) * 4);
      piVar6[1] = iVar1;
      *piVar6 = (*(int *)(param_2 + (longlong)(iVar4 * 2 + 1) * 4) - iVar1) + 1;
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  lVar5 = thunk_FUN_04177424(param_4 & 0xffff,uVar2 & 0xffffffff,local_228);
  if (lVar5 == 0) {
    FUN_004603e0();
  }
  FUN_00460b80(param_1);
  *param_1 = (ushort)param_4 | 0x2000;
  *(longlong *)(param_1 + 4) = lVar5;
  return param_1;
}

