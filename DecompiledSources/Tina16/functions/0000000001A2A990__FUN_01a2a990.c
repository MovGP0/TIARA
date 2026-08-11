/* Ghidra address: 01a2a990 */
/* Ghidra symbol: FUN_01a2a990 */


void FUN_01a2a990(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_38 = 0;
  local_50 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414ad0(param_1 + 0x720,local_res10[0]);
  FUN_00414ad0(param_1 + 0x728,*(undefined8 *)(param_1 + 0x720));
  uVar3 = FUN_019a4600();
  FUN_01a2abe0(param_1,*(undefined8 *)(param_1 + 0x720),uVar3,0);
  (**(code **)(*local_20 + 0x88))(local_20,*(undefined8 *)(param_1 + 0x738));
  plVar1 = *(longlong **)(param_1 + 0x758);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (0 < iVar2) {
      FUN_004b37d0(*(undefined8 *)(param_1 + 0x758),&local_50);
      local_48 = local_50;
      local_40 = 0x11;
      FUN_00442f70(&local_38,L"Duplicated IDs found: %s",&local_48,0);
      (**(code **)(*local_20 + 0x78))(local_20,local_38);
    }
  }
  (**(code **)(*local_20 + 0x88))(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x10));
  FUN_01a2a8d0(param_1,local_20);
  FUN_01a2a900(param_1,0);
  FUN_00410f20(local_20);
  FUN_00414480(&local_50);
  FUN_00414480(&local_38);
  FUN_00414480(local_res10);
  return;
}

