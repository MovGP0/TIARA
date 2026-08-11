/* Ghidra address: 0049f500 */
/* Ghidra symbol: FUN_0049f500 */


void FUN_0049f500(longlong param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  undefined8 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  ulonglong local_88;
  longlong local_78;
  ulonglong local_60;
  ulonglong local_58;
  char local_49;
  undefined8 local_48;
  undefined8 *local_40;
  ulonglong local_38;
  uint local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_100 = auStack_128;
  FUN_00417580(&local_40,&DAT_004990d8);
  if (param_2 == 0) {
    local_f8 = *(longlong *)(param_1 + 0x18);
    FUN_00598010(local_f8 + 8);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_004e6630(*(longlong *)(param_1 + 8));
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_004e6630(*(longlong *)(param_1 + 0x10));
    }
  }
  else {
    local_60 = param_2;
    local_58 = param_2;
    local_98 = thunk_FUN_04149b47();
    while( true ) {
      lVar2 = thunk_FUN_040e1138(local_98,local_60,local_90,0x30);
      if ((lVar2 != 0x30) || (local_88 != local_58)) break;
      local_60 = (local_60 & 0xffffffff) + local_78;
    }
    local_49 = '\0';
    local_2c = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) - 1;
    if (-1 < (int)local_2c) {
      do {
        local_a0 = *(longlong *)(param_1 + 0x18);
        if (*(uint *)(local_a0 + 0x10) <= local_2c) {
          FUN_00594f90();
        }
        local_a8 = *(ulonglong *)(*(longlong *)(local_a0 + 8) + (longlong)(int)local_2c * 8);
        if ((local_58 <= local_a8) && (local_a8 < local_60)) {
          local_b0 = *(longlong *)(param_1 + 0x18);
          local_b8 = 0;
          FUN_005952e0(local_b0 + 8,&local_b8,local_2c);
          local_49 = '\x01';
        }
        local_2c = local_2c - 1;
      } while (local_2c != 0xffffffff);
    }
    if (local_49 != '\0') {
      FUN_004e7d60(*(undefined8 *)(param_1 + 0x18));
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      if (DAT_02011620 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = DAT_02011620 + 0x10;
      }
      local_48 = FUN_004e5fc0(&PTR_FUN_0049ad90,1,lVar2);
      local_20 = (longlong *)FUN_004e6aa0(*(undefined8 *)(param_1 + 8));
      while( true ) {
        cVar1 = thunk_FUN_004e7393(local_20);
        if (cVar1 == '\0') break;
        FUN_004e7230(local_20,&local_40);
        local_c8 = local_38;
        if ((local_38 < local_58) || (local_60 <= local_38)) {
          FUN_004e6500(local_48,local_40,local_38);
        }
      }
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
      local_d0 = (undefined8 *)(param_1 + 8);
      local_d8 = *local_d0;
      *local_d0 = 0;
      FUN_00410f20(local_d8);
      *(undefined8 *)(param_1 + 8) = local_48;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      if (DAT_02011620 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = DAT_02011620 + 0x10;
      }
      local_48 = FUN_004e5fc0(&PTR_FUN_0049ad90,1,lVar2);
      local_28 = (longlong *)FUN_004e6aa0(*(undefined8 *)(param_1 + 0x10));
      while( true ) {
        cVar1 = thunk_FUN_004e7393(local_28);
        if (cVar1 == '\0') break;
        FUN_004e7230(local_28,&local_40);
        local_e0 = local_38;
        if ((local_38 < local_58) || (local_60 <= local_38)) {
          FUN_004e6500(local_48,local_40,local_38);
        }
      }
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + -0x20))(local_28,1);
      }
      local_e8 = (undefined8 *)(param_1 + 0x10);
      local_f0 = *local_e8;
      *local_e8 = 0;
      FUN_00410f20(local_f0);
      *(undefined8 *)(param_1 + 0x10) = local_48;
    }
  }
  FUN_00417740(&local_40,&DAT_004990d8);
  return;
}

