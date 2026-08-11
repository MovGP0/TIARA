/* Ghidra address: 00782560 */
/* Ghidra symbol: FUN_00782560 */


void FUN_00782560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined4 local_7c;
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [40];
  
  local_a0 = auStack_e8;
  local_b8 = 0;
  FUN_00417580(&local_60,&DAT_0075cb10);
  FUN_00417580(local_38,&DAT_0075cb10);
  local_40 = (longlong *)FUN_00799090(&PTR_FUN_00772890,1,DAT_02012580);
  while( true ) {
    local_68 = local_40;
    *(int *)(local_40 + 2) = (int)local_40[2] + 1;
    if (*(int *)(local_40[1] + 0x10) <= (int)local_40[2]) break;
    FUN_00417740(local_38,&DAT_0075cb10);
    local_70 = local_40[1];
    FUN_00417c40(local_38,*(longlong *)(local_70 + 8) + (longlong)(int)local_40[2] * 0x20,
                 &DAT_0075cb10);
    FUN_00417c40(&local_60,local_38,&DAT_0075cb10);
    FUN_00417740(local_38,&DAT_0075cb10);
    cVar1 = FUN_0043e560(param_2,local_60,1);
    if (cVar1 != '\0') {
      FUN_00410ae0(param_5,&local_b8);
      local_b0 = local_b8;
      local_a8 = 0x11;
      local_c8 = 0;
      uVar2 = FUN_0044d8d0(&PTR_FUN_00777750,1,PTR_PTR_02001998,&local_b0);
      FUN_004134c0(uVar2);
    }
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + -0x20))(local_40,1);
  }
  FUN_00414b50(&local_60,param_2);
  FUN_00414b50(local_58,param_3);
  FUN_00414b50(local_50,param_4);
  local_48 = param_5;
  local_78 = &local_60;
  local_7c = FUN_00597ec0(DAT_02012580 + 8,local_78);
  DAT_02012571 = 1;
  FUN_00414480(&local_b8);
  FUN_00417740(&local_60,&DAT_0075cb10);
  FUN_00417740(local_38,&DAT_0075cb10);
  return;
}

