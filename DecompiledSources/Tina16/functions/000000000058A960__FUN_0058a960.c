/* Ghidra address: 0058a960 */
/* Ghidra symbol: FUN_0058a960 */


undefined1 FUN_0058a960(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_d8;
  undefined1 *local_d0;
  ulonglong local_c0;
  longlong local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  undefined1 local_29;
  undefined1 local_28 [8];
  longlong *local_20 [2];
  
  local_d0 = auStack_108;
  local_d8 = 0;
  local_58 = 0;
  local_70 = 0;
  FUN_00417580(local_28,&DAT_0052f3d0);
  FUN_00417580(local_90,&DAT_00527bf8);
  FUN_00417580(local_b0,&DAT_00527bf8);
  local_29 = 1;
  FUN_00545cd0(&local_d8);
  FUN_00417c40(local_28,&local_d8,&DAT_0052f3d0);
  local_b8 = *param_1;
  local_20[0] = (longlong *)FUN_00545d00(local_28,*(undefined8 *)(local_b8 + -0xa8));
  do {
    if (local_20[0] == (longlong *)0x0) {
      FUN_00545cf0(local_28);
LAB_0058ac53:
      FUN_00417740(&local_d8,&DAT_0052f3d0);
      FUN_00417840(local_b0,&DAT_00527bf8,2);
      FUN_00419430(&local_70,&DAT_0052f588);
      FUN_00414480(&local_58);
      FUN_00417740(local_28,&DAT_0052f3d0);
      return local_29;
    }
    local_60 = (longlong *)FUN_0058a5d0(auStack_108,local_20,param_2);
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 8))(local_60,&local_70);
      local_68 = 0;
      while( true ) {
        local_c0 = local_70;
        if (local_70 != 0) {
          local_c0 = *(ulonglong *)(local_70 - 8);
        }
        if (local_c0 <= local_68) break;
        local_48 = *(longlong *)(local_70 + local_68 * 8);
        cVar1 = FUN_004113d0(local_48,&DAT_00402b58);
        if (cVar1 != '\0') {
          local_50 = local_48;
          if (*(longlong *)(local_48 + 0x10) == 0) {
            local_29 = *(undefined1 *)(local_48 + 8);
          }
          else {
            FUN_00414b50(&local_58,*(undefined8 *)(local_48 + 0x10));
            local_38 = (longlong *)FUN_0058a6f0(auStack_108,local_58);
            if (local_38 == (longlong *)0x0) {
              local_40 = FUN_0058a820(auStack_108,local_58);
              if (local_40 != 0) {
                local_e8 = 0xffffffff;
                FUN_00557c30(local_40,local_b0,param_1,&local_d8);
                local_29 = FUN_005377b0(local_b0);
              }
            }
            else {
              (**(code **)(*local_38 + 0x30))(local_38,local_90,param_1);
              local_29 = FUN_005377b0(local_90);
            }
          }
          FUN_0058acc0(0,local_d0);
          goto LAB_0058ac53;
        }
        local_68 = local_68 + 1;
      }
      FUN_00419430(&local_70,&DAT_0052f588);
    }
    if (local_20[0] != (longlong *)0x0) {
      local_20[0] = (longlong *)(**(code **)(*local_20[0] + 0x38))(local_20[0]);
    }
  } while( true );
}

