/* Ghidra address: 00cb64e0 */
/* Ghidra symbol: FUN_00cb64e0 */


void FUN_00cb64e0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_50;
  longlong local_48;
  byte local_3c;
  byte local_3b;
  char local_3a;
  char local_39;
  longlong local_38;
  longlong local_30;
  undefined1 *local_28;
  int local_1c;
  
  local_60 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_28 = (undefined1 *)0x0;
  local_30 = 0;
  local_38 = 0;
  FUN_00419430(&local_30,&DAT_0086e978);
  FUN_00419430(&local_38,&DAT_0086e978);
  FUN_00419260(&local_28,&DAT_0086e978,1,3);
  if (*(char *)(param_1 + 0x118) == '\0') {
    local_28[2] = 0;
  }
  else {
    local_28[2] = 2;
  }
  local_39 = local_28[2];
  *local_28 = 5;
  local_28[1] = 1;
  FUN_00cb0c10(param_2,local_28,0xffffffff,0);
  (**(code **)(*param_2 + 0x188))(param_2,&local_28,2,0);
  local_3a = local_28[1];
  if ((local_3a != local_39) || (local_3a == -1)) {
    FUN_0041ddd0(&local_70,PTR_PTR_02001868);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00ca7878,1,local_70);
    FUN_004134c0(uVar1);
  }
  if (*(char *)(param_1 + 0x118) == '\x01') {
    FUN_00877e10(&local_30,*(undefined8 *)(param_1 + 0x108),0);
    FUN_00877e10(&local_38,*(undefined8 *)(param_1 + 0xf8),0);
    local_48 = local_30;
    if (local_30 != 0) {
      local_48 = *(longlong *)(local_30 + -8);
    }
    local_3b = FUN_008764e0(local_48,0xff);
    local_50 = local_38;
    if (local_38 != 0) {
      local_50 = *(longlong *)(local_38 + -8);
    }
    local_3c = FUN_008764e0(local_50,0xff);
    FUN_00419260(&local_28,&DAT_0086e978,1,(uint)local_3b + (uint)local_3c + 3);
    *local_28 = 1;
    local_28[1] = local_3b;
    local_1c = 2;
    if (local_3b != 0) {
      uVar2 = (uint)local_3b;
      local_98 = uVar2;
      FUN_00874e50(local_30,0,&local_28,2);
      local_1c = local_1c + uVar2;
    }
    local_28[local_1c] = local_3c;
    local_1c = local_1c + 1;
    if (local_3c != 0) {
      local_98 = (uint)local_3c;
      FUN_00874e50(local_38,0,&local_28,local_1c);
    }
    FUN_00cb0c10(param_2,local_28,0xffffffff,0);
    (**(code **)(*param_2 + 0x188))(param_2,&local_28,2,0);
    if (local_28[1] != '\0') {
      FUN_0041ddd0(&local_80,PTR_PTR_02001c70);
      uVar1 = FUN_0086dfd0(&PTR_FUN_00ca79c8,1,local_80);
      FUN_004134c0(uVar1);
    }
  }
  FUN_00414560(&local_80,4);
  FUN_00417840(&local_38,&DAT_0086e978,3);
  return;
}

