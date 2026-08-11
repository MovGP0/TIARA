/* Ghidra address: 0068f1e0 */
/* Ghidra symbol: FUN_0068f1e0 */


void FUN_0068f1e0(longlong *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  int local_68;
  longlong local_58;
  undefined1 *local_50;
  undefined4 local_44;
  longlong local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_20[0] = 0;
  puVar1 = auStack_88;
  if (((*(ushort *)((longlong)param_1 + 0x34) & 2) == 0) &&
     (puVar1 = auStack_88, *(char *)((longlong)param_1 + 0x491) != '\0')) {
    local_28 = thunk_FUN_040ef593(0);
    uVar4 = FUN_005fc8c0(param_1[0x17]);
    local_38 = thunk_FUN_041a19a1(local_28,uVar4);
    local_20[0] = 0;
    FUN_0064dd90(param_1,local_20);
    FUN_0064dd90(param_1,&local_58);
    local_40 = local_58;
    local_44 = 0;
    if (local_58 != 0) {
      local_44 = *(undefined4 *)(local_58 + -4);
    }
    uVar4 = FUN_00416740(local_20[0]);
    thunk_FUN_0418ae1a(local_28,uVar4,local_44,&local_30);
    FUN_00414480(local_20);
    thunk_FUN_041a19a1(local_28,local_38);
    thunk_FUN_041a9b5c(0,local_28);
    iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,5);
    iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,6);
    local_68 = local_2c + iVar3 * 4;
    (**(code **)(*param_1 + 400))
              (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
               local_30 + iVar2 * 4);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00414480(&local_58);
  return;
}

