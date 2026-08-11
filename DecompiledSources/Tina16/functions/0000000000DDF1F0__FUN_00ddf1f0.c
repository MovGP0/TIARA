/* Ghidra address: 00ddf1f0 */
/* Ghidra symbol: FUN_00ddf1f0 */


void FUN_00ddf1f0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_48 [8];
  longlong local_40;
  int local_34;
  int local_30 [2];
  longlong local_28;
  
  local_50 = auStack_78;
  local_58 = 0;
  FUN_00ddd3d0(param_1);
  (**(code **)(*param_3 + 0x90))(param_3);
  if ((*(longlong *)(param_1 + 0x4d0) != 0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x28))
                        (*(longlong **)(param_1 + 0x4d0),param_2,local_30,local_48), iVar1 == 0)) {
    local_34 = 0;
    iVar1 = local_30[0];
    if (-1 < local_30[0] + -1) {
      do {
        lVar2 = (longlong)local_34;
        FUN_004167d0(&local_58,*(undefined8 *)(local_28 + lVar2 * 8));
        (**(code **)(*param_3 + 0x80))(param_3,local_58,(longlong)*(int *)(local_40 + lVar2 * 4));
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_34 = 0;
    iVar1 = local_30[0];
    if (-1 < local_30[0] + -1) {
      do {
        thunk_FUN_0398fb79(*(undefined8 *)(local_28 + (longlong)local_34 * 8));
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    thunk_FUN_0398fb79(local_28);
    thunk_FUN_0398fb79(local_40);
  }
  FUN_00414480(&local_58);
  return;
}

