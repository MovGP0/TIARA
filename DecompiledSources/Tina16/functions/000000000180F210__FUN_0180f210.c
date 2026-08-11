/* Ghidra address: 0180f210 */
/* Ghidra symbol: FUN_0180f210 */


void FUN_0180f210(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 longlong *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined *local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  int local_2c;
  longlong local_28;
  char local_19;
  
  local_70 = auStack_c8;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_80 = (longlong *)0x0;
  local_88 = 0;
  local_78 = 0;
  lVar3 = FUN_01803a30(param_3);
  FUN_00414ad0(lVar3 + 0x20,param_2);
  local_19 = '\0';
  local_48 = 0;
  local_28 = 0;
  local_50 = (longlong *)0x0;
  local_40 = (**(code **)(*param_4 + 0x118))(param_4);
  if (local_40 != 0) {
    local_28 = *(longlong *)(local_40 + 0x2a8);
  }
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01814d40);
  if (cVar1 != '\0') {
    local_48 = param_1;
  }
  if (local_28 == 0) {
    local_28 = FUN_01810fa0(&DAT_018103d8,1,0);
    *(longlong *)(local_28 + 0x18) = local_40;
    local_19 = '\x01';
  }
  iVar2 = FUN_004b2060();
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      if ((local_48 != 0) && (param_5 != (longlong *)0x0)) {
        plVar4 = (longlong *)FUN_004b2070(local_48,local_2c);
        (**(code **)(*plVar4 + 0x48))(plVar4,&local_78);
        local_50 = (longlong *)(**(code **)(*param_5 + 0x60))(param_5,local_78);
      }
      local_38 = FUN_01803a30(lVar3);
      FUN_00414ad0(local_38 + 0x20,L"item");
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x48))(local_50,&local_88);
        FUN_01802f80(&local_80,local_88);
        local_a8 = local_80;
        local_a0 = &DAT_0180f610;
        FUN_00416cd0(local_38 + 0x30,4,*(undefined8 *)(local_38 + 0x30),L" InheritedName=\"");
      }
      uVar5 = FUN_004b2070(param_1,local_2c);
      local_a8 = local_50;
      FUN_01813180(local_28,&local_90,uVar5,0);
      FUN_00416ad0(local_38 + 0x30,local_90);
      if (local_48 != 0) {
        local_58 = (longlong *)FUN_004b2070(param_1,local_2c);
        cVar1 = (**(code **)(*local_58 + 0x58))(local_58);
        if (cVar1 != '\0') {
          FUN_0043f750(&local_98,(int)local_58[3]);
          local_a8 = local_98;
          local_a0 = &DAT_0180f610;
          FUN_00416cd0(local_38 + 0x30,4,*(undefined8 *)(local_38 + 0x30));
        }
      }
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_19 != '\0') {
    FUN_00410f20(local_28);
  }
  FUN_00414560(&local_98,5);
  return;
}

