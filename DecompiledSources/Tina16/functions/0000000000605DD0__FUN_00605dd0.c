/* Ghidra address: 00605dd0 */
/* Ghidra symbol: FUN_00605dd0 */


void FUN_00605dd0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f86c8), cVar1 == '\0')) {
    FUN_004b1060(param_1,param_2);
    return;
  }
  lVar4 = 0;
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x20);
    FUN_00607b80(lVar3);
  }
  if (param_2 == 0) {
    lVar3 = FUN_00410e60(&PTR_FUN_005f84b0,1);
    param_1[9] = lVar3;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  else {
    param_1[9] = *(longlong *)(param_2 + 0x48);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  }
  FUN_00607b70(param_1[9]);
  lVar3 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((lVar4 == lVar3) || (lVar3 = (**(code **)(*param_1 + 0x50))(param_1), lVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x3a) = uVar2;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}

