/* Ghidra address: 004d0700 */
/* Ghidra symbol: FUN_004d0700 */


char FUN_004d0700(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_50 [2];
  undefined1 local_48;
  undefined1 *local_40;
  char local_29;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_88;
  if (DAT_02011600 == 0) {
    local_29 = '\0';
  }
  else {
    lVar1 = FUN_004d11f0();
    if (*(int *)(lVar1 + 8) != *(int *)PTR_DAT_02005bd8) {
      lVar1 = FUN_004d11f0();
      local_50[0] = *(undefined4 *)(lVar1 + 8);
      local_48 = 0;
      local_68 = 0;
      uVar2 = FUN_0044d8d0(&PTR_FUN_004831c0,1,PTR_PTR_02004038,local_50);
      FUN_004134c0(uVar2);
    }
    if (param_1 < 1) {
      FUN_004d0690();
    }
    else {
      FUN_004d06b0(param_1);
    }
    local_28 = 0;
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar2 = FUN_004121f0(DAT_02011650);
    FUN_00411f00(uVar2,0xffffffff);
    lVar1 = DAT_01dcb5c0;
    LOCK();
    DAT_01dcb5c0 = local_28;
    UNLOCK();
    local_28 = lVar1;
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) < 1)) {
      local_29 = '\0';
    }
    else {
      local_29 = '\x01';
    }
    if (local_29 != '\0') {
      while (0 < *(int *)(local_28 + 0x10)) {
        local_20 = (longlong *)FUN_004aeac0(local_28,0);
        FUN_004ae870(local_28);
        FUN_00412130(DAT_02011650);
        lVar1 = *local_20;
        if (*(longlong *)(lVar1 + 8) == 0) {
          if (*(longlong *)(lVar1 + 0x18) != 0) {
            (**(code **)(**(longlong **)(*local_20 + 0x18) + 0x18))
                      (*(longlong **)(*local_20 + 0x18));
          }
        }
        else {
          (**(code **)(lVar1 + 8))(*(undefined8 *)(lVar1 + 0x10));
        }
        *(undefined8 *)*local_20 = 0;
        if (*(longlong *)PTR_PTR_02002ff8 == 0) {
          FUN_004098e0(0x1a);
        }
        uVar2 = FUN_004121f0(DAT_02011650);
        FUN_00411f00(uVar2);
        if ((char)local_20[1] == '\0') {
          FUN_004122a0(local_20[2]);
        }
        else {
          FUN_00418590(*local_20);
          FUN_004095f0(local_20);
        }
      }
    }
    FUN_00410f20(local_28);
    FUN_00412130(DAT_02011650);
  }
  return local_29;
}

