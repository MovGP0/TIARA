/* Ghidra address: 016fd4d0 */
/* Ghidra symbol: FUN_016fd4d0 */


void FUN_016fd4d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),L"Edison");
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,local_20,0x8c);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_20[0]);
  }
  FUN_016fc360(&local_30);
  FUN_0043f0c0(&local_28,local_30,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_28);
  FUN_0064cc50(param_1,(*(int *)(param_1 + 0x9c) - *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c))
                       + *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x94) +
                       *(int *)(*(longlong *)(param_1 + 0x6d8) + 0x9c));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_38);
  if (local_38 != 0) {
    uVar4 = FUN_007ffbe0(param_1);
    iVar2 = FUN_005fdfd0(uVar4,&LAB_016fd6a4);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x510);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_0064cc50(param_1,*(int *)(param_1 + 0x9c) + iVar2 * iVar3 + 6);
  }
  FUN_00414480(&local_38);
  FUN_00414560(&local_30,3);
  return;
}

