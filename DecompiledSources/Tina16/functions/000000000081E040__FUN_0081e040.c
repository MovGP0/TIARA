/* Ghidra address: 0081e040 */
/* Ghidra symbol: FUN_0081e040 */


void FUN_0081e040(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 local_28;
  longlong *local_20;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0xfc) == '\0') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  lVar2 = param_1[2];
  cVar1 = FUN_004113d0(lVar2,&PTR_FUN_007f0370);
  if (((cVar1 != '\0') && (*(char *)(lVar2 + 0x4d6) == '\x02')) && (param_1[0x17] == 0)) {
    lVar2 = thunk_FUN_04118143(*(undefined8 *)(lVar2 + 0x698),0xfffffffc);
    param_1[0x19] = lVar2;
    local_28 = *(undefined8 *)(*param_1 + 0xa0);
    local_20 = param_1;
    lVar2 = FUN_007f98a0(&local_28);
    param_1[0x17] = lVar2;
    thunk_FUN_03c9d277(*(undefined8 *)(param_1[2] + 0x698),0xfffffffc,param_1[0x17]);
    FUN_00818fe0(param_1);
    FUN_00819200(param_1);
  }
  cVar1 = FUN_00818440(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_007810f0();
    cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if (cVar1 == '\0') {
      uVar4 = FUN_00786090(param_1);
      uVar5 = thunk_FUN_04118143(uVar4,0xfffffff0);
      bVar7 = (uVar5 & 0xc00000) != 0;
      goto LAB_0081e14c;
    }
  }
  bVar7 = false;
LAB_0081e14c:
  if ((bVar7) && (*(char *)(param_1[2] + 0x4d6) != '\x01')) {
    *(undefined1 *)((longlong)param_1 + 0x134) = 1;
    uVar4 = FUN_00786090(param_1);
    uVar6 = FUN_00786090(param_1);
    uVar5 = thunk_FUN_04118143(uVar6,0xfffffff0);
    thunk_FUN_03c9d277(uVar4,0xfffffff0,uVar5 & 0xffffffffff3fffff);
  }
  FUN_0081d7a0(param_1);
  return;
}

