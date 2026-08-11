/* Ghidra address: 01602900 */
/* Ghidra symbol: FUN_01602900 */


void FUN_01602900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_8c8 [32];
  undefined8 local_8a8;
  undefined1 *local_8a0;
  undefined4 local_890;
  longlong *local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  longlong *local_860;
  undefined8 *local_858;
  undefined1 local_84a [2050];
  undefined8 local_48;
  longlong local_40;
  
  local_8a0 = auStack_8c8;
  local_8a8 = 0;
  local_870 = 0;
  local_878 = 0;
  local_880 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414b50(&local_870,L"New Macro");
  FUN_00414b50(&local_878,L"D:\\Work\\temp.vhd");
  local_858 = (undefined8 *)0x0;
  *(undefined1 *)(param_1 + 0x1a0) = 3;
  cVar3 = FUN_00440a20(local_res18,1);
  if (cVar3 == '\0') {
    FUN_00416ba0(&local_8a8,local_res18,L": file not found");
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_8a8);
    FUN_004134c0(uVar4);
  }
  local_860 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_860 + 0xd8))(local_860,local_res18);
  FUN_00414b50(&local_880,local_res18);
  uVar4 = FUN_00442620(local_84a,param_5);
  FUN_015fcc20(uVar4,&local_48,param_2,param_6);
  local_40 = FUN_0154bb80(&DAT_01546f18,1);
  (**(code **)(**(longlong **)(local_40 + 0x8f8) + 0xd8))
            (*(longlong **)(local_40 + 0x8f8),local_880);
  FUN_015651e0(local_40,local_880);
  local_890 = FUN_016024b0(local_880,0);
  FUN_01566d10(local_40,local_890);
  lVar2 = local_40;
  local_858 = (undefined8 *)FUN_015ec7f0(local_40,param_5,local_48);
  local_868 = FUN_019a26a0(local_858,local_870);
  local_888 = (longlong *)FUN_01771870(&PTR_FUN_01763148,1,param_1);
  *(longlong **)(param_1 + 0x1a8) = local_888;
  (**(code **)*local_888)(local_888,local_870);
  FUN_01768da0(local_888,local_868);
  plVar1 = local_888;
  FUN_01772110(local_888,local_878,0,0);
  (**(code **)(*local_888 + 0x10))(local_888,0);
  FUN_01774e00(plVar1,lVar2);
  plVar1 = (longlong *)plVar1[0x33];
  (**(code **)(*plVar1 + 0x10))(plVar1,local_res20);
  if (local_40 != 0) {
    FUN_00410f20(local_40);
  }
  uVar4 = FUN_00442620(local_84a,param_5);
  FUN_015fcd60(local_48,uVar4,param_7);
  FUN_015fcbd0(&DAT_0210f7fc,0);
  if (local_858 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*local_858)(local_858);
    FUN_00418590(uVar4,&DAT_01984da0);
  }
  FUN_00410f20(local_860);
  FUN_00414480(&local_8a8);
  FUN_00414560(&local_880,3);
  FUN_00414480(&local_res18);
  FUN_00414560(&param_5,2);
  return;
}

