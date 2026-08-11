/* Ghidra address: 014cf430 */
/* Ghidra symbol: FUN_014cf430 */


undefined4 FUN_014cf430(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_48;
  int local_3c;
  longlong local_38;
  undefined4 local_1c;
  
  local_60 = auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1c = 0;
  local_38 = 0;
  iVar1 = FUN_00416db0(local_res10[0],L"JS2T_INIT_ACK");
  if (iVar1 == 0) {
    FUN_014ce790(param_1,1);
    FUN_014ce780(param_1,2);
    *(undefined1 *)(param_1 + 0x518) = 1;
    local_1c = 1;
  }
  else {
    iVar1 = FUN_004170c0(L"JS2T_SETMOTOR",local_res10[0],1);
    if (0 < iVar1) {
      if ((*(uint *)(param_1 + 0x5c) & 1) == 0) {
        local_1c = 3;
      }
      else {
        local_1c = 2;
        local_38 = FUN_010c9d50(&DAT_010c95c8,1);
        FUN_00414ad0(local_38 + 0x18,local_res10[0]);
        *(undefined4 *)(local_38 + 8) = 1;
        FUN_010ca8a0(local_38,&local_48,1);
        FUN_010ca040(local_38,&local_68,1);
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
        local_3c = 0;
        if (-1 < iVar1 + -1) {
          do {
            FUN_010caad0(local_38,&local_48,1);
            FUN_010ca040(local_38,&local_70,1);
            uVar2 = FUN_0043fc00(local_48);
            *(undefined4 *)(param_1 + 0x218 + (longlong)local_3c * 0xc) = uVar2;
            if (local_3c < *(int *)(*(longlong *)(param_1 + 0x60) + 0x10) + -1) {
              FUN_010c9e60(local_38);
              FUN_010ca040(local_38,&local_78,1);
            }
            local_3c = local_3c + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
    }
  }
  if (local_38 != 0) {
    FUN_00410f20(local_38);
  }
  FUN_00414560(&local_78,3);
  FUN_00414480(&local_48);
  FUN_00414480(local_res10);
  return local_1c;
}

