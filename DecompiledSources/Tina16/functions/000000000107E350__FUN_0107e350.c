/* Ghidra address: 0107e350 */
/* Ghidra symbol: FUN_0107e350 */


void FUN_0107e350(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 400) + 0xbb0);
  uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_res10);
  *(undefined4 *)(param_1 + 0x16c) = uVar2;
  if (*(int *)(param_1 + 0x16c) == -1) {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02005170);
    FUN_00b8e650(uVar3,local_20,L"HDLStrings.Msg_InvalidMakefileTemplate",local_28);
    uVar3 = FUN_0044d490(&PTR_FUN_015ef458,1,local_20[0]);
    FUN_004134c0(uVar3);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 400) + 0xbb0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,*(int *)(param_1 + 0x16c) + 1);
  FUN_00414b50(param_1 + 0x160,local_30);
  FUN_010b24a0(*(undefined8 *)(*(longlong *)(param_1 + 400) + 0xac8),&local_38,local_res18);
  FUN_00416ad0(param_1 + 0x160,local_38);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 400) + 0xbb0);
  (**(code **)(*plVar1 + 0x40))
            (plVar1,*(int *)(param_1 + 0x16c) + 1,*(undefined8 *)(param_1 + 0x160));
  FUN_00414560(&local_38,4);
  FUN_00414560(&local_res10,2);
  return;
}

