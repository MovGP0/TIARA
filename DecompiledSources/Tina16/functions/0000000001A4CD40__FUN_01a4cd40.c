/* Ghidra address: 01a4cd40 */
/* Ghidra symbol: FUN_01a4cd40 */


void FUN_01a4cd40(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x510));
  FUN_01a452d0(param_1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Certainly!");
  iVar2 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_3 + 0x18))(param_3,local_30,iVar3);
      (**(code **)(*param_2 + 0x18))(param_2,&local_38,iVar3);
      local_60 = local_30[0];
      local_58 = 0x11;
      local_50 = local_38;
      local_48 = 0x11;
      FUN_00442f70(&local_40,L"Design parameter %s is set to %s",&local_60,1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_40);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Running auto-design... done");
  FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x510));
  FUN_01a4b730(param_1);
  FUN_00414560(&local_40,3);
  return;
}

