/* Ghidra address: 0181b680 */
/* Ghidra symbol: FUN_0181b680 */


void FUN_0181b680(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_38 [16];
  
  cVar3 = FUN_004113d0(param_2,&PTR_FUN_018198c0);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x6b4) = 1;
  }
  iVar1 = *(int *)(param_2 + 0x90);
  iVar2 = *(int *)(param_2 + 0x94);
  iVar4 = FUN_0040c770((double)(*(int *)(param_2 + 0x98) * param_3) /
                       (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  iVar5 = FUN_0040c770((double)param_3 / (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  FUN_004238d0(local_38,iVar1,iVar2,iVar1 + iVar4,iVar2 + *(int *)(param_2 + 0x9c) * iVar5);
  uVar6 = FUN_0065b870(param_2);
  uVar7 = FUN_0042a320(param_3,param_3);
  thunk_FUN_041b2403(uVar6,0x2e0,uVar7,local_38);
  return;
}

