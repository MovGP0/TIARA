/* Ghidra address: 01472b90 */
/* Ghidra symbol: FUN_01472b90 */


void FUN_01472b90(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  FUN_0041ddd0(local_30,&PTR_PTR_014723a0);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,0,local_30[0]);
  FUN_0041ddd0(&local_38,&PTR_PTR_014723b0);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),1,0,local_38);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x6b0);
      FUN_004b3cf0(*(undefined8 *)(param_1 + 0x728),&local_40,iVar6);
      FUN_0084e3e0(lVar1,0,*(int *)(lVar1 + 0x4c0) + iVar6,local_40);
      lVar1 = *(longlong *)(param_1 + 0x6b0);
      FUN_004b5390(*(undefined8 *)(param_1 + 0x728),&local_48,iVar6);
      FUN_0084e3e0(lVar1,1,*(int *)(lVar1 + 0x4c0) + iVar6,local_48);
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x28))(*(longlong **)(param_1 + 0x728));
  if (0 < iVar3) {
    lVar1 = *(longlong *)(param_1 + 0x6b0);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x28))(*(longlong **)(param_1 + 0x728));
    FUN_00848a70(lVar1,*(int *)(lVar1 + 0x4c0) + iVar3);
  }
  uVar2 = FUN_0198c540(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),4,param_1 + 0x744);
  *(undefined1 *)(param_1 + 0x740) = uVar2;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x708),0);
  uVar4 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x718) = uVar4;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x730) = plVar5;
  (**(code **)(*plVar5 + 0x78))(plVar5,&DAT_01472e98);
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x78))
            (*(longlong **)(param_1 + 0x730),&DAT_01472eac);
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x78))(*(longlong **)(param_1 + 0x730),L".noise");
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x78))(*(longlong **)(param_1 + 0x730),L".tran");
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x738) = plVar5;
  (**(code **)(*plVar5 + 0x78))
            (plVar5,L".ac=<sweep type> <points value> <start frequency value> <end frequency value>"
            );
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x78))
            (*(longlong **)(param_1 + 0x738),
             L".dc=[LIN] <sweep variable name> <start value> <end value> <increment value>\r\n[nested sweep specification]"
            );
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x78))
            (*(longlong **)(param_1 + 0x738),L".noise=V(<node> [,<node>]) <name>");
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x78))
            (*(longlong **)(param_1 + 0x738),
             L".tran=<print step value> <final time value>\r\n[no-print value [step ceiling value]][SKIPBP]"
            );
  FUN_00414560(&local_48,4);
  return;
}

