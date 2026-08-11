/* Ghidra address: 00782d70 */
/* Ghidra symbol: FUN_00782d70 */


undefined1 FUN_00782d70(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  undefined1 local_39;
  longlong *local_38;
  longlong *local_30;
  
  local_90 = auStack_f8;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  FUN_00417580(&local_70,&DAT_0076f818);
  if ((DAT_02012558 != '\0') && (DAT_02012571 != '\0')) {
    FUN_007809d0(param_1);
  }
  local_30 = (longlong *)FUN_0079b670(&PTR_FUN_00776160,1,DAT_02012590);
  do {
    local_78 = local_30;
    *(int *)(local_30 + 2) = (int)local_30[2] + 1;
    if (*(int *)(local_30[1] + 0x10) <= (int)local_30[2]) {
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + -0x20))(local_30,1);
      }
      local_38 = (longlong *)FUN_00797100(DAT_02012578);
      goto LAB_00782f7a;
    }
    local_80 = local_30[1];
    local_58 = *(longlong **)(*(longlong *)(local_80 + 8) + (longlong)(int)local_30[2] * 8);
    (**(code **)(*local_58 + 0xa0))(local_58,&local_98);
    cVar1 = FUN_0043e560(param_2,local_98,1);
  } while (cVar1 == '\0');
  FUN_00782920(param_1,local_58);
  local_39 = 1;
  FUN_00783070(0,local_90);
  goto LAB_00783039;
  while( true ) {
    local_50 = local_68;
    local_48 = lStack_60;
    if (local_68 != 0) break;
LAB_00782f7a:
    do {
      cVar1 = thunk_FUN_00797a55(local_38);
      if (cVar1 == '\0') {
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + -0x20))(local_38,1);
        }
        local_39 = 0;
        if (param_3 != '\0') {
          FUN_0041ddd0(&local_a8,PTR_PTR_02001748);
          local_b0 = 0x11;
          local_b8 = param_2;
          FUN_00442f70(&local_a0,local_a8,&local_b8,0);
          local_88 = local_a0;
          local_d8 = 0xffffffff;
          local_d0 = 0xffffffff;
          local_c8 = 0;
          FUN_0072d5c0(local_a0,1,0x800,0);
        }
        goto LAB_00783039;
      }
      FUN_007978e0(local_38,&local_70);
      cVar1 = FUN_0043e560(param_2,local_70,1);
    } while (cVar1 == '\0');
  }
  uVar2 = (**(code **)(lStack_60 + 0x230))(lStack_60,local_68);
  FUN_00782920(param_1,uVar2);
  local_39 = 1;
  FUN_007830b0(0,local_90);
LAB_00783039:
  FUN_00414560(&local_a8,3);
  FUN_00417740(&local_70,&DAT_0076f818);
  return local_39;
}

