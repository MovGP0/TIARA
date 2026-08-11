/* Ghidra address: 00bf1bf0 */
/* Ghidra symbol: FUN_00bf1bf0 */


void FUN_00bf1bf0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  puVar1 = auStack_68;
  if (param_2 != 0) {
    FUN_00bd1c50(param_2);
    local_30 = 0;
    if (param_2 != 0) {
      local_30 = *(int *)(param_2 + -4);
    }
    local_2c = local_30;
    plVar2 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar2 + 0x30))(plVar2);
    local_20 = thunk_FUN_0412a7bb(0x2002,(longlong)(local_2c + 2));
    if (local_20 != 0) {
      local_28 = (undefined1 *)thunk_FUN_0416a623(local_20);
      if (local_28 != (undefined1 *)0x0) {
        *local_28 = *(undefined1 *)(param_1 + 0x5f5);
        local_28 = local_28 + 1;
        FUN_00415dd0(&local_48,param_2,0);
        uVar3 = FUN_00415ab0(local_48);
        FUN_00409a70(uVar3,local_28,(longlong)(local_2c + 1));
        thunk_FUN_0415744e(DAT_02019b30,local_20);
      }
      thunk_FUN_04172795(local_20);
    }
    plVar2 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar2 + 0x28))(plVar2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_004144d0(&local_48);
  return;
}

