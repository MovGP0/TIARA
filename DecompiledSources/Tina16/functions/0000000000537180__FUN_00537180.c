/* Ghidra address: 00537180 */
/* Ghidra symbol: FUN_00537180 */


undefined8 FUN_00537180(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_58 [40];
  
  FUN_00417580(local_58,&DAT_00527bf8);
  uVar2 = FUN_00417740(param_2,&DAT_00527bf8);
  FUN_00538080(0,*(undefined8 *)(param_1 + 0x98),uVar2);
  lVar3 = FUN_00538390(param_2);
  lVar4 = FUN_00589390(*(undefined8 *)(param_1 + 0x98));
  iVar7 = *(int *)(lVar4 + 4);
  if (iVar7 != *(int *)(param_1 + 0xa8) + 1) {
    uVar2 = FUN_0044d490(&PTR_FUN_00433ec0,1,L"Values");
    FUN_004134c0(uVar2);
  }
  lVar4 = FUN_00589390(*(undefined8 *)(param_1 + 0x98));
  plVar1 = *(longlong **)(lVar4 + 8);
  if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
    uVar2 = FUN_0044d710(&PTR_FUN_00527688,1,PTR_PTR_02001650);
    FUN_004134c0(uVar2);
  }
  piVar5 = (int *)FUN_00589390();
  iVar6 = *piVar5 / iVar7;
  if (-1 < iVar7 + -1) {
    lVar4 = *(longlong *)(param_1 + 0xa0);
    do {
      FUN_005376c0(lVar4,local_58,*plVar1,1);
      FUN_005382b0(local_58,lVar3);
      lVar3 = lVar3 + iVar6;
      lVar4 = lVar4 + 0x20;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00417740(local_58,&DAT_00527bf8);
  return param_2;
}

