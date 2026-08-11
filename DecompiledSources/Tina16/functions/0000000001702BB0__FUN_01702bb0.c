/* Ghidra address: 01702bb0 */
/* Ghidra symbol: FUN_01702bb0 */


void FUN_01702bb0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar2);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  if (iVar3 == 0) {
    FUN_00414b50(local_20,L"[All]");
  }
  FUN_01716e60(*(undefined8 *)(param_1 + 0x760),*(undefined8 *)(param_1 + 0x738),
               *(undefined8 *)(param_1 + 0x740),local_20[0],*(undefined1 *)(param_1 + 0x758));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_30,0x825);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
  FUN_004b67b0(*(undefined8 *)(param_1 + 0x738),1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
  (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(param_1 + 0x738));
  FUN_004b67b0(*(undefined8 *)(param_1 + 0x738),0);
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))(*(longlong **)(param_1 + 0x718),0);
  plVar1 = *(longlong **)(param_1 + 0x718);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_28,uVar2);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  if (iVar3 == 0) {
    FUN_00414b50(&local_28,L"[All]");
  }
  FUN_01703980(param_1,local_20[0],local_28);
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_38,uVar2);
  FUN_00414ad0(&DAT_0210ff60,local_38);
  FUN_00414560(&local_38,4);
  return;
}

