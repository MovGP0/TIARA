/* Ghidra address: 00bd1c50 */
/* Ghidra symbol: FUN_00bd1c50 */


void FUN_00bd1c50(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined1 *local_40;
  int local_30;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  puVar1 = auStack_78;
  if (param_1 != 0) {
    local_30 = 0;
    if (param_1 != 0) {
      local_30 = *(int *)(param_1 + -4);
    }
    local_2c = local_30;
    plVar3 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar3 + 0x30))(plVar3);
    plVar3 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar3 + 0x20))(plVar3);
    iVar2 = FUN_0044f060();
    if (iVar2 != 2) {
      local_50 = local_2c + 1;
      local_20 = thunk_FUN_0412a7bb(0x2002,(longlong)local_50);
      if (local_20 != 0) {
        local_28 = thunk_FUN_0416a623(local_20);
        if (local_28 != 0) {
          FUN_00415dd0(&local_48,param_1,0);
          uVar4 = FUN_00415ab0(local_48);
          FUN_00409a70(uVar4,local_28,(longlong)local_50);
          uVar4 = FUN_006a6030();
          FUN_006a5e10(uVar4,1,local_20);
        }
        thunk_FUN_04172795(local_20);
      }
    }
    local_4c = (local_2c + 1) * 2;
    local_20 = thunk_FUN_0412a7bb(0x2002,(longlong)local_4c);
    if (local_20 != 0) {
      local_28 = thunk_FUN_0416a623(local_20);
      if (local_28 != 0) {
        uVar4 = FUN_00416740(param_1);
        FUN_00409a70(uVar4,local_28,(longlong)local_4c);
        uVar4 = FUN_006a6030();
        FUN_006a5e10(uVar4,0xd,local_20);
      }
      thunk_FUN_04172795(local_20);
    }
    plVar3 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar3 + 0x28))(plVar3);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_004144d0(&local_48);
  return;
}

