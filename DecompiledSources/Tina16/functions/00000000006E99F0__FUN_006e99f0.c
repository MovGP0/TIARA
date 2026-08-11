/* Ghidra address: 006e99f0 */
/* Ghidra symbol: FUN_006e99f0 */


void FUN_006e99f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  char local_89;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  char local_48;
  longlong *local_40;
  int local_38;
  longlong *local_34;
  int local_2c;
  code *local_28;
  longlong local_20;
  
  local_80 = auStack_c8;
  local_88 = 0;
  local_60 = 0;
  local_20 = *(longlong *)(param_1 + 0x48);
  puVar2 = auStack_c8;
  if (local_20 == 0) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 0x538);
    local_20 = (*(code *)*puVar1)(puVar1,1);
    puVar2 = local_80;
  }
  local_80 = puVar2;
  local_58 = local_20;
  local_89 = *(char *)(param_1 + 0x40);
  local_34 = &local_58;
  local_28 = FUN_006e8e70;
  local_2c = 0;
  local_50 = param_2;
  local_48 = local_89;
  local_40 = param_3;
  if (local_89 == '\0') {
    local_38 = 2;
  }
  else {
    local_38 = 0x11;
    if (param_3 != (longlong *)0x0) {
      (**(code **)(*param_3 + 0x50))(param_3,&local_60);
      local_68 = local_60;
      if (local_60 != 0) {
        local_68 = *(longlong *)(local_60 + -8);
      }
      if (0 < local_68) {
        local_70 = local_60;
        if (local_60 != 0) {
          local_70 = *(longlong *)(local_60 + -8);
        }
        FUN_004b89e0(param_2,local_60,local_70);
      }
    }
  }
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  local_a8 = 1;
  FUN_004701b0(uVar3,0x44a,(longlong)local_38,&local_34);
  if (local_2c != 0) {
    FUN_0041ddd0(&local_88,PTR_DAT_02001368);
    uVar3 = FUN_0044d490(&PTR_FUN_00472738,1,local_88);
    FUN_004134c0(uVar3);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_88);
  FUN_00419430(&local_60,&DAT_00406578);
  return;
}

