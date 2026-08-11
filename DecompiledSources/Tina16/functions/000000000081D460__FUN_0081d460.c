/* Ghidra address: 0081d460 */
/* Ghidra symbol: FUN_0081d460 */


void FUN_0081d460(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_38;
  longlong *local_30;
  
  cVar2 = FUN_00818440(param_1);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
    return;
  }
  FUN_00785c20(param_1,param_2);
  if (((*(uint *)(*(longlong *)(param_2 + 0x10) + 0x20) & 0x40) == 0) ||
     (*(char *)((longlong)param_1 + 0xfc) == '\0')) goto LAB_0081d5e8;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  lVar3 = param_1[2];
  cVar2 = FUN_004113d0(lVar3,&PTR_FUN_007f0370);
  if ((cVar2 != '\0') && ((*(char *)(lVar3 + 0x4d6) == '\x02' && (param_1[0x17] == 0)))) {
    lVar3 = thunk_FUN_04118143(*(undefined8 *)(lVar3 + 0x698),0xfffffffc);
    param_1[0x19] = lVar3;
    local_38 = *(undefined8 *)(*param_1 + 0xa0);
    local_30 = param_1;
    lVar3 = FUN_007f98a0(&local_38);
    param_1[0x17] = lVar3;
    thunk_FUN_03c9d277(*(undefined8 *)(param_1[2] + 0x698),0xfffffffc,param_1[0x17]);
    FUN_00818fe0(param_1);
    FUN_00819200(param_1);
  }
  cVar2 = FUN_00818440(param_1);
  if (cVar2 == '\0') {
LAB_0081d597:
    bVar8 = false;
  }
  else {
    plVar4 = (longlong *)FUN_007810f0();
    cVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar2 != '\0') goto LAB_0081d597;
    uVar5 = FUN_00786090(param_1);
    uVar6 = thunk_FUN_04118143(uVar5,0xfffffff0);
    bVar8 = (uVar6 & 0xc00000) != 0;
  }
  if ((bVar8) && (*(char *)(param_1[2] + 0x4d6) != '\x01')) {
    *(undefined1 *)((longlong)param_1 + 0x134) = 1;
    uVar5 = FUN_00786090(param_1);
    uVar7 = FUN_00786090(param_1);
    uVar6 = thunk_FUN_04118143(uVar7,0xfffffff0);
    thunk_FUN_03c9d277(uVar5,0xfffffff0,uVar6 & 0xffffffffff3fffff);
  }
LAB_0081d5e8:
  *(undefined1 *)(param_1 + 4) = 1;
  bVar8 = false;
  if ((char)param_1[10] == '\0') {
    uVar1 = *(uint *)(*(longlong *)(param_2 + 0x10) + 0x20);
    if (((uVar1 & 1) == 0) || ((uVar1 & 2) == 0)) {
      if ((uVar1 & 2) == 0) {
        *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *(undefined4 *)((longlong)param_1 + 300) =
             *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x14);
      }
      if ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0x20) & 1) == 0) {
        lVar3 = *(longlong *)(param_2 + 0x10);
        if (((*(int *)(lVar3 + 0x18) == (int)param_1[0x26]) &&
            (*(int *)(lVar3 + 0x1c) == (int)param_1[0xf])) || ((*(uint *)(lVar3 + 0x20) & 1) != 0))
        {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        *(int *)(param_1 + 0x26) = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x1c);
      }
    }
    if ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0x20) & 0x20) != 0) {
      bVar8 = true;
    }
    if ((bVar8) && (FUN_0081d0e0(param_1), *(char *)(param_1[2] + 0x4d1) != '\0')) {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
  }
  else if (*(char *)((longlong)param_1 + 0x135) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x135) = 0;
    lVar3 = param_1[0x27];
    if (((*(int *)(lVar3 + 0x18) != 0) || (*(int *)(lVar3 + 0x1c) != 0)) ||
       ((*(int *)(lVar3 + 0x14) != 0 || (*(int *)(lVar3 + 0x10) != 0)))) {
      FUN_00652370(param_1[2],lVar3);
    }
  }
  return;
}

