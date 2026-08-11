/* Ghidra address: 015ee870 */
/* Ghidra symbol: FUN_015ee870 */


void FUN_015ee870(undefined8 param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res8;
  longlong *local_res10;
  int *local_res18;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined1 *local_490;
  int local_478;
  undefined4 local_474;
  undefined8 local_470;
  longlong *local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined1 local_44a [1026];
  longlong local_48;
  longlong local_40;
  undefined8 *local_38;
  
  local_490 = auStack_4c8;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_458 = 0;
  local_470 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_0160b270(&local_470,local_res8);
  local_38 = (undefined8 *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_460 = FUN_019a4600();
  FUN_015fcb30(&local_458,PTR_DAT_02004770);
  uVar2 = FUN_00442620(local_44a,local_458);
  FUN_015fcc20(uVar2,&local_48,local_460,0);
  local_40 = FUN_0154bb80(&DAT_01546f18,1);
  cVar1 = FUN_00440a20(local_res8,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_498,L"File not found: ",local_res8);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_498);
    FUN_004134c0(uVar2);
  }
  cVar1 = FUN_00440a20(local_470,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_4a0,L"File not found: ",local_470);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_4a0);
    FUN_004134c0(uVar2);
  }
  (**(code **)(**(longlong **)(local_40 + 0x8f8) + 0xd8))
            (*(longlong **)(local_40 + 0x8f8),local_470);
  FUN_015651e0(local_40,local_res8);
  local_474 = FUN_016024b0(local_res8,0);
  FUN_01566d10(local_40,local_474);
  local_38 = (undefined8 *)FUN_015ec7f0(local_40,local_458,local_48);
  iVar3 = *(int *)(local_38 + 2);
  *local_res18 = iVar3;
  if ((local_res10 != (longlong *)0x0) && (local_478 = 0, -1 < iVar3 + -1)) {
    do {
      local_468 = (longlong *)FUN_00b94e60(local_38,local_478);
      (**(code **)(*local_468 + 0x288))(local_468,&local_4a8);
      (**(code **)(*local_res10 + 200))(local_res10,0,local_4a8);
      local_478 = local_478 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_38 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*local_38)(local_38);
    FUN_00418590(uVar2,&DAT_01984da0);
  }
  if (local_40 != 0) {
    FUN_00410f20(local_40);
  }
  if (local_48 != 0) {
    uVar2 = FUN_00442620(local_44a,local_458);
    FUN_015fcd60(local_48,uVar2,0);
    local_48 = 0;
  }
  FUN_015fcbd0(PTR_DAT_02004770,0);
  FUN_00414560(&local_4a8,3);
  FUN_00414480(&local_470);
  FUN_00414480(&local_458);
  FUN_00414480(&local_res8);
  return;
}

