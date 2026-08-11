/* Ghidra address: 015c24e0 */
/* Ghidra symbol: FUN_015c24e0 */


void FUN_015c24e0(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  int local_1c;
  
  local_68 = 0;
  local_60[0] = 0;
  if ((param_2 < 0) || (iVar1 = FUN_015c2df0(param_1), iVar1 <= param_2)) {
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,1,0);
    FUN_004134c0(uVar2);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90) != 0) {
    local_28 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90);
    local_30 = local_28;
    if (local_28 != 0) {
      local_30 = *(longlong *)(local_28 + -8);
    }
    local_1c = 0;
    iVar1 = (int)local_30;
    if (-1 < (int)local_30 + -1) {
      do {
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90) + 4 +
             (longlong)local_1c * 0xc) != 0) {
          FUN_004095f0(*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90)
                         + 4 + (longlong)local_1c * 0xc));
        }
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  if (param_2 < iVar1) {
    FUN_015bf270(local_60,*(undefined8 *)(param_3 + 0x2e));
    FUN_015c0210(*(undefined8 *)(param_1 + 0x10),param_2,local_60[0]);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
    if (param_2 == iVar1) {
      FUN_015bf270(&local_68,*(undefined8 *)(param_3 + 0x2e));
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),local_68)
      ;
    }
    else {
      uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x3a,0);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00417c40(*(longlong *)(param_1 + 8) + (longlong)param_2 * 0x90,param_3,&DAT_015b9418);
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90) != 0) {
    local_38 = *(longlong *)(param_3 + 0x46);
    local_40 = local_38;
    if (local_38 != 0) {
      local_40 = *(longlong *)(local_38 + -8);
    }
    FUN_00419260(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90,&DAT_015b93d0,1,
                 local_40);
    local_48 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90);
    local_50 = local_48;
    if (local_48 != 0) {
      local_50 = *(longlong *)(local_48 + -8);
    }
    local_1c = 0;
    iVar1 = (int)local_50;
    if (-1 < (int)local_50 + -1) {
      do {
        *(undefined2 *)
         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90) +
         (longlong)local_1c * 0xc) =
             *(undefined2 *)(*(longlong *)(param_3 + 0x46) + (longlong)local_1c * 0xc);
        *(undefined2 *)
         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90) + 2 +
         (longlong)local_1c * 0xc) =
             *(undefined2 *)(*(longlong *)(param_3 + 0x46) + 2 + (longlong)local_1c * 0xc);
        uVar2 = FUN_00409570(*(undefined2 *)
                              (*(longlong *)
                                (*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90) + 2 +
                              (longlong)local_1c * 0xc));
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90) + 4 +
         (longlong)local_1c * 0xc) = uVar2;
        if (*(longlong *)(*(longlong *)(param_3 + 0x46) + 4 + (longlong)local_1c * 0xc) == 0) {
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90) + 4 +
           (longlong)local_1c * 0xc) = 0;
        }
        else {
          FUN_00409a70(*(undefined8 *)(*(longlong *)(param_3 + 0x46) + 4 + (longlong)local_1c * 0xc)
                       ,*(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90) + 4 +
                         (longlong)local_1c * 0xc),
                       *(undefined2 *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)param_2 * 0x90)
                         + 2 + (longlong)local_1c * 0xc));
        }
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414560(&local_68,2);
  return;
}

